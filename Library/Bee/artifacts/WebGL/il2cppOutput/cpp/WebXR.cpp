#include "pch-cpp.hpp"

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
struct GenericVirtualActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
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
struct GenericInterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1>
struct InvokerActionInvoker1
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1 p1)
	{
		void* params[1] = { &p1 };
		method->invoker_method(methodPtr, method, obj, params, NULL);
	}
};
template <typename T1>
struct InvokerActionInvoker1<T1*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1)
	{
		void* params[1] = { p1 };
		method->invoker_method(methodPtr, method, obj, params, NULL);
	}
};
template <typename T1, typename T2>
struct InvokerActionInvoker2;
template <typename T1, typename T2>
struct InvokerActionInvoker2<T1*, T2>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2 p2)
	{
		void* params[2] = { p1, &p2 };
		method->invoker_method(methodPtr, method, obj, params, NULL);
	}
};
template <typename T1, typename T2>
struct InvokerActionInvoker2<T1*, T2*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2* p2)
	{
		void* params[2] = { p1, p2 };
		method->invoker_method(methodPtr, method, obj, params, NULL);
	}
};
template <typename T1, typename T2, typename T3, typename T4, typename T5>
struct InvokerActionInvoker5
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1 p1, T2 p2, T3 p3, T4 p4, T5 p5)
	{
		void* params[5] = { &p1, &p2, &p3, &p4, &p5 };
		method->invoker_method(methodPtr, method, obj, params, NULL);
	}
};
template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6>
struct InvokerActionInvoker6;
template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6>
struct InvokerActionInvoker6<T1*, T2, T3, T4, T5, T6>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2 p2, T3 p3, T4 p4, T5 p5, T6 p6)
	{
		void* params[6] = { p1, &p2, &p3, &p4, &p5, &p6 };
		method->invoker_method(methodPtr, method, obj, params, NULL);
	}
};
template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11>
struct InvokerActionInvoker11;
template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11>
struct InvokerActionInvoker11<T1*, T2, T3*, T4, T5, T6, T7, T8, T9, T10*, T11*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2 p2, T3* p3, T4 p4, T5 p5, T6 p6, T7 p7, T8 p8, T9 p9, T10* p10, T11* p11)
	{
		void* params[11] = { p1, &p2, p3, &p4, &p5, &p6, &p7, &p8, &p9, p10, p11 };
		method->invoker_method(methodPtr, method, obj, params, NULL);
	}
};
template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11, typename T12>
struct InvokerActionInvoker12;
template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11, typename T12>
struct InvokerActionInvoker12<T1*, T2*, T3, T4*, T5, T6, T7, T8, T9, T10, T11*, T12*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2* p2, T3 p3, T4* p4, T5 p5, T6 p6, T7 p7, T8 p8, T9 p9, T10 p10, T11* p11, T12* p12)
	{
		void* params[12] = { p1, p2, &p3, p4, &p5, &p6, &p7, &p8, &p9, &p10, p11, p12 };
		method->invoker_method(methodPtr, method, obj, params, NULL);
	}
};

// System.Action`1<System.Boolean>
struct Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C;
// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
struct Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA;
// System.Collections.Generic.Dictionary`2<System.String,WebXR.WebXRControllerButton>
struct Dictionary_2_t5DEE0DDB761EDC477DF149BFF830046243434D9D;
// System.Collections.Generic.IEqualityComparer`1<System.String>
struct IEqualityComparer_1_tAE94C8F24AD5B94D4EE85CA9FC59E3409D41CAF7;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,WebXR.WebXRControllerButton>
struct KeyCollection_t2EBBE43FD9405D56BA419056998BEB5B03AD7B67;
// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D;
// System.Collections.Generic.List`1<WebXR.WebXRControllerInput>
struct List_1_t2BFBC1DB68FFD3343B759CE0D3A12CDA27906246;
// System.Collections.Generic.List`1<UnityEngine.XR.XRDisplaySubsystem>
struct List_1_tA7666C6690CE2AEE97571615AD3AFCE2BB020597;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,WebXR.WebXRControllerButton>
struct ValueCollection_t3D60927E5DFD0E11CA1CA77D2E9E31FA1D6EC412;
// System.Collections.Generic.Dictionary`2/Entry<System.String,WebXR.WebXRControllerButton>[]
struct EntryU5BU5D_t1745E7E34C2E36E066B72965A6E8C0B30E5819B1;
// System.Char[]
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
// UnityEngine.Renderer[]
struct RendererU5BU5D_t32FDD782F67917B2291EA4FF242719877440A02A;
// System.Single[]
struct SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// System.Type[]
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB;
// WebXR.WebXRControllerButton[]
struct WebXRControllerButtonU5BU5D_t915FA50DD1DD06576264ABAC3FC33CA4B0FF1A75;
// WebXR.WebXRControllerData[]
struct WebXRControllerDataU5BU5D_t742EE3253E48F840C86C28DEFB21F8EA67A29B3B;
// WebXR.WebXRControllerInput[]
struct WebXRControllerInputU5BU5D_t629671B358F3C23F0988314AED8627006941624F;
// UnityEngine.XR.XRDisplaySubsystem[]
struct XRDisplaySubsystemU5BU5D_t741124D80DCCCF62F2AF47431354B7387672F264;
// System.AsyncCallback
struct AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C;
// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA;
// System.Reflection.Binder
struct Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235;
// UnityEngine.Camera
struct Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184;
// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3;
// UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2;
// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F;
// System.IAsyncResult
struct IAsyncResult_t7B9B5A0ECB35DCEC31B8A8122C37D687369253B5;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// System.Collections.IEnumerator
struct IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA;
// UnityEngine.ISubsystemDescriptor
struct ISubsystemDescriptor_tEF29944D579CC7D70F52CB883150735991D54E6E;
// UnityEngine.IntegratedSubsystem
struct IntegratedSubsystem_t990160A89854D87C0836DC589B720231C02D4CE3;
// System.Reflection.MemberFilter
struct MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71;
// System.NotSupportedException
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A;
// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C;
// UnityEngine.Renderer
struct Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// UnityEngine.ScriptableObject
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A;
// System.String
struct String_t;
// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1;
// System.Type
struct Type_t;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// UnityEngine.WaitForEndOfFrame
struct WaitForEndOfFrame_tE38D80923E3F8380069B423968C25ABE50A46663;
// WebXR.WebXRCamera
struct WebXRCamera_tF71506C9F16DA4079C7A162FE63192D941F2EF49;
// WebXR.WebXRController
struct WebXRController_tC38659B5E868FEA08E58A5545C4E4E4F580C3E00;
// WebXR.WebXRControllerButton
struct WebXRControllerButton_t630587E2D90290CEE687D62CFE34558675C222A4;
// WebXR.WebXRControllerData
struct WebXRControllerData_t64845AE5B73D35EB95309BA9DC0E3EBF491F9EDA;
// WebXR.WebXRControllerInput
struct WebXRControllerInput_tEB1C3FF36D9B0345E3BDFF3F176B73417C6240A5;
// WebXR.WebXRControllerInputMap
struct WebXRControllerInputMap_t67BEC24BFDB103FC8E9E6C9C831B3A6A6999BC2D;
// WebXR.WebXRData
struct WebXRData_t5FC32176B7A346AEC604C90A15825F685F11DAFE;
// WebXRDisplayCapabilities
struct WebXRDisplayCapabilities_t24125617B50773E797392F6AFCE0B328DE392B35;
// WebXR.WebXRManager
struct WebXRManager_t8B31929B8D585AA72A11F9FC2102C0EAB24152E3;
// WebXR.WebXRUI
struct WebXRUI_tB2E1270EC9FECD65B66232C9E2FED23DD8351765;
// UnityEngine.XR.XRDisplaySubsystem
struct XRDisplaySubsystem_t4B00B0BF1894A039ACFA8DDC2C2EB9301118C1F1;
// UnityEngine.Camera/CameraCallback
struct CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD;
// WebXR.WebXRCamera/<endOfFrame>d__7
struct U3CendOfFrameU3Ed__7_tDC25F77A60C087BFD93BB3510A775F23F94B677F;
// WebXR.WebXRManager/ControllerUpdate
struct ControllerUpdate_t741280F157DF9254D489FE93F944F0AF7385B8C8;
// WebXR.WebXRManager/HeadsetUpdate
struct HeadsetUpdate_t6F11CEB0407C23E09526E0AECA3A6AAFA4A514D1;
// WebXR.WebXRManager/XRCapabilitiesUpdate
struct XRCapabilitiesUpdate_t42E555152D7F0BAAFFDA89B975BDBF594696530A;
// WebXR.WebXRManager/XRChange
struct XRChange_t3294064A42A2CE42C85AABA477F09DA02FBE6FB3;

IL2CPP_EXTERN_C RuntimeClass* Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ControllerUpdate_t741280F157DF9254D489FE93F944F0AF7385B8C8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_t5DEE0DDB761EDC477DF149BFF830046243434D9D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GraphicsTier_t6B924383194C862481A034E59F542EF3BB4355CC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Graphics_t99CD970FFEA58171C70F54DF0C06D315BD452F2C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* HeadsetUpdate_t6F11CEB0407C23E09526E0AECA3A6AAFA4A514D1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tA7666C6690CE2AEE97571615AD3AFCE2BB020597_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RuntimeObject_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SubsystemManager_t9A7261E4D0B53B996F04B8707D8E1C33AB65E824_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TrackingSpaceType_t12E30B1D651687B6AB5C77D97CD6611D6D6352E2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CendOfFrameU3Ed__7_tDC25F77A60C087BFD93BB3510A775F23F94B677F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WaitForEndOfFrame_tE38D80923E3F8380069B423968C25ABE50A46663_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WebXRControllerButtonU5BU5D_t915FA50DD1DD06576264ABAC3FC33CA4B0FF1A75_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WebXRControllerButton_t630587E2D90290CEE687D62CFE34558675C222A4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WebXRControllerDataU5BU5D_t742EE3253E48F840C86C28DEFB21F8EA67A29B3B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WebXRControllerHand_t135DFE022C985E1CC7FCA38F02BE5ED51D36EB89_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WebXRManager_t8B31929B8D585AA72A11F9FC2102C0EAB24152E3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WebXRState_t2D8E0267FFD4967F244953A900C0125A95ECA66A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* XRCapabilitiesUpdate_t42E555152D7F0BAAFFDA89B975BDBF594696530A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* XRChange_t3294064A42A2CE42C85AABA477F09DA02FBE6FB3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral3ACC69ABB93D15C18291BF00FB369D423D71000A;
IL2CPP_EXTERN_C String_t* _stringLiteral83D5D175E5896451CC83F3E4F8000D3A06036D5D;
IL2CPP_EXTERN_C String_t* _stringLiteral9FDBA6AB478A7CC49400B0629D6BF8F2179A0631;
IL2CPP_EXTERN_C String_t* _stringLiteralA2CD442AE04D4D6AFC3F880309529F6F1B88A4CB;
IL2CPP_EXTERN_C String_t* _stringLiteralA71835C02B0068E7EB5DB4C34281E4F9F69A9471;
IL2CPP_EXTERN_C String_t* _stringLiteralB5E55D7CF241B720397B53B914DACCFF337D4AD5;
IL2CPP_EXTERN_C String_t* _stringLiteralCD5636AF01CDE4D234784B2F141AE01FD71A4C60;
IL2CPP_EXTERN_C String_t* _stringLiteralDCB2062EBA5EC33E7E75146F69F1D4CDE191D5E9;
IL2CPP_EXTERN_C String_t* _stringLiteralFBB3198D2DB4174A5A46E90F86891423BF85419A;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponentsInChildren_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_m35AC34F858BD2F34770712CD020AA0518D9409C7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Add_m7C61A74EA3AB26B9950F20C9F5B81E959E131769_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_ContainsKey_mAB4330E86477135D73C3481453FF4D86D4E26FFD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_m0DBE0DE3655AABF691038623E640657F67499842_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_get_Item_mACA918234BA0F532B920473BDEA1FF7ECA7B661E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m25A1E45E653D7F73DF65C041A66C0A6E01F2964D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m512CCA5A31AF4575B55ECBF1812BA4B30D234A5D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_m40DE32B911D52B14FCBD8D0E32115896C11F680E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_m9A1452618AC875C7A20A5917509A7B90E76E6A6A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_mA59CEDFE276B79C881D812BAB43EF431A2A83B0F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_mF9383BAD37E56B1D5BCDBFF0C3ADA58BB6E67A04_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_AddComponent_TisWebXRManager_t8B31929B8D585AA72A11F9FC2102C0EAB24152E3_mEC620009E5F11B2B2F268A3BB62665B8DCBD1730_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* JsonUtility_FromJson_TisWebXRData_t5FC32176B7A346AEC604C90A15825F685F11DAFE_m15818848DD614FA0C2177529F6C071F0E43562E0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* JsonUtility_FromJson_TisWebXRDisplayCapabilities_t24125617B50773E797392F6AFCE0B328DE392B35_m1B0C8FDFBC978C5B3FCBCC5940F0447CC45BD505_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_mA450E85CB8D7D5CB81FAAF9D11A1D4945B942423_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_mFC2EEAA8205C3511A709F83830EC3EB6D20C274C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mBE7647ECE0B8ABB952EDC379472F9E541D41D6DF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m63E347D50ED2BC074FE87522BEB73A8EFCFE63DA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m0EB4566AF989AB512CC7B6B0B7FFAF0C442FA7F1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_FindObjectOfType_TisWebXRManager_t8B31929B8D585AA72A11F9FC2102C0EAB24152E3_mF61F16409E1CA98ECF6AFB3D4E4493FCE9DD77D9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SubsystemManager_GetInstances_TisXRDisplaySubsystem_t4B00B0BF1894A039ACFA8DDC2C2EB9301118C1F1_mCDFAF63EF2A2778CA3677E75360BC7961FCB3370_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CendOfFrameU3Ed__7_System_Collections_IEnumerator_Reset_mE0CFF4E131C735ACB669CD0958230874C57EB9B3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* WebXRCamera_onHeadsetUpdate_m4EF7B4C302A6A338DA9D8C69815057B1E70EB30C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* WebXRCamera_onVRChange_m94A514F639719416550A0B7EB3B9A217930356F4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* WebXRController_onControllerUpdate_mECC0C70F4DC20EAACFE251F6167EC6FB46331528_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* WebXRController_onHeadsetUpdate_m11129E09B21B01AD20D46EDEB3C7DE2C2FCCCA91_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeType* WebXRControllerHand_t135DFE022C985E1CC7FCA38F02BE5ED51D36EB89_0_0_0_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
struct RendererU5BU5D_t32FDD782F67917B2291EA4FF242719877440A02A;
struct SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C;
struct WebXRControllerButtonU5BU5D_t915FA50DD1DD06576264ABAC3FC33CA4B0FF1A75;
struct WebXRControllerDataU5BU5D_t742EE3253E48F840C86C28DEFB21F8EA67A29B3B;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_tA5EBFFF6A4591A271A6D45EAF01E09B319926610 
{
};

// System.Collections.Generic.Dictionary`2<System.String,WebXR.WebXRControllerButton>
struct Dictionary_2_t5DEE0DDB761EDC477DF149BFF830046243434D9D  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_t1745E7E34C2E36E066B72965A6E8C0B30E5819B1* ____entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::_count
	int32_t ____count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeList
	int32_t ____freeList_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeCount
	int32_t ____freeCount_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::_version
	int32_t ____version_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::_comparer
	RuntimeObject* ____comparer_6;
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_keys
	KeyCollection_t2EBBE43FD9405D56BA419056998BEB5B03AD7B67* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_t3D60927E5DFD0E11CA1CA77D2E9E31FA1D6EC412* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

// System.Collections.Generic.List`1<WebXR.WebXRControllerInput>
struct List_1_t2BFBC1DB68FFD3343B759CE0D3A12CDA27906246  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	WebXRControllerInputU5BU5D_t629671B358F3C23F0988314AED8627006941624F* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

// System.Collections.Generic.List`1<UnityEngine.XR.XRDisplaySubsystem>
struct List_1_tA7666C6690CE2AEE97571615AD3AFCE2BB020597  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	XRDisplaySubsystemU5BU5D_t741124D80DCCCF62F2AF47431354B7387672F264* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
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

// WebXR.WebXRControllerButton
struct WebXRControllerButton_t630587E2D90290CEE687D62CFE34558675C222A4  : public RuntimeObject
{
	// System.Boolean WebXR.WebXRControllerButton::pressed
	bool ___pressed_0;
	// System.Boolean WebXR.WebXRControllerButton::prevPressedState
	bool ___prevPressedState_1;
	// System.Boolean WebXR.WebXRControllerButton::touched
	bool ___touched_2;
	// System.Single WebXR.WebXRControllerButton::value
	float ___value_3;
};

// WebXR.WebXRControllerData
struct WebXRControllerData_t64845AE5B73D35EB95309BA9DC0E3EBF491F9EDA  : public RuntimeObject
{
	// System.String WebXR.WebXRControllerData::id
	String_t* ___id_0;
	// System.Int32 WebXR.WebXRControllerData::index
	int32_t ___index_1;
	// System.String WebXR.WebXRControllerData::hand
	String_t* ___hand_2;
	// System.Boolean WebXR.WebXRControllerData::hasOrientation
	bool ___hasOrientation_3;
	// System.Boolean WebXR.WebXRControllerData::hasPosition
	bool ___hasPosition_4;
	// System.Single[] WebXR.WebXRControllerData::orientation
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___orientation_5;
	// System.Single[] WebXR.WebXRControllerData::position
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___position_6;
	// System.Single[] WebXR.WebXRControllerData::linearAcceleration
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___linearAcceleration_7;
	// System.Single[] WebXR.WebXRControllerData::linearVelocity
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___linearVelocity_8;
	// System.Single[] WebXR.WebXRControllerData::axes
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___axes_9;
	// WebXR.WebXRControllerButton[] WebXR.WebXRControllerData::buttons
	WebXRControllerButtonU5BU5D_t915FA50DD1DD06576264ABAC3FC33CA4B0FF1A75* ___buttons_10;
};

// WebXR.WebXRControllerInput
struct WebXRControllerInput_tEB1C3FF36D9B0345E3BDFF3F176B73417C6240A5  : public RuntimeObject
{
	// System.String WebXR.WebXRControllerInput::actionName
	String_t* ___actionName_0;
	// System.Int32 WebXR.WebXRControllerInput::gamepadId
	int32_t ___gamepadId_1;
	// System.Boolean WebXR.WebXRControllerInput::gamepadIsButton
	bool ___gamepadIsButton_2;
	// System.String WebXR.WebXRControllerInput::unityInputName
	String_t* ___unityInputName_3;
	// System.Boolean WebXR.WebXRControllerInput::unityInputIsButton
	bool ___unityInputIsButton_4;
};

// WebXR.WebXRData
struct WebXRData_t5FC32176B7A346AEC604C90A15825F685F11DAFE  : public RuntimeObject
{
	// WebXR.WebXRControllerData[] WebXR.WebXRData::controllers
	WebXRControllerDataU5BU5D_t742EE3253E48F840C86C28DEFB21F8EA67A29B3B* ___controllers_0;
};

// WebXRDisplayCapabilities
struct WebXRDisplayCapabilities_t24125617B50773E797392F6AFCE0B328DE392B35  : public RuntimeObject
{
	// System.Boolean WebXRDisplayCapabilities::supportsInline
	bool ___supportsInline_0;
	// System.Boolean WebXRDisplayCapabilities::supportsImmersiveVR
	bool ___supportsImmersiveVR_1;
	// System.Boolean WebXRDisplayCapabilities::supportsImmersiveAR
	bool ___supportsImmersiveAR_2;
};

// WebXR.WebXRMatrixUtil
struct WebXRMatrixUtil_t693315865161075C29A39C101CD1087799BF7E22  : public RuntimeObject
{
};

// WebXR.WebXRUI
struct WebXRUI_tB2E1270EC9FECD65B66232C9E2FED23DD8351765  : public RuntimeObject
{
};

// UnityEngine.YieldInstruction
struct YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D  : public RuntimeObject
{
};
// Native definition for P/Invoke marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_com
{
};

// WebXR.WebXRCamera/<endOfFrame>d__7
struct U3CendOfFrameU3Ed__7_tDC25F77A60C087BFD93BB3510A775F23F94B677F  : public RuntimeObject
{
	// System.Int32 WebXR.WebXRCamera/<endOfFrame>d__7::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object WebXR.WebXRCamera/<endOfFrame>d__7::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// WebXR.WebXRCamera WebXR.WebXRCamera/<endOfFrame>d__7::<>4__this
	WebXRCamera_tF71506C9F16DA4079C7A162FE63192D941F2EF49* ___U3CU3E4__this_2;
};

// System.Collections.Generic.List`1/Enumerator<System.Object>
struct Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A 
{
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::_list
	List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* ____list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.List`1/Enumerator::_current
	RuntimeObject* ____current_3;
};

// System.Collections.Generic.List`1/Enumerator<WebXR.WebXRControllerInput>
struct Enumerator_t5EF3D06F517CDA2C7A90D848426233694DAFBF5F 
{
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::_list
	List_1_t2BFBC1DB68FFD3343B759CE0D3A12CDA27906246* ____list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.List`1/Enumerator::_current
	WebXRControllerInput_tEB1C3FF36D9B0345E3BDFF3F176B73417C6240A5* ____current_3;
};

// System.Collections.Generic.List`1/Enumerator<UnityEngine.XR.XRDisplaySubsystem>
struct Enumerator_t7B44DEF95515943B67640F1A20853509F98BA143 
{
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::_list
	List_1_tA7666C6690CE2AEE97571615AD3AFCE2BB020597* ____list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.List`1/Enumerator::_current
	XRDisplaySubsystem_t4B00B0BF1894A039ACFA8DDC2C2EB9301118C1F1* ____current_3;
};

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;
};

// System.Double
struct Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F 
{
	// System.Double System.Double::m_value
	double ___m_value_0;
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

// UnityEngine.Matrix4x4
struct Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 
{
	// System.Single UnityEngine.Matrix4x4::m00
	float ___m00_0;
	// System.Single UnityEngine.Matrix4x4::m10
	float ___m10_1;
	// System.Single UnityEngine.Matrix4x4::m20
	float ___m20_2;
	// System.Single UnityEngine.Matrix4x4::m30
	float ___m30_3;
	// System.Single UnityEngine.Matrix4x4::m01
	float ___m01_4;
	// System.Single UnityEngine.Matrix4x4::m11
	float ___m11_5;
	// System.Single UnityEngine.Matrix4x4::m21
	float ___m21_6;
	// System.Single UnityEngine.Matrix4x4::m31
	float ___m31_7;
	// System.Single UnityEngine.Matrix4x4::m02
	float ___m02_8;
	// System.Single UnityEngine.Matrix4x4::m12
	float ___m12_9;
	// System.Single UnityEngine.Matrix4x4::m22
	float ___m22_10;
	// System.Single UnityEngine.Matrix4x4::m32
	float ___m32_11;
	// System.Single UnityEngine.Matrix4x4::m03
	float ___m03_12;
	// System.Single UnityEngine.Matrix4x4::m13
	float ___m13_13;
	// System.Single UnityEngine.Matrix4x4::m23
	float ___m23_14;
	// System.Single UnityEngine.Matrix4x4::m33
	float ___m33_15;
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

// System.Single
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	// System.Single System.Single::m_value
	float ___m_value_0;
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

// UnityEngine.Vector4
struct Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 
{
	// System.Single UnityEngine.Vector4::x
	float ___x_1;
	// System.Single UnityEngine.Vector4::y
	float ___y_2;
	// System.Single UnityEngine.Vector4::z
	float ___z_3;
	// System.Single UnityEngine.Vector4::w
	float ___w_4;
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

// UnityEngine.WaitForEndOfFrame
struct WaitForEndOfFrame_tE38D80923E3F8380069B423968C25ABE50A46663  : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D
{
};

// UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B  : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D
{
	// System.IntPtr UnityEngine.Coroutine::m_Ptr
	intptr_t ___m_Ptr_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B_marshaled_pinvoke : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B_marshaled_com : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_com
{
	intptr_t ___m_Ptr_0;
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

// UnityEngine.IntegratedSubsystem
struct IntegratedSubsystem_t990160A89854D87C0836DC589B720231C02D4CE3  : public RuntimeObject
{
	// System.IntPtr UnityEngine.IntegratedSubsystem::m_Ptr
	intptr_t ___m_Ptr_0;
	// UnityEngine.ISubsystemDescriptor UnityEngine.IntegratedSubsystem::m_SubsystemDescriptor
	RuntimeObject* ___m_SubsystemDescriptor_1;
};
// Native definition for P/Invoke marshalling of UnityEngine.IntegratedSubsystem
struct IntegratedSubsystem_t990160A89854D87C0836DC589B720231C02D4CE3_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
	RuntimeObject* ___m_SubsystemDescriptor_1;
};
// Native definition for COM marshalling of UnityEngine.IntegratedSubsystem
struct IntegratedSubsystem_t990160A89854D87C0836DC589B720231C02D4CE3_marshaled_com
{
	intptr_t ___m_Ptr_0;
	RuntimeObject* ___m_SubsystemDescriptor_1;
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

// System.RuntimeTypeHandle
struct RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B 
{
	// System.IntPtr System.RuntimeTypeHandle::value
	intptr_t ___value_0;
};

// UnityEngine.IntegratedSubsystem`1<UnityEngine.XR.XRDisplaySubsystemDescriptor>
struct IntegratedSubsystem_1_t8312865F01EEA1EDE4B24A973E47ADD526616848  : public IntegratedSubsystem_t990160A89854D87C0836DC589B720231C02D4CE3
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

// System.AsyncCallback
struct AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C  : public MulticastDelegate_t
{
};

// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// System.NotSupportedException
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// UnityEngine.Renderer
struct Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// WebXR.WebXRControllerInputMap
struct WebXRControllerInputMap_t67BEC24BFDB103FC8E9E6C9C831B3A6A6999BC2D  : public ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A
{
	// System.Collections.Generic.List`1<WebXR.WebXRControllerInput> WebXR.WebXRControllerInputMap::inputs
	List_1_t2BFBC1DB68FFD3343B759CE0D3A12CDA27906246* ___inputs_4;
};

// UnityEngine.XR.XRDisplaySubsystem
struct XRDisplaySubsystem_t4B00B0BF1894A039ACFA8DDC2C2EB9301118C1F1  : public IntegratedSubsystem_1_t8312865F01EEA1EDE4B24A973E47ADD526616848
{
	// System.Action`1<System.Boolean> UnityEngine.XR.XRDisplaySubsystem::displayFocusChanged
	Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* ___displayFocusChanged_2;
};

// WebXR.WebXRManager/ControllerUpdate
struct ControllerUpdate_t741280F157DF9254D489FE93F944F0AF7385B8C8  : public MulticastDelegate_t
{
};

// WebXR.WebXRManager/HeadsetUpdate
struct HeadsetUpdate_t6F11CEB0407C23E09526E0AECA3A6AAFA4A514D1  : public MulticastDelegate_t
{
};

// WebXR.WebXRManager/XRCapabilitiesUpdate
struct XRCapabilitiesUpdate_t42E555152D7F0BAAFFDA89B975BDBF594696530A  : public MulticastDelegate_t
{
};

// WebXR.WebXRManager/XRChange
struct XRChange_t3294064A42A2CE42C85AABA477F09DA02FBE6FB3  : public MulticastDelegate_t
{
};

// UnityEngine.Camera
struct Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// WebXR.WebXRCamera
struct WebXRCamera_tF71506C9F16DA4079C7A162FE63192D941F2EF49  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Camera WebXR.WebXRCamera::cameraMain
	Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* ___cameraMain_4;
	// UnityEngine.Camera WebXR.WebXRCamera::cameraL
	Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* ___cameraL_5;
	// UnityEngine.Camera WebXR.WebXRCamera::cameraR
	Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* ___cameraR_6;
	// System.Boolean WebXR.WebXRCamera::xrActive
	bool ___xrActive_7;
	// UnityEngine.WaitForEndOfFrame WebXR.WebXRCamera::wait
	WaitForEndOfFrame_tE38D80923E3F8380069B423968C25ABE50A46663* ___wait_8;
	// UnityEngine.Coroutine WebXR.WebXRCamera::postRenderCoroutine
	Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* ___postRenderCoroutine_9;
};

// WebXR.WebXRController
struct WebXRController_tC38659B5E868FEA08E58A5545C4E4E4F580C3E00  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// WebXR.WebXRControllerHand WebXR.WebXRController::hand
	int32_t ___hand_4;
	// WebXR.WebXRControllerInputMap WebXR.WebXRController::inputMap
	WebXRControllerInputMap_t67BEC24BFDB103FC8E9E6C9C831B3A6A6999BC2D* ___inputMap_5;
	// System.Boolean WebXR.WebXRController::simulate3dof
	bool ___simulate3dof_6;
	// UnityEngine.Vector3 WebXR.WebXRController::eyesToElbow
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___eyesToElbow_7;
	// UnityEngine.Vector3 WebXR.WebXRController::elbowHand
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___elbowHand_8;
	// UnityEngine.Matrix4x4 WebXR.WebXRController::sitStand
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___sitStand_9;
	// System.Single[] WebXR.WebXRController::axes
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___axes_10;
	// UnityEngine.XR.XRNode WebXR.WebXRController::handNode
	int32_t ___handNode_11;
	// UnityEngine.Quaternion WebXR.WebXRController::headRotation
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___headRotation_12;
	// UnityEngine.Vector3 WebXR.WebXRController::headPosition
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___headPosition_13;
	// UnityEngine.Transform WebXR.WebXRController::_t
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ____t_14;
	// System.Collections.Generic.Dictionary`2<System.String,WebXR.WebXRControllerButton> WebXR.WebXRController::buttonStates
	Dictionary_2_t5DEE0DDB761EDC477DF149BFF830046243434D9D* ___buttonStates_15;
};

// WebXR.WebXRManager
struct WebXRManager_t8B31929B8D585AA72A11F9FC2102C0EAB24152E3  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.String WebXR.WebXRManager::toggleXRKeyName
	String_t* ___toggleXRKeyName_4;
	// System.Boolean WebXR.WebXRManager::dontDestroyOnLoad
	bool ___dontDestroyOnLoad_5;
	// System.Single WebXR.WebXRManager::DefaultHeight
	float ___DefaultHeight_6;
	// UnityEngine.XR.TrackingSpaceType WebXR.WebXRManager::TrackingSpace
	int32_t ___TrackingSpace_7;
	// WebXR.WebXRState WebXR.WebXRManager::xrState
	int32_t ___xrState_10;
	// WebXR.WebXRManager/XRCapabilitiesUpdate WebXR.WebXRManager::OnXRCapabilitiesUpdate
	XRCapabilitiesUpdate_t42E555152D7F0BAAFFDA89B975BDBF594696530A* ___OnXRCapabilitiesUpdate_11;
	// WebXR.WebXRManager/XRChange WebXR.WebXRManager::OnXRChange
	XRChange_t3294064A42A2CE42C85AABA477F09DA02FBE6FB3* ___OnXRChange_12;
	// WebXR.WebXRManager/HeadsetUpdate WebXR.WebXRManager::OnHeadsetUpdate
	HeadsetUpdate_t6F11CEB0407C23E09526E0AECA3A6AAFA4A514D1* ___OnHeadsetUpdate_13;
	// WebXR.WebXRManager/ControllerUpdate WebXR.WebXRManager::OnControllerUpdate
	ControllerUpdate_t741280F157DF9254D489FE93F944F0AF7385B8C8* ___OnControllerUpdate_14;
	// System.Single[] WebXR.WebXRManager::sharedArray
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___sharedArray_15;
	// WebXRDisplayCapabilities WebXR.WebXRManager::_capabilities
	WebXRDisplayCapabilities_t24125617B50773E797392F6AFCE0B328DE392B35* ____capabilities_16;
};

// <Module>

// <Module>

// System.Collections.Generic.Dictionary`2<System.String,WebXR.WebXRControllerButton>

// System.Collections.Generic.Dictionary`2<System.String,WebXR.WebXRControllerButton>

// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<System.Object>

// System.Collections.Generic.List`1<WebXR.WebXRControllerInput>
struct List_1_t2BFBC1DB68FFD3343B759CE0D3A12CDA27906246_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	WebXRControllerInputU5BU5D_t629671B358F3C23F0988314AED8627006941624F* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<WebXR.WebXRControllerInput>

// System.Collections.Generic.List`1<UnityEngine.XR.XRDisplaySubsystem>
struct List_1_tA7666C6690CE2AEE97571615AD3AFCE2BB020597_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	XRDisplaySubsystemU5BU5D_t741124D80DCCCF62F2AF47431354B7387672F264* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<UnityEngine.XR.XRDisplaySubsystem>

// System.String
struct String_t_StaticFields
{
	// System.String System.String::Empty
	String_t* ___Empty_6;
};

// System.String

// WebXR.WebXRControllerButton

// WebXR.WebXRControllerButton

// WebXR.WebXRControllerData

// WebXR.WebXRControllerData

// WebXR.WebXRControllerInput

// WebXR.WebXRControllerInput

// WebXR.WebXRData

// WebXR.WebXRData

// WebXRDisplayCapabilities

// WebXRDisplayCapabilities

// WebXR.WebXRMatrixUtil

// WebXR.WebXRMatrixUtil

// WebXR.WebXRUI

// WebXR.WebXRUI

// WebXR.WebXRCamera/<endOfFrame>d__7

// WebXR.WebXRCamera/<endOfFrame>d__7

// System.Collections.Generic.List`1/Enumerator<System.Object>

// System.Collections.Generic.List`1/Enumerator<System.Object>

// System.Collections.Generic.List`1/Enumerator<WebXR.WebXRControllerInput>

// System.Collections.Generic.List`1/Enumerator<WebXR.WebXRControllerInput>

// System.Collections.Generic.List`1/Enumerator<UnityEngine.XR.XRDisplaySubsystem>

// System.Collections.Generic.List`1/Enumerator<UnityEngine.XR.XRDisplaySubsystem>

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;
};

// System.Boolean

// System.Double

// System.Double

// System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_StaticFields
{
	// System.Char[] System.Enum::enumSeperatorCharArray
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___enumSeperatorCharArray_0;
};

// System.Enum

// System.Int32

// System.Int32

// System.IntPtr
struct IntPtr_t_StaticFields
{
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;
};

// System.IntPtr

// UnityEngine.Matrix4x4
struct Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6_StaticFields
{
	// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::zeroMatrix
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___zeroMatrix_16;
	// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::identityMatrix
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___identityMatrix_17;
};

// UnityEngine.Matrix4x4

// UnityEngine.Quaternion
struct Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_StaticFields
{
	// UnityEngine.Quaternion UnityEngine.Quaternion::identityQuaternion
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___identityQuaternion_4;
};

// UnityEngine.Quaternion

// System.Single

// System.Single

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

// UnityEngine.Vector4
struct Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_StaticFields
{
	// UnityEngine.Vector4 UnityEngine.Vector4::zeroVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___zeroVector_5;
	// UnityEngine.Vector4 UnityEngine.Vector4::oneVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___oneVector_6;
	// UnityEngine.Vector4 UnityEngine.Vector4::positiveInfinityVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___positiveInfinityVector_7;
	// UnityEngine.Vector4 UnityEngine.Vector4::negativeInfinityVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___negativeInfinityVector_8;
};

// UnityEngine.Vector4

// System.Void

// System.Void

// UnityEngine.WaitForEndOfFrame

// UnityEngine.WaitForEndOfFrame

// UnityEngine.Coroutine

// UnityEngine.Coroutine

// System.Delegate

// System.Delegate

// UnityEngine.IntegratedSubsystem

// UnityEngine.IntegratedSubsystem

// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_StaticFields
{
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;
};

// UnityEngine.Object

// System.RuntimeTypeHandle

// System.RuntimeTypeHandle

// UnityEngine.Component

// UnityEngine.Component

// UnityEngine.GameObject

// UnityEngine.GameObject

// UnityEngine.ScriptableObject

// UnityEngine.ScriptableObject

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

// System.AsyncCallback

// System.AsyncCallback

// UnityEngine.Behaviour

// UnityEngine.Behaviour

// System.NotSupportedException

// System.NotSupportedException

// UnityEngine.Renderer

// UnityEngine.Renderer

// UnityEngine.Transform

// UnityEngine.Transform

// WebXR.WebXRControllerInputMap

// WebXR.WebXRControllerInputMap

// UnityEngine.XR.XRDisplaySubsystem

// UnityEngine.XR.XRDisplaySubsystem

// WebXR.WebXRManager/ControllerUpdate

// WebXR.WebXRManager/ControllerUpdate

// WebXR.WebXRManager/HeadsetUpdate

// WebXR.WebXRManager/HeadsetUpdate

// WebXR.WebXRManager/XRCapabilitiesUpdate

// WebXR.WebXRManager/XRCapabilitiesUpdate

// WebXR.WebXRManager/XRChange

// WebXR.WebXRManager/XRChange

// UnityEngine.Camera
struct Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_StaticFields
{
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreCull
	CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD* ___onPreCull_4;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreRender
	CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD* ___onPreRender_5;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPostRender
	CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD* ___onPostRender_6;
};

// UnityEngine.Camera

// UnityEngine.MonoBehaviour

// UnityEngine.MonoBehaviour

// WebXR.WebXRCamera

// WebXR.WebXRCamera

// WebXR.WebXRController

// WebXR.WebXRController

// WebXR.WebXRManager
struct WebXRManager_t8B31929B8D585AA72A11F9FC2102C0EAB24152E3_StaticFields
{
	// System.String WebXR.WebXRManager::GlobalName
	String_t* ___GlobalName_8;
	// WebXR.WebXRManager WebXR.WebXRManager::instance
	WebXRManager_t8B31929B8D585AA72A11F9FC2102C0EAB24152E3* ___instance_9;
};

// WebXR.WebXRManager
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// WebXR.WebXRControllerButton[]
struct WebXRControllerButtonU5BU5D_t915FA50DD1DD06576264ABAC3FC33CA4B0FF1A75  : public RuntimeArray
{
	ALIGN_FIELD (8) WebXRControllerButton_t630587E2D90290CEE687D62CFE34558675C222A4* m_Items[1];

	inline WebXRControllerButton_t630587E2D90290CEE687D62CFE34558675C222A4* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline WebXRControllerButton_t630587E2D90290CEE687D62CFE34558675C222A4** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, WebXRControllerButton_t630587E2D90290CEE687D62CFE34558675C222A4* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline WebXRControllerButton_t630587E2D90290CEE687D62CFE34558675C222A4* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline WebXRControllerButton_t630587E2D90290CEE687D62CFE34558675C222A4** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, WebXRControllerButton_t630587E2D90290CEE687D62CFE34558675C222A4* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Single[]
struct SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C  : public RuntimeArray
{
	ALIGN_FIELD (8) float m_Items[1];

	inline float GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline float* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, float value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline float GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline float* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, float value)
	{
		m_Items[index] = value;
	}
};
// UnityEngine.Renderer[]
struct RendererU5BU5D_t32FDD782F67917B2291EA4FF242719877440A02A  : public RuntimeArray
{
	ALIGN_FIELD (8) Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* m_Items[1];

	inline Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// WebXR.WebXRControllerData[]
struct WebXRControllerDataU5BU5D_t742EE3253E48F840C86C28DEFB21F8EA67A29B3B  : public RuntimeArray
{
	ALIGN_FIELD (8) WebXRControllerData_t64845AE5B73D35EB95309BA9DC0E3EBF491F9EDA* m_Items[1];

	inline WebXRControllerData_t64845AE5B73D35EB95309BA9DC0E3EBF491F9EDA* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline WebXRControllerData_t64845AE5B73D35EB95309BA9DC0E3EBF491F9EDA** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, WebXRControllerData_t64845AE5B73D35EB95309BA9DC0E3EBF491F9EDA* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline WebXRControllerData_t64845AE5B73D35EB95309BA9DC0E3EBF491F9EDA* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline WebXRControllerData_t64845AE5B73D35EB95309BA9DC0E3EBF491F9EDA** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, WebXRControllerData_t64845AE5B73D35EB95309BA9DC0E3EBF491F9EDA* value)
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


// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1/Enumerator<System.Object>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_mD9DC3E3C3697830A4823047AB29A77DBBB5ED419_gshared (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1/Enumerator<System.Object>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB_gshared (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<System.Object>::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, int32_t ___0_index, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::ContainsKey(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_ContainsKey_m703047C213F7AB55C9DC346596287773A1F670CD_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, RuntimeObject* ___0_key, const RuntimeMethod* method) ;
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Object>::get_Item(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_get_Item_m4AAAECBE902A211BF2126E6AFA280AEF73A3E0D6_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, RuntimeObject* ___0_key, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.SubsystemManager::GetInstances<System.Object>(System.Collections.Generic.List`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SubsystemManager_GetInstances_TisRuntimeObject_mCBA01F889BE624767358AB5494CD2D7F1B2FB064_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* ___0_subsystems, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Add(TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Add_m93FFFABE8FCE7FA9793F0915E2A8842C7CD0C0C1_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, RuntimeObject* ___0_key, RuntimeObject* ___1_value, const RuntimeMethod* method) ;
// T[] UnityEngine.Component::GetComponentsInChildren<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* Component_GetComponentsInChildren_TisRuntimeObject_m1F5B6FC0689B07D4FAAC0C605D9B2933A9B32543_gshared (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m5B32FBC624618211EB461D59CFBB10E987FD1329_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, const RuntimeMethod* method) ;
// T UnityEngine.JsonUtility::FromJson<System.Object>(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* JsonUtility_FromJson_TisRuntimeObject_m0CCF0FE109BF4C85AECC9C5D0DBB43422A24FB40_gshared (String_t* ___0_json, const RuntimeMethod* method) ;
// T UnityEngine.Object::FindObjectOfType<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Object_FindObjectOfType_TisRuntimeObject_m02DFBF011F3B59F777A5E521DB2A116DD496E968_gshared (const RuntimeMethod* method) ;
// T UnityEngine.GameObject::AddComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GameObject_AddComponent_TisRuntimeObject_m69B93700FACCF372F5753371C6E8FB780800B824_gshared (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;

// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Void WebXR.WebXRCamera/<endOfFrame>d__7::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CendOfFrameU3Ed__7__ctor_m9F34B7744E66B914B3AAF5A72CB9857765BF54C6 (U3CendOfFrameU3Ed__7_tDC25F77A60C087BFD93BB3510A775F23F94B677F* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) ;
// WebXR.WebXRManager WebXR.WebXRManager::get_Instance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR WebXRManager_t8B31929B8D585AA72A11F9FC2102C0EAB24152E3* WebXRManager_get_Instance_mE22A89D450041A30C1EEB4AD9631BD2278E1F89C (const RuntimeMethod* method) ;
// System.Void WebXR.WebXRManager/XRChange::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRChange__ctor_mA0C620C83B9E369FF12FC0AADBB95FA906C811C9 (XRChange_t3294064A42A2CE42C85AABA477F09DA02FBE6FB3* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
// System.Void WebXR.WebXRManager::add_OnXRChange(WebXR.WebXRManager/XRChange)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebXRManager_add_OnXRChange_mFF3C71062D567BE6F65E813CC1B38BD3A0D4F029 (WebXRManager_t8B31929B8D585AA72A11F9FC2102C0EAB24152E3* __this, XRChange_t3294064A42A2CE42C85AABA477F09DA02FBE6FB3* ___0_value, const RuntimeMethod* method) ;
// System.Void WebXR.WebXRManager/HeadsetUpdate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HeadsetUpdate__ctor_m2332A884B02C1DE92A7EFE827445B631DFE1D44A (HeadsetUpdate_t6F11CEB0407C23E09526E0AECA3A6AAFA4A514D1* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
// System.Void WebXR.WebXRManager::add_OnHeadsetUpdate(WebXR.WebXRManager/HeadsetUpdate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebXRManager_add_OnHeadsetUpdate_mC0704DB6199881782166FA8EB3FA363AFFAC3930 (WebXRManager_t8B31929B8D585AA72A11F9FC2102C0EAB24152E3* __this, HeadsetUpdate_t6F11CEB0407C23E09526E0AECA3A6AAFA4A514D1* ___0_value, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.Component::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___0_x, float ___1_y, float ___2_z, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_localPosition(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localPosition_mDE1C997F7D79C0885210B7732B4BA50EE7D73134 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_value, const RuntimeMethod* method) ;
// System.Collections.IEnumerator WebXR.WebXRCamera::endOfFrame()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WebXRCamera_endOfFrame_m865558389C2702A2838DD405E21F9129E36A2BB0 (WebXRCamera_tF71506C9F16DA4079C7A162FE63192D941F2EF49* __this, const RuntimeMethod* method) ;
// UnityEngine.Coroutine UnityEngine.MonoBehaviour::StartCoroutine(System.Collections.IEnumerator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812 (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, RuntimeObject* ___0_routine, const RuntimeMethod* method) ;
// System.Void UnityEngine.MonoBehaviour::StopCoroutine(UnityEngine.Coroutine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour_StopCoroutine_mB0FC91BE84203BD8E360B3FBAE5B958B4C5ED22A (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* ___0_routine, const RuntimeMethod* method) ;
// System.Void UnityEngine.Behaviour::set_enabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A (Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA* __this, bool ___0_value, const RuntimeMethod* method) ;
// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::get_inverse()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 Matrix4x4_get_inverse_m4F4A881CD789281EA90EB68CFD39F36C8A81E6BD (Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6* __this, const RuntimeMethod* method) ;
// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::op_Multiply(UnityEngine.Matrix4x4,UnityEngine.Matrix4x4)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 Matrix4x4_op_Multiply_m75E91775655DCA8DFC8EDE0AB787285BB3935162 (Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___0_lhs, Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___1_rhs, const RuntimeMethod* method) ;
// System.Void WebXR.WebXRMatrixUtil::SetTransformFromViewMatrix(UnityEngine.Transform,UnityEngine.Matrix4x4)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebXRMatrixUtil_SetTransformFromViewMatrix_mF832D97B26F951B04FE5D93E8C09255F073E29F9 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___0_transform, Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___1_webXRViewMatrix, const RuntimeMethod* method) ;
// System.Void UnityEngine.Camera::set_projectionMatrix(UnityEngine.Matrix4x4)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Camera_set_projectionMatrix_m351820E6903139402FFFF40221B32D0C52B5A094 (Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* __this, Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.WaitForEndOfFrame::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaitForEndOfFrame__ctor_m4AF7E576C01E6B04443BB898B1AE5D645F7D45AB (WaitForEndOfFrame_tE38D80923E3F8380069B423968C25ABE50A46663* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, const RuntimeMethod* method) ;
// System.Void WebXR.WebXRCamera::XRPostRender()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebXRCamera_XRPostRender_m48E5A8C3793525C2504460DD88DC4A272227A44F (const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Behaviour::get_enabled()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Behaviour_get_enabled_mAAC9F15E9EBF552217A5AE2681589CC0BFA300C1 (Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA* __this, const RuntimeMethod* method) ;
// System.Void System.NotSupportedException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<WebXR.WebXRControllerInput>::GetEnumerator()
inline Enumerator_t5EF3D06F517CDA2C7A90D848426233694DAFBF5F List_1_GetEnumerator_mFC2EEAA8205C3511A709F83830EC3EB6D20C274C (List_1_t2BFBC1DB68FFD3343B759CE0D3A12CDA27906246* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t5EF3D06F517CDA2C7A90D848426233694DAFBF5F (*) (List_1_t2BFBC1DB68FFD3343B759CE0D3A12CDA27906246*, const RuntimeMethod*))List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<WebXR.WebXRControllerInput>::Dispose()
inline void Enumerator_Dispose_m512CCA5A31AF4575B55ECBF1812BA4B30D234A5D (Enumerator_t5EF3D06F517CDA2C7A90D848426233694DAFBF5F* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t5EF3D06F517CDA2C7A90D848426233694DAFBF5F*, const RuntimeMethod*))Enumerator_Dispose_mD9DC3E3C3697830A4823047AB29A77DBBB5ED419_gshared)(__this, method);
}
// T System.Collections.Generic.List`1/Enumerator<WebXR.WebXRControllerInput>::get_Current()
inline WebXRControllerInput_tEB1C3FF36D9B0345E3BDFF3F176B73417C6240A5* Enumerator_get_Current_mA59CEDFE276B79C881D812BAB43EF431A2A83B0F_inline (Enumerator_t5EF3D06F517CDA2C7A90D848426233694DAFBF5F* __this, const RuntimeMethod* method)
{
	return ((  WebXRControllerInput_tEB1C3FF36D9B0345E3BDFF3F176B73417C6240A5* (*) (Enumerator_t5EF3D06F517CDA2C7A90D848426233694DAFBF5F*, const RuntimeMethod*))Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline)(__this, method);
}
// System.Void WebXR.WebXRController::SetButtonState(System.String,System.Boolean,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebXRController_SetButtonState_mC85E87E84B97613BDD7763BC73FA1D8CFF722968 (WebXRController_tC38659B5E868FEA08E58A5545C4E4E4F580C3E00* __this, String_t* ___0_action, bool ___1_isPressed, float ___2_value, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1/Enumerator<WebXR.WebXRControllerInput>::MoveNext()
inline bool Enumerator_MoveNext_m40DE32B911D52B14FCBD8D0E32115896C11F680E (Enumerator_t5EF3D06F517CDA2C7A90D848426233694DAFBF5F* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t5EF3D06F517CDA2C7A90D848426233694DAFBF5F*, const RuntimeMethod*))Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB_gshared)(__this, method);
}
// T System.Collections.Generic.List`1<WebXR.WebXRControllerInput>::get_Item(System.Int32)
inline WebXRControllerInput_tEB1C3FF36D9B0345E3BDFF3F176B73417C6240A5* List_1_get_Item_m0EB4566AF989AB512CC7B6B0B7FFAF0C442FA7F1 (List_1_t2BFBC1DB68FFD3343B759CE0D3A12CDA27906246* __this, int32_t ___0_index, const RuntimeMethod* method)
{
	return ((  WebXRControllerInput_tEB1C3FF36D9B0345E3BDFF3F176B73417C6240A5* (*) (List_1_t2BFBC1DB68FFD3343B759CE0D3A12CDA27906246*, int32_t, const RuntimeMethod*))List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared)(__this, ___0_index, method);
}
// System.Boolean System.String::op_Equality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1 (String_t* ___0_a, String_t* ___1_b, const RuntimeMethod* method) ;
// System.Boolean WebXR.WebXRController::isPresent()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WebXRController_isPresent_mB8F946F5D1A8DBC827A03342A2DEA39562B31B5D (const RuntimeMethod* method) ;
// System.Single UnityEngine.Input::GetAxis(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Input_GetAxis_m10372E6C5FF591668D2DC5F58C58D213CC598A62 (String_t* ___0_axisName, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,WebXR.WebXRControllerButton>::ContainsKey(TKey)
inline bool Dictionary_2_ContainsKey_mAB4330E86477135D73C3481453FF4D86D4E26FFD (Dictionary_2_t5DEE0DDB761EDC477DF149BFF830046243434D9D* __this, String_t* ___0_key, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t5DEE0DDB761EDC477DF149BFF830046243434D9D*, String_t*, const RuntimeMethod*))Dictionary_2_ContainsKey_m703047C213F7AB55C9DC346596287773A1F670CD_gshared)(__this, ___0_key, method);
}
// TValue System.Collections.Generic.Dictionary`2<System.String,WebXR.WebXRControllerButton>::get_Item(TKey)
inline WebXRControllerButton_t630587E2D90290CEE687D62CFE34558675C222A4* Dictionary_2_get_Item_mACA918234BA0F532B920473BDEA1FF7ECA7B661E (Dictionary_2_t5DEE0DDB761EDC477DF149BFF830046243434D9D* __this, String_t* ___0_key, const RuntimeMethod* method)
{
	return ((  WebXRControllerButton_t630587E2D90290CEE687D62CFE34558675C222A4* (*) (Dictionary_2_t5DEE0DDB761EDC477DF149BFF830046243434D9D*, String_t*, const RuntimeMethod*))Dictionary_2_get_Item_m4AAAECBE902A211BF2126E6AFA280AEF73A3E0D6_gshared)(__this, ___0_key, method);
}
// System.Int32 System.Collections.Generic.List`1<WebXR.WebXRControllerInput>::get_Count()
inline int32_t List_1_get_Count_m63E347D50ED2BC074FE87522BEB73A8EFCFE63DA_inline (List_1_t2BFBC1DB68FFD3343B759CE0D3A12CDA27906246* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t2BFBC1DB68FFD3343B759CE0D3A12CDA27906246*, const RuntimeMethod*))List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline)(__this, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.XR.XRDisplaySubsystem>::.ctor()
inline void List_1__ctor_mBE7647ECE0B8ABB952EDC379472F9E541D41D6DF (List_1_tA7666C6690CE2AEE97571615AD3AFCE2BB020597* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tA7666C6690CE2AEE97571615AD3AFCE2BB020597*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// System.Void UnityEngine.SubsystemManager::GetInstances<UnityEngine.XR.XRDisplaySubsystem>(System.Collections.Generic.List`1<T>)
inline void SubsystemManager_GetInstances_TisXRDisplaySubsystem_t4B00B0BF1894A039ACFA8DDC2C2EB9301118C1F1_mCDFAF63EF2A2778CA3677E75360BC7961FCB3370 (List_1_tA7666C6690CE2AEE97571615AD3AFCE2BB020597* ___0_subsystems, const RuntimeMethod* method)
{
	((  void (*) (List_1_tA7666C6690CE2AEE97571615AD3AFCE2BB020597*, const RuntimeMethod*))SubsystemManager_GetInstances_TisRuntimeObject_mCBA01F889BE624767358AB5494CD2D7F1B2FB064_gshared)(___0_subsystems, method);
}
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<UnityEngine.XR.XRDisplaySubsystem>::GetEnumerator()
inline Enumerator_t7B44DEF95515943B67640F1A20853509F98BA143 List_1_GetEnumerator_mA450E85CB8D7D5CB81FAAF9D11A1D4945B942423 (List_1_tA7666C6690CE2AEE97571615AD3AFCE2BB020597* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t7B44DEF95515943B67640F1A20853509F98BA143 (*) (List_1_tA7666C6690CE2AEE97571615AD3AFCE2BB020597*, const RuntimeMethod*))List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<UnityEngine.XR.XRDisplaySubsystem>::Dispose()
inline void Enumerator_Dispose_m25A1E45E653D7F73DF65C041A66C0A6E01F2964D (Enumerator_t7B44DEF95515943B67640F1A20853509F98BA143* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t7B44DEF95515943B67640F1A20853509F98BA143*, const RuntimeMethod*))Enumerator_Dispose_mD9DC3E3C3697830A4823047AB29A77DBBB5ED419_gshared)(__this, method);
}
// T System.Collections.Generic.List`1/Enumerator<UnityEngine.XR.XRDisplaySubsystem>::get_Current()
inline XRDisplaySubsystem_t4B00B0BF1894A039ACFA8DDC2C2EB9301118C1F1* Enumerator_get_Current_mF9383BAD37E56B1D5BCDBFF0C3ADA58BB6E67A04_inline (Enumerator_t7B44DEF95515943B67640F1A20853509F98BA143* __this, const RuntimeMethod* method)
{
	return ((  XRDisplaySubsystem_t4B00B0BF1894A039ACFA8DDC2C2EB9301118C1F1* (*) (Enumerator_t7B44DEF95515943B67640F1A20853509F98BA143*, const RuntimeMethod*))Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline)(__this, method);
}
// System.Boolean UnityEngine.IntegratedSubsystem::get_running()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool IntegratedSubsystem_get_running_m18AA0D7AD1CB593DC9EE5F3DC79643717509D6E8 (IntegratedSubsystem_t990160A89854D87C0836DC589B720231C02D4CE3* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1/Enumerator<UnityEngine.XR.XRDisplaySubsystem>::MoveNext()
inline bool Enumerator_MoveNext_m9A1452618AC875C7A20A5917509A7B90E76E6A6A (Enumerator_t7B44DEF95515943B67640F1A20853509F98BA143* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t7B44DEF95515943B67640F1A20853509F98BA143*, const RuntimeMethod*))Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB_gshared)(__this, method);
}
// System.Boolean UnityEngine.Input::GetButton(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_GetButton_m2F217DAE69DB3D1324FB848B3C9C84F19A80989E (String_t* ___0_buttonName, const RuntimeMethod* method) ;
// System.Void WebXR.WebXRControllerButton::.ctor(System.Boolean,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebXRControllerButton__ctor_m1D4C0BF750182FE09138967349F138376E61D2B1 (WebXRControllerButton_t630587E2D90290CEE687D62CFE34558675C222A4* __this, bool ___0_isPressed, float ___1_buttonValue, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.String,WebXR.WebXRControllerButton>::Add(TKey,TValue)
inline void Dictionary_2_Add_m7C61A74EA3AB26B9950F20C9F5B81E959E131769 (Dictionary_2_t5DEE0DDB761EDC477DF149BFF830046243434D9D* __this, String_t* ___0_key, WebXRControllerButton_t630587E2D90290CEE687D62CFE34558675C222A4* ___1_value, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t5DEE0DDB761EDC477DF149BFF830046243434D9D*, String_t*, WebXRControllerButton_t630587E2D90290CEE687D62CFE34558675C222A4*, const RuntimeMethod*))Dictionary_2_Add_m93FFFABE8FCE7FA9793F0915E2A8842C7CD0C0C1_gshared)(__this, ___0_key, ___1_value, method);
}
// System.Boolean UnityEngine.Input::GetButtonDown(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_GetButtonDown_mEF5F80C9E8F04104E807D9CBD6F70CDB98751579 (String_t* ___0_buttonName, const RuntimeMethod* method) ;
// System.Boolean WebXR.WebXRController::GetButton(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WebXRController_GetButton_m1BA75CEA433EA6EBCDA7DAFEBE86D20712EA7701 (WebXRController_tC38659B5E868FEA08E58A5545C4E4E4F580C3E00* __this, String_t* ___0_action, const RuntimeMethod* method) ;
// System.Boolean WebXR.WebXRController::GetPastButtonState(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WebXRController_GetPastButtonState_m96030F5679C82F04DFE16D94BE4C3F63FC9C6869 (WebXRController_tC38659B5E868FEA08E58A5545C4E4E4F580C3E00* __this, String_t* ___0_action, const RuntimeMethod* method) ;
// System.Void WebXR.WebXRController::SetPastButtonState(System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebXRController_SetPastButtonState_mE6FE471C52C58055E862BB1CD59557CBEAB260D3 (WebXRController_tC38659B5E868FEA08E58A5545C4E4E4F580C3E00* __this, String_t* ___0_action, bool ___1_isPressed, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Input::GetButtonUp(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_GetButtonUp_mEE713E86F1A024762EFED092BC59F3478E786601 (String_t* ___0_buttonName, const RuntimeMethod* method) ;
// UnityEngine.Matrix4x4 WebXR.WebXRMatrixUtil::TransformViewMatrixToTRS(UnityEngine.Matrix4x4)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 WebXRMatrixUtil_TransformViewMatrixToTRS_m303E5C9A404ECF6FC1DDA8A1646387755FF498D4 (Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___0_openGLViewMatrix, const RuntimeMethod* method) ;
// UnityEngine.Quaternion WebXR.WebXRMatrixUtil::GetRotationFromMatrix(UnityEngine.Matrix4x4)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 WebXRMatrixUtil_GetRotationFromMatrix_mD97F23887954792F3243A9990380ACD696959326 (Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___0_mat, const RuntimeMethod* method) ;
// UnityEngine.Vector3 WebXR.WebXRMatrixUtil::GetTranslationFromMatrix(UnityEngine.Matrix4x4)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 WebXRMatrixUtil_GetTranslationFromMatrix_m48FDCE8DCD761A56470C3C852FE3EEB292B25389 (Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___0_mat, const RuntimeMethod* method) ;
// WebXR.WebXRControllerHand WebXR.WebXRController::handFromString(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t WebXRController_handFromString_m3F50089B9A5432DA9B841CF9442FF24DC37D8887 (WebXRController_tC38659B5E868FEA08E58A5545C4E4E4F580C3E00* __this, String_t* ___0_handValue, const RuntimeMethod* method) ;
// System.Void WebXR.WebXRController::SetVisible(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebXRController_SetVisible_m58E9FD81E788AAC90946E02D3E2DC5B0E5F08C80 (WebXRController_tC38659B5E868FEA08E58A5545C4E4E4F580C3E00* __this, bool ___0_visible, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::op_Multiply(UnityEngine.Quaternion,UnityEngine.Quaternion)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_op_Multiply_mCB375FCCC12A2EC8F9EB824A1BFB4453B58C2012_inline (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___0_lhs, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___1_rhs, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Matrix4x4::MultiplyPoint(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Matrix4x4_MultiplyPoint_m20E910B65693559BFDE99382472D8DD02C862E7E (Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_point, const RuntimeMethod* method) ;
// UnityEngine.Vector3 WebXR.WebXRController::applyArmModel(UnityEngine.Vector3,UnityEngine.Quaternion,UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 WebXRController_applyArmModel_mB63EC58519028C110BFF6D0EE9A9197BAF19681B (WebXRController_tC38659B5E868FEA08E58A5545C4E4E4F580C3E00* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_controllerPosition, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___1_controllerRotation, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___2_headRotation, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_localRotation(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localRotation_mAB4A011D134BA58AB780BECC0025CA65F16185FA (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___0_value, const RuntimeMethod* method) ;
// System.Void WebXR.WebXRController::UpdateButtons(WebXR.WebXRControllerButton[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebXRController_UpdateButtons_mFC7CCB1D955E6270CB737D8A84A7B8B5D22EF729 (WebXRController_tC38659B5E868FEA08E58A5545C4E4E4F580C3E00* __this, WebXRControllerButtonU5BU5D_t915FA50DD1DD06576264ABAC3FC33CA4B0FF1A75* ___0_buttons, const RuntimeMethod* method) ;
// System.Boolean System.String::IsNullOrEmpty(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478 (String_t* ___0_value, const RuntimeMethod* method) ;
// System.Type System.Type::GetTypeFromHandle(System.RuntimeTypeHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57 (RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ___0_handle, const RuntimeMethod* method) ;
// System.String System.String::ToUpper()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_ToUpper_m5F499BC30C2A5F5C96248B4C3D1A3B4694748B49 (String_t* __this, const RuntimeMethod* method) ;
// System.Object System.Enum::Parse(System.Type,System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Enum_Parse_m0316ABE916ED60AA2257A464A33A33D544EDEE12 (Type_t* ___0_enumType, String_t* ___1_value, bool ___2_ignoreCase, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B (String_t* ___0_str0, String_t* ___1_str1, String_t* ___2_str2, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::LogError(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2 (RuntimeObject* ___0_message, const RuntimeMethod* method) ;
// T[] UnityEngine.Component::GetComponentsInChildren<UnityEngine.Renderer>()
inline RendererU5BU5D_t32FDD782F67917B2291EA4FF242719877440A02A* Component_GetComponentsInChildren_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_m35AC34F858BD2F34770712CD020AA0518D9409C7 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  RendererU5BU5D_t32FDD782F67917B2291EA4FF242719877440A02A* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponentsInChildren_TisRuntimeObject_m1F5B6FC0689B07D4FAAC0C605D9B2933A9B32543_gshared)(__this, method);
}
// System.Void UnityEngine.Renderer::set_enabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Renderer_set_enabled_m015E6D7B825528A31182F267234CC6A925F71DA8 (Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* __this, bool ___0_value, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Quaternion::get_eulerAngles()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Quaternion_get_eulerAngles_m2DB5158B5C3A71FD60FC8A6EE43D3AAA1CFED122_inline (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* __this, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::Euler(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_Euler_m9262AB29E3E9CE94EF71051F38A28E82AEC73F90_inline (float ___0_x, float ___1_y, float ___2_z, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Quaternion::op_Multiply(UnityEngine.Quaternion,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Quaternion_op_Multiply_mE1EBA73F9173432B50F8F17CE8190C5A7986FB8C (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___0_rotation, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_point, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Addition(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_b, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector3::Set(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3_Set_m1C7E543216734FB513F9CEBA44C50E6FC2AFD49D_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___0_newX, float ___1_newY, float ___2_newZ, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.XR.InputTracking::GetLocalPosition(UnityEngine.XR.XRNode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 InputTracking_GetLocalPosition_m0753549019EB2F0675886E94F237DA9E456EC31D (int32_t ___0_node, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.XR.InputTracking::GetLocalRotation(UnityEngine.XR.XRNode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 InputTracking_GetLocalRotation_m25C883320022BBF4B0F2DF6B1449CDB69DCF7E5A (int32_t ___0_node, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_x, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___1_y, const RuntimeMethod* method) ;
// System.Void WebXR.WebXRManager/ControllerUpdate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ControllerUpdate__ctor_m21815015FFA90D03C294DD4D918D732EA1782DC7 (ControllerUpdate_t741280F157DF9254D489FE93F944F0AF7385B8C8* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
// System.Void WebXR.WebXRManager::add_OnControllerUpdate(WebXR.WebXRManager/ControllerUpdate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebXRManager_add_OnControllerUpdate_m6142FD4CC4ABEC31A29B8E3EC6A865BD31F2EB21 (WebXRManager_t8B31929B8D585AA72A11F9FC2102C0EAB24152E3* __this, ControllerUpdate_t741280F157DF9254D489FE93F944F0AF7385B8C8* ___0_value, const RuntimeMethod* method) ;
// System.Void WebXR.WebXRManager::remove_OnControllerUpdate(WebXR.WebXRManager/ControllerUpdate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebXRManager_remove_OnControllerUpdate_mB377AAEEAB98CDF9C204615EEB37E25C6DB5843B (WebXRManager_t8B31929B8D585AA72A11F9FC2102C0EAB24152E3* __this, ControllerUpdate_t741280F157DF9254D489FE93F944F0AF7385B8C8* ___0_value, const RuntimeMethod* method) ;
// System.Void WebXR.WebXRManager::remove_OnHeadsetUpdate(WebXR.WebXRManager/HeadsetUpdate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebXRManager_remove_OnHeadsetUpdate_m36B76192F6D5BBEFF944B9019A24E98E36A8CD27 (WebXRManager_t8B31929B8D585AA72A11F9FC2102C0EAB24152E3* __this, HeadsetUpdate_t6F11CEB0407C23E09526E0AECA3A6AAFA4A514D1* ___0_value, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.String,WebXR.WebXRControllerButton>::.ctor()
inline void Dictionary_2__ctor_m0DBE0DE3655AABF691038623E640657F67499842 (Dictionary_2_t5DEE0DDB761EDC477DF149BFF830046243434D9D* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t5DEE0DDB761EDC477DF149BFF830046243434D9D*, const RuntimeMethod*))Dictionary_2__ctor_m5B32FBC624618211EB461D59CFBB10E987FD1329_gshared)(__this, method);
}
// System.Void UnityEngine.ScriptableObject::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScriptableObject__ctor_mD037FDB0B487295EA47F79A4DB1BF1846C9087FF (ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A* __this, const RuntimeMethod* method) ;
// T UnityEngine.JsonUtility::FromJson<WebXR.WebXRData>(System.String)
inline WebXRData_t5FC32176B7A346AEC604C90A15825F685F11DAFE* JsonUtility_FromJson_TisWebXRData_t5FC32176B7A346AEC604C90A15825F685F11DAFE_m15818848DD614FA0C2177529F6C071F0E43562E0 (String_t* ___0_json, const RuntimeMethod* method)
{
	return ((  WebXRData_t5FC32176B7A346AEC604C90A15825F685F11DAFE* (*) (String_t*, const RuntimeMethod*))JsonUtility_FromJson_TisRuntimeObject_m0CCF0FE109BF4C85AECC9C5D0DBB43422A24FB40_gshared)(___0_json, method);
}
// System.Delegate System.Delegate::Combine(System.Delegate,System.Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t* Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00 (Delegate_t* ___0_a, Delegate_t* ___1_b, const RuntimeMethod* method) ;
// System.Delegate System.Delegate::Remove(System.Delegate,System.Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t* Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3 (Delegate_t* ___0_source, Delegate_t* ___1_value, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Implicit(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_exists, const RuntimeMethod* method) ;
// T UnityEngine.Object::FindObjectOfType<WebXR.WebXRManager>()
inline WebXRManager_t8B31929B8D585AA72A11F9FC2102C0EAB24152E3* Object_FindObjectOfType_TisWebXRManager_t8B31929B8D585AA72A11F9FC2102C0EAB24152E3_mF61F16409E1CA98ECF6AFB3D4E4493FCE9DD77D9 (const RuntimeMethod* method)
{
	return ((  WebXRManager_t8B31929B8D585AA72A11F9FC2102C0EAB24152E3* (*) (const RuntimeMethod*))Object_FindObjectOfType_TisRuntimeObject_m02DFBF011F3B59F777A5E521DB2A116DD496E968_gshared)(method);
}
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_x, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___1_y, const RuntimeMethod* method) ;
// System.Void UnityEngine.Object::set_name(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_set_name_mC79E6DC8FFD72479C90F0C4CC7F42A0FEAF5AE47 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* __this, String_t* ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.GameObject::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject__ctor_m37D512B05D292F954792225E6C6EEE95293A9B88 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, String_t* ___0_name, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::AddComponent<WebXR.WebXRManager>()
inline WebXRManager_t8B31929B8D585AA72A11F9FC2102C0EAB24152E3* GameObject_AddComponent_TisWebXRManager_t8B31929B8D585AA72A11F9FC2102C0EAB24152E3_mEC620009E5F11B2B2F268A3BB62665B8DCBD1730 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  WebXRManager_t8B31929B8D585AA72A11F9FC2102C0EAB24152E3* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_AddComponent_TisRuntimeObject_m69B93700FACCF372F5753371C6E8FB780800B824_gshared)(__this, method);
}
// UnityEngine.Rendering.GraphicsTier UnityEngine.Graphics::get_activeTier()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Graphics_get_activeTier_m01A0E4872481E4851EB57957BA4AE17BF1257C48 (const RuntimeMethod* method) ;
// System.String System.Enum::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Enum_ToString_m946B0B83C4470457D0FF555D862022C72BB55741 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m9E3155FB84015C823606188F53B47CB44C444991 (String_t* ___0_str0, String_t* ___1_str1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::Log(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB (RuntimeObject* ___0_message, const RuntimeMethod* method) ;
// System.String UnityEngine.Object::get_name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* __this, const RuntimeMethod* method) ;
// System.Boolean System.String::Equals(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_Equals_mCD5F35DEDCAFE51ACD4E033726FC2EF8DF7E9B4D (String_t* __this, String_t* ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.Object::DontDestroyOnLoad(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_DontDestroyOnLoad_m4B70C3AEF886C176543D1295507B6455C9DCAEA7 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_target, const RuntimeMethod* method) ;
// System.Boolean WebXR.WebXRManager::isPresent()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WebXRManager_isPresent_m6DA3BF5A77B7B1E6404F5D5FF109A26BE6DA8C50 (const RuntimeMethod* method) ;
// System.Boolean UnityEngine.XR.XRDevice::SetTrackingSpaceType(UnityEngine.XR.TrackingSpaceType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XRDevice_SetTrackingSpaceType_m8A35E391EF1DA72CD9091C137C384F31FF23530B (int32_t ___0_trackingSpaceType, const RuntimeMethod* method) ;
// UnityEngine.XR.TrackingSpaceType UnityEngine.XR.XRDevice::GetTrackingSpaceType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t XRDevice_GetTrackingSpaceType_m160BD854CB480932E29017A40C46E648B064532A (const RuntimeMethod* method) ;
// WebXR.WebXRData WebXR.WebXRData::CreateFromJSON(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR WebXRData_t5FC32176B7A346AEC604C90A15825F685F11DAFE* WebXRData_CreateFromJSON_m96BEE60588B5D293DC37CBC06AD9FFBF704E7343 (String_t* ___0_jsonString, const RuntimeMethod* method) ;
// System.Void UnityEngine.Quaternion::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Quaternion__ctor_m868FD60AA65DD5A8AC0C5DEB0608381A8D85FCD8_inline (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* __this, float ___0_x, float ___1_y, float ___2_z, float ___3_w, const RuntimeMethod* method) ;
// System.Void WebXR.WebXRManager/ControllerUpdate::Invoke(System.String,System.Int32,System.String,System.Boolean,System.Boolean,UnityEngine.Quaternion,UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3,WebXR.WebXRControllerButton[],System.Single[])
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ControllerUpdate_Invoke_mE3F7040317ABB0ED30FE4552530DA48AA2E98CFF_inline (ControllerUpdate_t741280F157DF9254D489FE93F944F0AF7385B8C8* __this, String_t* ___0_id, int32_t ___1_index, String_t* ___2_hand, bool ___3_hasOrientation, bool ___4_hasPosition, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___5_orientation, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___6_position, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___7_linearAcceleration, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___8_linearVelocity, WebXRControllerButtonU5BU5D_t915FA50DD1DD06576264ABAC3FC33CA4B0FF1A75* ___9_buttons, SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___10_axes, const RuntimeMethod* method) ;
// T UnityEngine.JsonUtility::FromJson<WebXRDisplayCapabilities>(System.String)
inline WebXRDisplayCapabilities_t24125617B50773E797392F6AFCE0B328DE392B35* JsonUtility_FromJson_TisWebXRDisplayCapabilities_t24125617B50773E797392F6AFCE0B328DE392B35_m1B0C8FDFBC978C5B3FCBCC5940F0447CC45BD505 (String_t* ___0_json, const RuntimeMethod* method)
{
	return ((  WebXRDisplayCapabilities_t24125617B50773E797392F6AFCE0B328DE392B35* (*) (String_t*, const RuntimeMethod*))JsonUtility_FromJson_TisRuntimeObject_m0CCF0FE109BF4C85AECC9C5D0DBB43422A24FB40_gshared)(___0_json, method);
}
// System.Void WebXR.WebXRManager::OnXRCapabilities(WebXRDisplayCapabilities)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebXRManager_OnXRCapabilities_m5CF9202547504F742F0557A82488C15826D61227 (WebXRManager_t8B31929B8D585AA72A11F9FC2102C0EAB24152E3* __this, WebXRDisplayCapabilities_t24125617B50773E797392F6AFCE0B328DE392B35* ___0_capabilities, const RuntimeMethod* method) ;
// System.Void WebXR.WebXRUI::displayXRElementId(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebXRUI_displayXRElementId_m5DF529B7595B0D542420F6DB96E26D7E10414B39 (String_t* ___0_id, const RuntimeMethod* method) ;
// System.Void WebXR.WebXRManager/XRCapabilitiesUpdate::Invoke(WebXRDisplayCapabilities)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void XRCapabilitiesUpdate_Invoke_mD8A4B8425D0721E099087B0F59A62B0EE7E50B68_inline (XRCapabilitiesUpdate_t42E555152D7F0BAAFFDA89B975BDBF594696530A* __this, WebXRDisplayCapabilities_t24125617B50773E797392F6AFCE0B328DE392B35* ___0_capabilities, const RuntimeMethod* method) ;
// System.Void WebXR.WebXRManager::setXrState(WebXR.WebXRState)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebXRManager_setXrState_m3E869A2F14B98B11318CE4457E234DB0C525FA12 (WebXRManager_t8B31929B8D585AA72A11F9FC2102C0EAB24152E3* __this, int32_t ___0_state, const RuntimeMethod* method) ;
// System.Void WebXR.WebXRManager/XRChange::Invoke(WebXR.WebXRState)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void XRChange_Invoke_m13F3B35DBA21F8E88878CC3E81AA7DE4E3E1AF95_inline (XRChange_t3294064A42A2CE42C85AABA477F09DA02FBE6FB3* __this, int32_t ___0_state, const RuntimeMethod* method) ;
// System.Void WebXR.WebXRManager::ConfigureToggleXRKeyName(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebXRManager_ConfigureToggleXRKeyName_m8EA550F6168FA2A39692366F10C8AC324887809A (String_t* ___0_keyName, const RuntimeMethod* method) ;
// System.Void WebXR.WebXRManager::XRInitSharedArray(System.Single[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebXRManager_XRInitSharedArray_mB7712EC204DEB39C38BD3E39FFF85D920B46AA70 (SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___0_array, int32_t ___1_length, const RuntimeMethod* method) ;
// System.Void WebXR.WebXRManager::ListenWebXRData()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebXRManager_ListenWebXRData_m147E84262BB93700EC5DBE76B33135946DA1CC12 (const RuntimeMethod* method) ;
// System.Void WebXR.WebXRManager::SetTrackingSpaceType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebXRManager_SetTrackingSpaceType_m9BB7BECDA90B1CBA438F9212B9A1F3B2BC24EEB9 (WebXRManager_t8B31929B8D585AA72A11F9FC2102C0EAB24152E3* __this, const RuntimeMethod* method) ;
// System.Single[] WebXR.WebXRManager::GetFromSharedArray(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* WebXRManager_GetFromSharedArray_m7349178E4A3529C77D87D654AD6601F4004E69BD (WebXRManager_t8B31929B8D585AA72A11F9FC2102C0EAB24152E3* __this, int32_t ___0_index, const RuntimeMethod* method) ;
// UnityEngine.Matrix4x4 WebXR.WebXRMatrixUtil::NumbersToMatrix(System.Single[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 WebXRMatrixUtil_NumbersToMatrix_m67831ABE46F6833A59DE882EF588C60786992820 (SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___0_array, const RuntimeMethod* method) ;
// System.Void WebXR.WebXRManager/HeadsetUpdate::Invoke(UnityEngine.Matrix4x4,UnityEngine.Matrix4x4,UnityEngine.Matrix4x4,UnityEngine.Matrix4x4,UnityEngine.Matrix4x4)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void HeadsetUpdate_Invoke_mAFD65820867A532FEFFB53618A899841E5513ED6_inline (HeadsetUpdate_t6F11CEB0407C23E09526E0AECA3A6AAFA4A514D1* __this, Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___0_leftProjectionMatrix, Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___1_leftViewMatrix, Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___2_rightProjectionMatrix, Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___3_rightViewMatrix, Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___4_sitStandMatrix, const RuntimeMethod* method) ;
// UnityEngine.Vector4 UnityEngine.Matrix4x4::GetColumn(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 Matrix4x4_GetColumn_m5CE079D7A69DE70E3144BADD20A1651C73A8D118 (Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6* __this, int32_t ___0_index, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector4::op_Implicit(UnityEngine.Vector4)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector4_op_Implicit_m0217ADDC8CADDB93ACBABB17A50207698DAB0071_inline (Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___0_v, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::LookRotation(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_LookRotation_mFB02EDC8F733774DFAC3BEA4B4BB265A228F8307 (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_forward, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_upwards, const RuntimeMethod* method) ;
// System.Single UnityEngine.Vector4::get_magnitude()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector4_get_magnitude_m97A83FC484190F07D8017F4BD10E3C81478E0D20_inline (Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_localScale(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localScale_mBA79E811BAF6C47B80FF76414C12B47B3CD03633 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_value, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Quaternion::Internal_ToEulerRad(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Quaternion_Internal_ToEulerRad_m5BD0EEC543120C320DC77FCCDFD2CE2E6BD3F1A8 (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___0_rotation, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Multiply(UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, float ___1_d, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Quaternion::Internal_MakePositive(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Quaternion_Internal_MakePositive_m73E2D01920CB0DFE661A55022C129E8617F0C9A8 (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_euler, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::Internal_FromEulerRad(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_Internal_FromEulerRad_m66D4475341F53949471E6870FB5C5E4A5E9BA93E (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_euler, const RuntimeMethod* method) ;
// System.Single UnityEngine.Vector4::Dot(UnityEngine.Vector4,UnityEngine.Vector4)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector4_Dot_m40A3B2E258E53E4847583474E40AC29F68AF8BA3_inline (Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___0_a, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___1_b, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C void DEFAULT_CALL XRPostRender();
IL2CPP_EXTERN_C void DEFAULT_CALL ConfigureToggleXRKeyName(char*);
IL2CPP_EXTERN_C void DEFAULT_CALL XRInitSharedArray(float*, int32_t);
IL2CPP_EXTERN_C void DEFAULT_CALL ListenWebXRData();
IL2CPP_EXTERN_C void DEFAULT_CALL displayXRElementId(char*);
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
// System.Void WebXRDisplayCapabilities::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebXRDisplayCapabilities__ctor_m8EFAD2231DE948FAC2E1F73D649DAED971824327 (WebXRDisplayCapabilities_t24125617B50773E797392F6AFCE0B328DE392B35* __this, const RuntimeMethod* method) 
{
	{
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
// System.Void WebXR.WebXRCamera::XRPostRender()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebXRCamera_XRPostRender_m48E5A8C3793525C2504460DD88DC4A272227A44F (const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) ();

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(XRPostRender)();

}
// System.Collections.IEnumerator WebXR.WebXRCamera::endOfFrame()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WebXRCamera_endOfFrame_m865558389C2702A2838DD405E21F9129E36A2BB0 (WebXRCamera_tF71506C9F16DA4079C7A162FE63192D941F2EF49* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CendOfFrameU3Ed__7_tDC25F77A60C087BFD93BB3510A775F23F94B677F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CendOfFrameU3Ed__7_tDC25F77A60C087BFD93BB3510A775F23F94B677F* L_0 = (U3CendOfFrameU3Ed__7_tDC25F77A60C087BFD93BB3510A775F23F94B677F*)il2cpp_codegen_object_new(U3CendOfFrameU3Ed__7_tDC25F77A60C087BFD93BB3510A775F23F94B677F_il2cpp_TypeInfo_var);
		U3CendOfFrameU3Ed__7__ctor_m9F34B7744E66B914B3AAF5A72CB9857765BF54C6(L_0, 0, NULL);
		U3CendOfFrameU3Ed__7_tDC25F77A60C087BFD93BB3510A775F23F94B677F* L_1 = L_0;
		L_1->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_2), (void*)__this);
		return L_1;
	}
}
// System.Void WebXR.WebXRCamera::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebXRCamera_OnEnable_m2F901A5797A543AA44F0B913AF66BAE59A9A1744 (WebXRCamera_tF71506C9F16DA4079C7A162FE63192D941F2EF49* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HeadsetUpdate_t6F11CEB0407C23E09526E0AECA3A6AAFA4A514D1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebXRCamera_onHeadsetUpdate_m4EF7B4C302A6A338DA9D8C69815057B1E70EB30C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebXRCamera_onVRChange_m94A514F639719416550A0B7EB3B9A217930356F4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebXRManager_t8B31929B8D585AA72A11F9FC2102C0EAB24152E3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRChange_t3294064A42A2CE42C85AABA477F09DA02FBE6FB3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// WebXRManager.Instance.OnXRChange += onVRChange;
		il2cpp_codegen_runtime_class_init_inline(WebXRManager_t8B31929B8D585AA72A11F9FC2102C0EAB24152E3_il2cpp_TypeInfo_var);
		WebXRManager_t8B31929B8D585AA72A11F9FC2102C0EAB24152E3* L_0;
		L_0 = WebXRManager_get_Instance_mE22A89D450041A30C1EEB4AD9631BD2278E1F89C(NULL);
		XRChange_t3294064A42A2CE42C85AABA477F09DA02FBE6FB3* L_1 = (XRChange_t3294064A42A2CE42C85AABA477F09DA02FBE6FB3*)il2cpp_codegen_object_new(XRChange_t3294064A42A2CE42C85AABA477F09DA02FBE6FB3_il2cpp_TypeInfo_var);
		XRChange__ctor_mA0C620C83B9E369FF12FC0AADBB95FA906C811C9(L_1, __this, (intptr_t)((void*)WebXRCamera_onVRChange_m94A514F639719416550A0B7EB3B9A217930356F4_RuntimeMethod_var), NULL);
		WebXRManager_add_OnXRChange_mFF3C71062D567BE6F65E813CC1B38BD3A0D4F029(L_0, L_1, NULL);
		// WebXRManager.Instance.OnHeadsetUpdate += onHeadsetUpdate;
		WebXRManager_t8B31929B8D585AA72A11F9FC2102C0EAB24152E3* L_2;
		L_2 = WebXRManager_get_Instance_mE22A89D450041A30C1EEB4AD9631BD2278E1F89C(NULL);
		HeadsetUpdate_t6F11CEB0407C23E09526E0AECA3A6AAFA4A514D1* L_3 = (HeadsetUpdate_t6F11CEB0407C23E09526E0AECA3A6AAFA4A514D1*)il2cpp_codegen_object_new(HeadsetUpdate_t6F11CEB0407C23E09526E0AECA3A6AAFA4A514D1_il2cpp_TypeInfo_var);
		HeadsetUpdate__ctor_m2332A884B02C1DE92A7EFE827445B631DFE1D44A(L_3, __this, (intptr_t)((void*)WebXRCamera_onHeadsetUpdate_m4EF7B4C302A6A338DA9D8C69815057B1E70EB30C_RuntimeMethod_var), NULL);
		WebXRManager_add_OnHeadsetUpdate_mC0704DB6199881782166FA8EB3FA363AFFAC3930(L_2, L_3, NULL);
		// cameraMain.transform.localPosition = new Vector3(0, WebXRManager.Instance.DefaultHeight, 0);
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_4 = __this->___cameraMain_4;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_5;
		L_5 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_4, NULL);
		WebXRManager_t8B31929B8D585AA72A11F9FC2102C0EAB24152E3* L_6;
		L_6 = WebXRManager_get_Instance_mE22A89D450041A30C1EEB4AD9631BD2278E1F89C(NULL);
		float L_7 = L_6->___DefaultHeight_6;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8;
		memset((&L_8), 0, sizeof(L_8));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_8), (0.0f), L_7, (0.0f), /*hidden argument*/NULL);
		Transform_set_localPosition_mDE1C997F7D79C0885210B7732B4BA50EE7D73134(L_5, L_8, NULL);
		// postRenderCoroutine = StartCoroutine(endOfFrame());
		RuntimeObject* L_9;
		L_9 = WebXRCamera_endOfFrame_m865558389C2702A2838DD405E21F9129E36A2BB0(__this, NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_10;
		L_10 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_9, NULL);
		__this->___postRenderCoroutine_9 = L_10;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___postRenderCoroutine_9), (void*)L_10);
		// }
		return;
	}
}
// System.Void WebXR.WebXRCamera::OnDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebXRCamera_OnDisable_m5C89615107E9D5CF0E8655B40F531B1C3EC02AA5 (WebXRCamera_tF71506C9F16DA4079C7A162FE63192D941F2EF49* __this, const RuntimeMethod* method) 
{
	{
		// if (postRenderCoroutine != null)
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_0 = __this->___postRenderCoroutine_9;
		if (!L_0)
		{
			goto IL_0014;
		}
	}
	{
		// StopCoroutine(postRenderCoroutine);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_1 = __this->___postRenderCoroutine_9;
		MonoBehaviour_StopCoroutine_mB0FC91BE84203BD8E360B3FBAE5B958B4C5ED22A(__this, L_1, NULL);
	}

IL_0014:
	{
		// }
		return;
	}
}
// System.Void WebXR.WebXRCamera::onVRChange(WebXR.WebXRState)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebXRCamera_onVRChange_m94A514F639719416550A0B7EB3B9A217930356F4 (WebXRCamera_tF71506C9F16DA4079C7A162FE63192D941F2EF49* __this, int32_t ___0_state, const RuntimeMethod* method) 
{
	{
		// xrActive = state == WebXRState.ENABLED;
		int32_t L_0 = ___0_state;
		__this->___xrActive_7 = (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
		// if (xrActive)
		bool L_1 = __this->___xrActive_7;
		if (!L_1)
		{
			goto IL_0037;
		}
	}
	{
		// cameraMain.enabled = false;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_2 = __this->___cameraMain_4;
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_2, (bool)0, NULL);
		// cameraL.enabled = true;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_3 = __this->___cameraL_5;
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_3, (bool)1, NULL);
		// cameraR.enabled = true;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_4 = __this->___cameraR_6;
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_4, (bool)1, NULL);
		return;
	}

IL_0037:
	{
		// cameraMain.enabled = true;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_5 = __this->___cameraMain_4;
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_5, (bool)1, NULL);
		// cameraL.enabled = false;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_6 = __this->___cameraL_5;
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_6, (bool)0, NULL);
		// cameraR.enabled = false;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_7 = __this->___cameraR_6;
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_7, (bool)0, NULL);
		// }
		return;
	}
}
// System.Void WebXR.WebXRCamera::onHeadsetUpdate(UnityEngine.Matrix4x4,UnityEngine.Matrix4x4,UnityEngine.Matrix4x4,UnityEngine.Matrix4x4,UnityEngine.Matrix4x4)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebXRCamera_onHeadsetUpdate_m4EF7B4C302A6A338DA9D8C69815057B1E70EB30C (WebXRCamera_tF71506C9F16DA4079C7A162FE63192D941F2EF49* __this, Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___0_leftProjectionMatrix, Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___1_rightProjectionMatrix, Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___2_leftViewMatrix, Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___3_rightViewMatrix, Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___4_sitStandMatrix, const RuntimeMethod* method) 
{
	{
		// if (xrActive)
		bool L_0 = __this->___xrActive_7;
		if (!L_0)
		{
			goto IL_005b;
		}
	}
	{
		// WebXRMatrixUtil.SetTransformFromViewMatrix(cameraL.transform, leftViewMatrix * sitStandMatrix.inverse);
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_1 = __this->___cameraL_5;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2;
		L_2 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_1, NULL);
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_3 = ___2_leftViewMatrix;
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_4;
		L_4 = Matrix4x4_get_inverse_m4F4A881CD789281EA90EB68CFD39F36C8A81E6BD((&___4_sitStandMatrix), NULL);
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_5;
		L_5 = Matrix4x4_op_Multiply_m75E91775655DCA8DFC8EDE0AB787285BB3935162(L_3, L_4, NULL);
		WebXRMatrixUtil_SetTransformFromViewMatrix_mF832D97B26F951B04FE5D93E8C09255F073E29F9(L_2, L_5, NULL);
		// cameraL.projectionMatrix = leftProjectionMatrix;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_6 = __this->___cameraL_5;
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_7 = ___0_leftProjectionMatrix;
		Camera_set_projectionMatrix_m351820E6903139402FFFF40221B32D0C52B5A094(L_6, L_7, NULL);
		// WebXRMatrixUtil.SetTransformFromViewMatrix(cameraR.transform, rightViewMatrix * sitStandMatrix.inverse);
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_8 = __this->___cameraR_6;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_9;
		L_9 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_8, NULL);
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_10 = ___3_rightViewMatrix;
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_11;
		L_11 = Matrix4x4_get_inverse_m4F4A881CD789281EA90EB68CFD39F36C8A81E6BD((&___4_sitStandMatrix), NULL);
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_12;
		L_12 = Matrix4x4_op_Multiply_m75E91775655DCA8DFC8EDE0AB787285BB3935162(L_10, L_11, NULL);
		WebXRMatrixUtil_SetTransformFromViewMatrix_mF832D97B26F951B04FE5D93E8C09255F073E29F9(L_9, L_12, NULL);
		// cameraR.projectionMatrix = rightProjectionMatrix;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_13 = __this->___cameraR_6;
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_14 = ___1_rightProjectionMatrix;
		Camera_set_projectionMatrix_m351820E6903139402FFFF40221B32D0C52B5A094(L_13, L_14, NULL);
	}

IL_005b:
	{
		// }
		return;
	}
}
// System.Void WebXR.WebXRCamera::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebXRCamera__ctor_m441E2544589657E3A86076D665B6E294D0BBA802 (WebXRCamera_tF71506C9F16DA4079C7A162FE63192D941F2EF49* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForEndOfFrame_tE38D80923E3F8380069B423968C25ABE50A46663_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private WaitForEndOfFrame wait = new WaitForEndOfFrame();
		WaitForEndOfFrame_tE38D80923E3F8380069B423968C25ABE50A46663* L_0 = (WaitForEndOfFrame_tE38D80923E3F8380069B423968C25ABE50A46663*)il2cpp_codegen_object_new(WaitForEndOfFrame_tE38D80923E3F8380069B423968C25ABE50A46663_il2cpp_TypeInfo_var);
		WaitForEndOfFrame__ctor_m4AF7E576C01E6B04443BB898B1AE5D645F7D45AB(L_0, NULL);
		__this->___wait_8 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___wait_8), (void*)L_0);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void WebXR.WebXRCamera/<endOfFrame>d__7::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CendOfFrameU3Ed__7__ctor_m9F34B7744E66B914B3AAF5A72CB9857765BF54C6 (U3CendOfFrameU3Ed__7_tDC25F77A60C087BFD93BB3510A775F23F94B677F* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___0_U3CU3E1__state;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void WebXR.WebXRCamera/<endOfFrame>d__7::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CendOfFrameU3Ed__7_System_IDisposable_Dispose_m8B06CC3F39FE31CF4E51D042CDE4B83CE7950FD0 (U3CendOfFrameU3Ed__7_tDC25F77A60C087BFD93BB3510A775F23F94B677F* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean WebXR.WebXRCamera/<endOfFrame>d__7::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CendOfFrameU3Ed__7_MoveNext_m205E7818B02DAE01518CC289339965B961C5C6D8 (U3CendOfFrameU3Ed__7_tDC25F77A60C087BFD93BB3510A775F23F94B677F* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	WebXRCamera_tF71506C9F16DA4079C7A162FE63192D941F2EF49* V_1 = NULL;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		WebXRCamera_tF71506C9F16DA4079C7A162FE63192D941F2EF49* L_1 = __this->___U3CU3E4__this_2;
		V_1 = L_1;
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_0017;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_0035;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->___U3CU3E1__state_0 = (-1);
		goto IL_0041;
	}

IL_0020:
	{
		// yield return wait;
		WebXRCamera_tF71506C9F16DA4079C7A162FE63192D941F2EF49* L_4 = V_1;
		WaitForEndOfFrame_tE38D80923E3F8380069B423968C25ABE50A46663* L_5 = L_4->___wait_8;
		__this->___U3CU3E2__current_1 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_5);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_0035:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// XRPostRender();
		WebXRCamera_XRPostRender_m48E5A8C3793525C2504460DD88DC4A272227A44F(NULL);
	}

IL_0041:
	{
		// while (enabled)
		WebXRCamera_tF71506C9F16DA4079C7A162FE63192D941F2EF49* L_6 = V_1;
		bool L_7;
		L_7 = Behaviour_get_enabled_mAAC9F15E9EBF552217A5AE2681589CC0BFA300C1(L_6, NULL);
		if (L_7)
		{
			goto IL_0020;
		}
	}
	{
		// }
		return (bool)0;
	}
}
// System.Object WebXR.WebXRCamera/<endOfFrame>d__7::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CendOfFrameU3Ed__7_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mBB0DE38C794810A437142CD7460EFFF80DE76823 (U3CendOfFrameU3Ed__7_tDC25F77A60C087BFD93BB3510A775F23F94B677F* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void WebXR.WebXRCamera/<endOfFrame>d__7::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CendOfFrameU3Ed__7_System_Collections_IEnumerator_Reset_mE0CFF4E131C735ACB669CD0958230874C57EB9B3 (U3CendOfFrameU3Ed__7_tDC25F77A60C087BFD93BB3510A775F23F94B677F* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CendOfFrameU3Ed__7_System_Collections_IEnumerator_Reset_mE0CFF4E131C735ACB669CD0958230874C57EB9B3_RuntimeMethod_var)));
	}
}
// System.Object WebXR.WebXRCamera/<endOfFrame>d__7::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CendOfFrameU3Ed__7_System_Collections_IEnumerator_get_Current_m6078272FEE9147B92FBFF6A8CB2912FE619CC1B5 (U3CendOfFrameU3Ed__7_tDC25F77A60C087BFD93BB3510A775F23F94B677F* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
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
// System.Void WebXR.WebXRControllerButton::.ctor(System.Boolean,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebXRControllerButton__ctor_m1D4C0BF750182FE09138967349F138376E61D2B1 (WebXRControllerButton_t630587E2D90290CEE687D62CFE34558675C222A4* __this, bool ___0_isPressed, float ___1_buttonValue, const RuntimeMethod* method) 
{
	{
		// public WebXRControllerButton(bool isPressed, float buttonValue)
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// pressed = isPressed;
		bool L_0 = ___0_isPressed;
		__this->___pressed_0 = L_0;
		// prevPressedState = false;
		__this->___prevPressedState_1 = (bool)0;
		// value = buttonValue;
		float L_1 = ___1_buttonValue;
		__this->___value_3 = L_1;
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
// System.Void WebXR.WebXRController::UpdateButtons(WebXR.WebXRControllerButton[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebXRController_UpdateButtons_mFC7CCB1D955E6270CB737D8A84A7B8B5D22EF729 (WebXRController_tC38659B5E868FEA08E58A5545C4E4E4F580C3E00* __this, WebXRControllerButtonU5BU5D_t915FA50DD1DD06576264ABAC3FC33CA4B0FF1A75* ___0_buttons, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m512CCA5A31AF4575B55ECBF1812BA4B30D234A5D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m40DE32B911D52B14FCBD8D0E32115896C11F680E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_mA59CEDFE276B79C881D812BAB43EF431A2A83B0F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_mFC2EEAA8205C3511A709F83830EC3EB6D20C274C_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	WebXRControllerButton_t630587E2D90290CEE687D62CFE34558675C222A4* V_1 = NULL;
	Enumerator_t5EF3D06F517CDA2C7A90D848426233694DAFBF5F V_2;
	memset((&V_2), 0, sizeof(V_2));
	WebXRControllerInput_tEB1C3FF36D9B0345E3BDFF3F176B73417C6240A5* V_3 = NULL;
	{
		// for (int i = 0; i < buttons.Length; i++)
		V_0 = 0;
		goto IL_0061;
	}

IL_0004:
	{
		// WebXRControllerButton button = buttons[i];
		WebXRControllerButtonU5BU5D_t915FA50DD1DD06576264ABAC3FC33CA4B0FF1A75* L_0 = ___0_buttons;
		int32_t L_1 = V_0;
		int32_t L_2 = L_1;
		WebXRControllerButton_t630587E2D90290CEE687D62CFE34558675C222A4* L_3 = (L_0)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_2));
		V_1 = L_3;
		// foreach (var input in inputMap.inputs)
		WebXRControllerInputMap_t67BEC24BFDB103FC8E9E6C9C831B3A6A6999BC2D* L_4 = __this->___inputMap_5;
		List_1_t2BFBC1DB68FFD3343B759CE0D3A12CDA27906246* L_5 = L_4->___inputs_4;
		Enumerator_t5EF3D06F517CDA2C7A90D848426233694DAFBF5F L_6;
		L_6 = List_1_GetEnumerator_mFC2EEAA8205C3511A709F83830EC3EB6D20C274C(L_5, List_1_GetEnumerator_mFC2EEAA8205C3511A709F83830EC3EB6D20C274C_RuntimeMethod_var);
		V_2 = L_6;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_004f:
			{// begin finally (depth: 1)
				Enumerator_Dispose_m512CCA5A31AF4575B55ECBF1812BA4B30D234A5D((&V_2), Enumerator_Dispose_m512CCA5A31AF4575B55ECBF1812BA4B30D234A5D_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0044_1;
			}

IL_001b_1:
			{
				// foreach (var input in inputMap.inputs)
				WebXRControllerInput_tEB1C3FF36D9B0345E3BDFF3F176B73417C6240A5* L_7;
				L_7 = Enumerator_get_Current_mA59CEDFE276B79C881D812BAB43EF431A2A83B0F_inline((&V_2), Enumerator_get_Current_mA59CEDFE276B79C881D812BAB43EF431A2A83B0F_RuntimeMethod_var);
				V_3 = L_7;
				// if (input.gamepadId == i)
				WebXRControllerInput_tEB1C3FF36D9B0345E3BDFF3F176B73417C6240A5* L_8 = V_3;
				int32_t L_9 = L_8->___gamepadId_1;
				int32_t L_10 = V_0;
				if ((!(((uint32_t)L_9) == ((uint32_t)L_10))))
				{
					goto IL_0044_1;
				}
			}
			{
				// SetButtonState(input.actionName, button.pressed, button.value);
				WebXRControllerInput_tEB1C3FF36D9B0345E3BDFF3F176B73417C6240A5* L_11 = V_3;
				String_t* L_12 = L_11->___actionName_0;
				WebXRControllerButton_t630587E2D90290CEE687D62CFE34558675C222A4* L_13 = V_1;
				bool L_14 = L_13->___pressed_0;
				WebXRControllerButton_t630587E2D90290CEE687D62CFE34558675C222A4* L_15 = V_1;
				float L_16 = L_15->___value_3;
				WebXRController_SetButtonState_mC85E87E84B97613BDD7763BC73FA1D8CFF722968(__this, L_12, L_14, L_16, NULL);
			}

IL_0044_1:
			{
				// foreach (var input in inputMap.inputs)
				bool L_17;
				L_17 = Enumerator_MoveNext_m40DE32B911D52B14FCBD8D0E32115896C11F680E((&V_2), Enumerator_MoveNext_m40DE32B911D52B14FCBD8D0E32115896C11F680E_RuntimeMethod_var);
				if (L_17)
				{
					goto IL_001b_1;
				}
			}
			{
				goto IL_005d;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_005d:
	{
		// for (int i = 0; i < buttons.Length; i++)
		int32_t L_18 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_18, 1));
	}

IL_0061:
	{
		// for (int i = 0; i < buttons.Length; i++)
		int32_t L_19 = V_0;
		WebXRControllerButtonU5BU5D_t915FA50DD1DD06576264ABAC3FC33CA4B0FF1A75* L_20 = ___0_buttons;
		if ((((int32_t)L_19) < ((int32_t)((int32_t)(((RuntimeArray*)L_20)->max_length)))))
		{
			goto IL_0004;
		}
	}
	{
		// }
		return;
	}
}
// System.Single WebXR.WebXRController::GetAxis(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float WebXRController_GetAxis_mBD5498821733BC238C8D49120A587B263F296251 (WebXRController_tC38659B5E868FEA08E58A5545C4E4E4F580C3E00* __this, String_t* ___0_action, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_ContainsKey_mAB4330E86477135D73C3481453FF4D86D4E26FFD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_mACA918234BA0F532B920473BDEA1FF7ECA7B661E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m63E347D50ED2BC074FE87522BEB73A8EFCFE63DA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m0EB4566AF989AB512CC7B6B0B7FFAF0C442FA7F1_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	WebXRControllerInput_tEB1C3FF36D9B0345E3BDFF3F176B73417C6240A5* V_1 = NULL;
	{
		// for (var i = 0; i < inputMap.inputs.Count; i++)
		V_0 = 0;
		goto IL_007a;
	}

IL_0004:
	{
		// WebXRControllerInput input = inputMap.inputs[i];
		WebXRControllerInputMap_t67BEC24BFDB103FC8E9E6C9C831B3A6A6999BC2D* L_0 = __this->___inputMap_5;
		List_1_t2BFBC1DB68FFD3343B759CE0D3A12CDA27906246* L_1 = L_0->___inputs_4;
		int32_t L_2 = V_0;
		WebXRControllerInput_tEB1C3FF36D9B0345E3BDFF3F176B73417C6240A5* L_3;
		L_3 = List_1_get_Item_m0EB4566AF989AB512CC7B6B0B7FFAF0C442FA7F1(L_1, L_2, List_1_get_Item_m0EB4566AF989AB512CC7B6B0B7FFAF0C442FA7F1_RuntimeMethod_var);
		V_1 = L_3;
		// if (action == input.actionName)
		String_t* L_4 = ___0_action;
		WebXRControllerInput_tEB1C3FF36D9B0345E3BDFF3F176B73417C6240A5* L_5 = V_1;
		String_t* L_6 = L_5->___actionName_0;
		bool L_7;
		L_7 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_4, L_6, NULL);
		if (!L_7)
		{
			goto IL_0076;
		}
	}
	{
		// if (isPresent() && !input.unityInputIsButton)
		bool L_8;
		L_8 = WebXRController_isPresent_mB8F946F5D1A8DBC827A03342A2DEA39562B31B5D(NULL);
		if (!L_8)
		{
			goto IL_003f;
		}
	}
	{
		WebXRControllerInput_tEB1C3FF36D9B0345E3BDFF3F176B73417C6240A5* L_9 = V_1;
		bool L_10 = L_9->___unityInputIsButton_4;
		if (L_10)
		{
			goto IL_003f;
		}
	}
	{
		// return Input.GetAxis(input.unityInputName);
		WebXRControllerInput_tEB1C3FF36D9B0345E3BDFF3F176B73417C6240A5* L_11 = V_1;
		String_t* L_12 = L_11->___unityInputName_3;
		float L_13;
		L_13 = Input_GetAxis_m10372E6C5FF591668D2DC5F58C58D213CC598A62(L_12, NULL);
		return L_13;
	}

IL_003f:
	{
		// if (!input.gamepadIsButton) return axes[i];
		WebXRControllerInput_tEB1C3FF36D9B0345E3BDFF3F176B73417C6240A5* L_14 = V_1;
		bool L_15 = L_14->___gamepadIsButton_2;
		if (L_15)
		{
			goto IL_0050;
		}
	}
	{
		// if (!input.gamepadIsButton) return axes[i];
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_16 = __this->___axes_10;
		int32_t L_17 = V_0;
		int32_t L_18 = L_17;
		float L_19 = (L_16)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_18));
		return L_19;
	}

IL_0050:
	{
		// if (!buttonStates.ContainsKey(action))
		Dictionary_2_t5DEE0DDB761EDC477DF149BFF830046243434D9D* L_20 = __this->___buttonStates_15;
		String_t* L_21 = ___0_action;
		bool L_22;
		L_22 = Dictionary_2_ContainsKey_mAB4330E86477135D73C3481453FF4D86D4E26FFD(L_20, L_21, Dictionary_2_ContainsKey_mAB4330E86477135D73C3481453FF4D86D4E26FFD_RuntimeMethod_var);
		if (L_22)
		{
			goto IL_0064;
		}
	}
	{
		// return 0;
		return (0.0f);
	}

IL_0064:
	{
		// return buttonStates[action].value;
		Dictionary_2_t5DEE0DDB761EDC477DF149BFF830046243434D9D* L_23 = __this->___buttonStates_15;
		String_t* L_24 = ___0_action;
		WebXRControllerButton_t630587E2D90290CEE687D62CFE34558675C222A4* L_25;
		L_25 = Dictionary_2_get_Item_mACA918234BA0F532B920473BDEA1FF7ECA7B661E(L_23, L_24, Dictionary_2_get_Item_mACA918234BA0F532B920473BDEA1FF7ECA7B661E_RuntimeMethod_var);
		float L_26 = L_25->___value_3;
		return L_26;
	}

IL_0076:
	{
		// for (var i = 0; i < inputMap.inputs.Count; i++)
		int32_t L_27 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_27, 1));
	}

IL_007a:
	{
		// for (var i = 0; i < inputMap.inputs.Count; i++)
		int32_t L_28 = V_0;
		WebXRControllerInputMap_t67BEC24BFDB103FC8E9E6C9C831B3A6A6999BC2D* L_29 = __this->___inputMap_5;
		List_1_t2BFBC1DB68FFD3343B759CE0D3A12CDA27906246* L_30 = L_29->___inputs_4;
		int32_t L_31;
		L_31 = List_1_get_Count_m63E347D50ED2BC074FE87522BEB73A8EFCFE63DA_inline(L_30, List_1_get_Count_m63E347D50ED2BC074FE87522BEB73A8EFCFE63DA_RuntimeMethod_var);
		if ((((int32_t)L_28) < ((int32_t)L_31)))
		{
			goto IL_0004;
		}
	}
	{
		// return 0;
		return (0.0f);
	}
}
// System.Boolean WebXR.WebXRController::isPresent()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WebXRController_isPresent_mB8F946F5D1A8DBC827A03342A2DEA39562B31B5D (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m25A1E45E653D7F73DF65C041A66C0A6E01F2964D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m9A1452618AC875C7A20A5917509A7B90E76E6A6A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_mF9383BAD37E56B1D5BCDBFF0C3ADA58BB6E67A04_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_mA450E85CB8D7D5CB81FAAF9D11A1D4945B942423_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mBE7647ECE0B8ABB952EDC379472F9E541D41D6DF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tA7666C6690CE2AEE97571615AD3AFCE2BB020597_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SubsystemManager_GetInstances_TisXRDisplaySubsystem_t4B00B0BF1894A039ACFA8DDC2C2EB9301118C1F1_mCDFAF63EF2A2778CA3677E75360BC7961FCB3370_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SubsystemManager_t9A7261E4D0B53B996F04B8707D8E1C33AB65E824_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Enumerator_t7B44DEF95515943B67640F1A20853509F98BA143 V_0;
	memset((&V_0), 0, sizeof(V_0));
	bool V_1 = false;
	{
		// var xrDisplaySubsystems = new List<XRDisplaySubsystem>();
		List_1_tA7666C6690CE2AEE97571615AD3AFCE2BB020597* L_0 = (List_1_tA7666C6690CE2AEE97571615AD3AFCE2BB020597*)il2cpp_codegen_object_new(List_1_tA7666C6690CE2AEE97571615AD3AFCE2BB020597_il2cpp_TypeInfo_var);
		List_1__ctor_mBE7647ECE0B8ABB952EDC379472F9E541D41D6DF(L_0, List_1__ctor_mBE7647ECE0B8ABB952EDC379472F9E541D41D6DF_RuntimeMethod_var);
		// SubsystemManager.GetInstances<XRDisplaySubsystem>(xrDisplaySubsystems);
		List_1_tA7666C6690CE2AEE97571615AD3AFCE2BB020597* L_1 = L_0;
		il2cpp_codegen_runtime_class_init_inline(SubsystemManager_t9A7261E4D0B53B996F04B8707D8E1C33AB65E824_il2cpp_TypeInfo_var);
		SubsystemManager_GetInstances_TisXRDisplaySubsystem_t4B00B0BF1894A039ACFA8DDC2C2EB9301118C1F1_mCDFAF63EF2A2778CA3677E75360BC7961FCB3370(L_1, SubsystemManager_GetInstances_TisXRDisplaySubsystem_t4B00B0BF1894A039ACFA8DDC2C2EB9301118C1F1_mCDFAF63EF2A2778CA3677E75360BC7961FCB3370_RuntimeMethod_var);
		// foreach (var xrDisplay in xrDisplaySubsystems)
		Enumerator_t7B44DEF95515943B67640F1A20853509F98BA143 L_2;
		L_2 = List_1_GetEnumerator_mA450E85CB8D7D5CB81FAAF9D11A1D4945B942423(L_1, List_1_GetEnumerator_mA450E85CB8D7D5CB81FAAF9D11A1D4945B942423_RuntimeMethod_var);
		V_0 = L_2;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0030:
			{// begin finally (depth: 1)
				Enumerator_Dispose_m25A1E45E653D7F73DF65C041A66C0A6E01F2964D((&V_0), Enumerator_Dispose_m25A1E45E653D7F73DF65C041A66C0A6E01F2964D_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0025_1;
			}

IL_0013_1:
			{
				// foreach (var xrDisplay in xrDisplaySubsystems)
				XRDisplaySubsystem_t4B00B0BF1894A039ACFA8DDC2C2EB9301118C1F1* L_3;
				L_3 = Enumerator_get_Current_mF9383BAD37E56B1D5BCDBFF0C3ADA58BB6E67A04_inline((&V_0), Enumerator_get_Current_mF9383BAD37E56B1D5BCDBFF0C3ADA58BB6E67A04_RuntimeMethod_var);
				// if (xrDisplay.running)
				bool L_4;
				L_4 = IntegratedSubsystem_get_running_m18AA0D7AD1CB593DC9EE5F3DC79643717509D6E8(L_3, NULL);
				if (!L_4)
				{
					goto IL_0025_1;
				}
			}
			{
				// return true;
				V_1 = (bool)1;
				goto IL_0040;
			}

IL_0025_1:
			{
				// foreach (var xrDisplay in xrDisplaySubsystems)
				bool L_5;
				L_5 = Enumerator_MoveNext_m9A1452618AC875C7A20A5917509A7B90E76E6A6A((&V_0), Enumerator_MoveNext_m9A1452618AC875C7A20A5917509A7B90E76E6A6A_RuntimeMethod_var);
				if (L_5)
				{
					goto IL_0013_1;
				}
			}
			{
				goto IL_003e;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_003e:
	{
		// return false;
		return (bool)0;
	}

IL_0040:
	{
		// }
		bool L_6 = V_1;
		return L_6;
	}
}
// System.Boolean WebXR.WebXRController::GetButton(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WebXRController_GetButton_m1BA75CEA433EA6EBCDA7DAFEBE86D20712EA7701 (WebXRController_tC38659B5E868FEA08E58A5545C4E4E4F580C3E00* __this, String_t* ___0_action, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_ContainsKey_mAB4330E86477135D73C3481453FF4D86D4E26FFD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_mACA918234BA0F532B920473BDEA1FF7ECA7B661E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m512CCA5A31AF4575B55ECBF1812BA4B30D234A5D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m40DE32B911D52B14FCBD8D0E32115896C11F680E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_mA59CEDFE276B79C881D812BAB43EF431A2A83B0F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_mFC2EEAA8205C3511A709F83830EC3EB6D20C274C_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Enumerator_t5EF3D06F517CDA2C7A90D848426233694DAFBF5F V_0;
	memset((&V_0), 0, sizeof(V_0));
	WebXRControllerInput_tEB1C3FF36D9B0345E3BDFF3F176B73417C6240A5* V_1 = NULL;
	bool V_2 = false;
	{
		// if (isPresent())
		bool L_0;
		L_0 = WebXRController_isPresent_mB8F946F5D1A8DBC827A03342A2DEA39562B31B5D(NULL);
		if (!L_0)
		{
			goto IL_005f;
		}
	}
	{
		// foreach (WebXRControllerInput input in inputMap.inputs)
		WebXRControllerInputMap_t67BEC24BFDB103FC8E9E6C9C831B3A6A6999BC2D* L_1 = __this->___inputMap_5;
		List_1_t2BFBC1DB68FFD3343B759CE0D3A12CDA27906246* L_2 = L_1->___inputs_4;
		Enumerator_t5EF3D06F517CDA2C7A90D848426233694DAFBF5F L_3;
		L_3 = List_1_GetEnumerator_mFC2EEAA8205C3511A709F83830EC3EB6D20C274C(L_2, List_1_GetEnumerator_mFC2EEAA8205C3511A709F83830EC3EB6D20C274C_RuntimeMethod_var);
		V_0 = L_3;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0051:
			{// begin finally (depth: 1)
				Enumerator_Dispose_m512CCA5A31AF4575B55ECBF1812BA4B30D234A5D((&V_0), Enumerator_Dispose_m512CCA5A31AF4575B55ECBF1812BA4B30D234A5D_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0046_1;
			}

IL_001a_1:
			{
				// foreach (WebXRControllerInput input in inputMap.inputs)
				WebXRControllerInput_tEB1C3FF36D9B0345E3BDFF3F176B73417C6240A5* L_4;
				L_4 = Enumerator_get_Current_mA59CEDFE276B79C881D812BAB43EF431A2A83B0F_inline((&V_0), Enumerator_get_Current_mA59CEDFE276B79C881D812BAB43EF431A2A83B0F_RuntimeMethod_var);
				V_1 = L_4;
				// if (action == input.actionName && input.unityInputIsButton)
				String_t* L_5 = ___0_action;
				WebXRControllerInput_tEB1C3FF36D9B0345E3BDFF3F176B73417C6240A5* L_6 = V_1;
				String_t* L_7 = L_6->___actionName_0;
				bool L_8;
				L_8 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_5, L_7, NULL);
				if (!L_8)
				{
					goto IL_0046_1;
				}
			}
			{
				WebXRControllerInput_tEB1C3FF36D9B0345E3BDFF3F176B73417C6240A5* L_9 = V_1;
				bool L_10 = L_9->___unityInputIsButton_4;
				if (!L_10)
				{
					goto IL_0046_1;
				}
			}
			{
				// return Input.GetButton(input.unityInputName);
				WebXRControllerInput_tEB1C3FF36D9B0345E3BDFF3F176B73417C6240A5* L_11 = V_1;
				String_t* L_12 = L_11->___unityInputName_3;
				bool L_13;
				L_13 = Input_GetButton_m2F217DAE69DB3D1324FB848B3C9C84F19A80989E(L_12, NULL);
				V_2 = L_13;
				goto IL_0081;
			}

IL_0046_1:
			{
				// foreach (WebXRControllerInput input in inputMap.inputs)
				bool L_14;
				L_14 = Enumerator_MoveNext_m40DE32B911D52B14FCBD8D0E32115896C11F680E((&V_0), Enumerator_MoveNext_m40DE32B911D52B14FCBD8D0E32115896C11F680E_RuntimeMethod_var);
				if (L_14)
				{
					goto IL_001a_1;
				}
			}
			{
				goto IL_005f;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_005f:
	{
		// return buttonStates.ContainsKey(action) && buttonStates[action].pressed;
		Dictionary_2_t5DEE0DDB761EDC477DF149BFF830046243434D9D* L_15 = __this->___buttonStates_15;
		String_t* L_16 = ___0_action;
		bool L_17;
		L_17 = Dictionary_2_ContainsKey_mAB4330E86477135D73C3481453FF4D86D4E26FFD(L_15, L_16, Dictionary_2_ContainsKey_mAB4330E86477135D73C3481453FF4D86D4E26FFD_RuntimeMethod_var);
		if (!L_17)
		{
			goto IL_007f;
		}
	}
	{
		Dictionary_2_t5DEE0DDB761EDC477DF149BFF830046243434D9D* L_18 = __this->___buttonStates_15;
		String_t* L_19 = ___0_action;
		WebXRControllerButton_t630587E2D90290CEE687D62CFE34558675C222A4* L_20;
		L_20 = Dictionary_2_get_Item_mACA918234BA0F532B920473BDEA1FF7ECA7B661E(L_18, L_19, Dictionary_2_get_Item_mACA918234BA0F532B920473BDEA1FF7ECA7B661E_RuntimeMethod_var);
		bool L_21 = L_20->___pressed_0;
		return L_21;
	}

IL_007f:
	{
		return (bool)0;
	}

IL_0081:
	{
		// }
		bool L_22 = V_2;
		return L_22;
	}
}
// System.Boolean WebXR.WebXRController::GetPastButtonState(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WebXRController_GetPastButtonState_m96030F5679C82F04DFE16D94BE4C3F63FC9C6869 (WebXRController_tC38659B5E868FEA08E58A5545C4E4E4F580C3E00* __this, String_t* ___0_action, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_ContainsKey_mAB4330E86477135D73C3481453FF4D86D4E26FFD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_mACA918234BA0F532B920473BDEA1FF7ECA7B661E_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return buttonStates.ContainsKey(action) && buttonStates[action].prevPressedState;
		Dictionary_2_t5DEE0DDB761EDC477DF149BFF830046243434D9D* L_0 = __this->___buttonStates_15;
		String_t* L_1 = ___0_action;
		bool L_2;
		L_2 = Dictionary_2_ContainsKey_mAB4330E86477135D73C3481453FF4D86D4E26FFD(L_0, L_1, Dictionary_2_ContainsKey_mAB4330E86477135D73C3481453FF4D86D4E26FFD_RuntimeMethod_var);
		if (!L_2)
		{
			goto IL_0020;
		}
	}
	{
		Dictionary_2_t5DEE0DDB761EDC477DF149BFF830046243434D9D* L_3 = __this->___buttonStates_15;
		String_t* L_4 = ___0_action;
		WebXRControllerButton_t630587E2D90290CEE687D62CFE34558675C222A4* L_5;
		L_5 = Dictionary_2_get_Item_mACA918234BA0F532B920473BDEA1FF7ECA7B661E(L_3, L_4, Dictionary_2_get_Item_mACA918234BA0F532B920473BDEA1FF7ECA7B661E_RuntimeMethod_var);
		bool L_6 = L_5->___prevPressedState_1;
		return L_6;
	}

IL_0020:
	{
		return (bool)0;
	}
}
// System.Void WebXR.WebXRController::SetButtonState(System.String,System.Boolean,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebXRController_SetButtonState_mC85E87E84B97613BDD7763BC73FA1D8CFF722968 (WebXRController_tC38659B5E868FEA08E58A5545C4E4E4F580C3E00* __this, String_t* ___0_action, bool ___1_isPressed, float ___2_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Add_m7C61A74EA3AB26B9950F20C9F5B81E959E131769_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_ContainsKey_mAB4330E86477135D73C3481453FF4D86D4E26FFD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_mACA918234BA0F532B920473BDEA1FF7ECA7B661E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebXRControllerButton_t630587E2D90290CEE687D62CFE34558675C222A4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (buttonStates.ContainsKey(action))
		Dictionary_2_t5DEE0DDB761EDC477DF149BFF830046243434D9D* L_0 = __this->___buttonStates_15;
		String_t* L_1 = ___0_action;
		bool L_2;
		L_2 = Dictionary_2_ContainsKey_mAB4330E86477135D73C3481453FF4D86D4E26FFD(L_0, L_1, Dictionary_2_ContainsKey_mAB4330E86477135D73C3481453FF4D86D4E26FFD_RuntimeMethod_var);
		if (!L_2)
		{
			goto IL_0033;
		}
	}
	{
		// buttonStates[action].pressed = isPressed;
		Dictionary_2_t5DEE0DDB761EDC477DF149BFF830046243434D9D* L_3 = __this->___buttonStates_15;
		String_t* L_4 = ___0_action;
		WebXRControllerButton_t630587E2D90290CEE687D62CFE34558675C222A4* L_5;
		L_5 = Dictionary_2_get_Item_mACA918234BA0F532B920473BDEA1FF7ECA7B661E(L_3, L_4, Dictionary_2_get_Item_mACA918234BA0F532B920473BDEA1FF7ECA7B661E_RuntimeMethod_var);
		bool L_6 = ___1_isPressed;
		L_5->___pressed_0 = L_6;
		// buttonStates[action].value = value;
		Dictionary_2_t5DEE0DDB761EDC477DF149BFF830046243434D9D* L_7 = __this->___buttonStates_15;
		String_t* L_8 = ___0_action;
		WebXRControllerButton_t630587E2D90290CEE687D62CFE34558675C222A4* L_9;
		L_9 = Dictionary_2_get_Item_mACA918234BA0F532B920473BDEA1FF7ECA7B661E(L_7, L_8, Dictionary_2_get_Item_mACA918234BA0F532B920473BDEA1FF7ECA7B661E_RuntimeMethod_var);
		float L_10 = ___2_value;
		L_9->___value_3 = L_10;
		return;
	}

IL_0033:
	{
		// buttonStates.Add(action, new WebXRControllerButton(isPressed, value));
		Dictionary_2_t5DEE0DDB761EDC477DF149BFF830046243434D9D* L_11 = __this->___buttonStates_15;
		String_t* L_12 = ___0_action;
		bool L_13 = ___1_isPressed;
		float L_14 = ___2_value;
		WebXRControllerButton_t630587E2D90290CEE687D62CFE34558675C222A4* L_15 = (WebXRControllerButton_t630587E2D90290CEE687D62CFE34558675C222A4*)il2cpp_codegen_object_new(WebXRControllerButton_t630587E2D90290CEE687D62CFE34558675C222A4_il2cpp_TypeInfo_var);
		WebXRControllerButton__ctor_m1D4C0BF750182FE09138967349F138376E61D2B1(L_15, L_13, L_14, NULL);
		Dictionary_2_Add_m7C61A74EA3AB26B9950F20C9F5B81E959E131769(L_11, L_12, L_15, Dictionary_2_Add_m7C61A74EA3AB26B9950F20C9F5B81E959E131769_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void WebXR.WebXRController::SetPastButtonState(System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebXRController_SetPastButtonState_mE6FE471C52C58055E862BB1CD59557CBEAB260D3 (WebXRController_tC38659B5E868FEA08E58A5545C4E4E4F580C3E00* __this, String_t* ___0_action, bool ___1_isPressed, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_ContainsKey_mAB4330E86477135D73C3481453FF4D86D4E26FFD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_mACA918234BA0F532B920473BDEA1FF7ECA7B661E_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (!buttonStates.ContainsKey(action))
		Dictionary_2_t5DEE0DDB761EDC477DF149BFF830046243434D9D* L_0 = __this->___buttonStates_15;
		String_t* L_1 = ___0_action;
		bool L_2;
		L_2 = Dictionary_2_ContainsKey_mAB4330E86477135D73C3481453FF4D86D4E26FFD(L_0, L_1, Dictionary_2_ContainsKey_mAB4330E86477135D73C3481453FF4D86D4E26FFD_RuntimeMethod_var);
		if (L_2)
		{
			goto IL_000f;
		}
	}
	{
		// return;
		return;
	}

IL_000f:
	{
		// buttonStates[action].prevPressedState = isPressed;
		Dictionary_2_t5DEE0DDB761EDC477DF149BFF830046243434D9D* L_3 = __this->___buttonStates_15;
		String_t* L_4 = ___0_action;
		WebXRControllerButton_t630587E2D90290CEE687D62CFE34558675C222A4* L_5;
		L_5 = Dictionary_2_get_Item_mACA918234BA0F532B920473BDEA1FF7ECA7B661E(L_3, L_4, Dictionary_2_get_Item_mACA918234BA0F532B920473BDEA1FF7ECA7B661E_RuntimeMethod_var);
		bool L_6 = ___1_isPressed;
		L_5->___prevPressedState_1 = L_6;
		// }
		return;
	}
}
// System.Boolean WebXR.WebXRController::GetButtonDown(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WebXRController_GetButtonDown_m1BDE2FA67139C2899A255E8C6D2D161402EB23C2 (WebXRController_tC38659B5E868FEA08E58A5545C4E4E4F580C3E00* __this, String_t* ___0_action, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m512CCA5A31AF4575B55ECBF1812BA4B30D234A5D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m40DE32B911D52B14FCBD8D0E32115896C11F680E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_mA59CEDFE276B79C881D812BAB43EF431A2A83B0F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_mFC2EEAA8205C3511A709F83830EC3EB6D20C274C_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Enumerator_t5EF3D06F517CDA2C7A90D848426233694DAFBF5F V_0;
	memset((&V_0), 0, sizeof(V_0));
	WebXRControllerInput_tEB1C3FF36D9B0345E3BDFF3F176B73417C6240A5* V_1 = NULL;
	bool V_2 = false;
	{
		// if (isPresent())
		bool L_0;
		L_0 = WebXRController_isPresent_mB8F946F5D1A8DBC827A03342A2DEA39562B31B5D(NULL);
		if (!L_0)
		{
			goto IL_005f;
		}
	}
	{
		// foreach (WebXRControllerInput input in inputMap.inputs)
		WebXRControllerInputMap_t67BEC24BFDB103FC8E9E6C9C831B3A6A6999BC2D* L_1 = __this->___inputMap_5;
		List_1_t2BFBC1DB68FFD3343B759CE0D3A12CDA27906246* L_2 = L_1->___inputs_4;
		Enumerator_t5EF3D06F517CDA2C7A90D848426233694DAFBF5F L_3;
		L_3 = List_1_GetEnumerator_mFC2EEAA8205C3511A709F83830EC3EB6D20C274C(L_2, List_1_GetEnumerator_mFC2EEAA8205C3511A709F83830EC3EB6D20C274C_RuntimeMethod_var);
		V_0 = L_3;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0051:
			{// begin finally (depth: 1)
				Enumerator_Dispose_m512CCA5A31AF4575B55ECBF1812BA4B30D234A5D((&V_0), Enumerator_Dispose_m512CCA5A31AF4575B55ECBF1812BA4B30D234A5D_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0046_1;
			}

IL_001a_1:
			{
				// foreach (WebXRControllerInput input in inputMap.inputs)
				WebXRControllerInput_tEB1C3FF36D9B0345E3BDFF3F176B73417C6240A5* L_4;
				L_4 = Enumerator_get_Current_mA59CEDFE276B79C881D812BAB43EF431A2A83B0F_inline((&V_0), Enumerator_get_Current_mA59CEDFE276B79C881D812BAB43EF431A2A83B0F_RuntimeMethod_var);
				V_1 = L_4;
				// if (action == input.actionName && input.unityInputIsButton)
				String_t* L_5 = ___0_action;
				WebXRControllerInput_tEB1C3FF36D9B0345E3BDFF3F176B73417C6240A5* L_6 = V_1;
				String_t* L_7 = L_6->___actionName_0;
				bool L_8;
				L_8 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_5, L_7, NULL);
				if (!L_8)
				{
					goto IL_0046_1;
				}
			}
			{
				WebXRControllerInput_tEB1C3FF36D9B0345E3BDFF3F176B73417C6240A5* L_9 = V_1;
				bool L_10 = L_9->___unityInputIsButton_4;
				if (!L_10)
				{
					goto IL_0046_1;
				}
			}
			{
				// return Input.GetButtonDown(input.unityInputName);
				WebXRControllerInput_tEB1C3FF36D9B0345E3BDFF3F176B73417C6240A5* L_11 = V_1;
				String_t* L_12 = L_11->___unityInputName_3;
				bool L_13;
				L_13 = Input_GetButtonDown_mEF5F80C9E8F04104E807D9CBD6F70CDB98751579(L_12, NULL);
				V_2 = L_13;
				goto IL_007d;
			}

IL_0046_1:
			{
				// foreach (WebXRControllerInput input in inputMap.inputs)
				bool L_14;
				L_14 = Enumerator_MoveNext_m40DE32B911D52B14FCBD8D0E32115896C11F680E((&V_0), Enumerator_MoveNext_m40DE32B911D52B14FCBD8D0E32115896C11F680E_RuntimeMethod_var);
				if (L_14)
				{
					goto IL_001a_1;
				}
			}
			{
				goto IL_005f;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_005f:
	{
		// if (GetButton(action) && !GetPastButtonState(action))
		String_t* L_15 = ___0_action;
		bool L_16;
		L_16 = WebXRController_GetButton_m1BA75CEA433EA6EBCDA7DAFEBE86D20712EA7701(__this, L_15, NULL);
		if (!L_16)
		{
			goto IL_007b;
		}
	}
	{
		String_t* L_17 = ___0_action;
		bool L_18;
		L_18 = WebXRController_GetPastButtonState_m96030F5679C82F04DFE16D94BE4C3F63FC9C6869(__this, L_17, NULL);
		if (L_18)
		{
			goto IL_007b;
		}
	}
	{
		// SetPastButtonState(action, true);
		String_t* L_19 = ___0_action;
		WebXRController_SetPastButtonState_mE6FE471C52C58055E862BB1CD59557CBEAB260D3(__this, L_19, (bool)1, NULL);
		// return true;
		return (bool)1;
	}

IL_007b:
	{
		// return false;
		return (bool)0;
	}

IL_007d:
	{
		// }
		bool L_20 = V_2;
		return L_20;
	}
}
// System.Boolean WebXR.WebXRController::GetButtonUp(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WebXRController_GetButtonUp_mFF5155DA8E26AF89D2808CF38BA7269522E72E7D (WebXRController_tC38659B5E868FEA08E58A5545C4E4E4F580C3E00* __this, String_t* ___0_action, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m512CCA5A31AF4575B55ECBF1812BA4B30D234A5D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m40DE32B911D52B14FCBD8D0E32115896C11F680E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_mA59CEDFE276B79C881D812BAB43EF431A2A83B0F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_mFC2EEAA8205C3511A709F83830EC3EB6D20C274C_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Enumerator_t5EF3D06F517CDA2C7A90D848426233694DAFBF5F V_0;
	memset((&V_0), 0, sizeof(V_0));
	WebXRControllerInput_tEB1C3FF36D9B0345E3BDFF3F176B73417C6240A5* V_1 = NULL;
	bool V_2 = false;
	{
		// if (isPresent())
		bool L_0;
		L_0 = WebXRController_isPresent_mB8F946F5D1A8DBC827A03342A2DEA39562B31B5D(NULL);
		if (!L_0)
		{
			goto IL_005f;
		}
	}
	{
		// foreach (WebXRControllerInput input in inputMap.inputs)
		WebXRControllerInputMap_t67BEC24BFDB103FC8E9E6C9C831B3A6A6999BC2D* L_1 = __this->___inputMap_5;
		List_1_t2BFBC1DB68FFD3343B759CE0D3A12CDA27906246* L_2 = L_1->___inputs_4;
		Enumerator_t5EF3D06F517CDA2C7A90D848426233694DAFBF5F L_3;
		L_3 = List_1_GetEnumerator_mFC2EEAA8205C3511A709F83830EC3EB6D20C274C(L_2, List_1_GetEnumerator_mFC2EEAA8205C3511A709F83830EC3EB6D20C274C_RuntimeMethod_var);
		V_0 = L_3;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0051:
			{// begin finally (depth: 1)
				Enumerator_Dispose_m512CCA5A31AF4575B55ECBF1812BA4B30D234A5D((&V_0), Enumerator_Dispose_m512CCA5A31AF4575B55ECBF1812BA4B30D234A5D_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0046_1;
			}

IL_001a_1:
			{
				// foreach (WebXRControllerInput input in inputMap.inputs)
				WebXRControllerInput_tEB1C3FF36D9B0345E3BDFF3F176B73417C6240A5* L_4;
				L_4 = Enumerator_get_Current_mA59CEDFE276B79C881D812BAB43EF431A2A83B0F_inline((&V_0), Enumerator_get_Current_mA59CEDFE276B79C881D812BAB43EF431A2A83B0F_RuntimeMethod_var);
				V_1 = L_4;
				// if (action == input.actionName && input.unityInputIsButton)
				String_t* L_5 = ___0_action;
				WebXRControllerInput_tEB1C3FF36D9B0345E3BDFF3F176B73417C6240A5* L_6 = V_1;
				String_t* L_7 = L_6->___actionName_0;
				bool L_8;
				L_8 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_5, L_7, NULL);
				if (!L_8)
				{
					goto IL_0046_1;
				}
			}
			{
				WebXRControllerInput_tEB1C3FF36D9B0345E3BDFF3F176B73417C6240A5* L_9 = V_1;
				bool L_10 = L_9->___unityInputIsButton_4;
				if (!L_10)
				{
					goto IL_0046_1;
				}
			}
			{
				// return Input.GetButtonUp(input.unityInputName);
				WebXRControllerInput_tEB1C3FF36D9B0345E3BDFF3F176B73417C6240A5* L_11 = V_1;
				String_t* L_12 = L_11->___unityInputName_3;
				bool L_13;
				L_13 = Input_GetButtonUp_mEE713E86F1A024762EFED092BC59F3478E786601(L_12, NULL);
				V_2 = L_13;
				goto IL_007d;
			}

IL_0046_1:
			{
				// foreach (WebXRControllerInput input in inputMap.inputs)
				bool L_14;
				L_14 = Enumerator_MoveNext_m40DE32B911D52B14FCBD8D0E32115896C11F680E((&V_0), Enumerator_MoveNext_m40DE32B911D52B14FCBD8D0E32115896C11F680E_RuntimeMethod_var);
				if (L_14)
				{
					goto IL_001a_1;
				}
			}
			{
				goto IL_005f;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_005f:
	{
		// if (!GetButton(action) && GetPastButtonState(action))
		String_t* L_15 = ___0_action;
		bool L_16;
		L_16 = WebXRController_GetButton_m1BA75CEA433EA6EBCDA7DAFEBE86D20712EA7701(__this, L_15, NULL);
		if (L_16)
		{
			goto IL_007b;
		}
	}
	{
		String_t* L_17 = ___0_action;
		bool L_18;
		L_18 = WebXRController_GetPastButtonState_m96030F5679C82F04DFE16D94BE4C3F63FC9C6869(__this, L_17, NULL);
		if (!L_18)
		{
			goto IL_007b;
		}
	}
	{
		// SetPastButtonState(action, false);
		String_t* L_19 = ___0_action;
		WebXRController_SetPastButtonState_mE6FE471C52C58055E862BB1CD59557CBEAB260D3(__this, L_19, (bool)0, NULL);
		// return true;
		return (bool)1;
	}

IL_007b:
	{
		// return false;
		return (bool)0;
	}

IL_007d:
	{
		// }
		bool L_20 = V_2;
		return L_20;
	}
}
// System.Void WebXR.WebXRController::onHeadsetUpdate(UnityEngine.Matrix4x4,UnityEngine.Matrix4x4,UnityEngine.Matrix4x4,UnityEngine.Matrix4x4,UnityEngine.Matrix4x4)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebXRController_onHeadsetUpdate_m11129E09B21B01AD20D46EDEB3C7DE2C2FCCCA91 (WebXRController_tC38659B5E868FEA08E58A5545C4E4E4F580C3E00* __this, Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___0_leftProjectionMatrix, Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___1_rightProjectionMatrix, Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___2_leftViewMatrix, Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___3_rightViewMatrix, Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___4_sitStandMatrix, const RuntimeMethod* method) 
{
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// Matrix4x4 trs = WebXRMatrixUtil.TransformViewMatrixToTRS(leftViewMatrix);
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_0 = ___2_leftViewMatrix;
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_1;
		L_1 = WebXRMatrixUtil_TransformViewMatrixToTRS_m303E5C9A404ECF6FC1DDA8A1646387755FF498D4(L_0, NULL);
		V_0 = L_1;
		// this.headRotation = WebXRMatrixUtil.GetRotationFromMatrix(trs);
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_2 = V_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_3;
		L_3 = WebXRMatrixUtil_GetRotationFromMatrix_mD97F23887954792F3243A9990380ACD696959326(L_2, NULL);
		__this->___headRotation_12 = L_3;
		// this.headPosition = WebXRMatrixUtil.GetTranslationFromMatrix(trs);
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_4 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		L_5 = WebXRMatrixUtil_GetTranslationFromMatrix_m48FDCE8DCD761A56470C3C852FE3EEB292B25389(L_4, NULL);
		__this->___headPosition_13 = L_5;
		// this.sitStand = sitStandMatrix;
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_6 = ___4_sitStandMatrix;
		__this->___sitStand_9 = L_6;
		// }
		return;
	}
}
// System.Void WebXR.WebXRController::onControllerUpdate(System.String,System.Int32,System.String,System.Boolean,System.Boolean,UnityEngine.Quaternion,UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3,WebXR.WebXRControllerButton[],System.Single[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebXRController_onControllerUpdate_mECC0C70F4DC20EAACFE251F6167EC6FB46331528 (WebXRController_tC38659B5E868FEA08E58A5545C4E4E4F580C3E00* __this, String_t* ___0_id, int32_t ___1_index, String_t* ___2_handValue, bool ___3_hasOrientation, bool ___4_hasPosition, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___5_orientation, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___6_position, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___7_linearAcceleration, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___8_linearVelocity, WebXRControllerButtonU5BU5D_t915FA50DD1DD06576264ABAC3FC33CA4B0FF1A75* ___9_buttonValues, SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___10_axesValues, const RuntimeMethod* method) 
{
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// if (handFromString(handValue) != hand) return;
		String_t* L_0 = ___2_handValue;
		int32_t L_1;
		L_1 = WebXRController_handFromString_m3F50089B9A5432DA9B841CF9442FF24DC37D8887(__this, L_0, NULL);
		int32_t L_2 = __this->___hand_4;
		if ((((int32_t)L_1) == ((int32_t)L_2)))
		{
			goto IL_0010;
		}
	}
	{
		// if (handFromString(handValue) != hand) return;
		return;
	}

IL_0010:
	{
		// SetVisible(true);
		WebXRController_SetVisible_m58E9FD81E788AAC90946E02D3E2DC5B0E5F08C80(__this, (bool)1, NULL);
		// Quaternion sitStandRotation = WebXRMatrixUtil.GetRotationFromMatrix(sitStand);
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_3 = __this->___sitStand_9;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_4;
		L_4 = WebXRMatrixUtil_GetRotationFromMatrix_mD97F23887954792F3243A9990380ACD696959326(L_3, NULL);
		// Quaternion rotation = sitStandRotation * orientation;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_5 = ___5_orientation;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_6;
		L_6 = Quaternion_op_Multiply_mCB375FCCC12A2EC8F9EB824A1BFB4453B58C2012_inline(L_4, L_5, NULL);
		V_0 = L_6;
		// if (!hasPosition || simulate3dof)
		bool L_7 = ___4_hasPosition;
		if (!L_7)
		{
			goto IL_0036;
		}
	}
	{
		bool L_8 = __this->___simulate3dof_6;
		if (!L_8)
		{
			goto IL_0058;
		}
	}

IL_0036:
	{
		// position = applyArmModel(
		//     sitStand.MultiplyPoint(headPosition),
		//     rotation,
		//     headRotation);
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6* L_9 = (&__this->___sitStand_9);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = __this->___headPosition_13;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11;
		L_11 = Matrix4x4_MultiplyPoint_m20E910B65693559BFDE99382472D8DD02C862E7E(L_9, L_10, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_12 = V_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_13 = __this->___headRotation_12;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_14;
		L_14 = WebXRController_applyArmModel_mB63EC58519028C110BFF6D0EE9A9197BAF19681B(__this, L_11, L_12, L_13, NULL);
		___6_position = L_14;
		goto IL_0067;
	}

IL_0058:
	{
		// position = sitStand.MultiplyPoint(position);
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6* L_15 = (&__this->___sitStand_9);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_16 = ___6_position;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_17;
		L_17 = Matrix4x4_MultiplyPoint_m20E910B65693559BFDE99382472D8DD02C862E7E(L_15, L_16, NULL);
		___6_position = L_17;
	}

IL_0067:
	{
		// _t.localPosition = position;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_18 = __this->____t_14;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_19 = ___6_position;
		Transform_set_localPosition_mDE1C997F7D79C0885210B7732B4BA50EE7D73134(L_18, L_19, NULL);
		// _t.localRotation = rotation;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_20 = __this->____t_14;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_21 = V_0;
		Transform_set_localRotation_mAB4A011D134BA58AB780BECC0025CA65F16185FA(L_20, L_21, NULL);
		// UpdateButtons(buttonValues);
		WebXRControllerButtonU5BU5D_t915FA50DD1DD06576264ABAC3FC33CA4B0FF1A75* L_22 = ___9_buttonValues;
		WebXRController_UpdateButtons_mFC7CCB1D955E6270CB737D8A84A7B8B5D22EF729(__this, L_22, NULL);
		// axes = axesValues;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_23 = ___10_axesValues;
		__this->___axes_10 = L_23;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___axes_10), (void*)L_23);
		// }
		return;
	}
}
// WebXR.WebXRControllerHand WebXR.WebXRController::handFromString(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t WebXRController_handFromString_m3F50089B9A5432DA9B841CF9442FF24DC37D8887 (WebXRController_tC38659B5E868FEA08E58A5545C4E4E4F580C3E00* __this, String_t* ___0_handValue, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebXRControllerHand_t135DFE022C985E1CC7FCA38F02BE5ED51D36EB89_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebXRControllerHand_t135DFE022C985E1CC7FCA38F02BE5ED51D36EB89_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		// if (String.IsNullOrEmpty(handValue)) return WebXRControllerHand.NONE;
		String_t* L_0 = ___0_handValue;
		bool L_1;
		L_1 = String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478(L_0, NULL);
		if (!L_1)
		{
			goto IL_000a;
		}
	}
	{
		// if (String.IsNullOrEmpty(handValue)) return WebXRControllerHand.NONE;
		return (int32_t)(0);
	}

IL_000a:
	{
	}
	try
	{// begin try (depth: 1)
		// return (WebXRControllerHand) Enum.Parse(typeof(WebXRControllerHand), handValue.ToUpper(), true);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (WebXRControllerHand_t135DFE022C985E1CC7FCA38F02BE5ED51D36EB89_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		String_t* L_4 = ___0_handValue;
		String_t* L_5;
		L_5 = String_ToUpper_m5F499BC30C2A5F5C96248B4C3D1A3B4694748B49(L_4, NULL);
		il2cpp_codegen_runtime_class_init_inline(Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_il2cpp_TypeInfo_var);
		RuntimeObject* L_6;
		L_6 = Enum_Parse_m0316ABE916ED60AA2257A464A33A33D544EDEE12(L_3, L_5, (bool)1, NULL);
		V_0 = ((*(int32_t*)((int32_t*)(int32_t*)UnBox(L_6, WebXRControllerHand_t135DFE022C985E1CC7FCA38F02BE5ED51D36EB89_il2cpp_TypeInfo_var))));
		goto IL_0043;
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0029;
		}
		throw e;
	}

CATCH_0029:
	{// begin catch(System.Object)
		// catch
		// Debug.LogError("Unrecognized controller Hand '" + handValue + "'!");
		String_t* L_7 = ___0_handValue;
		String_t* L_8;
		L_8 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral9FDBA6AB478A7CC49400B0629D6BF8F2179A0631)), L_7, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralA71835C02B0068E7EB5DB4C34281E4F9F69A9471)), NULL);
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var)));
		Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(L_8, NULL);
		// }
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0041;
	}// end catch (depth: 1)

IL_0041:
	{
		// return WebXRControllerHand.NONE;
		return (int32_t)(0);
	}

IL_0043:
	{
		// }
		int32_t L_9 = V_0;
		return L_9;
	}
}
// System.Void WebXR.WebXRController::SetVisible(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebXRController_SetVisible_m58E9FD81E788AAC90946E02D3E2DC5B0E5F08C80 (WebXRController_tC38659B5E868FEA08E58A5545C4E4E4F580C3E00* __this, bool ___0_visible, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponentsInChildren_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_m35AC34F858BD2F34770712CD020AA0518D9409C7_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	RendererU5BU5D_t32FDD782F67917B2291EA4FF242719877440A02A* V_0 = NULL;
	int32_t V_1 = 0;
	{
		// Renderer[] rendererComponents = GetComponentsInChildren<Renderer>();
		RendererU5BU5D_t32FDD782F67917B2291EA4FF242719877440A02A* L_0;
		L_0 = Component_GetComponentsInChildren_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_m35AC34F858BD2F34770712CD020AA0518D9409C7(__this, Component_GetComponentsInChildren_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_m35AC34F858BD2F34770712CD020AA0518D9409C7_RuntimeMethod_var);
		// foreach (Renderer component in rendererComponents)
		V_0 = L_0;
		V_1 = 0;
		goto IL_0018;
	}

IL_000b:
	{
		// foreach (Renderer component in rendererComponents)
		RendererU5BU5D_t32FDD782F67917B2291EA4FF242719877440A02A* L_1 = V_0;
		int32_t L_2 = V_1;
		int32_t L_3 = L_2;
		Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* L_4 = (L_1)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_3));
		// component.enabled = visible;
		bool L_5 = ___0_visible;
		Renderer_set_enabled_m015E6D7B825528A31182F267234CC6A925F71DA8(L_4, L_5, NULL);
		int32_t L_6 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_6, 1));
	}

IL_0018:
	{
		// foreach (Renderer component in rendererComponents)
		int32_t L_7 = V_1;
		RendererU5BU5D_t32FDD782F67917B2291EA4FF242719877440A02A* L_8 = V_0;
		if ((((int32_t)L_7) < ((int32_t)((int32_t)(((RuntimeArray*)L_8)->max_length)))))
		{
			goto IL_000b;
		}
	}
	{
		// }
		return;
	}
}
// UnityEngine.Vector3 WebXR.WebXRController::applyArmModel(UnityEngine.Vector3,UnityEngine.Quaternion,UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 WebXRController_applyArmModel_mB63EC58519028C110BFF6D0EE9A9197BAF19681B (WebXRController_tC38659B5E868FEA08E58A5545C4E4E4F580C3E00* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_controllerPosition, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___1_controllerRotation, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___2_headRotation, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	float G_B4_0 = 0.0f;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* G_B4_1 = NULL;
	float G_B1_0 = 0.0f;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* G_B1_1 = NULL;
	float G_B3_0 = 0.0f;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* G_B3_1 = NULL;
	float G_B2_0 = 0.0f;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* G_B2_1 = NULL;
	int32_t G_B5_0 = 0;
	float G_B5_1 = 0.0f;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* G_B5_2 = NULL;
	{
		// Vector3 deltaControllerPosition = new Vector3(
		//     this.eyesToElbow.x * (this.hand == WebXRControllerHand.LEFT ? -1 :
		//         this.hand == WebXRControllerHand.RIGHT ? 1 : 0),
		//     this.eyesToElbow.y,
		//     this.eyesToElbow.z);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_0 = (&__this->___eyesToElbow_7);
		float L_1 = L_0->___x_2;
		int32_t L_2 = __this->___hand_4;
		G_B1_0 = L_1;
		G_B1_1 = (&V_0);
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			G_B4_0 = L_1;
			G_B4_1 = (&V_0);
			goto IL_0025;
		}
	}
	{
		int32_t L_3 = __this->___hand_4;
		G_B2_0 = G_B1_0;
		G_B2_1 = G_B1_1;
		if ((((int32_t)L_3) == ((int32_t)2)))
		{
			G_B3_0 = G_B1_0;
			G_B3_1 = G_B1_1;
			goto IL_0022;
		}
	}
	{
		G_B5_0 = 0;
		G_B5_1 = G_B2_0;
		G_B5_2 = G_B2_1;
		goto IL_0026;
	}

IL_0022:
	{
		G_B5_0 = 1;
		G_B5_1 = G_B3_0;
		G_B5_2 = G_B3_1;
		goto IL_0026;
	}

IL_0025:
	{
		G_B5_0 = (-1);
		G_B5_1 = G_B4_0;
		G_B5_2 = G_B4_1;
	}

IL_0026:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_4 = (&__this->___eyesToElbow_7);
		float L_5 = L_4->___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_6 = (&__this->___eyesToElbow_7);
		float L_7 = L_6->___z_4;
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline(G_B5_2, ((float)il2cpp_codegen_multiply(G_B5_1, ((float)G_B5_0))), L_5, L_7, NULL);
		// Quaternion headYRotation = Quaternion.Euler(0, headRotation.eulerAngles.y, 0);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8;
		L_8 = Quaternion_get_eulerAngles_m2DB5158B5C3A71FD60FC8A6EE43D3AAA1CFED122_inline((&___2_headRotation), NULL);
		float L_9 = L_8.___y_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_10;
		L_10 = Quaternion_Euler_m9262AB29E3E9CE94EF71051F38A28E82AEC73F90_inline((0.0f), L_9, (0.0f), NULL);
		// deltaControllerPosition = (headYRotation * deltaControllerPosition);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		L_12 = Quaternion_op_Multiply_mE1EBA73F9173432B50F8F17CE8190C5A7986FB8C(L_10, L_11, NULL);
		V_0 = L_12;
		// controllerPosition += deltaControllerPosition;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13 = ___0_controllerPosition;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_14 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_15;
		L_15 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_13, L_14, NULL);
		___0_controllerPosition = L_15;
		// deltaControllerPosition.Set(this.elbowHand.x, this.elbowHand.y, this.elbowHand.z);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_16 = (&__this->___elbowHand_8);
		float L_17 = L_16->___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_18 = (&__this->___elbowHand_8);
		float L_19 = L_18->___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_20 = (&__this->___elbowHand_8);
		float L_21 = L_20->___z_4;
		Vector3_Set_m1C7E543216734FB513F9CEBA44C50E6FC2AFD49D_inline((&V_0), L_17, L_19, L_21, NULL);
		// deltaControllerPosition =
		//     Quaternion.Euler(controllerRotation.eulerAngles.x, controllerRotation.eulerAngles.y, 0) *
		//     deltaControllerPosition;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_22;
		L_22 = Quaternion_get_eulerAngles_m2DB5158B5C3A71FD60FC8A6EE43D3AAA1CFED122_inline((&___1_controllerRotation), NULL);
		float L_23 = L_22.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_24;
		L_24 = Quaternion_get_eulerAngles_m2DB5158B5C3A71FD60FC8A6EE43D3AAA1CFED122_inline((&___1_controllerRotation), NULL);
		float L_25 = L_24.___y_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_26;
		L_26 = Quaternion_Euler_m9262AB29E3E9CE94EF71051F38A28E82AEC73F90_inline(L_23, L_25, (0.0f), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_27 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_28;
		L_28 = Quaternion_op_Multiply_mE1EBA73F9173432B50F8F17CE8190C5A7986FB8C(L_26, L_27, NULL);
		V_0 = L_28;
		// controllerPosition += deltaControllerPosition;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_29 = ___0_controllerPosition;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_30 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_31;
		L_31 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_29, L_30, NULL);
		___0_controllerPosition = L_31;
		// return controllerPosition;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_32 = ___0_controllerPosition;
		return L_32;
	}
}
// System.Void WebXR.WebXRController::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebXRController_Update_m9D99F7A98572B91F96A81E24B7C2086B0CDA52D8 (WebXRController_tC38659B5E868FEA08E58A5545C4E4E4F580C3E00* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m512CCA5A31AF4575B55ECBF1812BA4B30D234A5D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m40DE32B911D52B14FCBD8D0E32115896C11F680E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_mA59CEDFE276B79C881D812BAB43EF431A2A83B0F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_mFC2EEAA8205C3511A709F83830EC3EB6D20C274C_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Enumerator_t5EF3D06F517CDA2C7A90D848426233694DAFBF5F V_0;
	memset((&V_0), 0, sizeof(V_0));
	WebXRControllerInput_tEB1C3FF36D9B0345E3BDFF3F176B73417C6240A5* V_1 = NULL;
	{
		// if (!isPresent()) return;
		bool L_0;
		L_0 = WebXRController_isPresent_mB8F946F5D1A8DBC827A03342A2DEA39562B31B5D(NULL);
		if (L_0)
		{
			goto IL_0008;
		}
	}
	{
		// if (!isPresent()) return;
		return;
	}

IL_0008:
	{
		// SetVisible(true);
		WebXRController_SetVisible_m58E9FD81E788AAC90946E02D3E2DC5B0E5F08C80(__this, (bool)1, NULL);
		// if (this.hand == WebXRControllerHand.LEFT)
		int32_t L_1 = __this->___hand_4;
		if ((!(((uint32_t)L_1) == ((uint32_t)1))))
		{
			goto IL_001f;
		}
	}
	{
		// handNode = XRNode.LeftHand;
		__this->___handNode_11 = 4;
	}

IL_001f:
	{
		// if (this.hand == WebXRControllerHand.RIGHT)
		int32_t L_2 = __this->___hand_4;
		if ((!(((uint32_t)L_2) == ((uint32_t)2))))
		{
			goto IL_002f;
		}
	}
	{
		// handNode = XRNode.RightHand;
		__this->___handNode_11 = 5;
	}

IL_002f:
	{
		// if (this.simulate3dof)
		bool L_3 = __this->___simulate3dof_6;
		if (!L_3)
		{
			goto IL_0077;
		}
	}
	{
		// _t.localPosition = applyArmModel(
		//     InputTracking.GetLocalPosition(XRNode.Head), // we use head position as origin
		//     InputTracking.GetLocalRotation(handNode),
		//     InputTracking.GetLocalRotation(XRNode.Head));
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4 = __this->____t_14;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		L_5 = InputTracking_GetLocalPosition_m0753549019EB2F0675886E94F237DA9E456EC31D(3, NULL);
		int32_t L_6 = __this->___handNode_11;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_7;
		L_7 = InputTracking_GetLocalRotation_m25C883320022BBF4B0F2DF6B1449CDB69DCF7E5A(L_6, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_8;
		L_8 = InputTracking_GetLocalRotation_m25C883320022BBF4B0F2DF6B1449CDB69DCF7E5A(3, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		L_9 = WebXRController_applyArmModel_mB63EC58519028C110BFF6D0EE9A9197BAF19681B(__this, L_5, L_7, L_8, NULL);
		Transform_set_localPosition_mDE1C997F7D79C0885210B7732B4BA50EE7D73134(L_4, L_9, NULL);
		// _t.localRotation = InputTracking.GetLocalRotation(handNode);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_10 = __this->____t_14;
		int32_t L_11 = __this->___handNode_11;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_12;
		L_12 = InputTracking_GetLocalRotation_m25C883320022BBF4B0F2DF6B1449CDB69DCF7E5A(L_11, NULL);
		Transform_set_localRotation_mAB4A011D134BA58AB780BECC0025CA65F16185FA(L_10, L_12, NULL);
		goto IL_00a3;
	}

IL_0077:
	{
		// _t.localPosition = InputTracking.GetLocalPosition(handNode);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_13 = __this->____t_14;
		int32_t L_14 = __this->___handNode_11;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_15;
		L_15 = InputTracking_GetLocalPosition_m0753549019EB2F0675886E94F237DA9E456EC31D(L_14, NULL);
		Transform_set_localPosition_mDE1C997F7D79C0885210B7732B4BA50EE7D73134(L_13, L_15, NULL);
		// _t.localRotation = InputTracking.GetLocalRotation(handNode);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_16 = __this->____t_14;
		int32_t L_17 = __this->___handNode_11;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_18;
		L_18 = InputTracking_GetLocalRotation_m25C883320022BBF4B0F2DF6B1449CDB69DCF7E5A(L_17, NULL);
		Transform_set_localRotation_mAB4A011D134BA58AB780BECC0025CA65F16185FA(L_16, L_18, NULL);
	}

IL_00a3:
	{
		// foreach (WebXRControllerInput input in inputMap.inputs)
		WebXRControllerInputMap_t67BEC24BFDB103FC8E9E6C9C831B3A6A6999BC2D* L_19 = __this->___inputMap_5;
		List_1_t2BFBC1DB68FFD3343B759CE0D3A12CDA27906246* L_20 = L_19->___inputs_4;
		Enumerator_t5EF3D06F517CDA2C7A90D848426233694DAFBF5F L_21;
		L_21 = List_1_GetEnumerator_mFC2EEAA8205C3511A709F83830EC3EB6D20C274C(L_20, List_1_GetEnumerator_mFC2EEAA8205C3511A709F83830EC3EB6D20C274C_RuntimeMethod_var);
		V_0 = L_21;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0125:
			{// begin finally (depth: 1)
				Enumerator_Dispose_m512CCA5A31AF4575B55ECBF1812BA4B30D234A5D((&V_0), Enumerator_Dispose_m512CCA5A31AF4575B55ECBF1812BA4B30D234A5D_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_011a_1;
			}

IL_00b6_1:
			{
				// foreach (WebXRControllerInput input in inputMap.inputs)
				WebXRControllerInput_tEB1C3FF36D9B0345E3BDFF3F176B73417C6240A5* L_22;
				L_22 = Enumerator_get_Current_mA59CEDFE276B79C881D812BAB43EF431A2A83B0F_inline((&V_0), Enumerator_get_Current_mA59CEDFE276B79C881D812BAB43EF431A2A83B0F_RuntimeMethod_var);
				V_1 = L_22;
				// if (!input.unityInputIsButton)
				WebXRControllerInput_tEB1C3FF36D9B0345E3BDFF3F176B73417C6240A5* L_23 = V_1;
				bool L_24 = L_23->___unityInputIsButton_4;
				if (L_24)
				{
					goto IL_011a_1;
				}
			}
			{
				// if (Input.GetAxis(input.unityInputName) != 0)
				WebXRControllerInput_tEB1C3FF36D9B0345E3BDFF3F176B73417C6240A5* L_25 = V_1;
				String_t* L_26 = L_25->___unityInputName_3;
				float L_27;
				L_27 = Input_GetAxis_m10372E6C5FF591668D2DC5F58C58D213CC598A62(L_26, NULL);
				if ((((float)L_27) == ((float)(0.0f))))
				{
					goto IL_00f0_1;
				}
			}
			{
				// SetButtonState(input.actionName, true, Input.GetAxis(input.unityInputName));
				WebXRControllerInput_tEB1C3FF36D9B0345E3BDFF3F176B73417C6240A5* L_28 = V_1;
				String_t* L_29 = L_28->___actionName_0;
				WebXRControllerInput_tEB1C3FF36D9B0345E3BDFF3F176B73417C6240A5* L_30 = V_1;
				String_t* L_31 = L_30->___unityInputName_3;
				float L_32;
				L_32 = Input_GetAxis_m10372E6C5FF591668D2DC5F58C58D213CC598A62(L_31, NULL);
				WebXRController_SetButtonState_mC85E87E84B97613BDD7763BC73FA1D8CFF722968(__this, L_29, (bool)1, L_32, NULL);
			}

IL_00f0_1:
			{
				// if (Input.GetAxis(input.unityInputName) < 1)
				WebXRControllerInput_tEB1C3FF36D9B0345E3BDFF3F176B73417C6240A5* L_33 = V_1;
				String_t* L_34 = L_33->___unityInputName_3;
				float L_35;
				L_35 = Input_GetAxis_m10372E6C5FF591668D2DC5F58C58D213CC598A62(L_34, NULL);
				if ((!(((float)L_35) < ((float)(1.0f)))))
				{
					goto IL_011a_1;
				}
			}
			{
				// SetButtonState(input.actionName, false, Input.GetAxis(input.unityInputName));
				WebXRControllerInput_tEB1C3FF36D9B0345E3BDFF3F176B73417C6240A5* L_36 = V_1;
				String_t* L_37 = L_36->___actionName_0;
				WebXRControllerInput_tEB1C3FF36D9B0345E3BDFF3F176B73417C6240A5* L_38 = V_1;
				String_t* L_39 = L_38->___unityInputName_3;
				float L_40;
				L_40 = Input_GetAxis_m10372E6C5FF591668D2DC5F58C58D213CC598A62(L_39, NULL);
				WebXRController_SetButtonState_mC85E87E84B97613BDD7763BC73FA1D8CFF722968(__this, L_37, (bool)0, L_40, NULL);
			}

IL_011a_1:
			{
				// foreach (WebXRControllerInput input in inputMap.inputs)
				bool L_41;
				L_41 = Enumerator_MoveNext_m40DE32B911D52B14FCBD8D0E32115896C11F680E((&V_0), Enumerator_MoveNext_m40DE32B911D52B14FCBD8D0E32115896C11F680E_RuntimeMethod_var);
				if (L_41)
				{
					goto IL_00b6_1;
				}
			}
			{
				goto IL_0133;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0133:
	{
		// }
		return;
	}
}
// System.Void WebXR.WebXRController::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebXRController_Awake_m6935B5A109559F416427948665E0F392350853F8 (WebXRController_tC38659B5E868FEA08E58A5545C4E4E4F580C3E00* __this, const RuntimeMethod* method) 
{
	{
		// _t = transform;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		__this->____t_14 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____t_14), (void*)L_0);
		// }
		return;
	}
}
// System.Void WebXR.WebXRController::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebXRController_OnEnable_mE34A789D462CBE4206D35FBA516A7A8F01C1751C (WebXRController_tC38659B5E868FEA08E58A5545C4E4E4F580C3E00* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ControllerUpdate_t741280F157DF9254D489FE93F944F0AF7385B8C8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HeadsetUpdate_t6F11CEB0407C23E09526E0AECA3A6AAFA4A514D1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebXRController_onControllerUpdate_mECC0C70F4DC20EAACFE251F6167EC6FB46331528_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebXRController_onHeadsetUpdate_m11129E09B21B01AD20D46EDEB3C7DE2C2FCCCA91_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebXRManager_t8B31929B8D585AA72A11F9FC2102C0EAB24152E3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3ACC69ABB93D15C18291BF00FB369D423D71000A);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (inputMap == null)
		WebXRControllerInputMap_t67BEC24BFDB103FC8E9E6C9C831B3A6A6999BC2D* L_0 = __this->___inputMap_5;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_0019;
		}
	}
	{
		// Debug.LogError("A Input Map must be assigned to WebXRController!");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(_stringLiteral3ACC69ABB93D15C18291BF00FB369D423D71000A, NULL);
		// return;
		return;
	}

IL_0019:
	{
		// WebXRManager.Instance.OnControllerUpdate += onControllerUpdate;
		il2cpp_codegen_runtime_class_init_inline(WebXRManager_t8B31929B8D585AA72A11F9FC2102C0EAB24152E3_il2cpp_TypeInfo_var);
		WebXRManager_t8B31929B8D585AA72A11F9FC2102C0EAB24152E3* L_2;
		L_2 = WebXRManager_get_Instance_mE22A89D450041A30C1EEB4AD9631BD2278E1F89C(NULL);
		ControllerUpdate_t741280F157DF9254D489FE93F944F0AF7385B8C8* L_3 = (ControllerUpdate_t741280F157DF9254D489FE93F944F0AF7385B8C8*)il2cpp_codegen_object_new(ControllerUpdate_t741280F157DF9254D489FE93F944F0AF7385B8C8_il2cpp_TypeInfo_var);
		ControllerUpdate__ctor_m21815015FFA90D03C294DD4D918D732EA1782DC7(L_3, __this, (intptr_t)((void*)WebXRController_onControllerUpdate_mECC0C70F4DC20EAACFE251F6167EC6FB46331528_RuntimeMethod_var), NULL);
		WebXRManager_add_OnControllerUpdate_m6142FD4CC4ABEC31A29B8E3EC6A865BD31F2EB21(L_2, L_3, NULL);
		// WebXRManager.Instance.OnHeadsetUpdate += onHeadsetUpdate;
		WebXRManager_t8B31929B8D585AA72A11F9FC2102C0EAB24152E3* L_4;
		L_4 = WebXRManager_get_Instance_mE22A89D450041A30C1EEB4AD9631BD2278E1F89C(NULL);
		HeadsetUpdate_t6F11CEB0407C23E09526E0AECA3A6AAFA4A514D1* L_5 = (HeadsetUpdate_t6F11CEB0407C23E09526E0AECA3A6AAFA4A514D1*)il2cpp_codegen_object_new(HeadsetUpdate_t6F11CEB0407C23E09526E0AECA3A6AAFA4A514D1_il2cpp_TypeInfo_var);
		HeadsetUpdate__ctor_m2332A884B02C1DE92A7EFE827445B631DFE1D44A(L_5, __this, (intptr_t)((void*)WebXRController_onHeadsetUpdate_m11129E09B21B01AD20D46EDEB3C7DE2C2FCCCA91_RuntimeMethod_var), NULL);
		WebXRManager_add_OnHeadsetUpdate_mC0704DB6199881782166FA8EB3FA363AFFAC3930(L_4, L_5, NULL);
		// SetVisible(false);
		WebXRController_SetVisible_m58E9FD81E788AAC90946E02D3E2DC5B0E5F08C80(__this, (bool)0, NULL);
		// }
		return;
	}
}
// System.Void WebXR.WebXRController::OnDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebXRController_OnDisable_m7F65B6B74D51C65D9EB69954B2760643FC5A1866 (WebXRController_tC38659B5E868FEA08E58A5545C4E4E4F580C3E00* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ControllerUpdate_t741280F157DF9254D489FE93F944F0AF7385B8C8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HeadsetUpdate_t6F11CEB0407C23E09526E0AECA3A6AAFA4A514D1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebXRController_onControllerUpdate_mECC0C70F4DC20EAACFE251F6167EC6FB46331528_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebXRController_onHeadsetUpdate_m11129E09B21B01AD20D46EDEB3C7DE2C2FCCCA91_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebXRManager_t8B31929B8D585AA72A11F9FC2102C0EAB24152E3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// WebXRManager.Instance.OnControllerUpdate -= onControllerUpdate;
		il2cpp_codegen_runtime_class_init_inline(WebXRManager_t8B31929B8D585AA72A11F9FC2102C0EAB24152E3_il2cpp_TypeInfo_var);
		WebXRManager_t8B31929B8D585AA72A11F9FC2102C0EAB24152E3* L_0;
		L_0 = WebXRManager_get_Instance_mE22A89D450041A30C1EEB4AD9631BD2278E1F89C(NULL);
		ControllerUpdate_t741280F157DF9254D489FE93F944F0AF7385B8C8* L_1 = (ControllerUpdate_t741280F157DF9254D489FE93F944F0AF7385B8C8*)il2cpp_codegen_object_new(ControllerUpdate_t741280F157DF9254D489FE93F944F0AF7385B8C8_il2cpp_TypeInfo_var);
		ControllerUpdate__ctor_m21815015FFA90D03C294DD4D918D732EA1782DC7(L_1, __this, (intptr_t)((void*)WebXRController_onControllerUpdate_mECC0C70F4DC20EAACFE251F6167EC6FB46331528_RuntimeMethod_var), NULL);
		WebXRManager_remove_OnControllerUpdate_mB377AAEEAB98CDF9C204615EEB37E25C6DB5843B(L_0, L_1, NULL);
		// WebXRManager.Instance.OnHeadsetUpdate -= onHeadsetUpdate;
		WebXRManager_t8B31929B8D585AA72A11F9FC2102C0EAB24152E3* L_2;
		L_2 = WebXRManager_get_Instance_mE22A89D450041A30C1EEB4AD9631BD2278E1F89C(NULL);
		HeadsetUpdate_t6F11CEB0407C23E09526E0AECA3A6AAFA4A514D1* L_3 = (HeadsetUpdate_t6F11CEB0407C23E09526E0AECA3A6AAFA4A514D1*)il2cpp_codegen_object_new(HeadsetUpdate_t6F11CEB0407C23E09526E0AECA3A6AAFA4A514D1_il2cpp_TypeInfo_var);
		HeadsetUpdate__ctor_m2332A884B02C1DE92A7EFE827445B631DFE1D44A(L_3, __this, (intptr_t)((void*)WebXRController_onHeadsetUpdate_m11129E09B21B01AD20D46EDEB3C7DE2C2FCCCA91_RuntimeMethod_var), NULL);
		WebXRManager_remove_OnHeadsetUpdate_m36B76192F6D5BBEFF944B9019A24E98E36A8CD27(L_2, L_3, NULL);
		// SetVisible(false);
		WebXRController_SetVisible_m58E9FD81E788AAC90946E02D3E2DC5B0E5F08C80(__this, (bool)0, NULL);
		// }
		return;
	}
}
// System.Void WebXR.WebXRController::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebXRController__ctor_mD0A5CA0BA7E554A7C4F3418E189B8BDC5C84B3DD (WebXRController_tC38659B5E868FEA08E58A5545C4E4E4F580C3E00* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m0DBE0DE3655AABF691038623E640657F67499842_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t5DEE0DDB761EDC477DF149BFF830046243434D9D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// [Tooltip("Vector from head to elbow")] public Vector3 eyesToElbow = new Vector3(0.1f, -0.4f, 0.15f);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_0), (0.100000001f), (-0.400000006f), (0.150000006f), /*hidden argument*/NULL);
		__this->___eyesToElbow_7 = L_0;
		// [Tooltip("Vector from elbow to hand")] public Vector3 elbowHand = new Vector3(0, 0, 0.25f);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		memset((&L_1), 0, sizeof(L_1));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_1), (0.0f), (0.0f), (0.25f), /*hidden argument*/NULL);
		__this->___elbowHand_8 = L_1;
		// private Dictionary<string, WebXRControllerButton>
		//     buttonStates = new Dictionary<string, WebXRControllerButton>();
		Dictionary_2_t5DEE0DDB761EDC477DF149BFF830046243434D9D* L_2 = (Dictionary_2_t5DEE0DDB761EDC477DF149BFF830046243434D9D*)il2cpp_codegen_object_new(Dictionary_2_t5DEE0DDB761EDC477DF149BFF830046243434D9D_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m0DBE0DE3655AABF691038623E640657F67499842(L_2, Dictionary_2__ctor_m0DBE0DE3655AABF691038623E640657F67499842_RuntimeMethod_var);
		__this->___buttonStates_15 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___buttonStates_15), (void*)L_2);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void WebXR.WebXRControllerData::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebXRControllerData__ctor_m676A4BBAC30D2E6D489938E56CF85817C900A2CA (WebXRControllerData_t64845AE5B73D35EB95309BA9DC0E3EBF491F9EDA* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebXRControllerButtonU5BU5D_t915FA50DD1DD06576264ABAC3FC33CA4B0FF1A75_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public WebXRControllerButton[] buttons = new WebXRControllerButton[0];
		WebXRControllerButtonU5BU5D_t915FA50DD1DD06576264ABAC3FC33CA4B0FF1A75* L_0 = (WebXRControllerButtonU5BU5D_t915FA50DD1DD06576264ABAC3FC33CA4B0FF1A75*)(WebXRControllerButtonU5BU5D_t915FA50DD1DD06576264ABAC3FC33CA4B0FF1A75*)SZArrayNew(WebXRControllerButtonU5BU5D_t915FA50DD1DD06576264ABAC3FC33CA4B0FF1A75_il2cpp_TypeInfo_var, (uint32_t)0);
		__this->___buttons_10 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___buttons_10), (void*)L_0);
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
// System.Void WebXR.WebXRControllerInputMap::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebXRControllerInputMap__ctor_m5DE18573A4669690625A3761B585DC72576A9325 (WebXRControllerInputMap_t67BEC24BFDB103FC8E9E6C9C831B3A6A6999BC2D* __this, const RuntimeMethod* method) 
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
// System.Void WebXR.WebXRControllerInput::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebXRControllerInput__ctor_m3843EDA4AE9B71B3C5F43B69E93F2F005247D0E9 (WebXRControllerInput_tEB1C3FF36D9B0345E3BDFF3F176B73417C6240A5* __this, const RuntimeMethod* method) 
{
	{
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
// WebXR.WebXRData WebXR.WebXRData::CreateFromJSON(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR WebXRData_t5FC32176B7A346AEC604C90A15825F685F11DAFE* WebXRData_CreateFromJSON_m96BEE60588B5D293DC37CBC06AD9FFBF704E7343 (String_t* ___0_jsonString, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonUtility_FromJson_TisWebXRData_t5FC32176B7A346AEC604C90A15825F685F11DAFE_m15818848DD614FA0C2177529F6C071F0E43562E0_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return JsonUtility.FromJson<WebXRData>(jsonString);
		String_t* L_0 = ___0_jsonString;
		WebXRData_t5FC32176B7A346AEC604C90A15825F685F11DAFE* L_1;
		L_1 = JsonUtility_FromJson_TisWebXRData_t5FC32176B7A346AEC604C90A15825F685F11DAFE_m15818848DD614FA0C2177529F6C071F0E43562E0(L_0, JsonUtility_FromJson_TisWebXRData_t5FC32176B7A346AEC604C90A15825F685F11DAFE_m15818848DD614FA0C2177529F6C071F0E43562E0_RuntimeMethod_var);
		return L_1;
	}
}
// System.Void WebXR.WebXRData::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebXRData__ctor_m104BEC2BAA6B66EE54103F77F5AAEE3CEC6E5089 (WebXRData_t5FC32176B7A346AEC604C90A15825F685F11DAFE* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebXRControllerDataU5BU5D_t742EE3253E48F840C86C28DEFB21F8EA67A29B3B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public WebXRControllerData[] controllers = new WebXRControllerData[0];
		WebXRControllerDataU5BU5D_t742EE3253E48F840C86C28DEFB21F8EA67A29B3B* L_0 = (WebXRControllerDataU5BU5D_t742EE3253E48F840C86C28DEFB21F8EA67A29B3B*)(WebXRControllerDataU5BU5D_t742EE3253E48F840C86C28DEFB21F8EA67A29B3B*)SZArrayNew(WebXRControllerDataU5BU5D_t742EE3253E48F840C86C28DEFB21F8EA67A29B3B_il2cpp_TypeInfo_var, (uint32_t)0);
		__this->___controllers_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___controllers_0), (void*)L_0);
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
// System.Void WebXR.WebXRManager::add_OnXRCapabilitiesUpdate(WebXR.WebXRManager/XRCapabilitiesUpdate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebXRManager_add_OnXRCapabilitiesUpdate_m8D0A4F9444CE4752DDB3660C8EB5F16360B4BBAB (WebXRManager_t8B31929B8D585AA72A11F9FC2102C0EAB24152E3* __this, XRCapabilitiesUpdate_t42E555152D7F0BAAFFDA89B975BDBF594696530A* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRCapabilitiesUpdate_t42E555152D7F0BAAFFDA89B975BDBF594696530A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	XRCapabilitiesUpdate_t42E555152D7F0BAAFFDA89B975BDBF594696530A* V_0 = NULL;
	XRCapabilitiesUpdate_t42E555152D7F0BAAFFDA89B975BDBF594696530A* V_1 = NULL;
	XRCapabilitiesUpdate_t42E555152D7F0BAAFFDA89B975BDBF594696530A* V_2 = NULL;
	{
		XRCapabilitiesUpdate_t42E555152D7F0BAAFFDA89B975BDBF594696530A* L_0 = __this->___OnXRCapabilitiesUpdate_11;
		V_0 = L_0;
	}

IL_0007:
	{
		XRCapabilitiesUpdate_t42E555152D7F0BAAFFDA89B975BDBF594696530A* L_1 = V_0;
		V_1 = L_1;
		XRCapabilitiesUpdate_t42E555152D7F0BAAFFDA89B975BDBF594696530A* L_2 = V_1;
		XRCapabilitiesUpdate_t42E555152D7F0BAAFFDA89B975BDBF594696530A* L_3 = ___0_value;
		Delegate_t* L_4;
		L_4 = Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00(L_2, L_3, NULL);
		V_2 = ((XRCapabilitiesUpdate_t42E555152D7F0BAAFFDA89B975BDBF594696530A*)CastclassSealed((RuntimeObject*)L_4, XRCapabilitiesUpdate_t42E555152D7F0BAAFFDA89B975BDBF594696530A_il2cpp_TypeInfo_var));
		XRCapabilitiesUpdate_t42E555152D7F0BAAFFDA89B975BDBF594696530A** L_5 = (&__this->___OnXRCapabilitiesUpdate_11);
		XRCapabilitiesUpdate_t42E555152D7F0BAAFFDA89B975BDBF594696530A* L_6 = V_2;
		XRCapabilitiesUpdate_t42E555152D7F0BAAFFDA89B975BDBF594696530A* L_7 = V_1;
		XRCapabilitiesUpdate_t42E555152D7F0BAAFFDA89B975BDBF594696530A* L_8;
		L_8 = InterlockedCompareExchangeImpl<XRCapabilitiesUpdate_t42E555152D7F0BAAFFDA89B975BDBF594696530A*>(L_5, L_6, L_7);
		V_0 = L_8;
		XRCapabilitiesUpdate_t42E555152D7F0BAAFFDA89B975BDBF594696530A* L_9 = V_0;
		XRCapabilitiesUpdate_t42E555152D7F0BAAFFDA89B975BDBF594696530A* L_10 = V_1;
		if ((!(((RuntimeObject*)(XRCapabilitiesUpdate_t42E555152D7F0BAAFFDA89B975BDBF594696530A*)L_9) == ((RuntimeObject*)(XRCapabilitiesUpdate_t42E555152D7F0BAAFFDA89B975BDBF594696530A*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void WebXR.WebXRManager::remove_OnXRCapabilitiesUpdate(WebXR.WebXRManager/XRCapabilitiesUpdate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebXRManager_remove_OnXRCapabilitiesUpdate_mF52B4B4D85D20DCE127CD82B8C373D6B7D68D458 (WebXRManager_t8B31929B8D585AA72A11F9FC2102C0EAB24152E3* __this, XRCapabilitiesUpdate_t42E555152D7F0BAAFFDA89B975BDBF594696530A* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRCapabilitiesUpdate_t42E555152D7F0BAAFFDA89B975BDBF594696530A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	XRCapabilitiesUpdate_t42E555152D7F0BAAFFDA89B975BDBF594696530A* V_0 = NULL;
	XRCapabilitiesUpdate_t42E555152D7F0BAAFFDA89B975BDBF594696530A* V_1 = NULL;
	XRCapabilitiesUpdate_t42E555152D7F0BAAFFDA89B975BDBF594696530A* V_2 = NULL;
	{
		XRCapabilitiesUpdate_t42E555152D7F0BAAFFDA89B975BDBF594696530A* L_0 = __this->___OnXRCapabilitiesUpdate_11;
		V_0 = L_0;
	}

IL_0007:
	{
		XRCapabilitiesUpdate_t42E555152D7F0BAAFFDA89B975BDBF594696530A* L_1 = V_0;
		V_1 = L_1;
		XRCapabilitiesUpdate_t42E555152D7F0BAAFFDA89B975BDBF594696530A* L_2 = V_1;
		XRCapabilitiesUpdate_t42E555152D7F0BAAFFDA89B975BDBF594696530A* L_3 = ___0_value;
		Delegate_t* L_4;
		L_4 = Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3(L_2, L_3, NULL);
		V_2 = ((XRCapabilitiesUpdate_t42E555152D7F0BAAFFDA89B975BDBF594696530A*)CastclassSealed((RuntimeObject*)L_4, XRCapabilitiesUpdate_t42E555152D7F0BAAFFDA89B975BDBF594696530A_il2cpp_TypeInfo_var));
		XRCapabilitiesUpdate_t42E555152D7F0BAAFFDA89B975BDBF594696530A** L_5 = (&__this->___OnXRCapabilitiesUpdate_11);
		XRCapabilitiesUpdate_t42E555152D7F0BAAFFDA89B975BDBF594696530A* L_6 = V_2;
		XRCapabilitiesUpdate_t42E555152D7F0BAAFFDA89B975BDBF594696530A* L_7 = V_1;
		XRCapabilitiesUpdate_t42E555152D7F0BAAFFDA89B975BDBF594696530A* L_8;
		L_8 = InterlockedCompareExchangeImpl<XRCapabilitiesUpdate_t42E555152D7F0BAAFFDA89B975BDBF594696530A*>(L_5, L_6, L_7);
		V_0 = L_8;
		XRCapabilitiesUpdate_t42E555152D7F0BAAFFDA89B975BDBF594696530A* L_9 = V_0;
		XRCapabilitiesUpdate_t42E555152D7F0BAAFFDA89B975BDBF594696530A* L_10 = V_1;
		if ((!(((RuntimeObject*)(XRCapabilitiesUpdate_t42E555152D7F0BAAFFDA89B975BDBF594696530A*)L_9) == ((RuntimeObject*)(XRCapabilitiesUpdate_t42E555152D7F0BAAFFDA89B975BDBF594696530A*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void WebXR.WebXRManager::add_OnXRChange(WebXR.WebXRManager/XRChange)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebXRManager_add_OnXRChange_mFF3C71062D567BE6F65E813CC1B38BD3A0D4F029 (WebXRManager_t8B31929B8D585AA72A11F9FC2102C0EAB24152E3* __this, XRChange_t3294064A42A2CE42C85AABA477F09DA02FBE6FB3* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRChange_t3294064A42A2CE42C85AABA477F09DA02FBE6FB3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	XRChange_t3294064A42A2CE42C85AABA477F09DA02FBE6FB3* V_0 = NULL;
	XRChange_t3294064A42A2CE42C85AABA477F09DA02FBE6FB3* V_1 = NULL;
	XRChange_t3294064A42A2CE42C85AABA477F09DA02FBE6FB3* V_2 = NULL;
	{
		XRChange_t3294064A42A2CE42C85AABA477F09DA02FBE6FB3* L_0 = __this->___OnXRChange_12;
		V_0 = L_0;
	}

IL_0007:
	{
		XRChange_t3294064A42A2CE42C85AABA477F09DA02FBE6FB3* L_1 = V_0;
		V_1 = L_1;
		XRChange_t3294064A42A2CE42C85AABA477F09DA02FBE6FB3* L_2 = V_1;
		XRChange_t3294064A42A2CE42C85AABA477F09DA02FBE6FB3* L_3 = ___0_value;
		Delegate_t* L_4;
		L_4 = Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00(L_2, L_3, NULL);
		V_2 = ((XRChange_t3294064A42A2CE42C85AABA477F09DA02FBE6FB3*)CastclassSealed((RuntimeObject*)L_4, XRChange_t3294064A42A2CE42C85AABA477F09DA02FBE6FB3_il2cpp_TypeInfo_var));
		XRChange_t3294064A42A2CE42C85AABA477F09DA02FBE6FB3** L_5 = (&__this->___OnXRChange_12);
		XRChange_t3294064A42A2CE42C85AABA477F09DA02FBE6FB3* L_6 = V_2;
		XRChange_t3294064A42A2CE42C85AABA477F09DA02FBE6FB3* L_7 = V_1;
		XRChange_t3294064A42A2CE42C85AABA477F09DA02FBE6FB3* L_8;
		L_8 = InterlockedCompareExchangeImpl<XRChange_t3294064A42A2CE42C85AABA477F09DA02FBE6FB3*>(L_5, L_6, L_7);
		V_0 = L_8;
		XRChange_t3294064A42A2CE42C85AABA477F09DA02FBE6FB3* L_9 = V_0;
		XRChange_t3294064A42A2CE42C85AABA477F09DA02FBE6FB3* L_10 = V_1;
		if ((!(((RuntimeObject*)(XRChange_t3294064A42A2CE42C85AABA477F09DA02FBE6FB3*)L_9) == ((RuntimeObject*)(XRChange_t3294064A42A2CE42C85AABA477F09DA02FBE6FB3*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void WebXR.WebXRManager::remove_OnXRChange(WebXR.WebXRManager/XRChange)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebXRManager_remove_OnXRChange_mCAAF83D0227B6893EA4E6271E1ADD58759D4E617 (WebXRManager_t8B31929B8D585AA72A11F9FC2102C0EAB24152E3* __this, XRChange_t3294064A42A2CE42C85AABA477F09DA02FBE6FB3* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRChange_t3294064A42A2CE42C85AABA477F09DA02FBE6FB3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	XRChange_t3294064A42A2CE42C85AABA477F09DA02FBE6FB3* V_0 = NULL;
	XRChange_t3294064A42A2CE42C85AABA477F09DA02FBE6FB3* V_1 = NULL;
	XRChange_t3294064A42A2CE42C85AABA477F09DA02FBE6FB3* V_2 = NULL;
	{
		XRChange_t3294064A42A2CE42C85AABA477F09DA02FBE6FB3* L_0 = __this->___OnXRChange_12;
		V_0 = L_0;
	}

IL_0007:
	{
		XRChange_t3294064A42A2CE42C85AABA477F09DA02FBE6FB3* L_1 = V_0;
		V_1 = L_1;
		XRChange_t3294064A42A2CE42C85AABA477F09DA02FBE6FB3* L_2 = V_1;
		XRChange_t3294064A42A2CE42C85AABA477F09DA02FBE6FB3* L_3 = ___0_value;
		Delegate_t* L_4;
		L_4 = Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3(L_2, L_3, NULL);
		V_2 = ((XRChange_t3294064A42A2CE42C85AABA477F09DA02FBE6FB3*)CastclassSealed((RuntimeObject*)L_4, XRChange_t3294064A42A2CE42C85AABA477F09DA02FBE6FB3_il2cpp_TypeInfo_var));
		XRChange_t3294064A42A2CE42C85AABA477F09DA02FBE6FB3** L_5 = (&__this->___OnXRChange_12);
		XRChange_t3294064A42A2CE42C85AABA477F09DA02FBE6FB3* L_6 = V_2;
		XRChange_t3294064A42A2CE42C85AABA477F09DA02FBE6FB3* L_7 = V_1;
		XRChange_t3294064A42A2CE42C85AABA477F09DA02FBE6FB3* L_8;
		L_8 = InterlockedCompareExchangeImpl<XRChange_t3294064A42A2CE42C85AABA477F09DA02FBE6FB3*>(L_5, L_6, L_7);
		V_0 = L_8;
		XRChange_t3294064A42A2CE42C85AABA477F09DA02FBE6FB3* L_9 = V_0;
		XRChange_t3294064A42A2CE42C85AABA477F09DA02FBE6FB3* L_10 = V_1;
		if ((!(((RuntimeObject*)(XRChange_t3294064A42A2CE42C85AABA477F09DA02FBE6FB3*)L_9) == ((RuntimeObject*)(XRChange_t3294064A42A2CE42C85AABA477F09DA02FBE6FB3*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void WebXR.WebXRManager::add_OnHeadsetUpdate(WebXR.WebXRManager/HeadsetUpdate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebXRManager_add_OnHeadsetUpdate_mC0704DB6199881782166FA8EB3FA363AFFAC3930 (WebXRManager_t8B31929B8D585AA72A11F9FC2102C0EAB24152E3* __this, HeadsetUpdate_t6F11CEB0407C23E09526E0AECA3A6AAFA4A514D1* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HeadsetUpdate_t6F11CEB0407C23E09526E0AECA3A6AAFA4A514D1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	HeadsetUpdate_t6F11CEB0407C23E09526E0AECA3A6AAFA4A514D1* V_0 = NULL;
	HeadsetUpdate_t6F11CEB0407C23E09526E0AECA3A6AAFA4A514D1* V_1 = NULL;
	HeadsetUpdate_t6F11CEB0407C23E09526E0AECA3A6AAFA4A514D1* V_2 = NULL;
	{
		HeadsetUpdate_t6F11CEB0407C23E09526E0AECA3A6AAFA4A514D1* L_0 = __this->___OnHeadsetUpdate_13;
		V_0 = L_0;
	}

IL_0007:
	{
		HeadsetUpdate_t6F11CEB0407C23E09526E0AECA3A6AAFA4A514D1* L_1 = V_0;
		V_1 = L_1;
		HeadsetUpdate_t6F11CEB0407C23E09526E0AECA3A6AAFA4A514D1* L_2 = V_1;
		HeadsetUpdate_t6F11CEB0407C23E09526E0AECA3A6AAFA4A514D1* L_3 = ___0_value;
		Delegate_t* L_4;
		L_4 = Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00(L_2, L_3, NULL);
		V_2 = ((HeadsetUpdate_t6F11CEB0407C23E09526E0AECA3A6AAFA4A514D1*)CastclassSealed((RuntimeObject*)L_4, HeadsetUpdate_t6F11CEB0407C23E09526E0AECA3A6AAFA4A514D1_il2cpp_TypeInfo_var));
		HeadsetUpdate_t6F11CEB0407C23E09526E0AECA3A6AAFA4A514D1** L_5 = (&__this->___OnHeadsetUpdate_13);
		HeadsetUpdate_t6F11CEB0407C23E09526E0AECA3A6AAFA4A514D1* L_6 = V_2;
		HeadsetUpdate_t6F11CEB0407C23E09526E0AECA3A6AAFA4A514D1* L_7 = V_1;
		HeadsetUpdate_t6F11CEB0407C23E09526E0AECA3A6AAFA4A514D1* L_8;
		L_8 = InterlockedCompareExchangeImpl<HeadsetUpdate_t6F11CEB0407C23E09526E0AECA3A6AAFA4A514D1*>(L_5, L_6, L_7);
		V_0 = L_8;
		HeadsetUpdate_t6F11CEB0407C23E09526E0AECA3A6AAFA4A514D1* L_9 = V_0;
		HeadsetUpdate_t6F11CEB0407C23E09526E0AECA3A6AAFA4A514D1* L_10 = V_1;
		if ((!(((RuntimeObject*)(HeadsetUpdate_t6F11CEB0407C23E09526E0AECA3A6AAFA4A514D1*)L_9) == ((RuntimeObject*)(HeadsetUpdate_t6F11CEB0407C23E09526E0AECA3A6AAFA4A514D1*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void WebXR.WebXRManager::remove_OnHeadsetUpdate(WebXR.WebXRManager/HeadsetUpdate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebXRManager_remove_OnHeadsetUpdate_m36B76192F6D5BBEFF944B9019A24E98E36A8CD27 (WebXRManager_t8B31929B8D585AA72A11F9FC2102C0EAB24152E3* __this, HeadsetUpdate_t6F11CEB0407C23E09526E0AECA3A6AAFA4A514D1* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HeadsetUpdate_t6F11CEB0407C23E09526E0AECA3A6AAFA4A514D1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	HeadsetUpdate_t6F11CEB0407C23E09526E0AECA3A6AAFA4A514D1* V_0 = NULL;
	HeadsetUpdate_t6F11CEB0407C23E09526E0AECA3A6AAFA4A514D1* V_1 = NULL;
	HeadsetUpdate_t6F11CEB0407C23E09526E0AECA3A6AAFA4A514D1* V_2 = NULL;
	{
		HeadsetUpdate_t6F11CEB0407C23E09526E0AECA3A6AAFA4A514D1* L_0 = __this->___OnHeadsetUpdate_13;
		V_0 = L_0;
	}

IL_0007:
	{
		HeadsetUpdate_t6F11CEB0407C23E09526E0AECA3A6AAFA4A514D1* L_1 = V_0;
		V_1 = L_1;
		HeadsetUpdate_t6F11CEB0407C23E09526E0AECA3A6AAFA4A514D1* L_2 = V_1;
		HeadsetUpdate_t6F11CEB0407C23E09526E0AECA3A6AAFA4A514D1* L_3 = ___0_value;
		Delegate_t* L_4;
		L_4 = Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3(L_2, L_3, NULL);
		V_2 = ((HeadsetUpdate_t6F11CEB0407C23E09526E0AECA3A6AAFA4A514D1*)CastclassSealed((RuntimeObject*)L_4, HeadsetUpdate_t6F11CEB0407C23E09526E0AECA3A6AAFA4A514D1_il2cpp_TypeInfo_var));
		HeadsetUpdate_t6F11CEB0407C23E09526E0AECA3A6AAFA4A514D1** L_5 = (&__this->___OnHeadsetUpdate_13);
		HeadsetUpdate_t6F11CEB0407C23E09526E0AECA3A6AAFA4A514D1* L_6 = V_2;
		HeadsetUpdate_t6F11CEB0407C23E09526E0AECA3A6AAFA4A514D1* L_7 = V_1;
		HeadsetUpdate_t6F11CEB0407C23E09526E0AECA3A6AAFA4A514D1* L_8;
		L_8 = InterlockedCompareExchangeImpl<HeadsetUpdate_t6F11CEB0407C23E09526E0AECA3A6AAFA4A514D1*>(L_5, L_6, L_7);
		V_0 = L_8;
		HeadsetUpdate_t6F11CEB0407C23E09526E0AECA3A6AAFA4A514D1* L_9 = V_0;
		HeadsetUpdate_t6F11CEB0407C23E09526E0AECA3A6AAFA4A514D1* L_10 = V_1;
		if ((!(((RuntimeObject*)(HeadsetUpdate_t6F11CEB0407C23E09526E0AECA3A6AAFA4A514D1*)L_9) == ((RuntimeObject*)(HeadsetUpdate_t6F11CEB0407C23E09526E0AECA3A6AAFA4A514D1*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void WebXR.WebXRManager::add_OnControllerUpdate(WebXR.WebXRManager/ControllerUpdate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebXRManager_add_OnControllerUpdate_m6142FD4CC4ABEC31A29B8E3EC6A865BD31F2EB21 (WebXRManager_t8B31929B8D585AA72A11F9FC2102C0EAB24152E3* __this, ControllerUpdate_t741280F157DF9254D489FE93F944F0AF7385B8C8* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ControllerUpdate_t741280F157DF9254D489FE93F944F0AF7385B8C8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ControllerUpdate_t741280F157DF9254D489FE93F944F0AF7385B8C8* V_0 = NULL;
	ControllerUpdate_t741280F157DF9254D489FE93F944F0AF7385B8C8* V_1 = NULL;
	ControllerUpdate_t741280F157DF9254D489FE93F944F0AF7385B8C8* V_2 = NULL;
	{
		ControllerUpdate_t741280F157DF9254D489FE93F944F0AF7385B8C8* L_0 = __this->___OnControllerUpdate_14;
		V_0 = L_0;
	}

IL_0007:
	{
		ControllerUpdate_t741280F157DF9254D489FE93F944F0AF7385B8C8* L_1 = V_0;
		V_1 = L_1;
		ControllerUpdate_t741280F157DF9254D489FE93F944F0AF7385B8C8* L_2 = V_1;
		ControllerUpdate_t741280F157DF9254D489FE93F944F0AF7385B8C8* L_3 = ___0_value;
		Delegate_t* L_4;
		L_4 = Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00(L_2, L_3, NULL);
		V_2 = ((ControllerUpdate_t741280F157DF9254D489FE93F944F0AF7385B8C8*)CastclassSealed((RuntimeObject*)L_4, ControllerUpdate_t741280F157DF9254D489FE93F944F0AF7385B8C8_il2cpp_TypeInfo_var));
		ControllerUpdate_t741280F157DF9254D489FE93F944F0AF7385B8C8** L_5 = (&__this->___OnControllerUpdate_14);
		ControllerUpdate_t741280F157DF9254D489FE93F944F0AF7385B8C8* L_6 = V_2;
		ControllerUpdate_t741280F157DF9254D489FE93F944F0AF7385B8C8* L_7 = V_1;
		ControllerUpdate_t741280F157DF9254D489FE93F944F0AF7385B8C8* L_8;
		L_8 = InterlockedCompareExchangeImpl<ControllerUpdate_t741280F157DF9254D489FE93F944F0AF7385B8C8*>(L_5, L_6, L_7);
		V_0 = L_8;
		ControllerUpdate_t741280F157DF9254D489FE93F944F0AF7385B8C8* L_9 = V_0;
		ControllerUpdate_t741280F157DF9254D489FE93F944F0AF7385B8C8* L_10 = V_1;
		if ((!(((RuntimeObject*)(ControllerUpdate_t741280F157DF9254D489FE93F944F0AF7385B8C8*)L_9) == ((RuntimeObject*)(ControllerUpdate_t741280F157DF9254D489FE93F944F0AF7385B8C8*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void WebXR.WebXRManager::remove_OnControllerUpdate(WebXR.WebXRManager/ControllerUpdate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebXRManager_remove_OnControllerUpdate_mB377AAEEAB98CDF9C204615EEB37E25C6DB5843B (WebXRManager_t8B31929B8D585AA72A11F9FC2102C0EAB24152E3* __this, ControllerUpdate_t741280F157DF9254D489FE93F944F0AF7385B8C8* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ControllerUpdate_t741280F157DF9254D489FE93F944F0AF7385B8C8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ControllerUpdate_t741280F157DF9254D489FE93F944F0AF7385B8C8* V_0 = NULL;
	ControllerUpdate_t741280F157DF9254D489FE93F944F0AF7385B8C8* V_1 = NULL;
	ControllerUpdate_t741280F157DF9254D489FE93F944F0AF7385B8C8* V_2 = NULL;
	{
		ControllerUpdate_t741280F157DF9254D489FE93F944F0AF7385B8C8* L_0 = __this->___OnControllerUpdate_14;
		V_0 = L_0;
	}

IL_0007:
	{
		ControllerUpdate_t741280F157DF9254D489FE93F944F0AF7385B8C8* L_1 = V_0;
		V_1 = L_1;
		ControllerUpdate_t741280F157DF9254D489FE93F944F0AF7385B8C8* L_2 = V_1;
		ControllerUpdate_t741280F157DF9254D489FE93F944F0AF7385B8C8* L_3 = ___0_value;
		Delegate_t* L_4;
		L_4 = Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3(L_2, L_3, NULL);
		V_2 = ((ControllerUpdate_t741280F157DF9254D489FE93F944F0AF7385B8C8*)CastclassSealed((RuntimeObject*)L_4, ControllerUpdate_t741280F157DF9254D489FE93F944F0AF7385B8C8_il2cpp_TypeInfo_var));
		ControllerUpdate_t741280F157DF9254D489FE93F944F0AF7385B8C8** L_5 = (&__this->___OnControllerUpdate_14);
		ControllerUpdate_t741280F157DF9254D489FE93F944F0AF7385B8C8* L_6 = V_2;
		ControllerUpdate_t741280F157DF9254D489FE93F944F0AF7385B8C8* L_7 = V_1;
		ControllerUpdate_t741280F157DF9254D489FE93F944F0AF7385B8C8* L_8;
		L_8 = InterlockedCompareExchangeImpl<ControllerUpdate_t741280F157DF9254D489FE93F944F0AF7385B8C8*>(L_5, L_6, L_7);
		V_0 = L_8;
		ControllerUpdate_t741280F157DF9254D489FE93F944F0AF7385B8C8* L_9 = V_0;
		ControllerUpdate_t741280F157DF9254D489FE93F944F0AF7385B8C8* L_10 = V_1;
		if ((!(((RuntimeObject*)(ControllerUpdate_t741280F157DF9254D489FE93F944F0AF7385B8C8*)L_9) == ((RuntimeObject*)(ControllerUpdate_t741280F157DF9254D489FE93F944F0AF7385B8C8*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void WebXR.WebXRManager::ConfigureToggleXRKeyName(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebXRManager_ConfigureToggleXRKeyName_m8EA550F6168FA2A39692366F10C8AC324887809A (String_t* ___0_keyName, const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (char*);

	// Marshaling of parameter '___0_keyName' to native representation
	char* ____0_keyName_marshaled = NULL;
	____0_keyName_marshaled = il2cpp_codegen_marshal_string(___0_keyName);

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(ConfigureToggleXRKeyName)(____0_keyName_marshaled);

	// Marshaling cleanup of parameter '___0_keyName' native representation
	il2cpp_codegen_marshal_free(____0_keyName_marshaled);
	____0_keyName_marshaled = NULL;

}
// System.Void WebXR.WebXRManager::XRInitSharedArray(System.Single[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebXRManager_XRInitSharedArray_mB7712EC204DEB39C38BD3E39FFF85D920B46AA70 (SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___0_array, int32_t ___1_length, const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (float*, int32_t);

	// Marshaling of parameter '___0_array' to native representation
	float* ____0_array_marshaled = NULL;
	if (___0_array != NULL)
	{
		____0_array_marshaled = reinterpret_cast<float*>((___0_array)->GetAddressAtUnchecked(0));
	}

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(XRInitSharedArray)(____0_array_marshaled, ___1_length);

}
// System.Void WebXR.WebXRManager::ListenWebXRData()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebXRManager_ListenWebXRData_m147E84262BB93700EC5DBE76B33135946DA1CC12 (const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) ();

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(ListenWebXRData)();

}
// WebXR.WebXRManager WebXR.WebXRManager::get_Instance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR WebXRManager_t8B31929B8D585AA72A11F9FC2102C0EAB24152E3* WebXRManager_get_Instance_mE22A89D450041A30C1EEB4AD9631BD2278E1F89C (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_AddComponent_TisWebXRManager_t8B31929B8D585AA72A11F9FC2102C0EAB24152E3_mEC620009E5F11B2B2F268A3BB62665B8DCBD1730_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_FindObjectOfType_TisWebXRManager_t8B31929B8D585AA72A11F9FC2102C0EAB24152E3_mF61F16409E1CA98ECF6AFB3D4E4493FCE9DD77D9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebXRManager_t8B31929B8D585AA72A11F9FC2102C0EAB24152E3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	WebXRManager_t8B31929B8D585AA72A11F9FC2102C0EAB24152E3* V_0 = NULL;
	String_t* V_1 = NULL;
	{
		// if (!instance)
		il2cpp_codegen_runtime_class_init_inline(WebXRManager_t8B31929B8D585AA72A11F9FC2102C0EAB24152E3_il2cpp_TypeInfo_var);
		WebXRManager_t8B31929B8D585AA72A11F9FC2102C0EAB24152E3* L_0 = ((WebXRManager_t8B31929B8D585AA72A11F9FC2102C0EAB24152E3_StaticFields*)il2cpp_codegen_static_fields_for(WebXRManager_t8B31929B8D585AA72A11F9FC2102C0EAB24152E3_il2cpp_TypeInfo_var))->___instance_9;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_0, NULL);
		if (L_1)
		{
			goto IL_0040;
		}
	}
	{
		// var managerInScene = FindObjectOfType<WebXRManager>();
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		WebXRManager_t8B31929B8D585AA72A11F9FC2102C0EAB24152E3* L_2;
		L_2 = Object_FindObjectOfType_TisWebXRManager_t8B31929B8D585AA72A11F9FC2102C0EAB24152E3_mF61F16409E1CA98ECF6AFB3D4E4493FCE9DD77D9(Object_FindObjectOfType_TisWebXRManager_t8B31929B8D585AA72A11F9FC2102C0EAB24152E3_mF61F16409E1CA98ECF6AFB3D4E4493FCE9DD77D9_RuntimeMethod_var);
		V_0 = L_2;
		// var name = GlobalName;
		il2cpp_codegen_runtime_class_init_inline(WebXRManager_t8B31929B8D585AA72A11F9FC2102C0EAB24152E3_il2cpp_TypeInfo_var);
		String_t* L_3 = ((WebXRManager_t8B31929B8D585AA72A11F9FC2102C0EAB24152E3_StaticFields*)il2cpp_codegen_static_fields_for(WebXRManager_t8B31929B8D585AA72A11F9FC2102C0EAB24152E3_il2cpp_TypeInfo_var))->___GlobalName_8;
		V_1 = L_3;
		// if (managerInScene != null)
		WebXRManager_t8B31929B8D585AA72A11F9FC2102C0EAB24152E3* L_4 = V_0;
		bool L_5;
		L_5 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_4, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_5)
		{
			goto IL_0034;
		}
	}
	{
		// instance = managerInScene;
		WebXRManager_t8B31929B8D585AA72A11F9FC2102C0EAB24152E3* L_6 = V_0;
		il2cpp_codegen_runtime_class_init_inline(WebXRManager_t8B31929B8D585AA72A11F9FC2102C0EAB24152E3_il2cpp_TypeInfo_var);
		((WebXRManager_t8B31929B8D585AA72A11F9FC2102C0EAB24152E3_StaticFields*)il2cpp_codegen_static_fields_for(WebXRManager_t8B31929B8D585AA72A11F9FC2102C0EAB24152E3_il2cpp_TypeInfo_var))->___instance_9 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&((WebXRManager_t8B31929B8D585AA72A11F9FC2102C0EAB24152E3_StaticFields*)il2cpp_codegen_static_fields_for(WebXRManager_t8B31929B8D585AA72A11F9FC2102C0EAB24152E3_il2cpp_TypeInfo_var))->___instance_9), (void*)L_6);
		// instance.name = name;
		WebXRManager_t8B31929B8D585AA72A11F9FC2102C0EAB24152E3* L_7 = ((WebXRManager_t8B31929B8D585AA72A11F9FC2102C0EAB24152E3_StaticFields*)il2cpp_codegen_static_fields_for(WebXRManager_t8B31929B8D585AA72A11F9FC2102C0EAB24152E3_il2cpp_TypeInfo_var))->___instance_9;
		String_t* L_8 = V_1;
		Object_set_name_mC79E6DC8FFD72479C90F0C4CC7F42A0FEAF5AE47(L_7, L_8, NULL);
		goto IL_0040;
	}

IL_0034:
	{
		// GameObject go = new GameObject(name);
		String_t* L_9 = V_1;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_10 = (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)il2cpp_codegen_object_new(GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var);
		GameObject__ctor_m37D512B05D292F954792225E6C6EEE95293A9B88(L_10, L_9, NULL);
		// go.AddComponent<WebXRManager>();
		WebXRManager_t8B31929B8D585AA72A11F9FC2102C0EAB24152E3* L_11;
		L_11 = GameObject_AddComponent_TisWebXRManager_t8B31929B8D585AA72A11F9FC2102C0EAB24152E3_mEC620009E5F11B2B2F268A3BB62665B8DCBD1730(L_10, GameObject_AddComponent_TisWebXRManager_t8B31929B8D585AA72A11F9FC2102C0EAB24152E3_mEC620009E5F11B2B2F268A3BB62665B8DCBD1730_RuntimeMethod_var);
	}

IL_0040:
	{
		// return instance;
		il2cpp_codegen_runtime_class_init_inline(WebXRManager_t8B31929B8D585AA72A11F9FC2102C0EAB24152E3_il2cpp_TypeInfo_var);
		WebXRManager_t8B31929B8D585AA72A11F9FC2102C0EAB24152E3* L_12 = ((WebXRManager_t8B31929B8D585AA72A11F9FC2102C0EAB24152E3_StaticFields*)il2cpp_codegen_static_fields_for(WebXRManager_t8B31929B8D585AA72A11F9FC2102C0EAB24152E3_il2cpp_TypeInfo_var))->___instance_9;
		return L_12;
	}
}
// System.Void WebXR.WebXRManager::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebXRManager_Awake_m0842C3BC115C9FE02CF7083B796F92657FFFF529 (WebXRManager_t8B31929B8D585AA72A11F9FC2102C0EAB24152E3* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GraphicsTier_t6B924383194C862481A034E59F542EF3BB4355CC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Graphics_t99CD970FFEA58171C70F54DF0C06D315BD452F2C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebXRManager_t8B31929B8D585AA72A11F9FC2102C0EAB24152E3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral83D5D175E5896451CC83F3E4F8000D3A06036D5D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB5E55D7CF241B720397B53B914DACCFF337D4AD5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFBB3198D2DB4174A5A46E90F86891423BF85419A);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// Debug.Log("Active Graphics Tier: " + Graphics.activeTier);
		il2cpp_codegen_runtime_class_init_inline(Graphics_t99CD970FFEA58171C70F54DF0C06D315BD452F2C_il2cpp_TypeInfo_var);
		int32_t L_0;
		L_0 = Graphics_get_activeTier_m01A0E4872481E4851EB57957BA4AE17BF1257C48(NULL);
		V_0 = L_0;
		Il2CppFakeBox<int32_t> L_1(GraphicsTier_t6B924383194C862481A034E59F542EF3BB4355CC_il2cpp_TypeInfo_var, (&V_0));
		String_t* L_2;
		L_2 = Enum_ToString_m946B0B83C4470457D0FF555D862022C72BB55741((Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2*)(&L_1), NULL);
		String_t* L_3;
		L_3 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteral83D5D175E5896451CC83F3E4F8000D3A06036D5D, L_2, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_3, NULL);
		// instance = this;
		il2cpp_codegen_runtime_class_init_inline(WebXRManager_t8B31929B8D585AA72A11F9FC2102C0EAB24152E3_il2cpp_TypeInfo_var);
		((WebXRManager_t8B31929B8D585AA72A11F9FC2102C0EAB24152E3_StaticFields*)il2cpp_codegen_static_fields_for(WebXRManager_t8B31929B8D585AA72A11F9FC2102C0EAB24152E3_il2cpp_TypeInfo_var))->___instance_9 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&((WebXRManager_t8B31929B8D585AA72A11F9FC2102C0EAB24152E3_StaticFields*)il2cpp_codegen_static_fields_for(WebXRManager_t8B31929B8D585AA72A11F9FC2102C0EAB24152E3_il2cpp_TypeInfo_var))->___instance_9), (void*)__this);
		// if (!GlobalName.Equals(name))
		String_t* L_4 = ((WebXRManager_t8B31929B8D585AA72A11F9FC2102C0EAB24152E3_StaticFields*)il2cpp_codegen_static_fields_for(WebXRManager_t8B31929B8D585AA72A11F9FC2102C0EAB24152E3_il2cpp_TypeInfo_var))->___GlobalName_8;
		String_t* L_5;
		L_5 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(__this, NULL);
		bool L_6;
		L_6 = String_Equals_mCD5F35DEDCAFE51ACD4E033726FC2EF8DF7E9B4D(L_4, L_5, NULL);
		if (L_6)
		{
			goto IL_0053;
		}
	}
	{
		// Debug.LogError("The webxr.js script requires the WebXRManager gameobject to be named "
		//                + GlobalName + " for proper functioning");
		il2cpp_codegen_runtime_class_init_inline(WebXRManager_t8B31929B8D585AA72A11F9FC2102C0EAB24152E3_il2cpp_TypeInfo_var);
		String_t* L_7 = ((WebXRManager_t8B31929B8D585AA72A11F9FC2102C0EAB24152E3_StaticFields*)il2cpp_codegen_static_fields_for(WebXRManager_t8B31929B8D585AA72A11F9FC2102C0EAB24152E3_il2cpp_TypeInfo_var))->___GlobalName_8;
		String_t* L_8;
		L_8 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(_stringLiteralB5E55D7CF241B720397B53B914DACCFF337D4AD5, L_7, _stringLiteralFBB3198D2DB4174A5A46E90F86891423BF85419A, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(L_8, NULL);
	}

IL_0053:
	{
		// if (dontDestroyOnLoad)
		bool L_9 = __this->___dontDestroyOnLoad_5;
		if (!L_9)
		{
			goto IL_0065;
		}
	}
	{
		// DontDestroyOnLoad(instance);
		il2cpp_codegen_runtime_class_init_inline(WebXRManager_t8B31929B8D585AA72A11F9FC2102C0EAB24152E3_il2cpp_TypeInfo_var);
		WebXRManager_t8B31929B8D585AA72A11F9FC2102C0EAB24152E3* L_10 = ((WebXRManager_t8B31929B8D585AA72A11F9FC2102C0EAB24152E3_StaticFields*)il2cpp_codegen_static_fields_for(WebXRManager_t8B31929B8D585AA72A11F9FC2102C0EAB24152E3_il2cpp_TypeInfo_var))->___instance_9;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_DontDestroyOnLoad_m4B70C3AEF886C176543D1295507B6455C9DCAEA7(L_10, NULL);
	}

IL_0065:
	{
		// }
		return;
	}
}
// System.Boolean WebXR.WebXRManager::isPresent()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WebXRManager_isPresent_m6DA3BF5A77B7B1E6404F5D5FF109A26BE6DA8C50 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m25A1E45E653D7F73DF65C041A66C0A6E01F2964D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m9A1452618AC875C7A20A5917509A7B90E76E6A6A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_mF9383BAD37E56B1D5BCDBFF0C3ADA58BB6E67A04_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_mA450E85CB8D7D5CB81FAAF9D11A1D4945B942423_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mBE7647ECE0B8ABB952EDC379472F9E541D41D6DF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tA7666C6690CE2AEE97571615AD3AFCE2BB020597_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SubsystemManager_GetInstances_TisXRDisplaySubsystem_t4B00B0BF1894A039ACFA8DDC2C2EB9301118C1F1_mCDFAF63EF2A2778CA3677E75360BC7961FCB3370_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SubsystemManager_t9A7261E4D0B53B996F04B8707D8E1C33AB65E824_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Enumerator_t7B44DEF95515943B67640F1A20853509F98BA143 V_0;
	memset((&V_0), 0, sizeof(V_0));
	bool V_1 = false;
	{
		// var xrDisplaySubsystems = new List<XRDisplaySubsystem>();
		List_1_tA7666C6690CE2AEE97571615AD3AFCE2BB020597* L_0 = (List_1_tA7666C6690CE2AEE97571615AD3AFCE2BB020597*)il2cpp_codegen_object_new(List_1_tA7666C6690CE2AEE97571615AD3AFCE2BB020597_il2cpp_TypeInfo_var);
		List_1__ctor_mBE7647ECE0B8ABB952EDC379472F9E541D41D6DF(L_0, List_1__ctor_mBE7647ECE0B8ABB952EDC379472F9E541D41D6DF_RuntimeMethod_var);
		// SubsystemManager.GetInstances<XRDisplaySubsystem>(xrDisplaySubsystems);
		List_1_tA7666C6690CE2AEE97571615AD3AFCE2BB020597* L_1 = L_0;
		il2cpp_codegen_runtime_class_init_inline(SubsystemManager_t9A7261E4D0B53B996F04B8707D8E1C33AB65E824_il2cpp_TypeInfo_var);
		SubsystemManager_GetInstances_TisXRDisplaySubsystem_t4B00B0BF1894A039ACFA8DDC2C2EB9301118C1F1_mCDFAF63EF2A2778CA3677E75360BC7961FCB3370(L_1, SubsystemManager_GetInstances_TisXRDisplaySubsystem_t4B00B0BF1894A039ACFA8DDC2C2EB9301118C1F1_mCDFAF63EF2A2778CA3677E75360BC7961FCB3370_RuntimeMethod_var);
		// foreach (var xrDisplay in xrDisplaySubsystems)
		Enumerator_t7B44DEF95515943B67640F1A20853509F98BA143 L_2;
		L_2 = List_1_GetEnumerator_mA450E85CB8D7D5CB81FAAF9D11A1D4945B942423(L_1, List_1_GetEnumerator_mA450E85CB8D7D5CB81FAAF9D11A1D4945B942423_RuntimeMethod_var);
		V_0 = L_2;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0030:
			{// begin finally (depth: 1)
				Enumerator_Dispose_m25A1E45E653D7F73DF65C041A66C0A6E01F2964D((&V_0), Enumerator_Dispose_m25A1E45E653D7F73DF65C041A66C0A6E01F2964D_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0025_1;
			}

IL_0013_1:
			{
				// foreach (var xrDisplay in xrDisplaySubsystems)
				XRDisplaySubsystem_t4B00B0BF1894A039ACFA8DDC2C2EB9301118C1F1* L_3;
				L_3 = Enumerator_get_Current_mF9383BAD37E56B1D5BCDBFF0C3ADA58BB6E67A04_inline((&V_0), Enumerator_get_Current_mF9383BAD37E56B1D5BCDBFF0C3ADA58BB6E67A04_RuntimeMethod_var);
				// if (xrDisplay.running)
				bool L_4;
				L_4 = IntegratedSubsystem_get_running_m18AA0D7AD1CB593DC9EE5F3DC79643717509D6E8(L_3, NULL);
				if (!L_4)
				{
					goto IL_0025_1;
				}
			}
			{
				// return true;
				V_1 = (bool)1;
				goto IL_0040;
			}

IL_0025_1:
			{
				// foreach (var xrDisplay in xrDisplaySubsystems)
				bool L_5;
				L_5 = Enumerator_MoveNext_m9A1452618AC875C7A20A5917509A7B90E76E6A6A((&V_0), Enumerator_MoveNext_m9A1452618AC875C7A20A5917509A7B90E76E6A6A_RuntimeMethod_var);
				if (L_5)
				{
					goto IL_0013_1;
				}
			}
			{
				goto IL_003e;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_003e:
	{
		// return false;
		return (bool)0;
	}

IL_0040:
	{
		// }
		bool L_6 = V_1;
		return L_6;
	}
}
// System.Void WebXR.WebXRManager::SetTrackingSpaceType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebXRManager_SetTrackingSpaceType_m9BB7BECDA90B1CBA438F9212B9A1F3B2BC24EEB9 (WebXRManager_t8B31929B8D585AA72A11F9FC2102C0EAB24152E3* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TrackingSpaceType_t12E30B1D651687B6AB5C77D97CD6611D6D6352E2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebXRManager_t8B31929B8D585AA72A11F9FC2102C0EAB24152E3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA2CD442AE04D4D6AFC3F880309529F6F1B88A4CB);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// if (isPresent())
		il2cpp_codegen_runtime_class_init_inline(WebXRManager_t8B31929B8D585AA72A11F9FC2102C0EAB24152E3_il2cpp_TypeInfo_var);
		bool L_0;
		L_0 = WebXRManager_isPresent_m6DA3BF5A77B7B1E6404F5D5FF109A26BE6DA8C50(NULL);
		if (!L_0)
		{
			goto IL_0035;
		}
	}
	{
		// XRDevice.SetTrackingSpaceType(TrackingSpace);
		int32_t L_1 = __this->___TrackingSpace_7;
		bool L_2;
		L_2 = XRDevice_SetTrackingSpaceType_m8A35E391EF1DA72CD9091C137C384F31FF23530B(L_1, NULL);
		// Debug.Log("Tracking Space: " + XRDevice.GetTrackingSpaceType());
		int32_t L_3;
		L_3 = XRDevice_GetTrackingSpaceType_m160BD854CB480932E29017A40C46E648B064532A(NULL);
		V_0 = L_3;
		Il2CppFakeBox<int32_t> L_4(TrackingSpaceType_t12E30B1D651687B6AB5C77D97CD6611D6D6352E2_il2cpp_TypeInfo_var, (&V_0));
		String_t* L_5;
		L_5 = Enum_ToString_m946B0B83C4470457D0FF555D862022C72BB55741((Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2*)(&L_4), NULL);
		String_t* L_6;
		L_6 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteralA2CD442AE04D4D6AFC3F880309529F6F1B88A4CB, L_5, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_6, NULL);
	}

IL_0035:
	{
		// }
		return;
	}
}
// System.Void WebXR.WebXRManager::OnWebXRData(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebXRManager_OnWebXRData_m29B47D4F91CD4F41D4922792D4186EAB93677455 (WebXRManager_t8B31929B8D585AA72A11F9FC2102C0EAB24152E3* __this, String_t* ___0_jsonString, const RuntimeMethod* method) 
{
	WebXRControllerDataU5BU5D_t742EE3253E48F840C86C28DEFB21F8EA67A29B3B* V_0 = NULL;
	int32_t V_1 = 0;
	WebXRControllerData_t64845AE5B73D35EB95309BA9DC0E3EBF491F9EDA* V_2 = NULL;
	{
		// WebXRData webXRData = WebXRData.CreateFromJSON(jsonString);
		String_t* L_0 = ___0_jsonString;
		WebXRData_t5FC32176B7A346AEC604C90A15825F685F11DAFE* L_1;
		L_1 = WebXRData_CreateFromJSON_m96BEE60588B5D293DC37CBC06AD9FFBF704E7343(L_0, NULL);
		// foreach (WebXRControllerData controllerData in webXRData.controllers)
		WebXRControllerDataU5BU5D_t742EE3253E48F840C86C28DEFB21F8EA67A29B3B* L_2 = L_1->___controllers_0;
		V_0 = L_2;
		V_1 = 0;
		goto IL_00d7;
	}

IL_0013:
	{
		// foreach (WebXRControllerData controllerData in webXRData.controllers)
		WebXRControllerDataU5BU5D_t742EE3253E48F840C86C28DEFB21F8EA67A29B3B* L_3 = V_0;
		int32_t L_4 = V_1;
		int32_t L_5 = L_4;
		WebXRControllerData_t64845AE5B73D35EB95309BA9DC0E3EBF491F9EDA* L_6 = (L_3)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_5));
		V_2 = L_6;
		// if (OnControllerUpdate != null)
		ControllerUpdate_t741280F157DF9254D489FE93F944F0AF7385B8C8* L_7 = __this->___OnControllerUpdate_14;
		if (!L_7)
		{
			goto IL_00d3;
		}
	}
	{
		// OnControllerUpdate(controllerData.id,
		//     controllerData.index,
		//     controllerData.hand,
		//     controllerData.hasOrientation,
		//     controllerData.hasPosition,
		//     new Quaternion(controllerData.orientation[0], controllerData.orientation[1],
		//         controllerData.orientation[2], controllerData.orientation[3]),
		//     new Vector3(controllerData.position[0], controllerData.position[1],
		//         controllerData.position[2]),
		//     new Vector3(controllerData.linearAcceleration[0], controllerData.linearAcceleration[1],
		//         controllerData.linearAcceleration[2]),
		//     new Vector3(controllerData.linearVelocity[0], controllerData.linearVelocity[1],
		//         controllerData.linearVelocity[2]),
		//     controllerData.buttons,
		//     controllerData.axes);
		ControllerUpdate_t741280F157DF9254D489FE93F944F0AF7385B8C8* L_8 = __this->___OnControllerUpdate_14;
		WebXRControllerData_t64845AE5B73D35EB95309BA9DC0E3EBF491F9EDA* L_9 = V_2;
		String_t* L_10 = L_9->___id_0;
		WebXRControllerData_t64845AE5B73D35EB95309BA9DC0E3EBF491F9EDA* L_11 = V_2;
		int32_t L_12 = L_11->___index_1;
		WebXRControllerData_t64845AE5B73D35EB95309BA9DC0E3EBF491F9EDA* L_13 = V_2;
		String_t* L_14 = L_13->___hand_2;
		WebXRControllerData_t64845AE5B73D35EB95309BA9DC0E3EBF491F9EDA* L_15 = V_2;
		bool L_16 = L_15->___hasOrientation_3;
		WebXRControllerData_t64845AE5B73D35EB95309BA9DC0E3EBF491F9EDA* L_17 = V_2;
		bool L_18 = L_17->___hasPosition_4;
		WebXRControllerData_t64845AE5B73D35EB95309BA9DC0E3EBF491F9EDA* L_19 = V_2;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_20 = L_19->___orientation_5;
		int32_t L_21 = 0;
		float L_22 = (L_20)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_21));
		WebXRControllerData_t64845AE5B73D35EB95309BA9DC0E3EBF491F9EDA* L_23 = V_2;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_24 = L_23->___orientation_5;
		int32_t L_25 = 1;
		float L_26 = (L_24)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_25));
		WebXRControllerData_t64845AE5B73D35EB95309BA9DC0E3EBF491F9EDA* L_27 = V_2;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_28 = L_27->___orientation_5;
		int32_t L_29 = 2;
		float L_30 = (L_28)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_29));
		WebXRControllerData_t64845AE5B73D35EB95309BA9DC0E3EBF491F9EDA* L_31 = V_2;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_32 = L_31->___orientation_5;
		int32_t L_33 = 3;
		float L_34 = (L_32)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_33));
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_35;
		memset((&L_35), 0, sizeof(L_35));
		Quaternion__ctor_m868FD60AA65DD5A8AC0C5DEB0608381A8D85FCD8_inline((&L_35), L_22, L_26, L_30, L_34, /*hidden argument*/NULL);
		WebXRControllerData_t64845AE5B73D35EB95309BA9DC0E3EBF491F9EDA* L_36 = V_2;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_37 = L_36->___position_6;
		int32_t L_38 = 0;
		float L_39 = (L_37)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_38));
		WebXRControllerData_t64845AE5B73D35EB95309BA9DC0E3EBF491F9EDA* L_40 = V_2;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_41 = L_40->___position_6;
		int32_t L_42 = 1;
		float L_43 = (L_41)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_42));
		WebXRControllerData_t64845AE5B73D35EB95309BA9DC0E3EBF491F9EDA* L_44 = V_2;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_45 = L_44->___position_6;
		int32_t L_46 = 2;
		float L_47 = (L_45)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_46));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_48;
		memset((&L_48), 0, sizeof(L_48));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_48), L_39, L_43, L_47, /*hidden argument*/NULL);
		WebXRControllerData_t64845AE5B73D35EB95309BA9DC0E3EBF491F9EDA* L_49 = V_2;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_50 = L_49->___linearAcceleration_7;
		int32_t L_51 = 0;
		float L_52 = (L_50)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_51));
		WebXRControllerData_t64845AE5B73D35EB95309BA9DC0E3EBF491F9EDA* L_53 = V_2;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_54 = L_53->___linearAcceleration_7;
		int32_t L_55 = 1;
		float L_56 = (L_54)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_55));
		WebXRControllerData_t64845AE5B73D35EB95309BA9DC0E3EBF491F9EDA* L_57 = V_2;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_58 = L_57->___linearAcceleration_7;
		int32_t L_59 = 2;
		float L_60 = (L_58)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_59));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_61;
		memset((&L_61), 0, sizeof(L_61));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_61), L_52, L_56, L_60, /*hidden argument*/NULL);
		WebXRControllerData_t64845AE5B73D35EB95309BA9DC0E3EBF491F9EDA* L_62 = V_2;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_63 = L_62->___linearVelocity_8;
		int32_t L_64 = 0;
		float L_65 = (L_63)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_64));
		WebXRControllerData_t64845AE5B73D35EB95309BA9DC0E3EBF491F9EDA* L_66 = V_2;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_67 = L_66->___linearVelocity_8;
		int32_t L_68 = 1;
		float L_69 = (L_67)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_68));
		WebXRControllerData_t64845AE5B73D35EB95309BA9DC0E3EBF491F9EDA* L_70 = V_2;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_71 = L_70->___linearVelocity_8;
		int32_t L_72 = 2;
		float L_73 = (L_71)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_72));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_74;
		memset((&L_74), 0, sizeof(L_74));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_74), L_65, L_69, L_73, /*hidden argument*/NULL);
		WebXRControllerData_t64845AE5B73D35EB95309BA9DC0E3EBF491F9EDA* L_75 = V_2;
		WebXRControllerButtonU5BU5D_t915FA50DD1DD06576264ABAC3FC33CA4B0FF1A75* L_76 = L_75->___buttons_10;
		WebXRControllerData_t64845AE5B73D35EB95309BA9DC0E3EBF491F9EDA* L_77 = V_2;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_78 = L_77->___axes_9;
		ControllerUpdate_Invoke_mE3F7040317ABB0ED30FE4552530DA48AA2E98CFF_inline(L_8, L_10, L_12, L_14, L_16, L_18, L_35, L_48, L_61, L_74, L_76, L_78, NULL);
	}

IL_00d3:
	{
		int32_t L_79 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_79, 1));
	}

IL_00d7:
	{
		// foreach (WebXRControllerData controllerData in webXRData.controllers)
		int32_t L_80 = V_1;
		WebXRControllerDataU5BU5D_t742EE3253E48F840C86C28DEFB21F8EA67A29B3B* L_81 = V_0;
		if ((((int32_t)L_80) < ((int32_t)((int32_t)(((RuntimeArray*)L_81)->max_length)))))
		{
			goto IL_0013;
		}
	}
	{
		// }
		return;
	}
}
// System.Void WebXR.WebXRManager::OnXRCapabilities(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebXRManager_OnXRCapabilities_m8D9E2A08AD21506C00A19F377B94B17FA4BB5F5C (WebXRManager_t8B31929B8D585AA72A11F9FC2102C0EAB24152E3* __this, String_t* ___0_json, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonUtility_FromJson_TisWebXRDisplayCapabilities_t24125617B50773E797392F6AFCE0B328DE392B35_m1B0C8FDFBC978C5B3FCBCC5940F0447CC45BD505_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	WebXRDisplayCapabilities_t24125617B50773E797392F6AFCE0B328DE392B35* V_0 = NULL;
	{
		// WebXRDisplayCapabilities capabilities = JsonUtility.FromJson<WebXRDisplayCapabilities>(json);
		String_t* L_0 = ___0_json;
		WebXRDisplayCapabilities_t24125617B50773E797392F6AFCE0B328DE392B35* L_1;
		L_1 = JsonUtility_FromJson_TisWebXRDisplayCapabilities_t24125617B50773E797392F6AFCE0B328DE392B35_m1B0C8FDFBC978C5B3FCBCC5940F0447CC45BD505(L_0, JsonUtility_FromJson_TisWebXRDisplayCapabilities_t24125617B50773E797392F6AFCE0B328DE392B35_m1B0C8FDFBC978C5B3FCBCC5940F0447CC45BD505_RuntimeMethod_var);
		V_0 = L_1;
		// OnXRCapabilities(capabilities);
		WebXRDisplayCapabilities_t24125617B50773E797392F6AFCE0B328DE392B35* L_2 = V_0;
		WebXRManager_OnXRCapabilities_m5CF9202547504F742F0557A82488C15826D61227(__this, L_2, NULL);
		// }
		return;
	}
}
// System.Void WebXR.WebXRManager::OnXRCapabilities(WebXRDisplayCapabilities)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebXRManager_OnXRCapabilities_m5CF9202547504F742F0557A82488C15826D61227 (WebXRManager_t8B31929B8D585AA72A11F9FC2102C0EAB24152E3* __this, WebXRDisplayCapabilities_t24125617B50773E797392F6AFCE0B328DE392B35* ___0_capabilities, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDCB2062EBA5EC33E7E75146F69F1D4CDE191D5E9);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _capabilities = capabilities;
		WebXRDisplayCapabilities_t24125617B50773E797392F6AFCE0B328DE392B35* L_0 = ___0_capabilities;
		__this->____capabilities_16 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____capabilities_16), (void*)L_0);
		// if (!capabilities.supportsImmersiveVR)
		WebXRDisplayCapabilities_t24125617B50773E797392F6AFCE0B328DE392B35* L_1 = ___0_capabilities;
		bool L_2 = L_1->___supportsImmersiveVR_1;
		if (L_2)
		{
			goto IL_0019;
		}
	}
	{
		// WebXRUI.displayXRElementId("novr");
		WebXRUI_displayXRElementId_m5DF529B7595B0D542420F6DB96E26D7E10414B39(_stringLiteralDCB2062EBA5EC33E7E75146F69F1D4CDE191D5E9, NULL);
	}

IL_0019:
	{
		// if (OnXRCapabilitiesUpdate != null)
		XRCapabilitiesUpdate_t42E555152D7F0BAAFFDA89B975BDBF594696530A* L_3 = __this->___OnXRCapabilitiesUpdate_11;
		if (!L_3)
		{
			goto IL_002d;
		}
	}
	{
		// OnXRCapabilitiesUpdate(capabilities);
		XRCapabilitiesUpdate_t42E555152D7F0BAAFFDA89B975BDBF594696530A* L_4 = __this->___OnXRCapabilitiesUpdate_11;
		WebXRDisplayCapabilities_t24125617B50773E797392F6AFCE0B328DE392B35* L_5 = ___0_capabilities;
		XRCapabilitiesUpdate_Invoke_mD8A4B8425D0721E099087B0F59A62B0EE7E50B68_inline(L_4, L_5, NULL);
	}

IL_002d:
	{
		// }
		return;
	}
}
// System.Void WebXR.WebXRManager::toggleXrState()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebXRManager_toggleXrState_m7EFE6747429883D39DCDE7AE2A9AD10163CF6FBE (WebXRManager_t8B31929B8D585AA72A11F9FC2102C0EAB24152E3* __this, const RuntimeMethod* method) 
{
	{
		// if (this.xrState == WebXRState.ENABLED)
		int32_t L_0 = __this->___xrState_10;
		if (L_0)
		{
			goto IL_0010;
		}
	}
	{
		// setXrState(WebXRState.NORMAL);
		WebXRManager_setXrState_m3E869A2F14B98B11318CE4457E234DB0C525FA12(__this, 1, NULL);
		return;
	}

IL_0010:
	{
		// setXrState(WebXRState.ENABLED);
		WebXRManager_setXrState_m3E869A2F14B98B11318CE4457E234DB0C525FA12(__this, 0, NULL);
		// }
		return;
	}
}
// System.Void WebXR.WebXRManager::setXrState(WebXR.WebXRState)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebXRManager_setXrState_m3E869A2F14B98B11318CE4457E234DB0C525FA12 (WebXRManager_t8B31929B8D585AA72A11F9FC2102C0EAB24152E3* __this, int32_t ___0_state, const RuntimeMethod* method) 
{
	{
		// xrState = state;
		int32_t L_0 = ___0_state;
		__this->___xrState_10 = L_0;
		// if (OnXRChange != null)
		XRChange_t3294064A42A2CE42C85AABA477F09DA02FBE6FB3* L_1 = __this->___OnXRChange_12;
		if (!L_1)
		{
			goto IL_001b;
		}
	}
	{
		// OnXRChange(state);
		XRChange_t3294064A42A2CE42C85AABA477F09DA02FBE6FB3* L_2 = __this->___OnXRChange_12;
		int32_t L_3 = ___0_state;
		XRChange_Invoke_m13F3B35DBA21F8E88878CC3E81AA7DE4E3E1AF95_inline(L_2, L_3, NULL);
	}

IL_001b:
	{
		// }
		return;
	}
}
// System.Void WebXR.WebXRManager::OnStartXR()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebXRManager_OnStartXR_m5D549BD5EF748E1789AF96AFD6EFEAECD3994398 (WebXRManager_t8B31929B8D585AA72A11F9FC2102C0EAB24152E3* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebXRManager_t8B31929B8D585AA72A11F9FC2102C0EAB24152E3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Instance.setXrState(WebXRState.ENABLED);
		il2cpp_codegen_runtime_class_init_inline(WebXRManager_t8B31929B8D585AA72A11F9FC2102C0EAB24152E3_il2cpp_TypeInfo_var);
		WebXRManager_t8B31929B8D585AA72A11F9FC2102C0EAB24152E3* L_0;
		L_0 = WebXRManager_get_Instance_mE22A89D450041A30C1EEB4AD9631BD2278E1F89C(NULL);
		WebXRManager_setXrState_m3E869A2F14B98B11318CE4457E234DB0C525FA12(L_0, 0, NULL);
		// }
		return;
	}
}
// System.Void WebXR.WebXRManager::OnEndXR()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebXRManager_OnEndXR_mCEB43EA315F9A4E16558E38BFC2D6DFDFBE2B1EA (WebXRManager_t8B31929B8D585AA72A11F9FC2102C0EAB24152E3* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebXRManager_t8B31929B8D585AA72A11F9FC2102C0EAB24152E3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Instance.setXrState(WebXRState.NORMAL);
		il2cpp_codegen_runtime_class_init_inline(WebXRManager_t8B31929B8D585AA72A11F9FC2102C0EAB24152E3_il2cpp_TypeInfo_var);
		WebXRManager_t8B31929B8D585AA72A11F9FC2102C0EAB24152E3* L_0;
		L_0 = WebXRManager_get_Instance_mE22A89D450041A30C1EEB4AD9631BD2278E1F89C(NULL);
		WebXRManager_setXrState_m3E869A2F14B98B11318CE4457E234DB0C525FA12(L_0, 1, NULL);
		// }
		return;
	}
}
// System.Single[] WebXR.WebXRManager::GetFromSharedArray(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* WebXRManager_GetFromSharedArray_m7349178E4A3529C77D87D654AD6601F4004E69BD (WebXRManager_t8B31929B8D585AA72A11F9FC2102C0EAB24152E3* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* V_0 = NULL;
	int32_t V_1 = 0;
	{
		// float[] newArray = new float[16];
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_0 = (SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)(SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)SZArrayNew(SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C_il2cpp_TypeInfo_var, (uint32_t)((int32_t)16));
		V_0 = L_0;
		// for (int i = 0; i < newArray.Length; i++)
		V_1 = 0;
		goto IL_0020;
	}

IL_000c:
	{
		// newArray[i] = sharedArray[index * 16 + i];
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_1 = V_0;
		int32_t L_2 = V_1;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_3 = __this->___sharedArray_15;
		int32_t L_4 = ___0_index;
		int32_t L_5 = V_1;
		int32_t L_6 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(L_4, ((int32_t)16))), L_5));
		float L_7 = (L_3)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_6));
		(L_1)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_2), (float)L_7);
		// for (int i = 0; i < newArray.Length; i++)
		int32_t L_8 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_8, 1));
	}

IL_0020:
	{
		// for (int i = 0; i < newArray.Length; i++)
		int32_t L_9 = V_1;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_10 = V_0;
		if ((((int32_t)L_9) < ((int32_t)((int32_t)(((RuntimeArray*)L_10)->max_length)))))
		{
			goto IL_000c;
		}
	}
	{
		// return newArray;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_11 = V_0;
		return L_11;
	}
}
// System.Void WebXR.WebXRManager::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebXRManager_Start_m0757C07BB69C2CCB8DE47B28CEE57E095A7437AD (WebXRManager_t8B31929B8D585AA72A11F9FC2102C0EAB24152E3* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebXRManager_t8B31929B8D585AA72A11F9FC2102C0EAB24152E3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// ConfigureToggleXRKeyName(toggleXRKeyName);
		String_t* L_0 = __this->___toggleXRKeyName_4;
		il2cpp_codegen_runtime_class_init_inline(WebXRManager_t8B31929B8D585AA72A11F9FC2102C0EAB24152E3_il2cpp_TypeInfo_var);
		WebXRManager_ConfigureToggleXRKeyName_m8EA550F6168FA2A39692366F10C8AC324887809A(L_0, NULL);
		// XRInitSharedArray(sharedArray, sharedArray.Length);
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_1 = __this->___sharedArray_15;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_2 = __this->___sharedArray_15;
		WebXRManager_XRInitSharedArray_mB7712EC204DEB39C38BD3E39FFF85D920B46AA70(L_1, ((int32_t)(((RuntimeArray*)L_2)->max_length)), NULL);
		// ListenWebXRData();
		WebXRManager_ListenWebXRData_m147E84262BB93700EC5DBE76B33135946DA1CC12(NULL);
		// SetTrackingSpaceType();
		WebXRManager_SetTrackingSpaceType_m9BB7BECDA90B1CBA438F9212B9A1F3B2BC24EEB9(__this, NULL);
		// }
		return;
	}
}
// System.Void WebXR.WebXRManager::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebXRManager_Update_m47DBA695BA6A522030006E22E82F702ABB878260 (WebXRManager_t8B31929B8D585AA72A11F9FC2102C0EAB24152E3* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void WebXR.WebXRManager::LateUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebXRManager_LateUpdate_m9EBE92C87216E986A8D2E3916B6C6D5C6082FDC9 (WebXRManager_t8B31929B8D585AA72A11F9FC2102C0EAB24152E3* __this, const RuntimeMethod* method) 
{
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 V_1;
	memset((&V_1), 0, sizeof(V_1));
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 V_2;
	memset((&V_2), 0, sizeof(V_2));
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 V_3;
	memset((&V_3), 0, sizeof(V_3));
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
		// if (OnHeadsetUpdate == null || xrState != WebXRState.ENABLED) return;
		HeadsetUpdate_t6F11CEB0407C23E09526E0AECA3A6AAFA4A514D1* L_0 = __this->___OnHeadsetUpdate_13;
		if (!L_0)
		{
			goto IL_0010;
		}
	}
	{
		int32_t L_1 = __this->___xrState_10;
		if (!L_1)
		{
			goto IL_0011;
		}
	}

IL_0010:
	{
		// if (OnHeadsetUpdate == null || xrState != WebXRState.ENABLED) return;
		return;
	}

IL_0011:
	{
		// Matrix4x4 leftProjectionMatrix = WebXRMatrixUtil.NumbersToMatrix(GetFromSharedArray(0));
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_2;
		L_2 = WebXRManager_GetFromSharedArray_m7349178E4A3529C77D87D654AD6601F4004E69BD(__this, 0, NULL);
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_3;
		L_3 = WebXRMatrixUtil_NumbersToMatrix_m67831ABE46F6833A59DE882EF588C60786992820(L_2, NULL);
		V_0 = L_3;
		// Matrix4x4 rightProjectionMatrix = WebXRMatrixUtil.NumbersToMatrix(GetFromSharedArray(1));
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_4;
		L_4 = WebXRManager_GetFromSharedArray_m7349178E4A3529C77D87D654AD6601F4004E69BD(__this, 1, NULL);
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_5;
		L_5 = WebXRMatrixUtil_NumbersToMatrix_m67831ABE46F6833A59DE882EF588C60786992820(L_4, NULL);
		V_1 = L_5;
		// Matrix4x4 leftViewMatrix = WebXRMatrixUtil.NumbersToMatrix(GetFromSharedArray(2));
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_6;
		L_6 = WebXRManager_GetFromSharedArray_m7349178E4A3529C77D87D654AD6601F4004E69BD(__this, 2, NULL);
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_7;
		L_7 = WebXRMatrixUtil_NumbersToMatrix_m67831ABE46F6833A59DE882EF588C60786992820(L_6, NULL);
		V_2 = L_7;
		// Matrix4x4 rightViewMatrix = WebXRMatrixUtil.NumbersToMatrix(GetFromSharedArray(3));
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_8;
		L_8 = WebXRManager_GetFromSharedArray_m7349178E4A3529C77D87D654AD6601F4004E69BD(__this, 3, NULL);
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_9;
		L_9 = WebXRMatrixUtil_NumbersToMatrix_m67831ABE46F6833A59DE882EF588C60786992820(L_8, NULL);
		V_3 = L_9;
		// Matrix4x4 sitStandMatrix = WebXRMatrixUtil.NumbersToMatrix(GetFromSharedArray(4));
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_10;
		L_10 = WebXRManager_GetFromSharedArray_m7349178E4A3529C77D87D654AD6601F4004E69BD(__this, 4, NULL);
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_11;
		L_11 = WebXRMatrixUtil_NumbersToMatrix_m67831ABE46F6833A59DE882EF588C60786992820(L_10, NULL);
		V_4 = L_11;
		// OnHeadsetUpdate(
		//     leftProjectionMatrix,
		//     rightProjectionMatrix,
		//     leftViewMatrix,
		//     rightViewMatrix,
		//     sitStandMatrix);
		HeadsetUpdate_t6F11CEB0407C23E09526E0AECA3A6AAFA4A514D1* L_12 = __this->___OnHeadsetUpdate_13;
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_13 = V_0;
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_14 = V_1;
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_15 = V_2;
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_16 = V_3;
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_17 = V_4;
		HeadsetUpdate_Invoke_mAFD65820867A532FEFFB53618A899841E5513ED6_inline(L_12, L_13, L_14, L_15, L_16, L_17, NULL);
		// }
		return;
	}
}
// System.Void WebXR.WebXRManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebXRManager__ctor_m6BAA6C41AE8694FE4CC8EDFC49014A00F7C7068A (WebXRManager_t8B31929B8D585AA72A11F9FC2102C0EAB24152E3* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public bool dontDestroyOnLoad = true;
		__this->___dontDestroyOnLoad_5 = (bool)1;
		// public float DefaultHeight = 1.2f;
		__this->___DefaultHeight_6 = (1.20000005f);
		// public TrackingSpaceType TrackingSpace = TrackingSpaceType.RoomScale;
		__this->___TrackingSpace_7 = 1;
		// [HideInInspector] public WebXRState xrState = WebXRState.NORMAL;
		__this->___xrState_10 = 1;
		// float[] sharedArray = new float[5 * 16];
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_0 = (SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)(SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)SZArrayNew(SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C_il2cpp_TypeInfo_var, (uint32_t)((int32_t)80));
		__this->___sharedArray_15 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___sharedArray_15), (void*)L_0);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
// System.Void WebXR.WebXRManager::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebXRManager__cctor_mA0E72A17EE2D77CD84576ADEC2BC0881D90B18E5 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebXRManager_t8B31929B8D585AA72A11F9FC2102C0EAB24152E3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCD5636AF01CDE4D234784B2F141AE01FD71A4C60);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private static string GlobalName = "WebXRCameraSet";
		((WebXRManager_t8B31929B8D585AA72A11F9FC2102C0EAB24152E3_StaticFields*)il2cpp_codegen_static_fields_for(WebXRManager_t8B31929B8D585AA72A11F9FC2102C0EAB24152E3_il2cpp_TypeInfo_var))->___GlobalName_8 = _stringLiteralCD5636AF01CDE4D234784B2F141AE01FD71A4C60;
		Il2CppCodeGenWriteBarrier((void**)(&((WebXRManager_t8B31929B8D585AA72A11F9FC2102C0EAB24152E3_StaticFields*)il2cpp_codegen_static_fields_for(WebXRManager_t8B31929B8D585AA72A11F9FC2102C0EAB24152E3_il2cpp_TypeInfo_var))->___GlobalName_8), (void*)_stringLiteralCD5636AF01CDE4D234784B2F141AE01FD71A4C60);
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
void XRCapabilitiesUpdate_Invoke_mD8A4B8425D0721E099087B0F59A62B0EE7E50B68_Multicast(XRCapabilitiesUpdate_t42E555152D7F0BAAFFDA89B975BDBF594696530A* __this, WebXRDisplayCapabilities_t24125617B50773E797392F6AFCE0B328DE392B35* ___0_capabilities, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		XRCapabilitiesUpdate_t42E555152D7F0BAAFFDA89B975BDBF594696530A* currentDelegate = reinterpret_cast<XRCapabilitiesUpdate_t42E555152D7F0BAAFFDA89B975BDBF594696530A*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, WebXRDisplayCapabilities_t24125617B50773E797392F6AFCE0B328DE392B35*, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___0_capabilities, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void XRCapabilitiesUpdate_Invoke_mD8A4B8425D0721E099087B0F59A62B0EE7E50B68_OpenInst(XRCapabilitiesUpdate_t42E555152D7F0BAAFFDA89B975BDBF594696530A* __this, WebXRDisplayCapabilities_t24125617B50773E797392F6AFCE0B328DE392B35* ___0_capabilities, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (WebXRDisplayCapabilities_t24125617B50773E797392F6AFCE0B328DE392B35*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___0_capabilities, method);
}
void XRCapabilitiesUpdate_Invoke_mD8A4B8425D0721E099087B0F59A62B0EE7E50B68_OpenStatic(XRCapabilitiesUpdate_t42E555152D7F0BAAFFDA89B975BDBF594696530A* __this, WebXRDisplayCapabilities_t24125617B50773E797392F6AFCE0B328DE392B35* ___0_capabilities, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (WebXRDisplayCapabilities_t24125617B50773E797392F6AFCE0B328DE392B35*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___0_capabilities, method);
}
void XRCapabilitiesUpdate_Invoke_mD8A4B8425D0721E099087B0F59A62B0EE7E50B68_OpenStaticInvoker(XRCapabilitiesUpdate_t42E555152D7F0BAAFFDA89B975BDBF594696530A* __this, WebXRDisplayCapabilities_t24125617B50773E797392F6AFCE0B328DE392B35* ___0_capabilities, const RuntimeMethod* method)
{
	InvokerActionInvoker1< WebXRDisplayCapabilities_t24125617B50773E797392F6AFCE0B328DE392B35* >::Invoke(__this->___method_ptr_0, method, NULL, ___0_capabilities);
}
void XRCapabilitiesUpdate_Invoke_mD8A4B8425D0721E099087B0F59A62B0EE7E50B68_ClosedStaticInvoker(XRCapabilitiesUpdate_t42E555152D7F0BAAFFDA89B975BDBF594696530A* __this, WebXRDisplayCapabilities_t24125617B50773E797392F6AFCE0B328DE392B35* ___0_capabilities, const RuntimeMethod* method)
{
	InvokerActionInvoker2< RuntimeObject*, WebXRDisplayCapabilities_t24125617B50773E797392F6AFCE0B328DE392B35* >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___0_capabilities);
}
void XRCapabilitiesUpdate_Invoke_mD8A4B8425D0721E099087B0F59A62B0EE7E50B68_OpenVirtual(XRCapabilitiesUpdate_t42E555152D7F0BAAFFDA89B975BDBF594696530A* __this, WebXRDisplayCapabilities_t24125617B50773E797392F6AFCE0B328DE392B35* ___0_capabilities, const RuntimeMethod* method)
{
	VirtualActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(method), ___0_capabilities);
}
void XRCapabilitiesUpdate_Invoke_mD8A4B8425D0721E099087B0F59A62B0EE7E50B68_OpenInterface(XRCapabilitiesUpdate_t42E555152D7F0BAAFFDA89B975BDBF594696530A* __this, WebXRDisplayCapabilities_t24125617B50773E797392F6AFCE0B328DE392B35* ___0_capabilities, const RuntimeMethod* method)
{
	InterfaceActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(method), il2cpp_codegen_method_get_declaring_type(method), ___0_capabilities);
}
void XRCapabilitiesUpdate_Invoke_mD8A4B8425D0721E099087B0F59A62B0EE7E50B68_OpenGenericVirtual(XRCapabilitiesUpdate_t42E555152D7F0BAAFFDA89B975BDBF594696530A* __this, WebXRDisplayCapabilities_t24125617B50773E797392F6AFCE0B328DE392B35* ___0_capabilities, const RuntimeMethod* method)
{
	GenericVirtualActionInvoker0::Invoke(method, ___0_capabilities);
}
void XRCapabilitiesUpdate_Invoke_mD8A4B8425D0721E099087B0F59A62B0EE7E50B68_OpenGenericInterface(XRCapabilitiesUpdate_t42E555152D7F0BAAFFDA89B975BDBF594696530A* __this, WebXRDisplayCapabilities_t24125617B50773E797392F6AFCE0B328DE392B35* ___0_capabilities, const RuntimeMethod* method)
{
	GenericInterfaceActionInvoker0::Invoke(method, ___0_capabilities);
}
// System.Void WebXR.WebXRManager/XRCapabilitiesUpdate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRCapabilitiesUpdate__ctor_m382D09BC8EEE492DB4961D5E2440B88210C4224C (XRCapabilitiesUpdate_t42E555152D7F0BAAFFDA89B975BDBF594696530A* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___1_method);
	__this->___method_3 = ___1_method;
	__this->___m_target_2 = ___0_object;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___0_object);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___1_method);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___1_method))
	{
		bool isOpen = parameterCount == 1;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___1_method))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&XRCapabilitiesUpdate_Invoke_mD8A4B8425D0721E099087B0F59A62B0EE7E50B68_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&XRCapabilitiesUpdate_Invoke_mD8A4B8425D0721E099087B0F59A62B0EE7E50B68_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&XRCapabilitiesUpdate_Invoke_mD8A4B8425D0721E099087B0F59A62B0EE7E50B68_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		bool isOpen = parameterCount == 0;
		if (isOpen)
		{
			if (__this->___method_is_virtual_12)
			{
				if (il2cpp_codegen_method_is_generic_instance_method((RuntimeMethod*)___1_method))
					if (il2cpp_codegen_method_is_interface_method((RuntimeMethod*)___1_method))
						__this->___invoke_impl_1 = (intptr_t)&XRCapabilitiesUpdate_Invoke_mD8A4B8425D0721E099087B0F59A62B0EE7E50B68_OpenGenericInterface;
					else
						__this->___invoke_impl_1 = (intptr_t)&XRCapabilitiesUpdate_Invoke_mD8A4B8425D0721E099087B0F59A62B0EE7E50B68_OpenGenericVirtual;
				else
					if (il2cpp_codegen_method_is_interface_method((RuntimeMethod*)___1_method))
						__this->___invoke_impl_1 = (intptr_t)&XRCapabilitiesUpdate_Invoke_mD8A4B8425D0721E099087B0F59A62B0EE7E50B68_OpenInterface;
					else
						__this->___invoke_impl_1 = (intptr_t)&XRCapabilitiesUpdate_Invoke_mD8A4B8425D0721E099087B0F59A62B0EE7E50B68_OpenVirtual;
			}
			else
			{
				__this->___invoke_impl_1 = (intptr_t)&XRCapabilitiesUpdate_Invoke_mD8A4B8425D0721E099087B0F59A62B0EE7E50B68_OpenInst;
			}
		}
		else
		{
			if (___0_object == NULL)
				il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
			__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
			__this->___method_code_6 = (intptr_t)__this->___m_target_2;
		}
	}
	__this->___extra_arg_5 = (intptr_t)&XRCapabilitiesUpdate_Invoke_mD8A4B8425D0721E099087B0F59A62B0EE7E50B68_Multicast;
}
// System.Void WebXR.WebXRManager/XRCapabilitiesUpdate::Invoke(WebXRDisplayCapabilities)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRCapabilitiesUpdate_Invoke_mD8A4B8425D0721E099087B0F59A62B0EE7E50B68 (XRCapabilitiesUpdate_t42E555152D7F0BAAFFDA89B975BDBF594696530A* __this, WebXRDisplayCapabilities_t24125617B50773E797392F6AFCE0B328DE392B35* ___0_capabilities, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, WebXRDisplayCapabilities_t24125617B50773E797392F6AFCE0B328DE392B35*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_capabilities, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult WebXR.WebXRManager/XRCapabilitiesUpdate::BeginInvoke(WebXRDisplayCapabilities,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* XRCapabilitiesUpdate_BeginInvoke_m57BCED225E2C1F1CD69C251F8A7F73C5AF442235 (XRCapabilitiesUpdate_t42E555152D7F0BAAFFDA89B975BDBF594696530A* __this, WebXRDisplayCapabilities_t24125617B50773E797392F6AFCE0B328DE392B35* ___0_capabilities, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___1_callback, RuntimeObject* ___2_object, const RuntimeMethod* method) 
{
	void *__d_args[2] = {0};
	__d_args[0] = ___0_capabilities;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___1_callback, (RuntimeObject*)___2_object);
}
// System.Void WebXR.WebXRManager/XRCapabilitiesUpdate::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRCapabilitiesUpdate_EndInvoke_m1296F97F3E09F7E2B348BC708B40F4702DF47BAB (XRCapabilitiesUpdate_t42E555152D7F0BAAFFDA89B975BDBF594696530A* __this, RuntimeObject* ___0_result, const RuntimeMethod* method) 
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___0_result, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
void XRChange_Invoke_m13F3B35DBA21F8E88878CC3E81AA7DE4E3E1AF95_Multicast(XRChange_t3294064A42A2CE42C85AABA477F09DA02FBE6FB3* __this, int32_t ___0_state, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		XRChange_t3294064A42A2CE42C85AABA477F09DA02FBE6FB3* currentDelegate = reinterpret_cast<XRChange_t3294064A42A2CE42C85AABA477F09DA02FBE6FB3*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, int32_t, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___0_state, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void XRChange_Invoke_m13F3B35DBA21F8E88878CC3E81AA7DE4E3E1AF95_OpenInst(XRChange_t3294064A42A2CE42C85AABA477F09DA02FBE6FB3* __this, int32_t ___0_state, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (int32_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___0_state, method);
}
void XRChange_Invoke_m13F3B35DBA21F8E88878CC3E81AA7DE4E3E1AF95_OpenStatic(XRChange_t3294064A42A2CE42C85AABA477F09DA02FBE6FB3* __this, int32_t ___0_state, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (int32_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___0_state, method);
}
void XRChange_Invoke_m13F3B35DBA21F8E88878CC3E81AA7DE4E3E1AF95_OpenStaticInvoker(XRChange_t3294064A42A2CE42C85AABA477F09DA02FBE6FB3* __this, int32_t ___0_state, const RuntimeMethod* method)
{
	InvokerActionInvoker1< int32_t >::Invoke(__this->___method_ptr_0, method, NULL, ___0_state);
}
void XRChange_Invoke_m13F3B35DBA21F8E88878CC3E81AA7DE4E3E1AF95_ClosedStaticInvoker(XRChange_t3294064A42A2CE42C85AABA477F09DA02FBE6FB3* __this, int32_t ___0_state, const RuntimeMethod* method)
{
	InvokerActionInvoker2< RuntimeObject*, int32_t >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___0_state);
}
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_XRChange_t3294064A42A2CE42C85AABA477F09DA02FBE6FB3 (XRChange_t3294064A42A2CE42C85AABA477F09DA02FBE6FB3* __this, int32_t ___0_state, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(int32_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Native function invocation
	il2cppPInvokeFunc(___0_state);

}
// System.Void WebXR.WebXRManager/XRChange::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRChange__ctor_mA0C620C83B9E369FF12FC0AADBB95FA906C811C9 (XRChange_t3294064A42A2CE42C85AABA477F09DA02FBE6FB3* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___1_method);
	__this->___method_3 = ___1_method;
	__this->___m_target_2 = ___0_object;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___0_object);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___1_method);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___1_method))
	{
		bool isOpen = parameterCount == 1;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___1_method))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&XRChange_Invoke_m13F3B35DBA21F8E88878CC3E81AA7DE4E3E1AF95_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&XRChange_Invoke_m13F3B35DBA21F8E88878CC3E81AA7DE4E3E1AF95_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&XRChange_Invoke_m13F3B35DBA21F8E88878CC3E81AA7DE4E3E1AF95_OpenStatic;
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
	__this->___extra_arg_5 = (intptr_t)&XRChange_Invoke_m13F3B35DBA21F8E88878CC3E81AA7DE4E3E1AF95_Multicast;
}
// System.Void WebXR.WebXRManager/XRChange::Invoke(WebXR.WebXRState)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRChange_Invoke_m13F3B35DBA21F8E88878CC3E81AA7DE4E3E1AF95 (XRChange_t3294064A42A2CE42C85AABA477F09DA02FBE6FB3* __this, int32_t ___0_state, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, int32_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_state, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult WebXR.WebXRManager/XRChange::BeginInvoke(WebXR.WebXRState,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* XRChange_BeginInvoke_m7E603F598F1741D77CC619016026D662FBB977E6 (XRChange_t3294064A42A2CE42C85AABA477F09DA02FBE6FB3* __this, int32_t ___0_state, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___1_callback, RuntimeObject* ___2_object, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebXRState_t2D8E0267FFD4967F244953A900C0125A95ECA66A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[2] = {0};
	__d_args[0] = Box(WebXRState_t2D8E0267FFD4967F244953A900C0125A95ECA66A_il2cpp_TypeInfo_var, &___0_state);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___1_callback, (RuntimeObject*)___2_object);
}
// System.Void WebXR.WebXRManager/XRChange::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRChange_EndInvoke_m6BFD75B02A920E8523DDAA0E4F0E85718DA07B29 (XRChange_t3294064A42A2CE42C85AABA477F09DA02FBE6FB3* __this, RuntimeObject* ___0_result, const RuntimeMethod* method) 
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___0_result, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
void HeadsetUpdate_Invoke_mAFD65820867A532FEFFB53618A899841E5513ED6_Multicast(HeadsetUpdate_t6F11CEB0407C23E09526E0AECA3A6AAFA4A514D1* __this, Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___0_leftProjectionMatrix, Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___1_leftViewMatrix, Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___2_rightProjectionMatrix, Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___3_rightViewMatrix, Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___4_sitStandMatrix, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		HeadsetUpdate_t6F11CEB0407C23E09526E0AECA3A6AAFA4A514D1* currentDelegate = reinterpret_cast<HeadsetUpdate_t6F11CEB0407C23E09526E0AECA3A6AAFA4A514D1*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6, Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6, Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6, Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6, Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___0_leftProjectionMatrix, ___1_leftViewMatrix, ___2_rightProjectionMatrix, ___3_rightViewMatrix, ___4_sitStandMatrix, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void HeadsetUpdate_Invoke_mAFD65820867A532FEFFB53618A899841E5513ED6_OpenInst(HeadsetUpdate_t6F11CEB0407C23E09526E0AECA3A6AAFA4A514D1* __this, Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___0_leftProjectionMatrix, Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___1_leftViewMatrix, Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___2_rightProjectionMatrix, Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___3_rightViewMatrix, Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___4_sitStandMatrix, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6, Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6, Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6, Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6, Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___0_leftProjectionMatrix, ___1_leftViewMatrix, ___2_rightProjectionMatrix, ___3_rightViewMatrix, ___4_sitStandMatrix, method);
}
void HeadsetUpdate_Invoke_mAFD65820867A532FEFFB53618A899841E5513ED6_OpenStatic(HeadsetUpdate_t6F11CEB0407C23E09526E0AECA3A6AAFA4A514D1* __this, Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___0_leftProjectionMatrix, Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___1_leftViewMatrix, Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___2_rightProjectionMatrix, Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___3_rightViewMatrix, Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___4_sitStandMatrix, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6, Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6, Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6, Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6, Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___0_leftProjectionMatrix, ___1_leftViewMatrix, ___2_rightProjectionMatrix, ___3_rightViewMatrix, ___4_sitStandMatrix, method);
}
void HeadsetUpdate_Invoke_mAFD65820867A532FEFFB53618A899841E5513ED6_OpenStaticInvoker(HeadsetUpdate_t6F11CEB0407C23E09526E0AECA3A6AAFA4A514D1* __this, Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___0_leftProjectionMatrix, Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___1_leftViewMatrix, Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___2_rightProjectionMatrix, Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___3_rightViewMatrix, Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___4_sitStandMatrix, const RuntimeMethod* method)
{
	InvokerActionInvoker5< Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6, Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6, Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6, Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6, Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 >::Invoke(__this->___method_ptr_0, method, NULL, ___0_leftProjectionMatrix, ___1_leftViewMatrix, ___2_rightProjectionMatrix, ___3_rightViewMatrix, ___4_sitStandMatrix);
}
void HeadsetUpdate_Invoke_mAFD65820867A532FEFFB53618A899841E5513ED6_ClosedStaticInvoker(HeadsetUpdate_t6F11CEB0407C23E09526E0AECA3A6AAFA4A514D1* __this, Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___0_leftProjectionMatrix, Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___1_leftViewMatrix, Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___2_rightProjectionMatrix, Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___3_rightViewMatrix, Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___4_sitStandMatrix, const RuntimeMethod* method)
{
	InvokerActionInvoker6< RuntimeObject*, Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6, Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6, Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6, Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6, Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___0_leftProjectionMatrix, ___1_leftViewMatrix, ___2_rightProjectionMatrix, ___3_rightViewMatrix, ___4_sitStandMatrix);
}
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_HeadsetUpdate_t6F11CEB0407C23E09526E0AECA3A6AAFA4A514D1 (HeadsetUpdate_t6F11CEB0407C23E09526E0AECA3A6AAFA4A514D1* __this, Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___0_leftProjectionMatrix, Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___1_leftViewMatrix, Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___2_rightProjectionMatrix, Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___3_rightViewMatrix, Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___4_sitStandMatrix, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6, Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6, Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6, Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6, Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Native function invocation
	il2cppPInvokeFunc(___0_leftProjectionMatrix, ___1_leftViewMatrix, ___2_rightProjectionMatrix, ___3_rightViewMatrix, ___4_sitStandMatrix);

}
// System.Void WebXR.WebXRManager/HeadsetUpdate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HeadsetUpdate__ctor_m2332A884B02C1DE92A7EFE827445B631DFE1D44A (HeadsetUpdate_t6F11CEB0407C23E09526E0AECA3A6AAFA4A514D1* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___1_method);
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
				__this->___invoke_impl_1 = (intptr_t)&HeadsetUpdate_Invoke_mAFD65820867A532FEFFB53618A899841E5513ED6_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&HeadsetUpdate_Invoke_mAFD65820867A532FEFFB53618A899841E5513ED6_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&HeadsetUpdate_Invoke_mAFD65820867A532FEFFB53618A899841E5513ED6_OpenStatic;
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
	__this->___extra_arg_5 = (intptr_t)&HeadsetUpdate_Invoke_mAFD65820867A532FEFFB53618A899841E5513ED6_Multicast;
}
// System.Void WebXR.WebXRManager/HeadsetUpdate::Invoke(UnityEngine.Matrix4x4,UnityEngine.Matrix4x4,UnityEngine.Matrix4x4,UnityEngine.Matrix4x4,UnityEngine.Matrix4x4)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HeadsetUpdate_Invoke_mAFD65820867A532FEFFB53618A899841E5513ED6 (HeadsetUpdate_t6F11CEB0407C23E09526E0AECA3A6AAFA4A514D1* __this, Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___0_leftProjectionMatrix, Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___1_leftViewMatrix, Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___2_rightProjectionMatrix, Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___3_rightViewMatrix, Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___4_sitStandMatrix, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6, Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6, Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6, Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6, Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_leftProjectionMatrix, ___1_leftViewMatrix, ___2_rightProjectionMatrix, ___3_rightViewMatrix, ___4_sitStandMatrix, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult WebXR.WebXRManager/HeadsetUpdate::BeginInvoke(UnityEngine.Matrix4x4,UnityEngine.Matrix4x4,UnityEngine.Matrix4x4,UnityEngine.Matrix4x4,UnityEngine.Matrix4x4,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* HeadsetUpdate_BeginInvoke_m8ABCD29B63CFB82067D25AC88AA0D777EDAB34F2 (HeadsetUpdate_t6F11CEB0407C23E09526E0AECA3A6AAFA4A514D1* __this, Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___0_leftProjectionMatrix, Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___1_leftViewMatrix, Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___2_rightProjectionMatrix, Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___3_rightViewMatrix, Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___4_sitStandMatrix, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___5_callback, RuntimeObject* ___6_object, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[6] = {0};
	__d_args[0] = Box(Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6_il2cpp_TypeInfo_var, &___0_leftProjectionMatrix);
	__d_args[1] = Box(Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6_il2cpp_TypeInfo_var, &___1_leftViewMatrix);
	__d_args[2] = Box(Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6_il2cpp_TypeInfo_var, &___2_rightProjectionMatrix);
	__d_args[3] = Box(Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6_il2cpp_TypeInfo_var, &___3_rightViewMatrix);
	__d_args[4] = Box(Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6_il2cpp_TypeInfo_var, &___4_sitStandMatrix);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___5_callback, (RuntimeObject*)___6_object);
}
// System.Void WebXR.WebXRManager/HeadsetUpdate::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HeadsetUpdate_EndInvoke_m24C7155BEFE6D5887BD6F523E7D2CC7A0EFB318E (HeadsetUpdate_t6F11CEB0407C23E09526E0AECA3A6AAFA4A514D1* __this, RuntimeObject* ___0_result, const RuntimeMethod* method) 
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___0_result, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
void ControllerUpdate_Invoke_mE3F7040317ABB0ED30FE4552530DA48AA2E98CFF_Multicast(ControllerUpdate_t741280F157DF9254D489FE93F944F0AF7385B8C8* __this, String_t* ___0_id, int32_t ___1_index, String_t* ___2_hand, bool ___3_hasOrientation, bool ___4_hasPosition, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___5_orientation, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___6_position, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___7_linearAcceleration, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___8_linearVelocity, WebXRControllerButtonU5BU5D_t915FA50DD1DD06576264ABAC3FC33CA4B0FF1A75* ___9_buttons, SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___10_axes, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		ControllerUpdate_t741280F157DF9254D489FE93F944F0AF7385B8C8* currentDelegate = reinterpret_cast<ControllerUpdate_t741280F157DF9254D489FE93F944F0AF7385B8C8*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, String_t*, int32_t, String_t*, bool, bool, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, WebXRControllerButtonU5BU5D_t915FA50DD1DD06576264ABAC3FC33CA4B0FF1A75*, SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___0_id, ___1_index, ___2_hand, ___3_hasOrientation, ___4_hasPosition, ___5_orientation, ___6_position, ___7_linearAcceleration, ___8_linearVelocity, ___9_buttons, ___10_axes, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void ControllerUpdate_Invoke_mE3F7040317ABB0ED30FE4552530DA48AA2E98CFF_OpenInst(ControllerUpdate_t741280F157DF9254D489FE93F944F0AF7385B8C8* __this, String_t* ___0_id, int32_t ___1_index, String_t* ___2_hand, bool ___3_hasOrientation, bool ___4_hasPosition, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___5_orientation, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___6_position, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___7_linearAcceleration, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___8_linearVelocity, WebXRControllerButtonU5BU5D_t915FA50DD1DD06576264ABAC3FC33CA4B0FF1A75* ___9_buttons, SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___10_axes, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (String_t*, int32_t, String_t*, bool, bool, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, WebXRControllerButtonU5BU5D_t915FA50DD1DD06576264ABAC3FC33CA4B0FF1A75*, SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___0_id, ___1_index, ___2_hand, ___3_hasOrientation, ___4_hasPosition, ___5_orientation, ___6_position, ___7_linearAcceleration, ___8_linearVelocity, ___9_buttons, ___10_axes, method);
}
void ControllerUpdate_Invoke_mE3F7040317ABB0ED30FE4552530DA48AA2E98CFF_OpenStatic(ControllerUpdate_t741280F157DF9254D489FE93F944F0AF7385B8C8* __this, String_t* ___0_id, int32_t ___1_index, String_t* ___2_hand, bool ___3_hasOrientation, bool ___4_hasPosition, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___5_orientation, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___6_position, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___7_linearAcceleration, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___8_linearVelocity, WebXRControllerButtonU5BU5D_t915FA50DD1DD06576264ABAC3FC33CA4B0FF1A75* ___9_buttons, SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___10_axes, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (String_t*, int32_t, String_t*, bool, bool, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, WebXRControllerButtonU5BU5D_t915FA50DD1DD06576264ABAC3FC33CA4B0FF1A75*, SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___0_id, ___1_index, ___2_hand, ___3_hasOrientation, ___4_hasPosition, ___5_orientation, ___6_position, ___7_linearAcceleration, ___8_linearVelocity, ___9_buttons, ___10_axes, method);
}
void ControllerUpdate_Invoke_mE3F7040317ABB0ED30FE4552530DA48AA2E98CFF_OpenStaticInvoker(ControllerUpdate_t741280F157DF9254D489FE93F944F0AF7385B8C8* __this, String_t* ___0_id, int32_t ___1_index, String_t* ___2_hand, bool ___3_hasOrientation, bool ___4_hasPosition, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___5_orientation, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___6_position, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___7_linearAcceleration, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___8_linearVelocity, WebXRControllerButtonU5BU5D_t915FA50DD1DD06576264ABAC3FC33CA4B0FF1A75* ___9_buttons, SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___10_axes, const RuntimeMethod* method)
{
	InvokerActionInvoker11< String_t*, int32_t, String_t*, bool, bool, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, WebXRControllerButtonU5BU5D_t915FA50DD1DD06576264ABAC3FC33CA4B0FF1A75*, SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* >::Invoke(__this->___method_ptr_0, method, NULL, ___0_id, ___1_index, ___2_hand, ___3_hasOrientation, ___4_hasPosition, ___5_orientation, ___6_position, ___7_linearAcceleration, ___8_linearVelocity, ___9_buttons, ___10_axes);
}
void ControllerUpdate_Invoke_mE3F7040317ABB0ED30FE4552530DA48AA2E98CFF_ClosedStaticInvoker(ControllerUpdate_t741280F157DF9254D489FE93F944F0AF7385B8C8* __this, String_t* ___0_id, int32_t ___1_index, String_t* ___2_hand, bool ___3_hasOrientation, bool ___4_hasPosition, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___5_orientation, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___6_position, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___7_linearAcceleration, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___8_linearVelocity, WebXRControllerButtonU5BU5D_t915FA50DD1DD06576264ABAC3FC33CA4B0FF1A75* ___9_buttons, SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___10_axes, const RuntimeMethod* method)
{
	InvokerActionInvoker12< RuntimeObject*, String_t*, int32_t, String_t*, bool, bool, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, WebXRControllerButtonU5BU5D_t915FA50DD1DD06576264ABAC3FC33CA4B0FF1A75*, SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___0_id, ___1_index, ___2_hand, ___3_hasOrientation, ___4_hasPosition, ___5_orientation, ___6_position, ___7_linearAcceleration, ___8_linearVelocity, ___9_buttons, ___10_axes);
}
// System.Void WebXR.WebXRManager/ControllerUpdate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ControllerUpdate__ctor_m21815015FFA90D03C294DD4D918D732EA1782DC7 (ControllerUpdate_t741280F157DF9254D489FE93F944F0AF7385B8C8* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___1_method);
	__this->___method_3 = ___1_method;
	__this->___m_target_2 = ___0_object;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___0_object);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___1_method);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___1_method))
	{
		bool isOpen = parameterCount == 11;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___1_method))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&ControllerUpdate_Invoke_mE3F7040317ABB0ED30FE4552530DA48AA2E98CFF_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&ControllerUpdate_Invoke_mE3F7040317ABB0ED30FE4552530DA48AA2E98CFF_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&ControllerUpdate_Invoke_mE3F7040317ABB0ED30FE4552530DA48AA2E98CFF_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		bool isOpen = parameterCount == 10;
		if (isOpen)
		{
			__this->___invoke_impl_1 = (intptr_t)&ControllerUpdate_Invoke_mE3F7040317ABB0ED30FE4552530DA48AA2E98CFF_OpenInst;
		}
		else
		{
			if (___0_object == NULL)
				il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
			__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
			__this->___method_code_6 = (intptr_t)__this->___m_target_2;
		}
	}
	__this->___extra_arg_5 = (intptr_t)&ControllerUpdate_Invoke_mE3F7040317ABB0ED30FE4552530DA48AA2E98CFF_Multicast;
}
// System.Void WebXR.WebXRManager/ControllerUpdate::Invoke(System.String,System.Int32,System.String,System.Boolean,System.Boolean,UnityEngine.Quaternion,UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3,WebXR.WebXRControllerButton[],System.Single[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ControllerUpdate_Invoke_mE3F7040317ABB0ED30FE4552530DA48AA2E98CFF (ControllerUpdate_t741280F157DF9254D489FE93F944F0AF7385B8C8* __this, String_t* ___0_id, int32_t ___1_index, String_t* ___2_hand, bool ___3_hasOrientation, bool ___4_hasPosition, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___5_orientation, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___6_position, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___7_linearAcceleration, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___8_linearVelocity, WebXRControllerButtonU5BU5D_t915FA50DD1DD06576264ABAC3FC33CA4B0FF1A75* ___9_buttons, SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___10_axes, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, String_t*, int32_t, String_t*, bool, bool, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, WebXRControllerButtonU5BU5D_t915FA50DD1DD06576264ABAC3FC33CA4B0FF1A75*, SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_id, ___1_index, ___2_hand, ___3_hasOrientation, ___4_hasPosition, ___5_orientation, ___6_position, ___7_linearAcceleration, ___8_linearVelocity, ___9_buttons, ___10_axes, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult WebXR.WebXRManager/ControllerUpdate::BeginInvoke(System.String,System.Int32,System.String,System.Boolean,System.Boolean,UnityEngine.Quaternion,UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3,WebXR.WebXRControllerButton[],System.Single[],System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ControllerUpdate_BeginInvoke_m2DCA5215B28C59D2D35902DBC99600CFFEA78958 (ControllerUpdate_t741280F157DF9254D489FE93F944F0AF7385B8C8* __this, String_t* ___0_id, int32_t ___1_index, String_t* ___2_hand, bool ___3_hasOrientation, bool ___4_hasPosition, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___5_orientation, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___6_position, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___7_linearAcceleration, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___8_linearVelocity, WebXRControllerButtonU5BU5D_t915FA50DD1DD06576264ABAC3FC33CA4B0FF1A75* ___9_buttons, SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___10_axes, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___11_callback, RuntimeObject* ___12_object, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[12] = {0};
	__d_args[0] = ___0_id;
	__d_args[1] = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &___1_index);
	__d_args[2] = ___2_hand;
	__d_args[3] = Box(Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var, &___3_hasOrientation);
	__d_args[4] = Box(Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var, &___4_hasPosition);
	__d_args[5] = Box(Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_il2cpp_TypeInfo_var, &___5_orientation);
	__d_args[6] = Box(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var, &___6_position);
	__d_args[7] = Box(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var, &___7_linearAcceleration);
	__d_args[8] = Box(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var, &___8_linearVelocity);
	__d_args[9] = ___9_buttons;
	__d_args[10] = ___10_axes;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___11_callback, (RuntimeObject*)___12_object);
}
// System.Void WebXR.WebXRManager/ControllerUpdate::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ControllerUpdate_EndInvoke_m08E2493D31FE84AD063315097112222FDD2F4B47 (ControllerUpdate_t741280F157DF9254D489FE93F944F0AF7385B8C8* __this, RuntimeObject* ___0_result, const RuntimeMethod* method) 
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___0_result, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void WebXR.WebXRMatrixUtil::SetTransformFromViewMatrix(UnityEngine.Transform,UnityEngine.Matrix4x4)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebXRMatrixUtil_SetTransformFromViewMatrix_mF832D97B26F951B04FE5D93E8C09255F073E29F9 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___0_transform, Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___1_webXRViewMatrix, const RuntimeMethod* method) 
{
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// Matrix4x4 trs = TransformViewMatrixToTRS(webXRViewMatrix);
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_0 = ___1_webXRViewMatrix;
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_1;
		L_1 = WebXRMatrixUtil_TransformViewMatrixToTRS_m303E5C9A404ECF6FC1DDA8A1646387755FF498D4(L_0, NULL);
		V_0 = L_1;
		// transform.localPosition = trs.GetColumn(3);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2 = ___0_transform;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_3;
		L_3 = Matrix4x4_GetColumn_m5CE079D7A69DE70E3144BADD20A1651C73A8D118((&V_0), 3, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Vector4_op_Implicit_m0217ADDC8CADDB93ACBABB17A50207698DAB0071_inline(L_3, NULL);
		Transform_set_localPosition_mDE1C997F7D79C0885210B7732B4BA50EE7D73134(L_2, L_4, NULL);
		// transform.localRotation = Quaternion.LookRotation(trs.GetColumn(2), trs.GetColumn(1));
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_5 = ___0_transform;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_6;
		L_6 = Matrix4x4_GetColumn_m5CE079D7A69DE70E3144BADD20A1651C73A8D118((&V_0), 2, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		L_7 = Vector4_op_Implicit_m0217ADDC8CADDB93ACBABB17A50207698DAB0071_inline(L_6, NULL);
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_8;
		L_8 = Matrix4x4_GetColumn_m5CE079D7A69DE70E3144BADD20A1651C73A8D118((&V_0), 1, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		L_9 = Vector4_op_Implicit_m0217ADDC8CADDB93ACBABB17A50207698DAB0071_inline(L_8, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_10;
		L_10 = Quaternion_LookRotation_mFB02EDC8F733774DFAC3BEA4B4BB265A228F8307(L_7, L_9, NULL);
		Transform_set_localRotation_mAB4A011D134BA58AB780BECC0025CA65F16185FA(L_5, L_10, NULL);
		// transform.localScale = new Vector3(
		//     trs.GetColumn(0).magnitude,
		//     trs.GetColumn(1).magnitude,
		//     trs.GetColumn(2).magnitude
		// );
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_11 = ___0_transform;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_12;
		L_12 = Matrix4x4_GetColumn_m5CE079D7A69DE70E3144BADD20A1651C73A8D118((&V_0), 0, NULL);
		V_1 = L_12;
		float L_13;
		L_13 = Vector4_get_magnitude_m97A83FC484190F07D8017F4BD10E3C81478E0D20_inline((&V_1), NULL);
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_14;
		L_14 = Matrix4x4_GetColumn_m5CE079D7A69DE70E3144BADD20A1651C73A8D118((&V_0), 1, NULL);
		V_1 = L_14;
		float L_15;
		L_15 = Vector4_get_magnitude_m97A83FC484190F07D8017F4BD10E3C81478E0D20_inline((&V_1), NULL);
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_16;
		L_16 = Matrix4x4_GetColumn_m5CE079D7A69DE70E3144BADD20A1651C73A8D118((&V_0), 2, NULL);
		V_1 = L_16;
		float L_17;
		L_17 = Vector4_get_magnitude_m97A83FC484190F07D8017F4BD10E3C81478E0D20_inline((&V_1), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_18;
		memset((&L_18), 0, sizeof(L_18));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_18), L_13, L_15, L_17, /*hidden argument*/NULL);
		Transform_set_localScale_mBA79E811BAF6C47B80FF76414C12B47B3CD03633(L_11, L_18, NULL);
		// }
		return;
	}
}
// UnityEngine.Matrix4x4 WebXR.WebXRMatrixUtil::TransformViewMatrixToTRS(UnityEngine.Matrix4x4)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 WebXRMatrixUtil_TransformViewMatrixToTRS_m303E5C9A404ECF6FC1DDA8A1646387755FF498D4 (Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___0_openGLViewMatrix, const RuntimeMethod* method) 
{
	{
		// openGLViewMatrix.m20 *= -1;
		float* L_0 = (&(&___0_openGLViewMatrix)->___m20_2);
		float* L_1 = L_0;
		float L_2 = *((float*)L_1);
		*((float*)L_1) = (float)((float)il2cpp_codegen_multiply(L_2, (-1.0f)));
		// openGLViewMatrix.m21 *= -1;
		float* L_3 = (&(&___0_openGLViewMatrix)->___m21_6);
		float* L_4 = L_3;
		float L_5 = *((float*)L_4);
		*((float*)L_4) = (float)((float)il2cpp_codegen_multiply(L_5, (-1.0f)));
		// openGLViewMatrix.m22 *= -1;
		float* L_6 = (&(&___0_openGLViewMatrix)->___m22_10);
		float* L_7 = L_6;
		float L_8 = *((float*)L_7);
		*((float*)L_7) = (float)((float)il2cpp_codegen_multiply(L_8, (-1.0f)));
		// openGLViewMatrix.m23 *= -1;
		float* L_9 = (&(&___0_openGLViewMatrix)->___m23_14);
		float* L_10 = L_9;
		float L_11 = *((float*)L_10);
		*((float*)L_10) = (float)((float)il2cpp_codegen_multiply(L_11, (-1.0f)));
		// return openGLViewMatrix.inverse;
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_12;
		L_12 = Matrix4x4_get_inverse_m4F4A881CD789281EA90EB68CFD39F36C8A81E6BD((&___0_openGLViewMatrix), NULL);
		return L_12;
	}
}
// UnityEngine.Vector3 WebXR.WebXRMatrixUtil::GetTranslationFromMatrix(UnityEngine.Matrix4x4)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 WebXRMatrixUtil_GetTranslationFromMatrix_m48FDCE8DCD761A56470C3C852FE3EEB292B25389 (Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___0_mat, const RuntimeMethod* method) 
{
	{
		// return mat.GetColumn(3);
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_0;
		L_0 = Matrix4x4_GetColumn_m5CE079D7A69DE70E3144BADD20A1651C73A8D118((&___0_mat), 3, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Vector4_op_Implicit_m0217ADDC8CADDB93ACBABB17A50207698DAB0071_inline(L_0, NULL);
		return L_1;
	}
}
// UnityEngine.Quaternion WebXR.WebXRMatrixUtil::GetRotationFromMatrix(UnityEngine.Matrix4x4)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 WebXRMatrixUtil_GetRotationFromMatrix_mD97F23887954792F3243A9990380ACD696959326 (Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___0_mat, const RuntimeMethod* method) 
{
	{
		// return Quaternion.LookRotation(mat.GetColumn(2), mat.GetColumn(1));
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_0;
		L_0 = Matrix4x4_GetColumn_m5CE079D7A69DE70E3144BADD20A1651C73A8D118((&___0_mat), 2, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Vector4_op_Implicit_m0217ADDC8CADDB93ACBABB17A50207698DAB0071_inline(L_0, NULL);
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_2;
		L_2 = Matrix4x4_GetColumn_m5CE079D7A69DE70E3144BADD20A1651C73A8D118((&___0_mat), 1, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Vector4_op_Implicit_m0217ADDC8CADDB93ACBABB17A50207698DAB0071_inline(L_2, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_4;
		L_4 = Quaternion_LookRotation_mFB02EDC8F733774DFAC3BEA4B4BB265A228F8307(L_1, L_3, NULL);
		return L_4;
	}
}
// UnityEngine.Matrix4x4 WebXR.WebXRMatrixUtil::NumbersToMatrix(System.Single[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 WebXRMatrixUtil_NumbersToMatrix_m67831ABE46F6833A59DE882EF588C60786992820 (SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___0_array, const RuntimeMethod* method) 
{
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// var mat = new Matrix4x4();
		il2cpp_codegen_initobj((&V_0), sizeof(Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6));
		// mat.m00 = array[0];
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_0 = ___0_array;
		int32_t L_1 = 0;
		float L_2 = (L_0)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_1));
		(&V_0)->___m00_0 = L_2;
		// mat.m01 = array[1];
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_3 = ___0_array;
		int32_t L_4 = 1;
		float L_5 = (L_3)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_4));
		(&V_0)->___m01_4 = L_5;
		// mat.m02 = array[2];
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_6 = ___0_array;
		int32_t L_7 = 2;
		float L_8 = (L_6)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_7));
		(&V_0)->___m02_8 = L_8;
		// mat.m03 = array[3];
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_9 = ___0_array;
		int32_t L_10 = 3;
		float L_11 = (L_9)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_10));
		(&V_0)->___m03_12 = L_11;
		// mat.m10 = array[4];
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_12 = ___0_array;
		int32_t L_13 = 4;
		float L_14 = (L_12)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_13));
		(&V_0)->___m10_1 = L_14;
		// mat.m11 = array[5];
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_15 = ___0_array;
		int32_t L_16 = 5;
		float L_17 = (L_15)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_16));
		(&V_0)->___m11_5 = L_17;
		// mat.m12 = array[6];
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_18 = ___0_array;
		int32_t L_19 = 6;
		float L_20 = (L_18)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_19));
		(&V_0)->___m12_9 = L_20;
		// mat.m13 = array[7];
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_21 = ___0_array;
		int32_t L_22 = 7;
		float L_23 = (L_21)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_22));
		(&V_0)->___m13_13 = L_23;
		// mat.m20 = array[8];
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_24 = ___0_array;
		int32_t L_25 = 8;
		float L_26 = (L_24)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_25));
		(&V_0)->___m20_2 = L_26;
		// mat.m21 = array[9];
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_27 = ___0_array;
		int32_t L_28 = ((int32_t)9);
		float L_29 = (L_27)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_28));
		(&V_0)->___m21_6 = L_29;
		// mat.m22 = array[10];
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_30 = ___0_array;
		int32_t L_31 = ((int32_t)10);
		float L_32 = (L_30)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_31));
		(&V_0)->___m22_10 = L_32;
		// mat.m23 = array[11];
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_33 = ___0_array;
		int32_t L_34 = ((int32_t)11);
		float L_35 = (L_33)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_34));
		(&V_0)->___m23_14 = L_35;
		// mat.m30 = array[12];
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_36 = ___0_array;
		int32_t L_37 = ((int32_t)12);
		float L_38 = (L_36)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_37));
		(&V_0)->___m30_3 = L_38;
		// mat.m31 = array[13];
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_39 = ___0_array;
		int32_t L_40 = ((int32_t)13);
		float L_41 = (L_39)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_40));
		(&V_0)->___m31_7 = L_41;
		// mat.m32 = array[14];
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_42 = ___0_array;
		int32_t L_43 = ((int32_t)14);
		float L_44 = (L_42)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_43));
		(&V_0)->___m32_11 = L_44;
		// mat.m33 = array[15];
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_45 = ___0_array;
		int32_t L_46 = ((int32_t)15);
		float L_47 = (L_45)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_46));
		(&V_0)->___m33_15 = L_47;
		// return mat;
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_48 = V_0;
		return L_48;
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
// System.Void WebXR.WebXRUI::displayXRElementId(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebXRUI_displayXRElementId_m5DF529B7595B0D542420F6DB96E26D7E10414B39 (String_t* ___0_id, const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (char*);

	// Marshaling of parameter '___0_id' to native representation
	char* ____0_id_marshaled = NULL;
	____0_id_marshaled = il2cpp_codegen_marshal_string(___0_id);

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(displayXRElementId)(____0_id_marshaled);

	// Marshaling cleanup of parameter '___0_id' native representation
	il2cpp_codegen_marshal_free(____0_id_marshaled);
	____0_id_marshaled = NULL;

}
// System.Void WebXR.WebXRUI::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebXRUI__ctor_mBE95A36A4C03922746041AA5097F43242E5EC254 (WebXRUI_tB2E1270EC9FECD65B66232C9E2FED23DD8351765* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___0_x, float ___1_y, float ___2_z, const RuntimeMethod* method) 
{
	{
		float L_0 = ___0_x;
		__this->___x_2 = L_0;
		float L_1 = ___1_y;
		__this->___y_3 = L_1;
		float L_2 = ___2_z;
		__this->___z_4 = L_2;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_op_Multiply_mCB375FCCC12A2EC8F9EB824A1BFB4453B58C2012_inline (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___0_lhs, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___1_rhs, const RuntimeMethod* method) 
{
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_0 = ___0_lhs;
		float L_1 = L_0.___w_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_2 = ___1_rhs;
		float L_3 = L_2.___x_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_4 = ___0_lhs;
		float L_5 = L_4.___x_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_6 = ___1_rhs;
		float L_7 = L_6.___w_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_8 = ___0_lhs;
		float L_9 = L_8.___y_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_10 = ___1_rhs;
		float L_11 = L_10.___z_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_12 = ___0_lhs;
		float L_13 = L_12.___z_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_14 = ___1_rhs;
		float L_15 = L_14.___y_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_16 = ___0_lhs;
		float L_17 = L_16.___w_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_18 = ___1_rhs;
		float L_19 = L_18.___y_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_20 = ___0_lhs;
		float L_21 = L_20.___y_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_22 = ___1_rhs;
		float L_23 = L_22.___w_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_24 = ___0_lhs;
		float L_25 = L_24.___z_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_26 = ___1_rhs;
		float L_27 = L_26.___x_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_28 = ___0_lhs;
		float L_29 = L_28.___x_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_30 = ___1_rhs;
		float L_31 = L_30.___z_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_32 = ___0_lhs;
		float L_33 = L_32.___w_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_34 = ___1_rhs;
		float L_35 = L_34.___z_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_36 = ___0_lhs;
		float L_37 = L_36.___z_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_38 = ___1_rhs;
		float L_39 = L_38.___w_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_40 = ___0_lhs;
		float L_41 = L_40.___x_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_42 = ___1_rhs;
		float L_43 = L_42.___y_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_44 = ___0_lhs;
		float L_45 = L_44.___y_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_46 = ___1_rhs;
		float L_47 = L_46.___x_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_48 = ___0_lhs;
		float L_49 = L_48.___w_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_50 = ___1_rhs;
		float L_51 = L_50.___w_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_52 = ___0_lhs;
		float L_53 = L_52.___x_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_54 = ___1_rhs;
		float L_55 = L_54.___x_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_56 = ___0_lhs;
		float L_57 = L_56.___y_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_58 = ___1_rhs;
		float L_59 = L_58.___y_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_60 = ___0_lhs;
		float L_61 = L_60.___z_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_62 = ___1_rhs;
		float L_63 = L_62.___z_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_64;
		memset((&L_64), 0, sizeof(L_64));
		Quaternion__ctor_m868FD60AA65DD5A8AC0C5DEB0608381A8D85FCD8_inline((&L_64), ((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_1, L_3)), ((float)il2cpp_codegen_multiply(L_5, L_7)))), ((float)il2cpp_codegen_multiply(L_9, L_11)))), ((float)il2cpp_codegen_multiply(L_13, L_15)))), ((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_17, L_19)), ((float)il2cpp_codegen_multiply(L_21, L_23)))), ((float)il2cpp_codegen_multiply(L_25, L_27)))), ((float)il2cpp_codegen_multiply(L_29, L_31)))), ((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_33, L_35)), ((float)il2cpp_codegen_multiply(L_37, L_39)))), ((float)il2cpp_codegen_multiply(L_41, L_43)))), ((float)il2cpp_codegen_multiply(L_45, L_47)))), ((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_multiply(L_49, L_51)), ((float)il2cpp_codegen_multiply(L_53, L_55)))), ((float)il2cpp_codegen_multiply(L_57, L_59)))), ((float)il2cpp_codegen_multiply(L_61, L_63)))), /*hidden argument*/NULL);
		V_0 = L_64;
		goto IL_00e5;
	}

IL_00e5:
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_65 = V_0;
		return L_65;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Quaternion_get_eulerAngles_m2DB5158B5C3A71FD60FC8A6EE43D3AAA1CFED122_inline (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* __this, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_0 = (*(Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974*)__this);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Quaternion_Internal_ToEulerRad_m5BD0EEC543120C320DC77FCCDFD2CE2E6BD3F1A8(L_0, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_1, (57.2957802f), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Quaternion_Internal_MakePositive_m73E2D01920CB0DFE661A55022C129E8617F0C9A8(L_2, NULL);
		V_0 = L_3;
		goto IL_001e;
	}

IL_001e:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = V_0;
		return L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_Euler_m9262AB29E3E9CE94EF71051F38A28E82AEC73F90_inline (float ___0_x, float ___1_y, float ___2_z, const RuntimeMethod* method) 
{
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		float L_0 = ___0_x;
		float L_1 = ___1_y;
		float L_2 = ___2_z;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		memset((&L_3), 0, sizeof(L_3));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_3), L_0, L_1, L_2, /*hidden argument*/NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_3, (0.0174532924f), NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_5;
		L_5 = Quaternion_Internal_FromEulerRad_m66D4475341F53949471E6870FB5C5E4A5E9BA93E(L_4, NULL);
		V_0 = L_5;
		goto IL_001b;
	}

IL_001b:
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_6 = V_0;
		return L_6;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_b, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_a;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___1_b;
		float L_3 = L_2.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___0_a;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___1_b;
		float L_7 = L_6.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___0_a;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___1_b;
		float L_11 = L_10.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		memset((&L_12), 0, sizeof(L_12));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_12), ((float)il2cpp_codegen_add(L_1, L_3)), ((float)il2cpp_codegen_add(L_5, L_7)), ((float)il2cpp_codegen_add(L_9, L_11)), /*hidden argument*/NULL);
		V_0 = L_12;
		goto IL_0030;
	}

IL_0030:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13 = V_0;
		return L_13;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3_Set_m1C7E543216734FB513F9CEBA44C50E6FC2AFD49D_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___0_newX, float ___1_newY, float ___2_newZ, const RuntimeMethod* method) 
{
	{
		float L_0 = ___0_newX;
		__this->___x_2 = L_0;
		float L_1 = ___1_newY;
		__this->___y_3 = L_1;
		float L_2 = ___2_newZ;
		__this->___z_4 = L_2;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Quaternion__ctor_m868FD60AA65DD5A8AC0C5DEB0608381A8D85FCD8_inline (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* __this, float ___0_x, float ___1_y, float ___2_z, float ___3_w, const RuntimeMethod* method) 
{
	{
		float L_0 = ___0_x;
		__this->___x_0 = L_0;
		float L_1 = ___1_y;
		__this->___y_1 = L_1;
		float L_2 = ___2_z;
		__this->___z_2 = L_2;
		float L_3 = ___3_w;
		__this->___w_3 = L_3;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ControllerUpdate_Invoke_mE3F7040317ABB0ED30FE4552530DA48AA2E98CFF_inline (ControllerUpdate_t741280F157DF9254D489FE93F944F0AF7385B8C8* __this, String_t* ___0_id, int32_t ___1_index, String_t* ___2_hand, bool ___3_hasOrientation, bool ___4_hasPosition, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___5_orientation, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___6_position, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___7_linearAcceleration, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___8_linearVelocity, WebXRControllerButtonU5BU5D_t915FA50DD1DD06576264ABAC3FC33CA4B0FF1A75* ___9_buttons, SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___10_axes, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, String_t*, int32_t, String_t*, bool, bool, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, WebXRControllerButtonU5BU5D_t915FA50DD1DD06576264ABAC3FC33CA4B0FF1A75*, SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_id, ___1_index, ___2_hand, ___3_hasOrientation, ___4_hasPosition, ___5_orientation, ___6_position, ___7_linearAcceleration, ___8_linearVelocity, ___9_buttons, ___10_axes, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void XRCapabilitiesUpdate_Invoke_mD8A4B8425D0721E099087B0F59A62B0EE7E50B68_inline (XRCapabilitiesUpdate_t42E555152D7F0BAAFFDA89B975BDBF594696530A* __this, WebXRDisplayCapabilities_t24125617B50773E797392F6AFCE0B328DE392B35* ___0_capabilities, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, WebXRDisplayCapabilities_t24125617B50773E797392F6AFCE0B328DE392B35*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_capabilities, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void XRChange_Invoke_m13F3B35DBA21F8E88878CC3E81AA7DE4E3E1AF95_inline (XRChange_t3294064A42A2CE42C85AABA477F09DA02FBE6FB3* __this, int32_t ___0_state, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, int32_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_state, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void HeadsetUpdate_Invoke_mAFD65820867A532FEFFB53618A899841E5513ED6_inline (HeadsetUpdate_t6F11CEB0407C23E09526E0AECA3A6AAFA4A514D1* __this, Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___0_leftProjectionMatrix, Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___1_leftViewMatrix, Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___2_rightProjectionMatrix, Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___3_rightViewMatrix, Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___4_sitStandMatrix, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6, Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6, Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6, Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6, Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_leftProjectionMatrix, ___1_leftViewMatrix, ___2_rightProjectionMatrix, ___3_rightViewMatrix, ___4_sitStandMatrix, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector4_op_Implicit_m0217ADDC8CADDB93ACBABB17A50207698DAB0071_inline (Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___0_v, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_0 = ___0_v;
		float L_1 = L_0.___x_1;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_2 = ___0_v;
		float L_3 = L_2.___y_2;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_4 = ___0_v;
		float L_5 = L_4.___z_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		memset((&L_6), 0, sizeof(L_6));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_6), L_1, L_3, L_5, /*hidden argument*/NULL);
		V_0 = L_6;
		goto IL_001b;
	}

IL_001b:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7 = V_0;
		return L_7;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector4_get_magnitude_m97A83FC484190F07D8017F4BD10E3C81478E0D20_inline (Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	{
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_0 = (*(Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3*)__this);
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_1 = (*(Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3*)__this);
		float L_2;
		L_2 = Vector4_Dot_m40A3B2E258E53E4847583474E40AC29F68AF8BA3_inline(L_0, L_1, NULL);
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_3;
		L_3 = sqrt(((double)L_2));
		V_0 = ((float)L_3);
		goto IL_001c;
	}

IL_001c:
	{
		float L_4 = V_0;
		return L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->____current_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = (int32_t)__this->____size_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, float ___1_d, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_a;
		float L_1 = L_0.___x_2;
		float L_2 = ___1_d;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = ___0_a;
		float L_4 = L_3.___y_3;
		float L_5 = ___1_d;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___0_a;
		float L_7 = L_6.___z_4;
		float L_8 = ___1_d;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		memset((&L_9), 0, sizeof(L_9));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_9), ((float)il2cpp_codegen_multiply(L_1, L_2)), ((float)il2cpp_codegen_multiply(L_4, L_5)), ((float)il2cpp_codegen_multiply(L_7, L_8)), /*hidden argument*/NULL);
		V_0 = L_9;
		goto IL_0021;
	}

IL_0021:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = V_0;
		return L_10;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector4_Dot_m40A3B2E258E53E4847583474E40AC29F68AF8BA3_inline (Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___0_a, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___1_b, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_0 = ___0_a;
		float L_1 = L_0.___x_1;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_2 = ___1_b;
		float L_3 = L_2.___x_1;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_4 = ___0_a;
		float L_5 = L_4.___y_2;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_6 = ___1_b;
		float L_7 = L_6.___y_2;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_8 = ___0_a;
		float L_9 = L_8.___z_3;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_10 = ___1_b;
		float L_11 = L_10.___z_3;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_12 = ___0_a;
		float L_13 = L_12.___w_4;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_14 = ___1_b;
		float L_15 = L_14.___w_4;
		V_0 = ((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_1, L_3)), ((float)il2cpp_codegen_multiply(L_5, L_7)))), ((float)il2cpp_codegen_multiply(L_9, L_11)))), ((float)il2cpp_codegen_multiply(L_13, L_15))));
		goto IL_003b;
	}

IL_003b:
	{
		float L_16 = V_0;
		return L_16;
	}
}
