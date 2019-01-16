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
#include <stdint.h>

#include "il2cpp-class-internals.h"
#include "codegen/il2cpp-codegen.h"
#include "il2cpp-object-internals.h"

template <typename T1>
struct VirtActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
struct VirtActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R, typename T1>
struct VirtFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R>
struct VirtFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R, typename T1, typename T2>
struct VirtFuncInvoker2
{
	typedef R (*Func)(void*, T1, T2, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename T1, typename T2>
struct VirtActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3>
struct VirtActionInvoker3
{
	typedef void (*Action)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3>
struct VirtFuncInvoker3
{
	typedef R (*Func)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
template <typename T1>
struct GenericVirtActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
struct GenericVirtActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1, typename T2>
struct GenericVirtActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
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
struct InterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1, typename T2>
struct InterfaceActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename T1>
struct GenericInterfaceActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
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
template <typename T1, typename T2>
struct GenericInterfaceActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};

// CUDLR.CommandAttribute
struct CommandAttribute_t3967200570;
// CUDLR.CommandAttribute/Callback
struct Callback_t1969551140;
// CUDLR.CommandAttribute/CallbackSimple
struct CallbackSimple_t200441164;
// CUDLR.CommandTree
struct CommandTree_t2732396483;
// CUDLR.CommandTree[]
struct CommandTreeU5BU5D_t4018397650;
// CUDLR.Console
struct Console_t978607149;
// CUDLR.Console/<RegisterAttributes>c__AnonStorey0
struct U3CRegisterAttributesU3Ec__AnonStorey0_t2829874507;
// CUDLR.QueuedCommand[]
struct QueuedCommandU5BU5D_t551979271;
// CUDLR.RequestContext
struct RequestContext_t3602631757;
// CUDLR.RequestContext[]
struct RequestContextU5BU5D_t2032304096;
// CUDLR.RouteAttribute
struct RouteAttribute_t574643108;
// CUDLR.RouteAttribute/Callback
struct Callback_t1777011615;
// CUDLR.RouteAttribute[]
struct RouteAttributeU5BU5D_t1966353741;
// CUDLR.Server
struct Server_t545360578;
// CUDLR.Server/<HandleRequests>c__Iterator0
struct U3CHandleRequestsU3Ec__Iterator0_t4068759609;
// CUDLR.Server/<RegisterFileHandlers>c__AnonStorey1
struct U3CRegisterFileHandlersU3Ec__AnonStorey1_t3770007581;
// CUDLR.Server/FileHandlerDelegate
struct FileHandlerDelegate_t13458300;
// CharacterGPSCopmassController
struct CharacterGPSCopmassController_t3516088559;
// System.AsyncCallback
struct AsyncCallback_t3962456242;
// System.Attribute
struct Attribute_t861562559;
// System.Byte
struct Byte_t1134296376;
// System.Byte[]
struct ByteU5BU5D_t4116647657;
// System.Char[]
struct CharU5BU5D_t3528271667;
// System.Collections.ArrayList
struct ArrayList_t2718874744;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Object>
struct KeyCollection_t322220623;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,CUDLR.CommandTree>
struct KeyCollection_t2707328253;
// System.Collections.Generic.Dictionary`2/Transform`1<System.String,CUDLR.CommandTree,System.Collections.DictionaryEntry>
struct Transform_1_t2868809366;
// System.Collections.Generic.Dictionary`2/Transform`1<System.String,System.String,System.Collections.DictionaryEntry>
struct Transform_1_t132201056;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>
struct Dictionary_2_t1839659084;
// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
struct Dictionary_2_t132545152;
// System.Collections.Generic.Dictionary`2<System.String,CUDLR.CommandTree>
struct Dictionary_2_t2517652782;
// System.Collections.Generic.Dictionary`2<System.String,System.Int32>
struct Dictionary_2_t2736202052;
// System.Collections.Generic.Dictionary`2<System.String,System.String>
struct Dictionary_2_t1632706988;
// System.Collections.Generic.IEnumerable`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct IEnumerable_1_t1510070208;
// System.Collections.Generic.IEnumerable`1<System.Collections.Generic.KeyValuePair`2<System.String,System.String>>
struct IEnumerable_1_t3010232044;
// System.Collections.Generic.IEnumerable`1<System.Object>
struct IEnumerable_1_t2059959053;
// System.Collections.Generic.IEnumerable`1<System.String>
struct IEnumerable_1_t827303578;
// System.Collections.Generic.IEqualityComparer`1<System.String>
struct IEqualityComparer_1_t3954782707;
// System.Collections.Generic.Link[]
struct LinkU5BU5D_t964245573;
// System.Collections.Generic.List`1<CUDLR.RouteAttribute>
struct List_1_t2046717850;
// System.Collections.Generic.List`1<System.Object>
struct List_1_t257213610;
// System.Collections.Generic.List`1<System.String>
struct List_1_t3319525431;
// System.Collections.Generic.Queue`1<CUDLR.QueuedCommand>
struct Queue_1_t3702832664;
// System.Collections.Generic.Queue`1<CUDLR.RequestContext>
struct Queue_1_t3448891251;
// System.Collections.Generic.Queue`1<System.Object>
struct Queue_1_t2926365658;
// System.Collections.Hashtable
struct Hashtable_t1853889766;
// System.Collections.IComparer
struct IComparer_t1540313114;
// System.Collections.IDictionary
struct IDictionary_t1363984059;
// System.Collections.IEnumerator
struct IEnumerator_t1853284238;
// System.Collections.IEqualityComparer
struct IEqualityComparer_t1493878338;
// System.Collections.IHashCodeProvider
struct IHashCodeProvider_t267601189;
// System.Collections.Specialized.NameObjectCollectionBase/KeysCollection
struct KeysCollection_t1318642398;
// System.Collections.Specialized.NameObjectCollectionBase/_Item
struct _Item_t2272350267;
// System.Collections.Specialized.NameValueCollection
struct NameValueCollection_t407452768;
// System.Delegate
struct Delegate_t1188392813;
// System.DelegateData
struct DelegateData_t1677132599;
// System.Double
struct Double_t594665363;
// System.Exception
struct Exception_t;
// System.Func`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>,System.Object>
struct Func_2_t4016427559;
// System.Func`2<System.Collections.Generic.KeyValuePair`2<System.String,System.String>,System.String>
struct Func_2_t3001800792;
// System.IAsyncResult
struct IAsyncResult_t767004451;
// System.IO.FileStream
struct FileStream_t4292183065;
// System.IO.Stream
struct Stream_t1273022909;
// System.Int32[]
struct Int32U5BU5D_t385246372;
// System.IntPtr[]
struct IntPtrU5BU5D_t4013366056;
// System.MulticastDelegate
struct MulticastDelegate_t;
// System.Net.AuthenticationSchemeSelector
struct AuthenticationSchemeSelector_t375327801;
// System.Net.CookieCollection
struct CookieCollection_t3881042616;
// System.Net.HttpConnection
struct HttpConnection_t269576101;
// System.Net.HttpListener
struct HttpListener_t988452056;
// System.Net.HttpListenerContext
struct HttpListenerContext_t424880822;
// System.Net.HttpListenerPrefixCollection
struct HttpListenerPrefixCollection_t2963430373;
// System.Net.HttpListenerRequest
struct HttpListenerRequest_t630699488;
// System.Net.HttpListenerResponse
struct HttpListenerResponse_t3502667045;
// System.Net.ResponseStream
struct ResponseStream_t3810703494;
// System.Net.WebHeaderCollection
struct WebHeaderCollection_t1942268960;
// System.NotSupportedException
struct NotSupportedException_t1314879016;
// System.Object[]
struct ObjectU5BU5D_t2843939325;
// System.Reflection.Assembly
struct Assembly_t;
// System.Reflection.Assembly/ResolveEventHolder
struct ResolveEventHolder_t2120639521;
// System.Reflection.FieldInfo
struct FieldInfo_t;
// System.Reflection.FieldInfo[]
struct FieldInfoU5BU5D_t846150980;
// System.Reflection.MemberFilter
struct MemberFilter_t426314064;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t950877179;
// System.Security.Cryptography.RandomNumberGenerator
struct RandomNumberGenerator_t386037858;
// System.Security.PermissionSet
struct PermissionSet_t223948603;
// System.Security.Policy.Evidence
struct Evidence_t2008144148;
// System.Security.Principal.IPrincipal
struct IPrincipal_t2343618843;
// System.String
struct String_t;
// System.String[]
struct StringU5BU5D_t1281789340;
// System.Text.DecoderFallback
struct DecoderFallback_t3123823036;
// System.Text.EncoderFallback
struct EncoderFallback_t1188251036;
// System.Text.Encoding
struct Encoding_t1523322056;
// System.Text.EncodingInfo[]
struct EncodingInfoU5BU5D_t2292552583;
// System.Text.RegularExpressions.Capture
struct Capture_t2232016050;
// System.Text.RegularExpressions.CaptureCollection
struct CaptureCollection_t1760593541;
// System.Text.RegularExpressions.FactoryCache
struct FactoryCache_t2327118887;
// System.Text.RegularExpressions.Group
struct Group_t2468205786;
// System.Text.RegularExpressions.GroupCollection
struct GroupCollection_t69770484;
// System.Text.RegularExpressions.Group[]
struct GroupU5BU5D_t1880820351;
// System.Text.RegularExpressions.IMachine
struct IMachine_t2106687985;
// System.Text.RegularExpressions.IMachineFactory
struct IMachineFactory_t1209798546;
// System.Text.RegularExpressions.Match
struct Match_t3408321083;
// System.Text.RegularExpressions.MatchCollection
struct MatchCollection_t1395363720;
// System.Text.RegularExpressions.Regex
struct Regex_t3657309853;
// System.Threading.ExecutionContext
struct ExecutionContext_t1748372627;
// System.Threading.Thread
struct Thread_t2300836069;
// System.Type
struct Type_t;
// System.Type[]
struct TypeU5BU5D_t3940880105;
// System.UInt16
struct UInt16_t2177724958;
// System.Uri
struct Uri_t100236324;
// System.Uri/UriScheme[]
struct UriSchemeU5BU5D_t2082808316;
// System.UriParser
struct UriParser_t3890150400;
// System.Version
struct Version_t3456873960;
// System.Void
struct Void_t1185182177;
// UnityEngine.Application/LogCallback
struct LogCallback_t3588208630;
// UnityEngine.Compass
struct Compass_t3092386685;
// UnityEngine.Component
struct Component_t1923634451;
// UnityEngine.Component[]
struct ComponentU5BU5D_t3294940482;
// UnityEngine.Coroutine
struct Coroutine_t3829159415;
// UnityEngine.GameObject
struct GameObject_t1113636619;
// UnityEngine.LocationService
struct LocationService_t2839639379;
// UnityEngine.Material
struct Material_t340375123;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t3962482529;
// UnityEngine.Networking.UnityWebRequest
struct UnityWebRequest_t463507806;
// UnityEngine.Object
struct Object_t631007953;
// UnityEngine.Object[]
struct ObjectU5BU5D_t1417781964;
// UnityEngine.Renderer
struct Renderer_t2627027031;
// UnityEngine.Texture
struct Texture_t3661962703;
// UnityEngine.Texture2D
struct Texture2D_t3840446185;
// UnityEngine.Transform
struct Transform_t3600365921;
// UnityEngine.WWW
struct WWW_t3688466362;
// UnityEngine.WaitForEndOfFrame
struct WaitForEndOfFrame_t1314943911;
// UnityEngine.WaitForSeconds
struct WaitForSeconds_t1699091251;
// packt.FoodyGO.Mapping.GoogleMapTile
struct GoogleMapTile_t1047440669;
// packt.FoodyGO.Mapping.GoogleMapTile/<_RefreshMapTile>c__Iterator0
struct U3C_RefreshMapTileU3Ec__Iterator0_t2254000978;
// packt.FoodyGO.Mapping.GoogleMapUtils
struct GoogleMapUtils_t2374289053;
// packt.FoodyGo.Mapping.MapLocation
struct MapLocation_t547849766;
// packt.FoodyGo.Services.GPSLocationService
struct GPSLocationService_t2374085698;
// packt.FoodyGo.Services.GPSLocationService/<StartService>c__Iterator0
struct U3CStartServiceU3Ec__Iterator0_t711529095;

extern RuntimeClass* AsyncCallback_t3962456242_il2cpp_TypeInfo_var;
extern RuntimeClass* Boolean_t97287965_il2cpp_TypeInfo_var;
extern RuntimeClass* ByteU5BU5D_t4116647657_il2cpp_TypeInfo_var;
extern RuntimeClass* CallbackSimple_t200441164_il2cpp_TypeInfo_var;
extern RuntimeClass* Callback_t1777011615_il2cpp_TypeInfo_var;
extern RuntimeClass* Callback_t1969551140_il2cpp_TypeInfo_var;
extern RuntimeClass* CharU5BU5D_t3528271667_il2cpp_TypeInfo_var;
extern RuntimeClass* CommandAttributeU5BU5D_t3855148191_il2cpp_TypeInfo_var;
extern RuntimeClass* CommandAttribute_t3967200570_il2cpp_TypeInfo_var;
extern RuntimeClass* CommandTree_t2732396483_il2cpp_TypeInfo_var;
extern RuntimeClass* Console_t978607149_il2cpp_TypeInfo_var;
extern RuntimeClass* Debug_t3317548046_il2cpp_TypeInfo_var;
extern RuntimeClass* Dictionary_2_t1632706988_il2cpp_TypeInfo_var;
extern RuntimeClass* Dictionary_2_t2517652782_il2cpp_TypeInfo_var;
extern RuntimeClass* Double_t594665363_il2cpp_TypeInfo_var;
extern RuntimeClass* Encoding_t1523322056_il2cpp_TypeInfo_var;
extern RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
extern RuntimeClass* FileHandlerDelegate_t13458300_il2cpp_TypeInfo_var;
extern RuntimeClass* Func_2_t3001800792_il2cpp_TypeInfo_var;
extern RuntimeClass* GoogleMapUtils_t2374289053_il2cpp_TypeInfo_var;
extern RuntimeClass* HttpListener_t988452056_il2cpp_TypeInfo_var;
extern RuntimeClass* IDisposable_t3640265483_il2cpp_TypeInfo_var;
extern RuntimeClass* Input_t1431474628_il2cpp_TypeInfo_var;
extern RuntimeClass* Int32_t2950945753_il2cpp_TypeInfo_var;
extern RuntimeClass* List_1_t2046717850_il2cpp_TypeInfo_var;
extern RuntimeClass* List_1_t3319525431_il2cpp_TypeInfo_var;
extern RuntimeClass* LogCallback_t3588208630_il2cpp_TypeInfo_var;
extern RuntimeClass* MapType_t3185662864_il2cpp_TypeInfo_var;
extern RuntimeClass* Mathf_t3464937446_il2cpp_TypeInfo_var;
extern RuntimeClass* NotSupportedException_t1314879016_il2cpp_TypeInfo_var;
extern RuntimeClass* ObjectU5BU5D_t2843939325_il2cpp_TypeInfo_var;
extern RuntimeClass* Object_t631007953_il2cpp_TypeInfo_var;
extern RuntimeClass* Path_t1605229823_il2cpp_TypeInfo_var;
extern RuntimeClass* Quaternion_t2301928331_il2cpp_TypeInfo_var;
extern RuntimeClass* Queue_1_t3448891251_il2cpp_TypeInfo_var;
extern RuntimeClass* Queue_1_t3702832664_il2cpp_TypeInfo_var;
extern RuntimeClass* Regex_t3657309853_il2cpp_TypeInfo_var;
extern RuntimeClass* RequestContext_t3602631757_il2cpp_TypeInfo_var;
extern RuntimeClass* RouteAttributeU5BU5D_t1966353741_il2cpp_TypeInfo_var;
extern RuntimeClass* RouteAttribute_t574643108_il2cpp_TypeInfo_var;
extern RuntimeClass* Server_t545360578_il2cpp_TypeInfo_var;
extern RuntimeClass* Single_t1397266774_il2cpp_TypeInfo_var;
extern RuntimeClass* StringU5BU5D_t1281789340_il2cpp_TypeInfo_var;
extern RuntimeClass* String_t_il2cpp_TypeInfo_var;
extern RuntimeClass* Thread_t2300836069_il2cpp_TypeInfo_var;
extern RuntimeClass* Type_t_il2cpp_TypeInfo_var;
extern RuntimeClass* U3CHandleRequestsU3Ec__Iterator0_t4068759609_il2cpp_TypeInfo_var;
extern RuntimeClass* U3CRegisterAttributesU3Ec__AnonStorey0_t2829874507_il2cpp_TypeInfo_var;
extern RuntimeClass* U3CRegisterFileHandlersU3Ec__AnonStorey1_t3770007581_il2cpp_TypeInfo_var;
extern RuntimeClass* U3CStartServiceU3Ec__Iterator0_t711529095_il2cpp_TypeInfo_var;
extern RuntimeClass* U3C_RefreshMapTileU3Ec__Iterator0_t2254000978_il2cpp_TypeInfo_var;
extern RuntimeClass* Vector3_t3722313464_il2cpp_TypeInfo_var;
extern RuntimeClass* WWW_t3688466362_il2cpp_TypeInfo_var;
extern RuntimeClass* WaitForEndOfFrame_t1314943911_il2cpp_TypeInfo_var;
extern RuntimeClass* WaitForSeconds_t1699091251_il2cpp_TypeInfo_var;
extern String_t* _stringLiteral1057238085;
extern String_t* _stringLiteral1064848892;
extern String_t* _stringLiteral1178283393;
extern String_t* _stringLiteral1229764066;
extern String_t* _stringLiteral1235476637;
extern String_t* _stringLiteral134297061;
extern String_t* _stringLiteral1344478337;
extern String_t* _stringLiteral1377815833;
extern String_t* _stringLiteral1483169834;
extern String_t* _stringLiteral1571677065;
extern String_t* _stringLiteral1592333791;
extern String_t* _stringLiteral1612324208;
extern String_t* _stringLiteral1819970986;
extern String_t* _stringLiteral1923429753;
extern String_t* _stringLiteral193343063;
extern String_t* _stringLiteral1946891126;
extern String_t* _stringLiteral1963630794;
extern String_t* _stringLiteral1999276886;
extern String_t* _stringLiteral2044213326;
extern String_t* _stringLiteral2045074213;
extern String_t* _stringLiteral2054671126;
extern String_t* _stringLiteral211277911;
extern String_t* _stringLiteral213757135;
extern String_t* _stringLiteral2178748878;
extern String_t* _stringLiteral2252386871;
extern String_t* _stringLiteral2256588097;
extern String_t* _stringLiteral2299194300;
extern String_t* _stringLiteral2372627905;
extern String_t* _stringLiteral2424900053;
extern String_t* _stringLiteral2435037111;
extern String_t* _stringLiteral247314066;
extern String_t* _stringLiteral2506294710;
extern String_t* _stringLiteral2714022994;
extern String_t* _stringLiteral2813937213;
extern String_t* _stringLiteral2822064570;
extern String_t* _stringLiteral2862852759;
extern String_t* _stringLiteral2863770253;
extern String_t* _stringLiteral2869855759;
extern String_t* _stringLiteral3004335085;
extern String_t* _stringLiteral3088513532;
extern String_t* _stringLiteral317198633;
extern String_t* _stringLiteral3222722581;
extern String_t* _stringLiteral3237436314;
extern String_t* _stringLiteral3324379924;
extern String_t* _stringLiteral3450517394;
extern String_t* _stringLiteral3452614526;
extern String_t* _stringLiteral3452614528;
extern String_t* _stringLiteral3452614529;
extern String_t* _stringLiteral3452614542;
extern String_t* _stringLiteral3452614543;
extern String_t* _stringLiteral3452614545;
extern String_t* _stringLiteral3452614566;
extern String_t* _stringLiteral3452614612;
extern String_t* _stringLiteral3452614643;
extern String_t* _stringLiteral3452614645;
extern String_t* _stringLiteral3455563718;
extern String_t* _stringLiteral3457136609;
extern String_t* _stringLiteral353906979;
extern String_t* _stringLiteral3596787190;
extern String_t* _stringLiteral3649928864;
extern String_t* _stringLiteral3708647247;
extern String_t* _stringLiteral3735457576;
extern String_t* _stringLiteral3735861361;
extern String_t* _stringLiteral3748635091;
extern String_t* _stringLiteral37732695;
extern String_t* _stringLiteral3787497674;
extern String_t* _stringLiteral3841741313;
extern String_t* _stringLiteral3842627524;
extern String_t* _stringLiteral3875954633;
extern String_t* _stringLiteral3881171512;
extern String_t* _stringLiteral3931577473;
extern String_t* _stringLiteral3964705726;
extern String_t* _stringLiteral4002445229;
extern String_t* _stringLiteral4026193188;
extern String_t* _stringLiteral4120481384;
extern String_t* _stringLiteral4140064810;
extern String_t* _stringLiteral417138101;
extern String_t* _stringLiteral508239076;
extern String_t* _stringLiteral567578815;
extern String_t* _stringLiteral573045877;
extern String_t* _stringLiteral583427657;
extern String_t* _stringLiteral768485155;
extern String_t* _stringLiteral783935412;
extern String_t* _stringLiteral797640427;
extern String_t* _stringLiteral856847767;
extern String_t* _stringLiteral88737304;
extern String_t* _stringLiteral907197241;
extern String_t* _stringLiteral943589599;
extern const RuntimeMethod* Component_GetComponent_TisRenderer_t2627027031_m2651633905_RuntimeMethod_var;
extern const RuntimeMethod* Console_LogCallback_m3679510954_RuntimeMethod_var;
extern const RuntimeMethod* Console_RegisterAttributes_m1913084373_RuntimeMethod_var;
extern const RuntimeMethod* Console_RegisterCommand_m3820069520_RuntimeMethod_var;
extern const RuntimeMethod* Dictionary_2_Add_m2799738156_RuntimeMethod_var;
extern const RuntimeMethod* Dictionary_2_ContainsKey_m108370318_RuntimeMethod_var;
extern const RuntimeMethod* Dictionary_2_TryGetValue_m1185325717_RuntimeMethod_var;
extern const RuntimeMethod* Dictionary_2__ctor_m2842384104_RuntimeMethod_var;
extern const RuntimeMethod* Dictionary_2__ctor_m3655204740_RuntimeMethod_var;
extern const RuntimeMethod* Dictionary_2_get_Item_m2160169883_RuntimeMethod_var;
extern const RuntimeMethod* Dictionary_2_get_Keys_m1160280914_RuntimeMethod_var;
extern const RuntimeMethod* Dictionary_2_set_Item_m367355386_RuntimeMethod_var;
extern const RuntimeMethod* Enumerable_Select_TisKeyValuePair_2_t4030379155_TisString_t_m3591192767_RuntimeMethod_var;
extern const RuntimeMethod* Enumerable_Skip_TisString_t_m1381761333_RuntimeMethod_var;
extern const RuntimeMethod* Enumerable_ToArray_TisString_t_m4208096419_RuntimeMethod_var;
extern const RuntimeMethod* Enumerator_Dispose_m2026665411_RuntimeMethod_var;
extern const RuntimeMethod* Enumerator_Dispose_m975943653_RuntimeMethod_var;
extern const RuntimeMethod* Enumerator_MoveNext_m3675082026_RuntimeMethod_var;
extern const RuntimeMethod* Enumerator_MoveNext_m4158182743_RuntimeMethod_var;
extern const RuntimeMethod* Enumerator_get_Current_m236733038_RuntimeMethod_var;
extern const RuntimeMethod* Enumerator_get_Current_m3106489094_RuntimeMethod_var;
extern const RuntimeMethod* Func_2__ctor_m3780063840_RuntimeMethod_var;
extern const RuntimeMethod* KeyCollection_GetEnumerator_m2274835298_RuntimeMethod_var;
extern const RuntimeMethod* KeyValuePair_2_get_Key_m1970167909_RuntimeMethod_var;
extern const RuntimeMethod* List_1_Add_m1685793073_RuntimeMethod_var;
extern const RuntimeMethod* List_1_Add_m3083894502_RuntimeMethod_var;
extern const RuntimeMethod* List_1_Clear_m3111619026_RuntimeMethod_var;
extern const RuntimeMethod* List_1_GetEnumerator_m2043795_RuntimeMethod_var;
extern const RuntimeMethod* List_1_Insert_m1169937215_RuntimeMethod_var;
extern const RuntimeMethod* List_1_RemoveAt_m815285786_RuntimeMethod_var;
extern const RuntimeMethod* List_1_ToArray_m3983937259_RuntimeMethod_var;
extern const RuntimeMethod* List_1__ctor_m2948823990_RuntimeMethod_var;
extern const RuntimeMethod* List_1__ctor_m706204246_RuntimeMethod_var;
extern const RuntimeMethod* List_1_get_Count_m2276455407_RuntimeMethod_var;
extern const RuntimeMethod* List_1_get_Count_m4178165277_RuntimeMethod_var;
extern const RuntimeMethod* List_1_get_Item_m1432922716_RuntimeMethod_var;
extern const RuntimeMethod* List_1_get_Item_m3346958548_RuntimeMethod_var;
extern const RuntimeMethod* Queue_1_Dequeue_m940720808_RuntimeMethod_var;
extern const RuntimeMethod* Queue_1_Dequeue_m992750647_RuntimeMethod_var;
extern const RuntimeMethod* Queue_1_Enqueue_m1798554875_RuntimeMethod_var;
extern const RuntimeMethod* Queue_1_Enqueue_m39812848_RuntimeMethod_var;
extern const RuntimeMethod* Queue_1__ctor_m1114640169_RuntimeMethod_var;
extern const RuntimeMethod* Queue_1__ctor_m3997517759_RuntimeMethod_var;
extern const RuntimeMethod* Queue_1_get_Count_m1457504846_RuntimeMethod_var;
extern const RuntimeMethod* Queue_1_get_Count_m3459060730_RuntimeMethod_var;
extern const RuntimeMethod* Server_FileHandler_m953556668_RuntimeMethod_var;
extern const RuntimeMethod* Server_ListenerCallback_m1101166877_RuntimeMethod_var;
extern const RuntimeMethod* Server_RegisterRoutes_m2940078606_RuntimeMethod_var;
extern const RuntimeMethod* Server_U3CRegisterFileHandlersU3Em__0_m1318319089_RuntimeMethod_var;
extern const RuntimeMethod* Server_WWWFileHandler_m3697405713_RuntimeMethod_var;
extern const RuntimeMethod* U3CHandleRequestsU3Ec__Iterator0_Reset_m520621552_RuntimeMethod_var;
extern const RuntimeMethod* U3CRegisterAttributesU3Ec__AnonStorey0_U3CU3Em__0_m290692866_RuntimeMethod_var;
extern const RuntimeMethod* U3CRegisterFileHandlersU3Ec__AnonStorey1_U3CU3Em__0_m1890339817_RuntimeMethod_var;
extern const RuntimeMethod* U3CRegisterFileHandlersU3Ec__AnonStorey1_U3CU3Em__1_m1177063264_RuntimeMethod_var;
extern const RuntimeMethod* U3CStartServiceU3Ec__Iterator0_Reset_m1058868414_RuntimeMethod_var;
extern const RuntimeMethod* U3C_RefreshMapTileU3Ec__Iterator0_Reset_m334814570_RuntimeMethod_var;
extern const RuntimeType* CallbackSimple_t200441164_0_0_0_var;
extern const RuntimeType* Callback_t1777011615_0_0_0_var;
extern const RuntimeType* Callback_t1969551140_0_0_0_var;
extern const RuntimeType* CommandAttribute_t3967200570_0_0_0_var;
extern const RuntimeType* Component_t1923634451_0_0_0_var;
extern const RuntimeType* GameObject_t1113636619_0_0_0_var;
extern const RuntimeType* RouteAttribute_t574643108_0_0_0_var;
extern const uint32_t CharacterGPSCopmassController_Start_m2899718310_MetadataUsageId;
extern const uint32_t CharacterGPSCopmassController_Update_m1158290140_MetadataUsageId;
extern const uint32_t CommandTree_Add_m1413729376_MetadataUsageId;
extern const uint32_t CommandTree_Complete_m4074238911_MetadataUsageId;
extern const uint32_t CommandTree_RunCommand_m942982424_MetadataUsageId;
extern const uint32_t CommandTree_Run_m911914304_MetadataUsageId;
extern const uint32_t CommandTree__add_m2357921295_MetadataUsageId;
extern const uint32_t CommandTree__cctor_m3699406789_MetadataUsageId;
extern const uint32_t CommandTree__complete_m3984793792_MetadataUsageId;
extern const uint32_t CommandTree__ctor_m628957943_MetadataUsageId;
extern const uint32_t CommandTree__run_m3314472370_MetadataUsageId;
extern const uint32_t Console_Clear_m3017360572_MetadataUsageId;
extern const uint32_t Console_Complete_m1040027326_MetadataUsageId;
extern const uint32_t Console_Help_m733938095_MetadataUsageId;
extern const uint32_t Console_History_m2709646712_MetadataUsageId;
extern const uint32_t Console_LogCommand_m2514322523_MetadataUsageId;
extern const uint32_t Console_Log_m4248649498_MetadataUsageId;
extern const uint32_t Console_Output_m1199728895_MetadataUsageId;
extern const uint32_t Console_Output_m2834947948_MetadataUsageId;
extern const uint32_t Console_PreviousCommand_m687773879_MetadataUsageId;
extern const uint32_t Console_Queue_m3385174577_MetadataUsageId;
extern const uint32_t Console_RecordCommand_m426163633_MetadataUsageId;
extern const uint32_t Console_RegisterAttributes_m1913084373_MetadataUsageId;
extern const uint32_t Console_RegisterCommand_m3820069520_MetadataUsageId;
extern const uint32_t Console_Run_m2973565217_MetadataUsageId;
extern const uint32_t Console_Update_m2794781264_MetadataUsageId;
extern const uint32_t Console__ctor_m1493958339_MetadataUsageId;
extern const uint32_t Console_get_Instance_m2769456780_MetadataUsageId;
extern const uint32_t FileHandlerDelegate_BeginInvoke_m4160211010_MetadataUsageId;
extern const uint32_t GPSLocationService_Dispose_m472640684_MetadataUsageId;
extern const uint32_t GPSLocationService_StartService_m3512225000_MetadataUsageId;
extern const uint32_t GPSLocationService_Start_m3720374754_MetadataUsageId;
extern const uint32_t GPSLocationService_Update_m1265827905_MetadataUsageId;
extern const uint32_t GameObjectCommands_ListGameObjects_m1038345753_MetadataUsageId;
extern const uint32_t GameObjectCommands_PrintGameObject_m564798494_MetadataUsageId;
extern const uint32_t GameObjectRoutes_ListGameObjects_m2760496307_MetadataUsageId;
extern const uint32_t GoogleMapTile_Update_m3580814247_MetadataUsageId;
extern const uint32_t GoogleMapTile__RefreshMapTile_m2584278457_MetadataUsageId;
extern const uint32_t GoogleMapUtils_LatToY_m801633232_MetadataUsageId;
extern const uint32_t GoogleMapUtils_LonToX_m1415447982_MetadataUsageId;
extern const uint32_t GoogleMapUtils_XToLon_m1418710473_MetadataUsageId;
extern const uint32_t GoogleMapUtils_YToLat_m2128429579_MetadataUsageId;
extern const uint32_t GoogleMapUtils__cctor_m4211902755_MetadataUsageId;
extern const uint32_t GoogleMapUtils_adjustLatByPixels_m912186372_MetadataUsageId;
extern const uint32_t GoogleMapUtils_adjustLonByPixels_m308880460_MetadataUsageId;
extern const uint32_t RequestContext__ctor_m925727424_MetadataUsageId;
extern const uint32_t ResponseExtension_WriteBytes_m1603091416_MetadataUsageId;
extern const uint32_t ResponseExtension_WriteFile_m2406796800_MetadataUsageId;
extern const uint32_t ResponseExtension_WriteString_m1918185232_MetadataUsageId;
extern const uint32_t RouteAttribute__ctor_m1948716522_MetadataUsageId;
extern const uint32_t Server_Awake_m447341606_MetadataUsageId;
extern const uint32_t Server_FileHandler_m953556668_MetadataUsageId;
extern const uint32_t Server_FindFileType_m1180339088_MetadataUsageId;
extern const uint32_t Server_HandleRequest_m2125684724_MetadataUsageId;
extern const uint32_t Server_HandleRequests_m1187942297_MetadataUsageId;
extern const uint32_t Server_ListenerCallback_m1101166877_MetadataUsageId;
extern const uint32_t Server_OnEnable_m4110643306_MetadataUsageId;
extern const uint32_t Server_RegisterFileHandlers_m3848080522_MetadataUsageId;
extern const uint32_t Server_RegisterRoutes_m2940078606_MetadataUsageId;
extern const uint32_t Server_U3CRegisterFileHandlersU3Em__0_m1318319089_MetadataUsageId;
extern const uint32_t Server_WWWFileHandler_m3697405713_MetadataUsageId;
extern const uint32_t Server__cctor_m2228102022_MetadataUsageId;
extern const uint32_t U3CHandleRequestsU3Ec__Iterator0_MoveNext_m2744576948_MetadataUsageId;
extern const uint32_t U3CHandleRequestsU3Ec__Iterator0_Reset_m520621552_MetadataUsageId;
extern const uint32_t U3CStartServiceU3Ec__Iterator0_MoveNext_m152436735_MetadataUsageId;
extern const uint32_t U3CStartServiceU3Ec__Iterator0_Reset_m1058868414_MetadataUsageId;
extern const uint32_t U3C_RefreshMapTileU3Ec__Iterator0_MoveNext_m2810802210_MetadataUsageId;
extern const uint32_t U3C_RefreshMapTileU3Ec__Iterator0_Reset_m334814570_MetadataUsageId;

struct CommandAttributeU5BU5D_t3855148191;
struct RouteAttributeU5BU5D_t1966353741;
struct ByteU5BU5D_t4116647657;
struct CharU5BU5D_t3528271667;
struct ObjectU5BU5D_t2843939325;
struct FieldInfoU5BU5D_t846150980;
struct MethodInfoU5BU5D_t2572182361;
struct StringU5BU5D_t1281789340;
struct TypeU5BU5D_t3940880105;
struct ComponentU5BU5D_t3294940482;
struct ObjectU5BU5D_t1417781964;


#ifndef U3CMODULEU3E_T692745547_H
#define U3CMODULEU3E_T692745547_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct  U3CModuleU3E_t692745547 
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CMODULEU3E_T692745547_H
#ifndef RUNTIMEOBJECT_H
#define RUNTIMEOBJECT_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Object

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNTIMEOBJECT_H
#ifndef COMMANDTREE_T2732396483_H
#define COMMANDTREE_T2732396483_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// CUDLR.CommandTree
struct  CommandTree_t2732396483  : public RuntimeObject
{
public:
	// System.Collections.Generic.Dictionary`2<System.String,CUDLR.CommandTree> CUDLR.CommandTree::m_subcommands
	Dictionary_2_t2517652782 * ___m_subcommands_0;
	// CUDLR.CommandAttribute CUDLR.CommandTree::m_command
	CommandAttribute_t3967200570 * ___m_command_1;

public:
	inline static int32_t get_offset_of_m_subcommands_0() { return static_cast<int32_t>(offsetof(CommandTree_t2732396483, ___m_subcommands_0)); }
	inline Dictionary_2_t2517652782 * get_m_subcommands_0() const { return ___m_subcommands_0; }
	inline Dictionary_2_t2517652782 ** get_address_of_m_subcommands_0() { return &___m_subcommands_0; }
	inline void set_m_subcommands_0(Dictionary_2_t2517652782 * value)
	{
		___m_subcommands_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_subcommands_0), value);
	}

	inline static int32_t get_offset_of_m_command_1() { return static_cast<int32_t>(offsetof(CommandTree_t2732396483, ___m_command_1)); }
	inline CommandAttribute_t3967200570 * get_m_command_1() const { return ___m_command_1; }
	inline CommandAttribute_t3967200570 ** get_address_of_m_command_1() { return &___m_command_1; }
	inline void set_m_command_1(CommandAttribute_t3967200570 * value)
	{
		___m_command_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_command_1), value);
	}
};

struct CommandTree_t2732396483_StaticFields
{
public:
	// System.String[] CUDLR.CommandTree::emptyArgs
	StringU5BU5D_t1281789340* ___emptyArgs_2;

public:
	inline static int32_t get_offset_of_emptyArgs_2() { return static_cast<int32_t>(offsetof(CommandTree_t2732396483_StaticFields, ___emptyArgs_2)); }
	inline StringU5BU5D_t1281789340* get_emptyArgs_2() const { return ___emptyArgs_2; }
	inline StringU5BU5D_t1281789340** get_address_of_emptyArgs_2() { return &___emptyArgs_2; }
	inline void set_emptyArgs_2(StringU5BU5D_t1281789340* value)
	{
		___emptyArgs_2 = value;
		Il2CppCodeGenWriteBarrier((&___emptyArgs_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COMMANDTREE_T2732396483_H
#ifndef CONSOLE_T978607149_H
#define CONSOLE_T978607149_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// CUDLR.Console
struct  Console_t978607149  : public RuntimeObject
{
public:
	// CUDLR.CommandTree CUDLR.Console::m_commands
	CommandTree_t2732396483 * ___m_commands_4;
	// System.Collections.Generic.List`1<System.String> CUDLR.Console::m_output
	List_1_t3319525431 * ___m_output_5;
	// System.Collections.Generic.List`1<System.String> CUDLR.Console::m_history
	List_1_t3319525431 * ___m_history_6;
	// System.String CUDLR.Console::m_help
	String_t* ___m_help_7;
	// System.Collections.Generic.Queue`1<CUDLR.QueuedCommand> CUDLR.Console::m_commandQueue
	Queue_1_t3702832664 * ___m_commandQueue_8;

public:
	inline static int32_t get_offset_of_m_commands_4() { return static_cast<int32_t>(offsetof(Console_t978607149, ___m_commands_4)); }
	inline CommandTree_t2732396483 * get_m_commands_4() const { return ___m_commands_4; }
	inline CommandTree_t2732396483 ** get_address_of_m_commands_4() { return &___m_commands_4; }
	inline void set_m_commands_4(CommandTree_t2732396483 * value)
	{
		___m_commands_4 = value;
		Il2CppCodeGenWriteBarrier((&___m_commands_4), value);
	}

	inline static int32_t get_offset_of_m_output_5() { return static_cast<int32_t>(offsetof(Console_t978607149, ___m_output_5)); }
	inline List_1_t3319525431 * get_m_output_5() const { return ___m_output_5; }
	inline List_1_t3319525431 ** get_address_of_m_output_5() { return &___m_output_5; }
	inline void set_m_output_5(List_1_t3319525431 * value)
	{
		___m_output_5 = value;
		Il2CppCodeGenWriteBarrier((&___m_output_5), value);
	}

	inline static int32_t get_offset_of_m_history_6() { return static_cast<int32_t>(offsetof(Console_t978607149, ___m_history_6)); }
	inline List_1_t3319525431 * get_m_history_6() const { return ___m_history_6; }
	inline List_1_t3319525431 ** get_address_of_m_history_6() { return &___m_history_6; }
	inline void set_m_history_6(List_1_t3319525431 * value)
	{
		___m_history_6 = value;
		Il2CppCodeGenWriteBarrier((&___m_history_6), value);
	}

	inline static int32_t get_offset_of_m_help_7() { return static_cast<int32_t>(offsetof(Console_t978607149, ___m_help_7)); }
	inline String_t* get_m_help_7() const { return ___m_help_7; }
	inline String_t** get_address_of_m_help_7() { return &___m_help_7; }
	inline void set_m_help_7(String_t* value)
	{
		___m_help_7 = value;
		Il2CppCodeGenWriteBarrier((&___m_help_7), value);
	}

	inline static int32_t get_offset_of_m_commandQueue_8() { return static_cast<int32_t>(offsetof(Console_t978607149, ___m_commandQueue_8)); }
	inline Queue_1_t3702832664 * get_m_commandQueue_8() const { return ___m_commandQueue_8; }
	inline Queue_1_t3702832664 ** get_address_of_m_commandQueue_8() { return &___m_commandQueue_8; }
	inline void set_m_commandQueue_8(Queue_1_t3702832664 * value)
	{
		___m_commandQueue_8 = value;
		Il2CppCodeGenWriteBarrier((&___m_commandQueue_8), value);
	}
};

struct Console_t978607149_StaticFields
{
public:
	// CUDLR.Console CUDLR.Console::instance
	Console_t978607149 * ___instance_3;

public:
	inline static int32_t get_offset_of_instance_3() { return static_cast<int32_t>(offsetof(Console_t978607149_StaticFields, ___instance_3)); }
	inline Console_t978607149 * get_instance_3() const { return ___instance_3; }
	inline Console_t978607149 ** get_address_of_instance_3() { return &___instance_3; }
	inline void set_instance_3(Console_t978607149 * value)
	{
		___instance_3 = value;
		Il2CppCodeGenWriteBarrier((&___instance_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CONSOLE_T978607149_H
#ifndef U3CREGISTERATTRIBUTESU3EC__ANONSTOREY0_T2829874507_H
#define U3CREGISTERATTRIBUTESU3EC__ANONSTOREY0_T2829874507_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// CUDLR.Console/<RegisterAttributes>c__AnonStorey0
struct  U3CRegisterAttributesU3Ec__AnonStorey0_t2829874507  : public RuntimeObject
{
public:
	// CUDLR.CommandAttribute/CallbackSimple CUDLR.Console/<RegisterAttributes>c__AnonStorey0::cbs
	CallbackSimple_t200441164 * ___cbs_0;

public:
	inline static int32_t get_offset_of_cbs_0() { return static_cast<int32_t>(offsetof(U3CRegisterAttributesU3Ec__AnonStorey0_t2829874507, ___cbs_0)); }
	inline CallbackSimple_t200441164 * get_cbs_0() const { return ___cbs_0; }
	inline CallbackSimple_t200441164 ** get_address_of_cbs_0() { return &___cbs_0; }
	inline void set_cbs_0(CallbackSimple_t200441164 * value)
	{
		___cbs_0 = value;
		Il2CppCodeGenWriteBarrier((&___cbs_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CREGISTERATTRIBUTESU3EC__ANONSTOREY0_T2829874507_H
#ifndef REQUESTCONTEXT_T3602631757_H
#define REQUESTCONTEXT_T3602631757_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// CUDLR.RequestContext
struct  RequestContext_t3602631757  : public RuntimeObject
{
public:
	// System.Net.HttpListenerContext CUDLR.RequestContext::context
	HttpListenerContext_t424880822 * ___context_0;
	// System.Text.RegularExpressions.Match CUDLR.RequestContext::match
	Match_t3408321083 * ___match_1;
	// System.Boolean CUDLR.RequestContext::pass
	bool ___pass_2;
	// System.String CUDLR.RequestContext::path
	String_t* ___path_3;
	// System.Int32 CUDLR.RequestContext::currentRoute
	int32_t ___currentRoute_4;

public:
	inline static int32_t get_offset_of_context_0() { return static_cast<int32_t>(offsetof(RequestContext_t3602631757, ___context_0)); }
	inline HttpListenerContext_t424880822 * get_context_0() const { return ___context_0; }
	inline HttpListenerContext_t424880822 ** get_address_of_context_0() { return &___context_0; }
	inline void set_context_0(HttpListenerContext_t424880822 * value)
	{
		___context_0 = value;
		Il2CppCodeGenWriteBarrier((&___context_0), value);
	}

	inline static int32_t get_offset_of_match_1() { return static_cast<int32_t>(offsetof(RequestContext_t3602631757, ___match_1)); }
	inline Match_t3408321083 * get_match_1() const { return ___match_1; }
	inline Match_t3408321083 ** get_address_of_match_1() { return &___match_1; }
	inline void set_match_1(Match_t3408321083 * value)
	{
		___match_1 = value;
		Il2CppCodeGenWriteBarrier((&___match_1), value);
	}

	inline static int32_t get_offset_of_pass_2() { return static_cast<int32_t>(offsetof(RequestContext_t3602631757, ___pass_2)); }
	inline bool get_pass_2() const { return ___pass_2; }
	inline bool* get_address_of_pass_2() { return &___pass_2; }
	inline void set_pass_2(bool value)
	{
		___pass_2 = value;
	}

	inline static int32_t get_offset_of_path_3() { return static_cast<int32_t>(offsetof(RequestContext_t3602631757, ___path_3)); }
	inline String_t* get_path_3() const { return ___path_3; }
	inline String_t** get_address_of_path_3() { return &___path_3; }
	inline void set_path_3(String_t* value)
	{
		___path_3 = value;
		Il2CppCodeGenWriteBarrier((&___path_3), value);
	}

	inline static int32_t get_offset_of_currentRoute_4() { return static_cast<int32_t>(offsetof(RequestContext_t3602631757, ___currentRoute_4)); }
	inline int32_t get_currentRoute_4() const { return ___currentRoute_4; }
	inline int32_t* get_address_of_currentRoute_4() { return &___currentRoute_4; }
	inline void set_currentRoute_4(int32_t value)
	{
		___currentRoute_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // REQUESTCONTEXT_T3602631757_H
#ifndef U3CHANDLEREQUESTSU3EC__ITERATOR0_T4068759609_H
#define U3CHANDLEREQUESTSU3EC__ITERATOR0_T4068759609_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// CUDLR.Server/<HandleRequests>c__Iterator0
struct  U3CHandleRequestsU3Ec__Iterator0_t4068759609  : public RuntimeObject
{
public:
	// CUDLR.RequestContext CUDLR.Server/<HandleRequests>c__Iterator0::<context>__1
	RequestContext_t3602631757 * ___U3CcontextU3E__1_0;
	// System.Object CUDLR.Server/<HandleRequests>c__Iterator0::$locvar0
	RuntimeObject * ___U24locvar0_1;
	// CUDLR.Server CUDLR.Server/<HandleRequests>c__Iterator0::$this
	Server_t545360578 * ___U24this_2;
	// System.Object CUDLR.Server/<HandleRequests>c__Iterator0::$current
	RuntimeObject * ___U24current_3;
	// System.Boolean CUDLR.Server/<HandleRequests>c__Iterator0::$disposing
	bool ___U24disposing_4;
	// System.Int32 CUDLR.Server/<HandleRequests>c__Iterator0::$PC
	int32_t ___U24PC_5;

public:
	inline static int32_t get_offset_of_U3CcontextU3E__1_0() { return static_cast<int32_t>(offsetof(U3CHandleRequestsU3Ec__Iterator0_t4068759609, ___U3CcontextU3E__1_0)); }
	inline RequestContext_t3602631757 * get_U3CcontextU3E__1_0() const { return ___U3CcontextU3E__1_0; }
	inline RequestContext_t3602631757 ** get_address_of_U3CcontextU3E__1_0() { return &___U3CcontextU3E__1_0; }
	inline void set_U3CcontextU3E__1_0(RequestContext_t3602631757 * value)
	{
		___U3CcontextU3E__1_0 = value;
		Il2CppCodeGenWriteBarrier((&___U3CcontextU3E__1_0), value);
	}

	inline static int32_t get_offset_of_U24locvar0_1() { return static_cast<int32_t>(offsetof(U3CHandleRequestsU3Ec__Iterator0_t4068759609, ___U24locvar0_1)); }
	inline RuntimeObject * get_U24locvar0_1() const { return ___U24locvar0_1; }
	inline RuntimeObject ** get_address_of_U24locvar0_1() { return &___U24locvar0_1; }
	inline void set_U24locvar0_1(RuntimeObject * value)
	{
		___U24locvar0_1 = value;
		Il2CppCodeGenWriteBarrier((&___U24locvar0_1), value);
	}

	inline static int32_t get_offset_of_U24this_2() { return static_cast<int32_t>(offsetof(U3CHandleRequestsU3Ec__Iterator0_t4068759609, ___U24this_2)); }
	inline Server_t545360578 * get_U24this_2() const { return ___U24this_2; }
	inline Server_t545360578 ** get_address_of_U24this_2() { return &___U24this_2; }
	inline void set_U24this_2(Server_t545360578 * value)
	{
		___U24this_2 = value;
		Il2CppCodeGenWriteBarrier((&___U24this_2), value);
	}

	inline static int32_t get_offset_of_U24current_3() { return static_cast<int32_t>(offsetof(U3CHandleRequestsU3Ec__Iterator0_t4068759609, ___U24current_3)); }
	inline RuntimeObject * get_U24current_3() const { return ___U24current_3; }
	inline RuntimeObject ** get_address_of_U24current_3() { return &___U24current_3; }
	inline void set_U24current_3(RuntimeObject * value)
	{
		___U24current_3 = value;
		Il2CppCodeGenWriteBarrier((&___U24current_3), value);
	}

	inline static int32_t get_offset_of_U24disposing_4() { return static_cast<int32_t>(offsetof(U3CHandleRequestsU3Ec__Iterator0_t4068759609, ___U24disposing_4)); }
	inline bool get_U24disposing_4() const { return ___U24disposing_4; }
	inline bool* get_address_of_U24disposing_4() { return &___U24disposing_4; }
	inline void set_U24disposing_4(bool value)
	{
		___U24disposing_4 = value;
	}

	inline static int32_t get_offset_of_U24PC_5() { return static_cast<int32_t>(offsetof(U3CHandleRequestsU3Ec__Iterator0_t4068759609, ___U24PC_5)); }
	inline int32_t get_U24PC_5() const { return ___U24PC_5; }
	inline int32_t* get_address_of_U24PC_5() { return &___U24PC_5; }
	inline void set_U24PC_5(int32_t value)
	{
		___U24PC_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CHANDLEREQUESTSU3EC__ITERATOR0_T4068759609_H
#ifndef U3CREGISTERFILEHANDLERSU3EC__ANONSTOREY1_T3770007581_H
#define U3CREGISTERFILEHANDLERSU3EC__ANONSTOREY1_T3770007581_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// CUDLR.Server/<RegisterFileHandlers>c__AnonStorey1
struct  U3CRegisterFileHandlersU3Ec__AnonStorey1_t3770007581  : public RuntimeObject
{
public:
	// CUDLR.Server/FileHandlerDelegate CUDLR.Server/<RegisterFileHandlers>c__AnonStorey1::callback
	FileHandlerDelegate_t13458300 * ___callback_0;

public:
	inline static int32_t get_offset_of_callback_0() { return static_cast<int32_t>(offsetof(U3CRegisterFileHandlersU3Ec__AnonStorey1_t3770007581, ___callback_0)); }
	inline FileHandlerDelegate_t13458300 * get_callback_0() const { return ___callback_0; }
	inline FileHandlerDelegate_t13458300 ** get_address_of_callback_0() { return &___callback_0; }
	inline void set_callback_0(FileHandlerDelegate_t13458300 * value)
	{
		___callback_0 = value;
		Il2CppCodeGenWriteBarrier((&___callback_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CREGISTERFILEHANDLERSU3EC__ANONSTOREY1_T3770007581_H
#ifndef GAMEOBJECTCOMMANDS_T3502109807_H
#define GAMEOBJECTCOMMANDS_T3502109807_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GameObjectCommands
struct  GameObjectCommands_t3502109807  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GAMEOBJECTCOMMANDS_T3502109807_H
#ifndef GAMEOBJECTROUTES_T2983836786_H
#define GAMEOBJECTROUTES_T2983836786_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GameObjectRoutes
struct  GameObjectRoutes_t2983836786  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GAMEOBJECTROUTES_T2983836786_H
#ifndef RESPONSEEXTENSION_T4265486427_H
#define RESPONSEEXTENSION_T4265486427_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ResponseExtension
struct  ResponseExtension_t4265486427  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RESPONSEEXTENSION_T4265486427_H
struct Il2CppArrayBounds;
#ifndef RUNTIMEARRAY_H
#define RUNTIMEARRAY_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Array

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNTIMEARRAY_H
#ifndef ATTRIBUTE_T861562559_H
#define ATTRIBUTE_T861562559_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Attribute
struct  Attribute_t861562559  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ATTRIBUTE_T861562559_H
#ifndef KEYCOLLECTION_T2707328253_H
#define KEYCOLLECTION_T2707328253_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,CUDLR.CommandTree>
struct  KeyCollection_t2707328253  : public RuntimeObject
{
public:
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/KeyCollection::dictionary
	Dictionary_2_t2517652782 * ___dictionary_0;

public:
	inline static int32_t get_offset_of_dictionary_0() { return static_cast<int32_t>(offsetof(KeyCollection_t2707328253, ___dictionary_0)); }
	inline Dictionary_2_t2517652782 * get_dictionary_0() const { return ___dictionary_0; }
	inline Dictionary_2_t2517652782 ** get_address_of_dictionary_0() { return &___dictionary_0; }
	inline void set_dictionary_0(Dictionary_2_t2517652782 * value)
	{
		___dictionary_0 = value;
		Il2CppCodeGenWriteBarrier((&___dictionary_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // KEYCOLLECTION_T2707328253_H
#ifndef DICTIONARY_2_T2517652782_H
#define DICTIONARY_2_T2517652782_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.Dictionary`2<System.String,CUDLR.CommandTree>
struct  Dictionary_2_t2517652782  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::table
	Int32U5BU5D_t385246372* ___table_4;
	// System.Collections.Generic.Link[] System.Collections.Generic.Dictionary`2::linkSlots
	LinkU5BU5D_t964245573* ___linkSlots_5;
	// TKey[] System.Collections.Generic.Dictionary`2::keySlots
	StringU5BU5D_t1281789340* ___keySlots_6;
	// TValue[] System.Collections.Generic.Dictionary`2::valueSlots
	CommandTreeU5BU5D_t4018397650* ___valueSlots_7;
	// System.Int32 System.Collections.Generic.Dictionary`2::touchedSlots
	int32_t ___touchedSlots_8;
	// System.Int32 System.Collections.Generic.Dictionary`2::emptySlot
	int32_t ___emptySlot_9;
	// System.Int32 System.Collections.Generic.Dictionary`2::count
	int32_t ___count_10;
	// System.Int32 System.Collections.Generic.Dictionary`2::threshold
	int32_t ___threshold_11;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::hcp
	RuntimeObject* ___hcp_12;
	// System.Runtime.Serialization.SerializationInfo System.Collections.Generic.Dictionary`2::serialization_info
	SerializationInfo_t950877179 * ___serialization_info_13;
	// System.Int32 System.Collections.Generic.Dictionary`2::generation
	int32_t ___generation_14;

public:
	inline static int32_t get_offset_of_table_4() { return static_cast<int32_t>(offsetof(Dictionary_2_t2517652782, ___table_4)); }
	inline Int32U5BU5D_t385246372* get_table_4() const { return ___table_4; }
	inline Int32U5BU5D_t385246372** get_address_of_table_4() { return &___table_4; }
	inline void set_table_4(Int32U5BU5D_t385246372* value)
	{
		___table_4 = value;
		Il2CppCodeGenWriteBarrier((&___table_4), value);
	}

	inline static int32_t get_offset_of_linkSlots_5() { return static_cast<int32_t>(offsetof(Dictionary_2_t2517652782, ___linkSlots_5)); }
	inline LinkU5BU5D_t964245573* get_linkSlots_5() const { return ___linkSlots_5; }
	inline LinkU5BU5D_t964245573** get_address_of_linkSlots_5() { return &___linkSlots_5; }
	inline void set_linkSlots_5(LinkU5BU5D_t964245573* value)
	{
		___linkSlots_5 = value;
		Il2CppCodeGenWriteBarrier((&___linkSlots_5), value);
	}

	inline static int32_t get_offset_of_keySlots_6() { return static_cast<int32_t>(offsetof(Dictionary_2_t2517652782, ___keySlots_6)); }
	inline StringU5BU5D_t1281789340* get_keySlots_6() const { return ___keySlots_6; }
	inline StringU5BU5D_t1281789340** get_address_of_keySlots_6() { return &___keySlots_6; }
	inline void set_keySlots_6(StringU5BU5D_t1281789340* value)
	{
		___keySlots_6 = value;
		Il2CppCodeGenWriteBarrier((&___keySlots_6), value);
	}

	inline static int32_t get_offset_of_valueSlots_7() { return static_cast<int32_t>(offsetof(Dictionary_2_t2517652782, ___valueSlots_7)); }
	inline CommandTreeU5BU5D_t4018397650* get_valueSlots_7() const { return ___valueSlots_7; }
	inline CommandTreeU5BU5D_t4018397650** get_address_of_valueSlots_7() { return &___valueSlots_7; }
	inline void set_valueSlots_7(CommandTreeU5BU5D_t4018397650* value)
	{
		___valueSlots_7 = value;
		Il2CppCodeGenWriteBarrier((&___valueSlots_7), value);
	}

	inline static int32_t get_offset_of_touchedSlots_8() { return static_cast<int32_t>(offsetof(Dictionary_2_t2517652782, ___touchedSlots_8)); }
	inline int32_t get_touchedSlots_8() const { return ___touchedSlots_8; }
	inline int32_t* get_address_of_touchedSlots_8() { return &___touchedSlots_8; }
	inline void set_touchedSlots_8(int32_t value)
	{
		___touchedSlots_8 = value;
	}

	inline static int32_t get_offset_of_emptySlot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_t2517652782, ___emptySlot_9)); }
	inline int32_t get_emptySlot_9() const { return ___emptySlot_9; }
	inline int32_t* get_address_of_emptySlot_9() { return &___emptySlot_9; }
	inline void set_emptySlot_9(int32_t value)
	{
		___emptySlot_9 = value;
	}

	inline static int32_t get_offset_of_count_10() { return static_cast<int32_t>(offsetof(Dictionary_2_t2517652782, ___count_10)); }
	inline int32_t get_count_10() const { return ___count_10; }
	inline int32_t* get_address_of_count_10() { return &___count_10; }
	inline void set_count_10(int32_t value)
	{
		___count_10 = value;
	}

	inline static int32_t get_offset_of_threshold_11() { return static_cast<int32_t>(offsetof(Dictionary_2_t2517652782, ___threshold_11)); }
	inline int32_t get_threshold_11() const { return ___threshold_11; }
	inline int32_t* get_address_of_threshold_11() { return &___threshold_11; }
	inline void set_threshold_11(int32_t value)
	{
		___threshold_11 = value;
	}

	inline static int32_t get_offset_of_hcp_12() { return static_cast<int32_t>(offsetof(Dictionary_2_t2517652782, ___hcp_12)); }
	inline RuntimeObject* get_hcp_12() const { return ___hcp_12; }
	inline RuntimeObject** get_address_of_hcp_12() { return &___hcp_12; }
	inline void set_hcp_12(RuntimeObject* value)
	{
		___hcp_12 = value;
		Il2CppCodeGenWriteBarrier((&___hcp_12), value);
	}

	inline static int32_t get_offset_of_serialization_info_13() { return static_cast<int32_t>(offsetof(Dictionary_2_t2517652782, ___serialization_info_13)); }
	inline SerializationInfo_t950877179 * get_serialization_info_13() const { return ___serialization_info_13; }
	inline SerializationInfo_t950877179 ** get_address_of_serialization_info_13() { return &___serialization_info_13; }
	inline void set_serialization_info_13(SerializationInfo_t950877179 * value)
	{
		___serialization_info_13 = value;
		Il2CppCodeGenWriteBarrier((&___serialization_info_13), value);
	}

	inline static int32_t get_offset_of_generation_14() { return static_cast<int32_t>(offsetof(Dictionary_2_t2517652782, ___generation_14)); }
	inline int32_t get_generation_14() const { return ___generation_14; }
	inline int32_t* get_address_of_generation_14() { return &___generation_14; }
	inline void set_generation_14(int32_t value)
	{
		___generation_14 = value;
	}
};

struct Dictionary_2_t2517652782_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,System.Collections.DictionaryEntry> System.Collections.Generic.Dictionary`2::<>f__am$cacheB
	Transform_1_t2868809366 * ___U3CU3Ef__amU24cacheB_15;

public:
	inline static int32_t get_offset_of_U3CU3Ef__amU24cacheB_15() { return static_cast<int32_t>(offsetof(Dictionary_2_t2517652782_StaticFields, ___U3CU3Ef__amU24cacheB_15)); }
	inline Transform_1_t2868809366 * get_U3CU3Ef__amU24cacheB_15() const { return ___U3CU3Ef__amU24cacheB_15; }
	inline Transform_1_t2868809366 ** get_address_of_U3CU3Ef__amU24cacheB_15() { return &___U3CU3Ef__amU24cacheB_15; }
	inline void set_U3CU3Ef__amU24cacheB_15(Transform_1_t2868809366 * value)
	{
		___U3CU3Ef__amU24cacheB_15 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__amU24cacheB_15), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DICTIONARY_2_T2517652782_H
#ifndef DICTIONARY_2_T1632706988_H
#define DICTIONARY_2_T1632706988_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.Dictionary`2<System.String,System.String>
struct  Dictionary_2_t1632706988  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::table
	Int32U5BU5D_t385246372* ___table_4;
	// System.Collections.Generic.Link[] System.Collections.Generic.Dictionary`2::linkSlots
	LinkU5BU5D_t964245573* ___linkSlots_5;
	// TKey[] System.Collections.Generic.Dictionary`2::keySlots
	StringU5BU5D_t1281789340* ___keySlots_6;
	// TValue[] System.Collections.Generic.Dictionary`2::valueSlots
	StringU5BU5D_t1281789340* ___valueSlots_7;
	// System.Int32 System.Collections.Generic.Dictionary`2::touchedSlots
	int32_t ___touchedSlots_8;
	// System.Int32 System.Collections.Generic.Dictionary`2::emptySlot
	int32_t ___emptySlot_9;
	// System.Int32 System.Collections.Generic.Dictionary`2::count
	int32_t ___count_10;
	// System.Int32 System.Collections.Generic.Dictionary`2::threshold
	int32_t ___threshold_11;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::hcp
	RuntimeObject* ___hcp_12;
	// System.Runtime.Serialization.SerializationInfo System.Collections.Generic.Dictionary`2::serialization_info
	SerializationInfo_t950877179 * ___serialization_info_13;
	// System.Int32 System.Collections.Generic.Dictionary`2::generation
	int32_t ___generation_14;

public:
	inline static int32_t get_offset_of_table_4() { return static_cast<int32_t>(offsetof(Dictionary_2_t1632706988, ___table_4)); }
	inline Int32U5BU5D_t385246372* get_table_4() const { return ___table_4; }
	inline Int32U5BU5D_t385246372** get_address_of_table_4() { return &___table_4; }
	inline void set_table_4(Int32U5BU5D_t385246372* value)
	{
		___table_4 = value;
		Il2CppCodeGenWriteBarrier((&___table_4), value);
	}

	inline static int32_t get_offset_of_linkSlots_5() { return static_cast<int32_t>(offsetof(Dictionary_2_t1632706988, ___linkSlots_5)); }
	inline LinkU5BU5D_t964245573* get_linkSlots_5() const { return ___linkSlots_5; }
	inline LinkU5BU5D_t964245573** get_address_of_linkSlots_5() { return &___linkSlots_5; }
	inline void set_linkSlots_5(LinkU5BU5D_t964245573* value)
	{
		___linkSlots_5 = value;
		Il2CppCodeGenWriteBarrier((&___linkSlots_5), value);
	}

	inline static int32_t get_offset_of_keySlots_6() { return static_cast<int32_t>(offsetof(Dictionary_2_t1632706988, ___keySlots_6)); }
	inline StringU5BU5D_t1281789340* get_keySlots_6() const { return ___keySlots_6; }
	inline StringU5BU5D_t1281789340** get_address_of_keySlots_6() { return &___keySlots_6; }
	inline void set_keySlots_6(StringU5BU5D_t1281789340* value)
	{
		___keySlots_6 = value;
		Il2CppCodeGenWriteBarrier((&___keySlots_6), value);
	}

	inline static int32_t get_offset_of_valueSlots_7() { return static_cast<int32_t>(offsetof(Dictionary_2_t1632706988, ___valueSlots_7)); }
	inline StringU5BU5D_t1281789340* get_valueSlots_7() const { return ___valueSlots_7; }
	inline StringU5BU5D_t1281789340** get_address_of_valueSlots_7() { return &___valueSlots_7; }
	inline void set_valueSlots_7(StringU5BU5D_t1281789340* value)
	{
		___valueSlots_7 = value;
		Il2CppCodeGenWriteBarrier((&___valueSlots_7), value);
	}

	inline static int32_t get_offset_of_touchedSlots_8() { return static_cast<int32_t>(offsetof(Dictionary_2_t1632706988, ___touchedSlots_8)); }
	inline int32_t get_touchedSlots_8() const { return ___touchedSlots_8; }
	inline int32_t* get_address_of_touchedSlots_8() { return &___touchedSlots_8; }
	inline void set_touchedSlots_8(int32_t value)
	{
		___touchedSlots_8 = value;
	}

	inline static int32_t get_offset_of_emptySlot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_t1632706988, ___emptySlot_9)); }
	inline int32_t get_emptySlot_9() const { return ___emptySlot_9; }
	inline int32_t* get_address_of_emptySlot_9() { return &___emptySlot_9; }
	inline void set_emptySlot_9(int32_t value)
	{
		___emptySlot_9 = value;
	}

	inline static int32_t get_offset_of_count_10() { return static_cast<int32_t>(offsetof(Dictionary_2_t1632706988, ___count_10)); }
	inline int32_t get_count_10() const { return ___count_10; }
	inline int32_t* get_address_of_count_10() { return &___count_10; }
	inline void set_count_10(int32_t value)
	{
		___count_10 = value;
	}

	inline static int32_t get_offset_of_threshold_11() { return static_cast<int32_t>(offsetof(Dictionary_2_t1632706988, ___threshold_11)); }
	inline int32_t get_threshold_11() const { return ___threshold_11; }
	inline int32_t* get_address_of_threshold_11() { return &___threshold_11; }
	inline void set_threshold_11(int32_t value)
	{
		___threshold_11 = value;
	}

	inline static int32_t get_offset_of_hcp_12() { return static_cast<int32_t>(offsetof(Dictionary_2_t1632706988, ___hcp_12)); }
	inline RuntimeObject* get_hcp_12() const { return ___hcp_12; }
	inline RuntimeObject** get_address_of_hcp_12() { return &___hcp_12; }
	inline void set_hcp_12(RuntimeObject* value)
	{
		___hcp_12 = value;
		Il2CppCodeGenWriteBarrier((&___hcp_12), value);
	}

	inline static int32_t get_offset_of_serialization_info_13() { return static_cast<int32_t>(offsetof(Dictionary_2_t1632706988, ___serialization_info_13)); }
	inline SerializationInfo_t950877179 * get_serialization_info_13() const { return ___serialization_info_13; }
	inline SerializationInfo_t950877179 ** get_address_of_serialization_info_13() { return &___serialization_info_13; }
	inline void set_serialization_info_13(SerializationInfo_t950877179 * value)
	{
		___serialization_info_13 = value;
		Il2CppCodeGenWriteBarrier((&___serialization_info_13), value);
	}

	inline static int32_t get_offset_of_generation_14() { return static_cast<int32_t>(offsetof(Dictionary_2_t1632706988, ___generation_14)); }
	inline int32_t get_generation_14() const { return ___generation_14; }
	inline int32_t* get_address_of_generation_14() { return &___generation_14; }
	inline void set_generation_14(int32_t value)
	{
		___generation_14 = value;
	}
};

struct Dictionary_2_t1632706988_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,System.Collections.DictionaryEntry> System.Collections.Generic.Dictionary`2::<>f__am$cacheB
	Transform_1_t132201056 * ___U3CU3Ef__amU24cacheB_15;

public:
	inline static int32_t get_offset_of_U3CU3Ef__amU24cacheB_15() { return static_cast<int32_t>(offsetof(Dictionary_2_t1632706988_StaticFields, ___U3CU3Ef__amU24cacheB_15)); }
	inline Transform_1_t132201056 * get_U3CU3Ef__amU24cacheB_15() const { return ___U3CU3Ef__amU24cacheB_15; }
	inline Transform_1_t132201056 ** get_address_of_U3CU3Ef__amU24cacheB_15() { return &___U3CU3Ef__amU24cacheB_15; }
	inline void set_U3CU3Ef__amU24cacheB_15(Transform_1_t132201056 * value)
	{
		___U3CU3Ef__amU24cacheB_15 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__amU24cacheB_15), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DICTIONARY_2_T1632706988_H
#ifndef LIST_1_T2046717850_H
#define LIST_1_T2046717850_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1<CUDLR.RouteAttribute>
struct  List_1_t2046717850  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	RouteAttributeU5BU5D_t1966353741* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t2046717850, ____items_1)); }
	inline RouteAttributeU5BU5D_t1966353741* get__items_1() const { return ____items_1; }
	inline RouteAttributeU5BU5D_t1966353741** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(RouteAttributeU5BU5D_t1966353741* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((&____items_1), value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t2046717850, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t2046717850, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}
};

struct List_1_t2046717850_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::EmptyArray
	RouteAttributeU5BU5D_t1966353741* ___EmptyArray_4;

public:
	inline static int32_t get_offset_of_EmptyArray_4() { return static_cast<int32_t>(offsetof(List_1_t2046717850_StaticFields, ___EmptyArray_4)); }
	inline RouteAttributeU5BU5D_t1966353741* get_EmptyArray_4() const { return ___EmptyArray_4; }
	inline RouteAttributeU5BU5D_t1966353741** get_address_of_EmptyArray_4() { return &___EmptyArray_4; }
	inline void set_EmptyArray_4(RouteAttributeU5BU5D_t1966353741* value)
	{
		___EmptyArray_4 = value;
		Il2CppCodeGenWriteBarrier((&___EmptyArray_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LIST_1_T2046717850_H
#ifndef LIST_1_T3319525431_H
#define LIST_1_T3319525431_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1<System.String>
struct  List_1_t3319525431  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	StringU5BU5D_t1281789340* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t3319525431, ____items_1)); }
	inline StringU5BU5D_t1281789340* get__items_1() const { return ____items_1; }
	inline StringU5BU5D_t1281789340** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(StringU5BU5D_t1281789340* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((&____items_1), value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t3319525431, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t3319525431, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}
};

struct List_1_t3319525431_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::EmptyArray
	StringU5BU5D_t1281789340* ___EmptyArray_4;

public:
	inline static int32_t get_offset_of_EmptyArray_4() { return static_cast<int32_t>(offsetof(List_1_t3319525431_StaticFields, ___EmptyArray_4)); }
	inline StringU5BU5D_t1281789340* get_EmptyArray_4() const { return ___EmptyArray_4; }
	inline StringU5BU5D_t1281789340** get_address_of_EmptyArray_4() { return &___EmptyArray_4; }
	inline void set_EmptyArray_4(StringU5BU5D_t1281789340* value)
	{
		___EmptyArray_4 = value;
		Il2CppCodeGenWriteBarrier((&___EmptyArray_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LIST_1_T3319525431_H
#ifndef QUEUE_1_T3702832664_H
#define QUEUE_1_T3702832664_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.Queue`1<CUDLR.QueuedCommand>
struct  Queue_1_t3702832664  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.Queue`1::_array
	QueuedCommandU5BU5D_t551979271* ____array_0;
	// System.Int32 System.Collections.Generic.Queue`1::_head
	int32_t ____head_1;
	// System.Int32 System.Collections.Generic.Queue`1::_tail
	int32_t ____tail_2;
	// System.Int32 System.Collections.Generic.Queue`1::_size
	int32_t ____size_3;
	// System.Int32 System.Collections.Generic.Queue`1::_version
	int32_t ____version_4;

public:
	inline static int32_t get_offset_of__array_0() { return static_cast<int32_t>(offsetof(Queue_1_t3702832664, ____array_0)); }
	inline QueuedCommandU5BU5D_t551979271* get__array_0() const { return ____array_0; }
	inline QueuedCommandU5BU5D_t551979271** get_address_of__array_0() { return &____array_0; }
	inline void set__array_0(QueuedCommandU5BU5D_t551979271* value)
	{
		____array_0 = value;
		Il2CppCodeGenWriteBarrier((&____array_0), value);
	}

	inline static int32_t get_offset_of__head_1() { return static_cast<int32_t>(offsetof(Queue_1_t3702832664, ____head_1)); }
	inline int32_t get__head_1() const { return ____head_1; }
	inline int32_t* get_address_of__head_1() { return &____head_1; }
	inline void set__head_1(int32_t value)
	{
		____head_1 = value;
	}

	inline static int32_t get_offset_of__tail_2() { return static_cast<int32_t>(offsetof(Queue_1_t3702832664, ____tail_2)); }
	inline int32_t get__tail_2() const { return ____tail_2; }
	inline int32_t* get_address_of__tail_2() { return &____tail_2; }
	inline void set__tail_2(int32_t value)
	{
		____tail_2 = value;
	}

	inline static int32_t get_offset_of__size_3() { return static_cast<int32_t>(offsetof(Queue_1_t3702832664, ____size_3)); }
	inline int32_t get__size_3() const { return ____size_3; }
	inline int32_t* get_address_of__size_3() { return &____size_3; }
	inline void set__size_3(int32_t value)
	{
		____size_3 = value;
	}

	inline static int32_t get_offset_of__version_4() { return static_cast<int32_t>(offsetof(Queue_1_t3702832664, ____version_4)); }
	inline int32_t get__version_4() const { return ____version_4; }
	inline int32_t* get_address_of__version_4() { return &____version_4; }
	inline void set__version_4(int32_t value)
	{
		____version_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // QUEUE_1_T3702832664_H
#ifndef QUEUE_1_T3448891251_H
#define QUEUE_1_T3448891251_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.Queue`1<CUDLR.RequestContext>
struct  Queue_1_t3448891251  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.Queue`1::_array
	RequestContextU5BU5D_t2032304096* ____array_0;
	// System.Int32 System.Collections.Generic.Queue`1::_head
	int32_t ____head_1;
	// System.Int32 System.Collections.Generic.Queue`1::_tail
	int32_t ____tail_2;
	// System.Int32 System.Collections.Generic.Queue`1::_size
	int32_t ____size_3;
	// System.Int32 System.Collections.Generic.Queue`1::_version
	int32_t ____version_4;

public:
	inline static int32_t get_offset_of__array_0() { return static_cast<int32_t>(offsetof(Queue_1_t3448891251, ____array_0)); }
	inline RequestContextU5BU5D_t2032304096* get__array_0() const { return ____array_0; }
	inline RequestContextU5BU5D_t2032304096** get_address_of__array_0() { return &____array_0; }
	inline void set__array_0(RequestContextU5BU5D_t2032304096* value)
	{
		____array_0 = value;
		Il2CppCodeGenWriteBarrier((&____array_0), value);
	}

	inline static int32_t get_offset_of__head_1() { return static_cast<int32_t>(offsetof(Queue_1_t3448891251, ____head_1)); }
	inline int32_t get__head_1() const { return ____head_1; }
	inline int32_t* get_address_of__head_1() { return &____head_1; }
	inline void set__head_1(int32_t value)
	{
		____head_1 = value;
	}

	inline static int32_t get_offset_of__tail_2() { return static_cast<int32_t>(offsetof(Queue_1_t3448891251, ____tail_2)); }
	inline int32_t get__tail_2() const { return ____tail_2; }
	inline int32_t* get_address_of__tail_2() { return &____tail_2; }
	inline void set__tail_2(int32_t value)
	{
		____tail_2 = value;
	}

	inline static int32_t get_offset_of__size_3() { return static_cast<int32_t>(offsetof(Queue_1_t3448891251, ____size_3)); }
	inline int32_t get__size_3() const { return ____size_3; }
	inline int32_t* get_address_of__size_3() { return &____size_3; }
	inline void set__size_3(int32_t value)
	{
		____size_3 = value;
	}

	inline static int32_t get_offset_of__version_4() { return static_cast<int32_t>(offsetof(Queue_1_t3448891251, ____version_4)); }
	inline int32_t get__version_4() const { return ____version_4; }
	inline int32_t* get_address_of__version_4() { return &____version_4; }
	inline void set__version_4(int32_t value)
	{
		____version_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // QUEUE_1_T3448891251_H
#ifndef NAMEOBJECTCOLLECTIONBASE_T2091847364_H
#define NAMEOBJECTCOLLECTIONBASE_T2091847364_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Specialized.NameObjectCollectionBase
struct  NameObjectCollectionBase_t2091847364  : public RuntimeObject
{
public:
	// System.Collections.Hashtable System.Collections.Specialized.NameObjectCollectionBase::m_ItemsContainer
	Hashtable_t1853889766 * ___m_ItemsContainer_0;
	// System.Collections.Specialized.NameObjectCollectionBase/_Item System.Collections.Specialized.NameObjectCollectionBase::m_NullKeyItem
	_Item_t2272350267 * ___m_NullKeyItem_1;
	// System.Collections.ArrayList System.Collections.Specialized.NameObjectCollectionBase::m_ItemsArray
	ArrayList_t2718874744 * ___m_ItemsArray_2;
	// System.Collections.IHashCodeProvider System.Collections.Specialized.NameObjectCollectionBase::m_hashprovider
	RuntimeObject* ___m_hashprovider_3;
	// System.Collections.IComparer System.Collections.Specialized.NameObjectCollectionBase::m_comparer
	RuntimeObject* ___m_comparer_4;
	// System.Int32 System.Collections.Specialized.NameObjectCollectionBase::m_defCapacity
	int32_t ___m_defCapacity_5;
	// System.Boolean System.Collections.Specialized.NameObjectCollectionBase::m_readonly
	bool ___m_readonly_6;
	// System.Runtime.Serialization.SerializationInfo System.Collections.Specialized.NameObjectCollectionBase::infoCopy
	SerializationInfo_t950877179 * ___infoCopy_7;
	// System.Collections.Specialized.NameObjectCollectionBase/KeysCollection System.Collections.Specialized.NameObjectCollectionBase::keyscoll
	KeysCollection_t1318642398 * ___keyscoll_8;
	// System.Collections.IEqualityComparer System.Collections.Specialized.NameObjectCollectionBase::equality_comparer
	RuntimeObject* ___equality_comparer_9;

public:
	inline static int32_t get_offset_of_m_ItemsContainer_0() { return static_cast<int32_t>(offsetof(NameObjectCollectionBase_t2091847364, ___m_ItemsContainer_0)); }
	inline Hashtable_t1853889766 * get_m_ItemsContainer_0() const { return ___m_ItemsContainer_0; }
	inline Hashtable_t1853889766 ** get_address_of_m_ItemsContainer_0() { return &___m_ItemsContainer_0; }
	inline void set_m_ItemsContainer_0(Hashtable_t1853889766 * value)
	{
		___m_ItemsContainer_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_ItemsContainer_0), value);
	}

	inline static int32_t get_offset_of_m_NullKeyItem_1() { return static_cast<int32_t>(offsetof(NameObjectCollectionBase_t2091847364, ___m_NullKeyItem_1)); }
	inline _Item_t2272350267 * get_m_NullKeyItem_1() const { return ___m_NullKeyItem_1; }
	inline _Item_t2272350267 ** get_address_of_m_NullKeyItem_1() { return &___m_NullKeyItem_1; }
	inline void set_m_NullKeyItem_1(_Item_t2272350267 * value)
	{
		___m_NullKeyItem_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_NullKeyItem_1), value);
	}

	inline static int32_t get_offset_of_m_ItemsArray_2() { return static_cast<int32_t>(offsetof(NameObjectCollectionBase_t2091847364, ___m_ItemsArray_2)); }
	inline ArrayList_t2718874744 * get_m_ItemsArray_2() const { return ___m_ItemsArray_2; }
	inline ArrayList_t2718874744 ** get_address_of_m_ItemsArray_2() { return &___m_ItemsArray_2; }
	inline void set_m_ItemsArray_2(ArrayList_t2718874744 * value)
	{
		___m_ItemsArray_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_ItemsArray_2), value);
	}

	inline static int32_t get_offset_of_m_hashprovider_3() { return static_cast<int32_t>(offsetof(NameObjectCollectionBase_t2091847364, ___m_hashprovider_3)); }
	inline RuntimeObject* get_m_hashprovider_3() const { return ___m_hashprovider_3; }
	inline RuntimeObject** get_address_of_m_hashprovider_3() { return &___m_hashprovider_3; }
	inline void set_m_hashprovider_3(RuntimeObject* value)
	{
		___m_hashprovider_3 = value;
		Il2CppCodeGenWriteBarrier((&___m_hashprovider_3), value);
	}

	inline static int32_t get_offset_of_m_comparer_4() { return static_cast<int32_t>(offsetof(NameObjectCollectionBase_t2091847364, ___m_comparer_4)); }
	inline RuntimeObject* get_m_comparer_4() const { return ___m_comparer_4; }
	inline RuntimeObject** get_address_of_m_comparer_4() { return &___m_comparer_4; }
	inline void set_m_comparer_4(RuntimeObject* value)
	{
		___m_comparer_4 = value;
		Il2CppCodeGenWriteBarrier((&___m_comparer_4), value);
	}

	inline static int32_t get_offset_of_m_defCapacity_5() { return static_cast<int32_t>(offsetof(NameObjectCollectionBase_t2091847364, ___m_defCapacity_5)); }
	inline int32_t get_m_defCapacity_5() const { return ___m_defCapacity_5; }
	inline int32_t* get_address_of_m_defCapacity_5() { return &___m_defCapacity_5; }
	inline void set_m_defCapacity_5(int32_t value)
	{
		___m_defCapacity_5 = value;
	}

	inline static int32_t get_offset_of_m_readonly_6() { return static_cast<int32_t>(offsetof(NameObjectCollectionBase_t2091847364, ___m_readonly_6)); }
	inline bool get_m_readonly_6() const { return ___m_readonly_6; }
	inline bool* get_address_of_m_readonly_6() { return &___m_readonly_6; }
	inline void set_m_readonly_6(bool value)
	{
		___m_readonly_6 = value;
	}

	inline static int32_t get_offset_of_infoCopy_7() { return static_cast<int32_t>(offsetof(NameObjectCollectionBase_t2091847364, ___infoCopy_7)); }
	inline SerializationInfo_t950877179 * get_infoCopy_7() const { return ___infoCopy_7; }
	inline SerializationInfo_t950877179 ** get_address_of_infoCopy_7() { return &___infoCopy_7; }
	inline void set_infoCopy_7(SerializationInfo_t950877179 * value)
	{
		___infoCopy_7 = value;
		Il2CppCodeGenWriteBarrier((&___infoCopy_7), value);
	}

	inline static int32_t get_offset_of_keyscoll_8() { return static_cast<int32_t>(offsetof(NameObjectCollectionBase_t2091847364, ___keyscoll_8)); }
	inline KeysCollection_t1318642398 * get_keyscoll_8() const { return ___keyscoll_8; }
	inline KeysCollection_t1318642398 ** get_address_of_keyscoll_8() { return &___keyscoll_8; }
	inline void set_keyscoll_8(KeysCollection_t1318642398 * value)
	{
		___keyscoll_8 = value;
		Il2CppCodeGenWriteBarrier((&___keyscoll_8), value);
	}

	inline static int32_t get_offset_of_equality_comparer_9() { return static_cast<int32_t>(offsetof(NameObjectCollectionBase_t2091847364, ___equality_comparer_9)); }
	inline RuntimeObject* get_equality_comparer_9() const { return ___equality_comparer_9; }
	inline RuntimeObject** get_address_of_equality_comparer_9() { return &___equality_comparer_9; }
	inline void set_equality_comparer_9(RuntimeObject* value)
	{
		___equality_comparer_9 = value;
		Il2CppCodeGenWriteBarrier((&___equality_comparer_9), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NAMEOBJECTCOLLECTIONBASE_T2091847364_H
#ifndef EXCEPTION_T_H
#define EXCEPTION_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Exception
struct  Exception_t  : public RuntimeObject
{
public:
	// System.IntPtr[] System.Exception::trace_ips
	IntPtrU5BU5D_t4013366056* ___trace_ips_0;
	// System.Exception System.Exception::inner_exception
	Exception_t * ___inner_exception_1;
	// System.String System.Exception::message
	String_t* ___message_2;
	// System.String System.Exception::help_link
	String_t* ___help_link_3;
	// System.String System.Exception::class_name
	String_t* ___class_name_4;
	// System.String System.Exception::stack_trace
	String_t* ___stack_trace_5;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_6;
	// System.Int32 System.Exception::remote_stack_index
	int32_t ___remote_stack_index_7;
	// System.Int32 System.Exception::hresult
	int32_t ___hresult_8;
	// System.String System.Exception::source
	String_t* ___source_9;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_10;

public:
	inline static int32_t get_offset_of_trace_ips_0() { return static_cast<int32_t>(offsetof(Exception_t, ___trace_ips_0)); }
	inline IntPtrU5BU5D_t4013366056* get_trace_ips_0() const { return ___trace_ips_0; }
	inline IntPtrU5BU5D_t4013366056** get_address_of_trace_ips_0() { return &___trace_ips_0; }
	inline void set_trace_ips_0(IntPtrU5BU5D_t4013366056* value)
	{
		___trace_ips_0 = value;
		Il2CppCodeGenWriteBarrier((&___trace_ips_0), value);
	}

	inline static int32_t get_offset_of_inner_exception_1() { return static_cast<int32_t>(offsetof(Exception_t, ___inner_exception_1)); }
	inline Exception_t * get_inner_exception_1() const { return ___inner_exception_1; }
	inline Exception_t ** get_address_of_inner_exception_1() { return &___inner_exception_1; }
	inline void set_inner_exception_1(Exception_t * value)
	{
		___inner_exception_1 = value;
		Il2CppCodeGenWriteBarrier((&___inner_exception_1), value);
	}

	inline static int32_t get_offset_of_message_2() { return static_cast<int32_t>(offsetof(Exception_t, ___message_2)); }
	inline String_t* get_message_2() const { return ___message_2; }
	inline String_t** get_address_of_message_2() { return &___message_2; }
	inline void set_message_2(String_t* value)
	{
		___message_2 = value;
		Il2CppCodeGenWriteBarrier((&___message_2), value);
	}

	inline static int32_t get_offset_of_help_link_3() { return static_cast<int32_t>(offsetof(Exception_t, ___help_link_3)); }
	inline String_t* get_help_link_3() const { return ___help_link_3; }
	inline String_t** get_address_of_help_link_3() { return &___help_link_3; }
	inline void set_help_link_3(String_t* value)
	{
		___help_link_3 = value;
		Il2CppCodeGenWriteBarrier((&___help_link_3), value);
	}

	inline static int32_t get_offset_of_class_name_4() { return static_cast<int32_t>(offsetof(Exception_t, ___class_name_4)); }
	inline String_t* get_class_name_4() const { return ___class_name_4; }
	inline String_t** get_address_of_class_name_4() { return &___class_name_4; }
	inline void set_class_name_4(String_t* value)
	{
		___class_name_4 = value;
		Il2CppCodeGenWriteBarrier((&___class_name_4), value);
	}

	inline static int32_t get_offset_of_stack_trace_5() { return static_cast<int32_t>(offsetof(Exception_t, ___stack_trace_5)); }
	inline String_t* get_stack_trace_5() const { return ___stack_trace_5; }
	inline String_t** get_address_of_stack_trace_5() { return &___stack_trace_5; }
	inline void set_stack_trace_5(String_t* value)
	{
		___stack_trace_5 = value;
		Il2CppCodeGenWriteBarrier((&___stack_trace_5), value);
	}

	inline static int32_t get_offset_of__remoteStackTraceString_6() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackTraceString_6)); }
	inline String_t* get__remoteStackTraceString_6() const { return ____remoteStackTraceString_6; }
	inline String_t** get_address_of__remoteStackTraceString_6() { return &____remoteStackTraceString_6; }
	inline void set__remoteStackTraceString_6(String_t* value)
	{
		____remoteStackTraceString_6 = value;
		Il2CppCodeGenWriteBarrier((&____remoteStackTraceString_6), value);
	}

	inline static int32_t get_offset_of_remote_stack_index_7() { return static_cast<int32_t>(offsetof(Exception_t, ___remote_stack_index_7)); }
	inline int32_t get_remote_stack_index_7() const { return ___remote_stack_index_7; }
	inline int32_t* get_address_of_remote_stack_index_7() { return &___remote_stack_index_7; }
	inline void set_remote_stack_index_7(int32_t value)
	{
		___remote_stack_index_7 = value;
	}

	inline static int32_t get_offset_of_hresult_8() { return static_cast<int32_t>(offsetof(Exception_t, ___hresult_8)); }
	inline int32_t get_hresult_8() const { return ___hresult_8; }
	inline int32_t* get_address_of_hresult_8() { return &___hresult_8; }
	inline void set_hresult_8(int32_t value)
	{
		___hresult_8 = value;
	}

	inline static int32_t get_offset_of_source_9() { return static_cast<int32_t>(offsetof(Exception_t, ___source_9)); }
	inline String_t* get_source_9() const { return ___source_9; }
	inline String_t** get_address_of_source_9() { return &___source_9; }
	inline void set_source_9(String_t* value)
	{
		___source_9 = value;
		Il2CppCodeGenWriteBarrier((&___source_9), value);
	}

	inline static int32_t get_offset_of__data_10() { return static_cast<int32_t>(offsetof(Exception_t, ____data_10)); }
	inline RuntimeObject* get__data_10() const { return ____data_10; }
	inline RuntimeObject** get_address_of__data_10() { return &____data_10; }
	inline void set__data_10(RuntimeObject* value)
	{
		____data_10 = value;
		Il2CppCodeGenWriteBarrier((&____data_10), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EXCEPTION_T_H
#ifndef STREAM_T1273022909_H
#define STREAM_T1273022909_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.IO.Stream
struct  Stream_t1273022909  : public RuntimeObject
{
public:

public:
};

struct Stream_t1273022909_StaticFields
{
public:
	// System.IO.Stream System.IO.Stream::Null
	Stream_t1273022909 * ___Null_0;

public:
	inline static int32_t get_offset_of_Null_0() { return static_cast<int32_t>(offsetof(Stream_t1273022909_StaticFields, ___Null_0)); }
	inline Stream_t1273022909 * get_Null_0() const { return ___Null_0; }
	inline Stream_t1273022909 ** get_address_of_Null_0() { return &___Null_0; }
	inline void set_Null_0(Stream_t1273022909 * value)
	{
		___Null_0 = value;
		Il2CppCodeGenWriteBarrier((&___Null_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STREAM_T1273022909_H
#ifndef HTTPLISTENERCONTEXT_T424880822_H
#define HTTPLISTENERCONTEXT_T424880822_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.HttpListenerContext
struct  HttpListenerContext_t424880822  : public RuntimeObject
{
public:
	// System.Net.HttpListenerRequest System.Net.HttpListenerContext::request
	HttpListenerRequest_t630699488 * ___request_0;
	// System.Net.HttpListenerResponse System.Net.HttpListenerContext::response
	HttpListenerResponse_t3502667045 * ___response_1;
	// System.Security.Principal.IPrincipal System.Net.HttpListenerContext::user
	RuntimeObject* ___user_2;
	// System.Net.HttpConnection System.Net.HttpListenerContext::cnc
	HttpConnection_t269576101 * ___cnc_3;
	// System.String System.Net.HttpListenerContext::error
	String_t* ___error_4;
	// System.Int32 System.Net.HttpListenerContext::err_status
	int32_t ___err_status_5;
	// System.Net.HttpListener System.Net.HttpListenerContext::Listener
	HttpListener_t988452056 * ___Listener_6;

public:
	inline static int32_t get_offset_of_request_0() { return static_cast<int32_t>(offsetof(HttpListenerContext_t424880822, ___request_0)); }
	inline HttpListenerRequest_t630699488 * get_request_0() const { return ___request_0; }
	inline HttpListenerRequest_t630699488 ** get_address_of_request_0() { return &___request_0; }
	inline void set_request_0(HttpListenerRequest_t630699488 * value)
	{
		___request_0 = value;
		Il2CppCodeGenWriteBarrier((&___request_0), value);
	}

	inline static int32_t get_offset_of_response_1() { return static_cast<int32_t>(offsetof(HttpListenerContext_t424880822, ___response_1)); }
	inline HttpListenerResponse_t3502667045 * get_response_1() const { return ___response_1; }
	inline HttpListenerResponse_t3502667045 ** get_address_of_response_1() { return &___response_1; }
	inline void set_response_1(HttpListenerResponse_t3502667045 * value)
	{
		___response_1 = value;
		Il2CppCodeGenWriteBarrier((&___response_1), value);
	}

	inline static int32_t get_offset_of_user_2() { return static_cast<int32_t>(offsetof(HttpListenerContext_t424880822, ___user_2)); }
	inline RuntimeObject* get_user_2() const { return ___user_2; }
	inline RuntimeObject** get_address_of_user_2() { return &___user_2; }
	inline void set_user_2(RuntimeObject* value)
	{
		___user_2 = value;
		Il2CppCodeGenWriteBarrier((&___user_2), value);
	}

	inline static int32_t get_offset_of_cnc_3() { return static_cast<int32_t>(offsetof(HttpListenerContext_t424880822, ___cnc_3)); }
	inline HttpConnection_t269576101 * get_cnc_3() const { return ___cnc_3; }
	inline HttpConnection_t269576101 ** get_address_of_cnc_3() { return &___cnc_3; }
	inline void set_cnc_3(HttpConnection_t269576101 * value)
	{
		___cnc_3 = value;
		Il2CppCodeGenWriteBarrier((&___cnc_3), value);
	}

	inline static int32_t get_offset_of_error_4() { return static_cast<int32_t>(offsetof(HttpListenerContext_t424880822, ___error_4)); }
	inline String_t* get_error_4() const { return ___error_4; }
	inline String_t** get_address_of_error_4() { return &___error_4; }
	inline void set_error_4(String_t* value)
	{
		___error_4 = value;
		Il2CppCodeGenWriteBarrier((&___error_4), value);
	}

	inline static int32_t get_offset_of_err_status_5() { return static_cast<int32_t>(offsetof(HttpListenerContext_t424880822, ___err_status_5)); }
	inline int32_t get_err_status_5() const { return ___err_status_5; }
	inline int32_t* get_address_of_err_status_5() { return &___err_status_5; }
	inline void set_err_status_5(int32_t value)
	{
		___err_status_5 = value;
	}

	inline static int32_t get_offset_of_Listener_6() { return static_cast<int32_t>(offsetof(HttpListenerContext_t424880822, ___Listener_6)); }
	inline HttpListener_t988452056 * get_Listener_6() const { return ___Listener_6; }
	inline HttpListener_t988452056 ** get_address_of_Listener_6() { return &___Listener_6; }
	inline void set_Listener_6(HttpListener_t988452056 * value)
	{
		___Listener_6 = value;
		Il2CppCodeGenWriteBarrier((&___Listener_6), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // HTTPLISTENERCONTEXT_T424880822_H
#ifndef HTTPLISTENERPREFIXCOLLECTION_T2963430373_H
#define HTTPLISTENERPREFIXCOLLECTION_T2963430373_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.HttpListenerPrefixCollection
struct  HttpListenerPrefixCollection_t2963430373  : public RuntimeObject
{
public:
	// System.Collections.Generic.List`1<System.String> System.Net.HttpListenerPrefixCollection::prefixes
	List_1_t3319525431 * ___prefixes_0;
	// System.Net.HttpListener System.Net.HttpListenerPrefixCollection::listener
	HttpListener_t988452056 * ___listener_1;

public:
	inline static int32_t get_offset_of_prefixes_0() { return static_cast<int32_t>(offsetof(HttpListenerPrefixCollection_t2963430373, ___prefixes_0)); }
	inline List_1_t3319525431 * get_prefixes_0() const { return ___prefixes_0; }
	inline List_1_t3319525431 ** get_address_of_prefixes_0() { return &___prefixes_0; }
	inline void set_prefixes_0(List_1_t3319525431 * value)
	{
		___prefixes_0 = value;
		Il2CppCodeGenWriteBarrier((&___prefixes_0), value);
	}

	inline static int32_t get_offset_of_listener_1() { return static_cast<int32_t>(offsetof(HttpListenerPrefixCollection_t2963430373, ___listener_1)); }
	inline HttpListener_t988452056 * get_listener_1() const { return ___listener_1; }
	inline HttpListener_t988452056 ** get_address_of_listener_1() { return &___listener_1; }
	inline void set_listener_1(HttpListener_t988452056 * value)
	{
		___listener_1 = value;
		Il2CppCodeGenWriteBarrier((&___listener_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // HTTPLISTENERPREFIXCOLLECTION_T2963430373_H
#ifndef HTTPLISTENERRESPONSE_T3502667045_H
#define HTTPLISTENERRESPONSE_T3502667045_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.HttpListenerResponse
struct  HttpListenerResponse_t3502667045  : public RuntimeObject
{
public:
	// System.Boolean System.Net.HttpListenerResponse::disposed
	bool ___disposed_0;
	// System.Text.Encoding System.Net.HttpListenerResponse::content_encoding
	Encoding_t1523322056 * ___content_encoding_1;
	// System.Int64 System.Net.HttpListenerResponse::content_length
	int64_t ___content_length_2;
	// System.Boolean System.Net.HttpListenerResponse::cl_set
	bool ___cl_set_3;
	// System.String System.Net.HttpListenerResponse::content_type
	String_t* ___content_type_4;
	// System.Net.CookieCollection System.Net.HttpListenerResponse::cookies
	CookieCollection_t3881042616 * ___cookies_5;
	// System.Net.WebHeaderCollection System.Net.HttpListenerResponse::headers
	WebHeaderCollection_t1942268960 * ___headers_6;
	// System.Boolean System.Net.HttpListenerResponse::keep_alive
	bool ___keep_alive_7;
	// System.Net.ResponseStream System.Net.HttpListenerResponse::output_stream
	ResponseStream_t3810703494 * ___output_stream_8;
	// System.Version System.Net.HttpListenerResponse::version
	Version_t3456873960 * ___version_9;
	// System.String System.Net.HttpListenerResponse::location
	String_t* ___location_10;
	// System.Int32 System.Net.HttpListenerResponse::status_code
	int32_t ___status_code_11;
	// System.String System.Net.HttpListenerResponse::status_description
	String_t* ___status_description_12;
	// System.Boolean System.Net.HttpListenerResponse::chunked
	bool ___chunked_13;
	// System.Net.HttpListenerContext System.Net.HttpListenerResponse::context
	HttpListenerContext_t424880822 * ___context_14;
	// System.Boolean System.Net.HttpListenerResponse::HeadersSent
	bool ___HeadersSent_15;
	// System.Boolean System.Net.HttpListenerResponse::force_close_chunked
	bool ___force_close_chunked_16;

public:
	inline static int32_t get_offset_of_disposed_0() { return static_cast<int32_t>(offsetof(HttpListenerResponse_t3502667045, ___disposed_0)); }
	inline bool get_disposed_0() const { return ___disposed_0; }
	inline bool* get_address_of_disposed_0() { return &___disposed_0; }
	inline void set_disposed_0(bool value)
	{
		___disposed_0 = value;
	}

	inline static int32_t get_offset_of_content_encoding_1() { return static_cast<int32_t>(offsetof(HttpListenerResponse_t3502667045, ___content_encoding_1)); }
	inline Encoding_t1523322056 * get_content_encoding_1() const { return ___content_encoding_1; }
	inline Encoding_t1523322056 ** get_address_of_content_encoding_1() { return &___content_encoding_1; }
	inline void set_content_encoding_1(Encoding_t1523322056 * value)
	{
		___content_encoding_1 = value;
		Il2CppCodeGenWriteBarrier((&___content_encoding_1), value);
	}

	inline static int32_t get_offset_of_content_length_2() { return static_cast<int32_t>(offsetof(HttpListenerResponse_t3502667045, ___content_length_2)); }
	inline int64_t get_content_length_2() const { return ___content_length_2; }
	inline int64_t* get_address_of_content_length_2() { return &___content_length_2; }
	inline void set_content_length_2(int64_t value)
	{
		___content_length_2 = value;
	}

	inline static int32_t get_offset_of_cl_set_3() { return static_cast<int32_t>(offsetof(HttpListenerResponse_t3502667045, ___cl_set_3)); }
	inline bool get_cl_set_3() const { return ___cl_set_3; }
	inline bool* get_address_of_cl_set_3() { return &___cl_set_3; }
	inline void set_cl_set_3(bool value)
	{
		___cl_set_3 = value;
	}

	inline static int32_t get_offset_of_content_type_4() { return static_cast<int32_t>(offsetof(HttpListenerResponse_t3502667045, ___content_type_4)); }
	inline String_t* get_content_type_4() const { return ___content_type_4; }
	inline String_t** get_address_of_content_type_4() { return &___content_type_4; }
	inline void set_content_type_4(String_t* value)
	{
		___content_type_4 = value;
		Il2CppCodeGenWriteBarrier((&___content_type_4), value);
	}

	inline static int32_t get_offset_of_cookies_5() { return static_cast<int32_t>(offsetof(HttpListenerResponse_t3502667045, ___cookies_5)); }
	inline CookieCollection_t3881042616 * get_cookies_5() const { return ___cookies_5; }
	inline CookieCollection_t3881042616 ** get_address_of_cookies_5() { return &___cookies_5; }
	inline void set_cookies_5(CookieCollection_t3881042616 * value)
	{
		___cookies_5 = value;
		Il2CppCodeGenWriteBarrier((&___cookies_5), value);
	}

	inline static int32_t get_offset_of_headers_6() { return static_cast<int32_t>(offsetof(HttpListenerResponse_t3502667045, ___headers_6)); }
	inline WebHeaderCollection_t1942268960 * get_headers_6() const { return ___headers_6; }
	inline WebHeaderCollection_t1942268960 ** get_address_of_headers_6() { return &___headers_6; }
	inline void set_headers_6(WebHeaderCollection_t1942268960 * value)
	{
		___headers_6 = value;
		Il2CppCodeGenWriteBarrier((&___headers_6), value);
	}

	inline static int32_t get_offset_of_keep_alive_7() { return static_cast<int32_t>(offsetof(HttpListenerResponse_t3502667045, ___keep_alive_7)); }
	inline bool get_keep_alive_7() const { return ___keep_alive_7; }
	inline bool* get_address_of_keep_alive_7() { return &___keep_alive_7; }
	inline void set_keep_alive_7(bool value)
	{
		___keep_alive_7 = value;
	}

	inline static int32_t get_offset_of_output_stream_8() { return static_cast<int32_t>(offsetof(HttpListenerResponse_t3502667045, ___output_stream_8)); }
	inline ResponseStream_t3810703494 * get_output_stream_8() const { return ___output_stream_8; }
	inline ResponseStream_t3810703494 ** get_address_of_output_stream_8() { return &___output_stream_8; }
	inline void set_output_stream_8(ResponseStream_t3810703494 * value)
	{
		___output_stream_8 = value;
		Il2CppCodeGenWriteBarrier((&___output_stream_8), value);
	}

	inline static int32_t get_offset_of_version_9() { return static_cast<int32_t>(offsetof(HttpListenerResponse_t3502667045, ___version_9)); }
	inline Version_t3456873960 * get_version_9() const { return ___version_9; }
	inline Version_t3456873960 ** get_address_of_version_9() { return &___version_9; }
	inline void set_version_9(Version_t3456873960 * value)
	{
		___version_9 = value;
		Il2CppCodeGenWriteBarrier((&___version_9), value);
	}

	inline static int32_t get_offset_of_location_10() { return static_cast<int32_t>(offsetof(HttpListenerResponse_t3502667045, ___location_10)); }
	inline String_t* get_location_10() const { return ___location_10; }
	inline String_t** get_address_of_location_10() { return &___location_10; }
	inline void set_location_10(String_t* value)
	{
		___location_10 = value;
		Il2CppCodeGenWriteBarrier((&___location_10), value);
	}

	inline static int32_t get_offset_of_status_code_11() { return static_cast<int32_t>(offsetof(HttpListenerResponse_t3502667045, ___status_code_11)); }
	inline int32_t get_status_code_11() const { return ___status_code_11; }
	inline int32_t* get_address_of_status_code_11() { return &___status_code_11; }
	inline void set_status_code_11(int32_t value)
	{
		___status_code_11 = value;
	}

	inline static int32_t get_offset_of_status_description_12() { return static_cast<int32_t>(offsetof(HttpListenerResponse_t3502667045, ___status_description_12)); }
	inline String_t* get_status_description_12() const { return ___status_description_12; }
	inline String_t** get_address_of_status_description_12() { return &___status_description_12; }
	inline void set_status_description_12(String_t* value)
	{
		___status_description_12 = value;
		Il2CppCodeGenWriteBarrier((&___status_description_12), value);
	}

	inline static int32_t get_offset_of_chunked_13() { return static_cast<int32_t>(offsetof(HttpListenerResponse_t3502667045, ___chunked_13)); }
	inline bool get_chunked_13() const { return ___chunked_13; }
	inline bool* get_address_of_chunked_13() { return &___chunked_13; }
	inline void set_chunked_13(bool value)
	{
		___chunked_13 = value;
	}

	inline static int32_t get_offset_of_context_14() { return static_cast<int32_t>(offsetof(HttpListenerResponse_t3502667045, ___context_14)); }
	inline HttpListenerContext_t424880822 * get_context_14() const { return ___context_14; }
	inline HttpListenerContext_t424880822 ** get_address_of_context_14() { return &___context_14; }
	inline void set_context_14(HttpListenerContext_t424880822 * value)
	{
		___context_14 = value;
		Il2CppCodeGenWriteBarrier((&___context_14), value);
	}

	inline static int32_t get_offset_of_HeadersSent_15() { return static_cast<int32_t>(offsetof(HttpListenerResponse_t3502667045, ___HeadersSent_15)); }
	inline bool get_HeadersSent_15() const { return ___HeadersSent_15; }
	inline bool* get_address_of_HeadersSent_15() { return &___HeadersSent_15; }
	inline void set_HeadersSent_15(bool value)
	{
		___HeadersSent_15 = value;
	}

	inline static int32_t get_offset_of_force_close_chunked_16() { return static_cast<int32_t>(offsetof(HttpListenerResponse_t3502667045, ___force_close_chunked_16)); }
	inline bool get_force_close_chunked_16() const { return ___force_close_chunked_16; }
	inline bool* get_address_of_force_close_chunked_16() { return &___force_close_chunked_16; }
	inline void set_force_close_chunked_16(bool value)
	{
		___force_close_chunked_16 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // HTTPLISTENERRESPONSE_T3502667045_H
#ifndef MEMBERINFO_T_H
#define MEMBERINFO_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.MemberInfo
struct  MemberInfo_t  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MEMBERINFO_T_H
#ifndef CRITICALFINALIZEROBJECT_T701527852_H
#define CRITICALFINALIZEROBJECT_T701527852_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.ConstrainedExecution.CriticalFinalizerObject
struct  CriticalFinalizerObject_t701527852  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CRITICALFINALIZEROBJECT_T701527852_H
#ifndef STRING_T_H
#define STRING_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.String
struct  String_t  : public RuntimeObject
{
public:
	// System.Int32 System.String::length
	int32_t ___length_0;
	// System.Char System.String::start_char
	Il2CppChar ___start_char_1;

public:
	inline static int32_t get_offset_of_length_0() { return static_cast<int32_t>(offsetof(String_t, ___length_0)); }
	inline int32_t get_length_0() const { return ___length_0; }
	inline int32_t* get_address_of_length_0() { return &___length_0; }
	inline void set_length_0(int32_t value)
	{
		___length_0 = value;
	}

	inline static int32_t get_offset_of_start_char_1() { return static_cast<int32_t>(offsetof(String_t, ___start_char_1)); }
	inline Il2CppChar get_start_char_1() const { return ___start_char_1; }
	inline Il2CppChar* get_address_of_start_char_1() { return &___start_char_1; }
	inline void set_start_char_1(Il2CppChar value)
	{
		___start_char_1 = value;
	}
};

struct String_t_StaticFields
{
public:
	// System.String System.String::Empty
	String_t* ___Empty_2;
	// System.Char[] System.String::WhiteChars
	CharU5BU5D_t3528271667* ___WhiteChars_3;

public:
	inline static int32_t get_offset_of_Empty_2() { return static_cast<int32_t>(offsetof(String_t_StaticFields, ___Empty_2)); }
	inline String_t* get_Empty_2() const { return ___Empty_2; }
	inline String_t** get_address_of_Empty_2() { return &___Empty_2; }
	inline void set_Empty_2(String_t* value)
	{
		___Empty_2 = value;
		Il2CppCodeGenWriteBarrier((&___Empty_2), value);
	}

	inline static int32_t get_offset_of_WhiteChars_3() { return static_cast<int32_t>(offsetof(String_t_StaticFields, ___WhiteChars_3)); }
	inline CharU5BU5D_t3528271667* get_WhiteChars_3() const { return ___WhiteChars_3; }
	inline CharU5BU5D_t3528271667** get_address_of_WhiteChars_3() { return &___WhiteChars_3; }
	inline void set_WhiteChars_3(CharU5BU5D_t3528271667* value)
	{
		___WhiteChars_3 = value;
		Il2CppCodeGenWriteBarrier((&___WhiteChars_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STRING_T_H
#ifndef ENCODING_T1523322056_H
#define ENCODING_T1523322056_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.Encoding
struct  Encoding_t1523322056  : public RuntimeObject
{
public:
	// System.Int32 System.Text.Encoding::codePage
	int32_t ___codePage_0;
	// System.Int32 System.Text.Encoding::windows_code_page
	int32_t ___windows_code_page_1;
	// System.Boolean System.Text.Encoding::is_readonly
	bool ___is_readonly_2;
	// System.Text.DecoderFallback System.Text.Encoding::decoder_fallback
	DecoderFallback_t3123823036 * ___decoder_fallback_3;
	// System.Text.EncoderFallback System.Text.Encoding::encoder_fallback
	EncoderFallback_t1188251036 * ___encoder_fallback_4;
	// System.String System.Text.Encoding::body_name
	String_t* ___body_name_9;
	// System.String System.Text.Encoding::encoding_name
	String_t* ___encoding_name_10;
	// System.String System.Text.Encoding::header_name
	String_t* ___header_name_11;
	// System.Boolean System.Text.Encoding::is_mail_news_display
	bool ___is_mail_news_display_12;
	// System.Boolean System.Text.Encoding::is_mail_news_save
	bool ___is_mail_news_save_13;
	// System.Boolean System.Text.Encoding::is_browser_save
	bool ___is_browser_save_14;
	// System.Boolean System.Text.Encoding::is_browser_display
	bool ___is_browser_display_15;
	// System.String System.Text.Encoding::web_name
	String_t* ___web_name_16;

public:
	inline static int32_t get_offset_of_codePage_0() { return static_cast<int32_t>(offsetof(Encoding_t1523322056, ___codePage_0)); }
	inline int32_t get_codePage_0() const { return ___codePage_0; }
	inline int32_t* get_address_of_codePage_0() { return &___codePage_0; }
	inline void set_codePage_0(int32_t value)
	{
		___codePage_0 = value;
	}

	inline static int32_t get_offset_of_windows_code_page_1() { return static_cast<int32_t>(offsetof(Encoding_t1523322056, ___windows_code_page_1)); }
	inline int32_t get_windows_code_page_1() const { return ___windows_code_page_1; }
	inline int32_t* get_address_of_windows_code_page_1() { return &___windows_code_page_1; }
	inline void set_windows_code_page_1(int32_t value)
	{
		___windows_code_page_1 = value;
	}

	inline static int32_t get_offset_of_is_readonly_2() { return static_cast<int32_t>(offsetof(Encoding_t1523322056, ___is_readonly_2)); }
	inline bool get_is_readonly_2() const { return ___is_readonly_2; }
	inline bool* get_address_of_is_readonly_2() { return &___is_readonly_2; }
	inline void set_is_readonly_2(bool value)
	{
		___is_readonly_2 = value;
	}

	inline static int32_t get_offset_of_decoder_fallback_3() { return static_cast<int32_t>(offsetof(Encoding_t1523322056, ___decoder_fallback_3)); }
	inline DecoderFallback_t3123823036 * get_decoder_fallback_3() const { return ___decoder_fallback_3; }
	inline DecoderFallback_t3123823036 ** get_address_of_decoder_fallback_3() { return &___decoder_fallback_3; }
	inline void set_decoder_fallback_3(DecoderFallback_t3123823036 * value)
	{
		___decoder_fallback_3 = value;
		Il2CppCodeGenWriteBarrier((&___decoder_fallback_3), value);
	}

	inline static int32_t get_offset_of_encoder_fallback_4() { return static_cast<int32_t>(offsetof(Encoding_t1523322056, ___encoder_fallback_4)); }
	inline EncoderFallback_t1188251036 * get_encoder_fallback_4() const { return ___encoder_fallback_4; }
	inline EncoderFallback_t1188251036 ** get_address_of_encoder_fallback_4() { return &___encoder_fallback_4; }
	inline void set_encoder_fallback_4(EncoderFallback_t1188251036 * value)
	{
		___encoder_fallback_4 = value;
		Il2CppCodeGenWriteBarrier((&___encoder_fallback_4), value);
	}

	inline static int32_t get_offset_of_body_name_9() { return static_cast<int32_t>(offsetof(Encoding_t1523322056, ___body_name_9)); }
	inline String_t* get_body_name_9() const { return ___body_name_9; }
	inline String_t** get_address_of_body_name_9() { return &___body_name_9; }
	inline void set_body_name_9(String_t* value)
	{
		___body_name_9 = value;
		Il2CppCodeGenWriteBarrier((&___body_name_9), value);
	}

	inline static int32_t get_offset_of_encoding_name_10() { return static_cast<int32_t>(offsetof(Encoding_t1523322056, ___encoding_name_10)); }
	inline String_t* get_encoding_name_10() const { return ___encoding_name_10; }
	inline String_t** get_address_of_encoding_name_10() { return &___encoding_name_10; }
	inline void set_encoding_name_10(String_t* value)
	{
		___encoding_name_10 = value;
		Il2CppCodeGenWriteBarrier((&___encoding_name_10), value);
	}

	inline static int32_t get_offset_of_header_name_11() { return static_cast<int32_t>(offsetof(Encoding_t1523322056, ___header_name_11)); }
	inline String_t* get_header_name_11() const { return ___header_name_11; }
	inline String_t** get_address_of_header_name_11() { return &___header_name_11; }
	inline void set_header_name_11(String_t* value)
	{
		___header_name_11 = value;
		Il2CppCodeGenWriteBarrier((&___header_name_11), value);
	}

	inline static int32_t get_offset_of_is_mail_news_display_12() { return static_cast<int32_t>(offsetof(Encoding_t1523322056, ___is_mail_news_display_12)); }
	inline bool get_is_mail_news_display_12() const { return ___is_mail_news_display_12; }
	inline bool* get_address_of_is_mail_news_display_12() { return &___is_mail_news_display_12; }
	inline void set_is_mail_news_display_12(bool value)
	{
		___is_mail_news_display_12 = value;
	}

	inline static int32_t get_offset_of_is_mail_news_save_13() { return static_cast<int32_t>(offsetof(Encoding_t1523322056, ___is_mail_news_save_13)); }
	inline bool get_is_mail_news_save_13() const { return ___is_mail_news_save_13; }
	inline bool* get_address_of_is_mail_news_save_13() { return &___is_mail_news_save_13; }
	inline void set_is_mail_news_save_13(bool value)
	{
		___is_mail_news_save_13 = value;
	}

	inline static int32_t get_offset_of_is_browser_save_14() { return static_cast<int32_t>(offsetof(Encoding_t1523322056, ___is_browser_save_14)); }
	inline bool get_is_browser_save_14() const { return ___is_browser_save_14; }
	inline bool* get_address_of_is_browser_save_14() { return &___is_browser_save_14; }
	inline void set_is_browser_save_14(bool value)
	{
		___is_browser_save_14 = value;
	}

	inline static int32_t get_offset_of_is_browser_display_15() { return static_cast<int32_t>(offsetof(Encoding_t1523322056, ___is_browser_display_15)); }
	inline bool get_is_browser_display_15() const { return ___is_browser_display_15; }
	inline bool* get_address_of_is_browser_display_15() { return &___is_browser_display_15; }
	inline void set_is_browser_display_15(bool value)
	{
		___is_browser_display_15 = value;
	}

	inline static int32_t get_offset_of_web_name_16() { return static_cast<int32_t>(offsetof(Encoding_t1523322056, ___web_name_16)); }
	inline String_t* get_web_name_16() const { return ___web_name_16; }
	inline String_t** get_address_of_web_name_16() { return &___web_name_16; }
	inline void set_web_name_16(String_t* value)
	{
		___web_name_16 = value;
		Il2CppCodeGenWriteBarrier((&___web_name_16), value);
	}
};

struct Encoding_t1523322056_StaticFields
{
public:
	// System.Reflection.Assembly System.Text.Encoding::i18nAssembly
	Assembly_t * ___i18nAssembly_5;
	// System.Boolean System.Text.Encoding::i18nDisabled
	bool ___i18nDisabled_6;
	// System.Text.EncodingInfo[] System.Text.Encoding::encoding_infos
	EncodingInfoU5BU5D_t2292552583* ___encoding_infos_7;
	// System.Object[] System.Text.Encoding::encodings
	ObjectU5BU5D_t2843939325* ___encodings_8;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::asciiEncoding
	Encoding_t1523322056 * ___asciiEncoding_17;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::bigEndianEncoding
	Encoding_t1523322056 * ___bigEndianEncoding_18;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::defaultEncoding
	Encoding_t1523322056 * ___defaultEncoding_19;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf7Encoding
	Encoding_t1523322056 * ___utf7Encoding_20;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf8EncodingWithMarkers
	Encoding_t1523322056 * ___utf8EncodingWithMarkers_21;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf8EncodingWithoutMarkers
	Encoding_t1523322056 * ___utf8EncodingWithoutMarkers_22;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::unicodeEncoding
	Encoding_t1523322056 * ___unicodeEncoding_23;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::isoLatin1Encoding
	Encoding_t1523322056 * ___isoLatin1Encoding_24;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf8EncodingUnsafe
	Encoding_t1523322056 * ___utf8EncodingUnsafe_25;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf32Encoding
	Encoding_t1523322056 * ___utf32Encoding_26;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::bigEndianUTF32Encoding
	Encoding_t1523322056 * ___bigEndianUTF32Encoding_27;
	// System.Object System.Text.Encoding::lockobj
	RuntimeObject * ___lockobj_28;

public:
	inline static int32_t get_offset_of_i18nAssembly_5() { return static_cast<int32_t>(offsetof(Encoding_t1523322056_StaticFields, ___i18nAssembly_5)); }
	inline Assembly_t * get_i18nAssembly_5() const { return ___i18nAssembly_5; }
	inline Assembly_t ** get_address_of_i18nAssembly_5() { return &___i18nAssembly_5; }
	inline void set_i18nAssembly_5(Assembly_t * value)
	{
		___i18nAssembly_5 = value;
		Il2CppCodeGenWriteBarrier((&___i18nAssembly_5), value);
	}

	inline static int32_t get_offset_of_i18nDisabled_6() { return static_cast<int32_t>(offsetof(Encoding_t1523322056_StaticFields, ___i18nDisabled_6)); }
	inline bool get_i18nDisabled_6() const { return ___i18nDisabled_6; }
	inline bool* get_address_of_i18nDisabled_6() { return &___i18nDisabled_6; }
	inline void set_i18nDisabled_6(bool value)
	{
		___i18nDisabled_6 = value;
	}

	inline static int32_t get_offset_of_encoding_infos_7() { return static_cast<int32_t>(offsetof(Encoding_t1523322056_StaticFields, ___encoding_infos_7)); }
	inline EncodingInfoU5BU5D_t2292552583* get_encoding_infos_7() const { return ___encoding_infos_7; }
	inline EncodingInfoU5BU5D_t2292552583** get_address_of_encoding_infos_7() { return &___encoding_infos_7; }
	inline void set_encoding_infos_7(EncodingInfoU5BU5D_t2292552583* value)
	{
		___encoding_infos_7 = value;
		Il2CppCodeGenWriteBarrier((&___encoding_infos_7), value);
	}

	inline static int32_t get_offset_of_encodings_8() { return static_cast<int32_t>(offsetof(Encoding_t1523322056_StaticFields, ___encodings_8)); }
	inline ObjectU5BU5D_t2843939325* get_encodings_8() const { return ___encodings_8; }
	inline ObjectU5BU5D_t2843939325** get_address_of_encodings_8() { return &___encodings_8; }
	inline void set_encodings_8(ObjectU5BU5D_t2843939325* value)
	{
		___encodings_8 = value;
		Il2CppCodeGenWriteBarrier((&___encodings_8), value);
	}

	inline static int32_t get_offset_of_asciiEncoding_17() { return static_cast<int32_t>(offsetof(Encoding_t1523322056_StaticFields, ___asciiEncoding_17)); }
	inline Encoding_t1523322056 * get_asciiEncoding_17() const { return ___asciiEncoding_17; }
	inline Encoding_t1523322056 ** get_address_of_asciiEncoding_17() { return &___asciiEncoding_17; }
	inline void set_asciiEncoding_17(Encoding_t1523322056 * value)
	{
		___asciiEncoding_17 = value;
		Il2CppCodeGenWriteBarrier((&___asciiEncoding_17), value);
	}

	inline static int32_t get_offset_of_bigEndianEncoding_18() { return static_cast<int32_t>(offsetof(Encoding_t1523322056_StaticFields, ___bigEndianEncoding_18)); }
	inline Encoding_t1523322056 * get_bigEndianEncoding_18() const { return ___bigEndianEncoding_18; }
	inline Encoding_t1523322056 ** get_address_of_bigEndianEncoding_18() { return &___bigEndianEncoding_18; }
	inline void set_bigEndianEncoding_18(Encoding_t1523322056 * value)
	{
		___bigEndianEncoding_18 = value;
		Il2CppCodeGenWriteBarrier((&___bigEndianEncoding_18), value);
	}

	inline static int32_t get_offset_of_defaultEncoding_19() { return static_cast<int32_t>(offsetof(Encoding_t1523322056_StaticFields, ___defaultEncoding_19)); }
	inline Encoding_t1523322056 * get_defaultEncoding_19() const { return ___defaultEncoding_19; }
	inline Encoding_t1523322056 ** get_address_of_defaultEncoding_19() { return &___defaultEncoding_19; }
	inline void set_defaultEncoding_19(Encoding_t1523322056 * value)
	{
		___defaultEncoding_19 = value;
		Il2CppCodeGenWriteBarrier((&___defaultEncoding_19), value);
	}

	inline static int32_t get_offset_of_utf7Encoding_20() { return static_cast<int32_t>(offsetof(Encoding_t1523322056_StaticFields, ___utf7Encoding_20)); }
	inline Encoding_t1523322056 * get_utf7Encoding_20() const { return ___utf7Encoding_20; }
	inline Encoding_t1523322056 ** get_address_of_utf7Encoding_20() { return &___utf7Encoding_20; }
	inline void set_utf7Encoding_20(Encoding_t1523322056 * value)
	{
		___utf7Encoding_20 = value;
		Il2CppCodeGenWriteBarrier((&___utf7Encoding_20), value);
	}

	inline static int32_t get_offset_of_utf8EncodingWithMarkers_21() { return static_cast<int32_t>(offsetof(Encoding_t1523322056_StaticFields, ___utf8EncodingWithMarkers_21)); }
	inline Encoding_t1523322056 * get_utf8EncodingWithMarkers_21() const { return ___utf8EncodingWithMarkers_21; }
	inline Encoding_t1523322056 ** get_address_of_utf8EncodingWithMarkers_21() { return &___utf8EncodingWithMarkers_21; }
	inline void set_utf8EncodingWithMarkers_21(Encoding_t1523322056 * value)
	{
		___utf8EncodingWithMarkers_21 = value;
		Il2CppCodeGenWriteBarrier((&___utf8EncodingWithMarkers_21), value);
	}

	inline static int32_t get_offset_of_utf8EncodingWithoutMarkers_22() { return static_cast<int32_t>(offsetof(Encoding_t1523322056_StaticFields, ___utf8EncodingWithoutMarkers_22)); }
	inline Encoding_t1523322056 * get_utf8EncodingWithoutMarkers_22() const { return ___utf8EncodingWithoutMarkers_22; }
	inline Encoding_t1523322056 ** get_address_of_utf8EncodingWithoutMarkers_22() { return &___utf8EncodingWithoutMarkers_22; }
	inline void set_utf8EncodingWithoutMarkers_22(Encoding_t1523322056 * value)
	{
		___utf8EncodingWithoutMarkers_22 = value;
		Il2CppCodeGenWriteBarrier((&___utf8EncodingWithoutMarkers_22), value);
	}

	inline static int32_t get_offset_of_unicodeEncoding_23() { return static_cast<int32_t>(offsetof(Encoding_t1523322056_StaticFields, ___unicodeEncoding_23)); }
	inline Encoding_t1523322056 * get_unicodeEncoding_23() const { return ___unicodeEncoding_23; }
	inline Encoding_t1523322056 ** get_address_of_unicodeEncoding_23() { return &___unicodeEncoding_23; }
	inline void set_unicodeEncoding_23(Encoding_t1523322056 * value)
	{
		___unicodeEncoding_23 = value;
		Il2CppCodeGenWriteBarrier((&___unicodeEncoding_23), value);
	}

	inline static int32_t get_offset_of_isoLatin1Encoding_24() { return static_cast<int32_t>(offsetof(Encoding_t1523322056_StaticFields, ___isoLatin1Encoding_24)); }
	inline Encoding_t1523322056 * get_isoLatin1Encoding_24() const { return ___isoLatin1Encoding_24; }
	inline Encoding_t1523322056 ** get_address_of_isoLatin1Encoding_24() { return &___isoLatin1Encoding_24; }
	inline void set_isoLatin1Encoding_24(Encoding_t1523322056 * value)
	{
		___isoLatin1Encoding_24 = value;
		Il2CppCodeGenWriteBarrier((&___isoLatin1Encoding_24), value);
	}

	inline static int32_t get_offset_of_utf8EncodingUnsafe_25() { return static_cast<int32_t>(offsetof(Encoding_t1523322056_StaticFields, ___utf8EncodingUnsafe_25)); }
	inline Encoding_t1523322056 * get_utf8EncodingUnsafe_25() const { return ___utf8EncodingUnsafe_25; }
	inline Encoding_t1523322056 ** get_address_of_utf8EncodingUnsafe_25() { return &___utf8EncodingUnsafe_25; }
	inline void set_utf8EncodingUnsafe_25(Encoding_t1523322056 * value)
	{
		___utf8EncodingUnsafe_25 = value;
		Il2CppCodeGenWriteBarrier((&___utf8EncodingUnsafe_25), value);
	}

	inline static int32_t get_offset_of_utf32Encoding_26() { return static_cast<int32_t>(offsetof(Encoding_t1523322056_StaticFields, ___utf32Encoding_26)); }
	inline Encoding_t1523322056 * get_utf32Encoding_26() const { return ___utf32Encoding_26; }
	inline Encoding_t1523322056 ** get_address_of_utf32Encoding_26() { return &___utf32Encoding_26; }
	inline void set_utf32Encoding_26(Encoding_t1523322056 * value)
	{
		___utf32Encoding_26 = value;
		Il2CppCodeGenWriteBarrier((&___utf32Encoding_26), value);
	}

	inline static int32_t get_offset_of_bigEndianUTF32Encoding_27() { return static_cast<int32_t>(offsetof(Encoding_t1523322056_StaticFields, ___bigEndianUTF32Encoding_27)); }
	inline Encoding_t1523322056 * get_bigEndianUTF32Encoding_27() const { return ___bigEndianUTF32Encoding_27; }
	inline Encoding_t1523322056 ** get_address_of_bigEndianUTF32Encoding_27() { return &___bigEndianUTF32Encoding_27; }
	inline void set_bigEndianUTF32Encoding_27(Encoding_t1523322056 * value)
	{
		___bigEndianUTF32Encoding_27 = value;
		Il2CppCodeGenWriteBarrier((&___bigEndianUTF32Encoding_27), value);
	}

	inline static int32_t get_offset_of_lockobj_28() { return static_cast<int32_t>(offsetof(Encoding_t1523322056_StaticFields, ___lockobj_28)); }
	inline RuntimeObject * get_lockobj_28() const { return ___lockobj_28; }
	inline RuntimeObject ** get_address_of_lockobj_28() { return &___lockobj_28; }
	inline void set_lockobj_28(RuntimeObject * value)
	{
		___lockobj_28 = value;
		Il2CppCodeGenWriteBarrier((&___lockobj_28), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENCODING_T1523322056_H
#ifndef CAPTURE_T2232016050_H
#define CAPTURE_T2232016050_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.RegularExpressions.Capture
struct  Capture_t2232016050  : public RuntimeObject
{
public:
	// System.Int32 System.Text.RegularExpressions.Capture::index
	int32_t ___index_0;
	// System.Int32 System.Text.RegularExpressions.Capture::length
	int32_t ___length_1;
	// System.String System.Text.RegularExpressions.Capture::text
	String_t* ___text_2;

public:
	inline static int32_t get_offset_of_index_0() { return static_cast<int32_t>(offsetof(Capture_t2232016050, ___index_0)); }
	inline int32_t get_index_0() const { return ___index_0; }
	inline int32_t* get_address_of_index_0() { return &___index_0; }
	inline void set_index_0(int32_t value)
	{
		___index_0 = value;
	}

	inline static int32_t get_offset_of_length_1() { return static_cast<int32_t>(offsetof(Capture_t2232016050, ___length_1)); }
	inline int32_t get_length_1() const { return ___length_1; }
	inline int32_t* get_address_of_length_1() { return &___length_1; }
	inline void set_length_1(int32_t value)
	{
		___length_1 = value;
	}

	inline static int32_t get_offset_of_text_2() { return static_cast<int32_t>(offsetof(Capture_t2232016050, ___text_2)); }
	inline String_t* get_text_2() const { return ___text_2; }
	inline String_t** get_address_of_text_2() { return &___text_2; }
	inline void set_text_2(String_t* value)
	{
		___text_2 = value;
		Il2CppCodeGenWriteBarrier((&___text_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CAPTURE_T2232016050_H
#ifndef GROUPCOLLECTION_T69770484_H
#define GROUPCOLLECTION_T69770484_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.RegularExpressions.GroupCollection
struct  GroupCollection_t69770484  : public RuntimeObject
{
public:
	// System.Text.RegularExpressions.Group[] System.Text.RegularExpressions.GroupCollection::list
	GroupU5BU5D_t1880820351* ___list_0;
	// System.Int32 System.Text.RegularExpressions.GroupCollection::gap
	int32_t ___gap_1;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(GroupCollection_t69770484, ___list_0)); }
	inline GroupU5BU5D_t1880820351* get_list_0() const { return ___list_0; }
	inline GroupU5BU5D_t1880820351** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(GroupU5BU5D_t1880820351* value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((&___list_0), value);
	}

	inline static int32_t get_offset_of_gap_1() { return static_cast<int32_t>(offsetof(GroupCollection_t69770484, ___gap_1)); }
	inline int32_t get_gap_1() const { return ___gap_1; }
	inline int32_t* get_address_of_gap_1() { return &___gap_1; }
	inline void set_gap_1(int32_t value)
	{
		___gap_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GROUPCOLLECTION_T69770484_H
#ifndef MATCHCOLLECTION_T1395363720_H
#define MATCHCOLLECTION_T1395363720_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.RegularExpressions.MatchCollection
struct  MatchCollection_t1395363720  : public RuntimeObject
{
public:
	// System.Text.RegularExpressions.Match System.Text.RegularExpressions.MatchCollection::current
	Match_t3408321083 * ___current_0;
	// System.Collections.ArrayList System.Text.RegularExpressions.MatchCollection::list
	ArrayList_t2718874744 * ___list_1;

public:
	inline static int32_t get_offset_of_current_0() { return static_cast<int32_t>(offsetof(MatchCollection_t1395363720, ___current_0)); }
	inline Match_t3408321083 * get_current_0() const { return ___current_0; }
	inline Match_t3408321083 ** get_address_of_current_0() { return &___current_0; }
	inline void set_current_0(Match_t3408321083 * value)
	{
		___current_0 = value;
		Il2CppCodeGenWriteBarrier((&___current_0), value);
	}

	inline static int32_t get_offset_of_list_1() { return static_cast<int32_t>(offsetof(MatchCollection_t1395363720, ___list_1)); }
	inline ArrayList_t2718874744 * get_list_1() const { return ___list_1; }
	inline ArrayList_t2718874744 ** get_address_of_list_1() { return &___list_1; }
	inline void set_list_1(ArrayList_t2718874744 * value)
	{
		___list_1 = value;
		Il2CppCodeGenWriteBarrier((&___list_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MATCHCOLLECTION_T1395363720_H
#ifndef URI_T100236324_H
#define URI_T100236324_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Uri
struct  Uri_t100236324  : public RuntimeObject
{
public:
	// System.Boolean System.Uri::isUnixFilePath
	bool ___isUnixFilePath_1;
	// System.String System.Uri::source
	String_t* ___source_2;
	// System.String System.Uri::scheme
	String_t* ___scheme_3;
	// System.String System.Uri::host
	String_t* ___host_4;
	// System.Int32 System.Uri::port
	int32_t ___port_5;
	// System.String System.Uri::path
	String_t* ___path_6;
	// System.String System.Uri::query
	String_t* ___query_7;
	// System.String System.Uri::fragment
	String_t* ___fragment_8;
	// System.String System.Uri::userinfo
	String_t* ___userinfo_9;
	// System.Boolean System.Uri::isUnc
	bool ___isUnc_10;
	// System.Boolean System.Uri::isOpaquePart
	bool ___isOpaquePart_11;
	// System.Boolean System.Uri::isAbsoluteUri
	bool ___isAbsoluteUri_12;
	// System.String[] System.Uri::segments
	StringU5BU5D_t1281789340* ___segments_13;
	// System.Boolean System.Uri::userEscaped
	bool ___userEscaped_14;
	// System.String System.Uri::cachedAbsoluteUri
	String_t* ___cachedAbsoluteUri_15;
	// System.String System.Uri::cachedToString
	String_t* ___cachedToString_16;
	// System.String System.Uri::cachedLocalPath
	String_t* ___cachedLocalPath_17;
	// System.Int32 System.Uri::cachedHashCode
	int32_t ___cachedHashCode_18;
	// System.UriParser System.Uri::parser
	UriParser_t3890150400 * ___parser_32;

public:
	inline static int32_t get_offset_of_isUnixFilePath_1() { return static_cast<int32_t>(offsetof(Uri_t100236324, ___isUnixFilePath_1)); }
	inline bool get_isUnixFilePath_1() const { return ___isUnixFilePath_1; }
	inline bool* get_address_of_isUnixFilePath_1() { return &___isUnixFilePath_1; }
	inline void set_isUnixFilePath_1(bool value)
	{
		___isUnixFilePath_1 = value;
	}

	inline static int32_t get_offset_of_source_2() { return static_cast<int32_t>(offsetof(Uri_t100236324, ___source_2)); }
	inline String_t* get_source_2() const { return ___source_2; }
	inline String_t** get_address_of_source_2() { return &___source_2; }
	inline void set_source_2(String_t* value)
	{
		___source_2 = value;
		Il2CppCodeGenWriteBarrier((&___source_2), value);
	}

	inline static int32_t get_offset_of_scheme_3() { return static_cast<int32_t>(offsetof(Uri_t100236324, ___scheme_3)); }
	inline String_t* get_scheme_3() const { return ___scheme_3; }
	inline String_t** get_address_of_scheme_3() { return &___scheme_3; }
	inline void set_scheme_3(String_t* value)
	{
		___scheme_3 = value;
		Il2CppCodeGenWriteBarrier((&___scheme_3), value);
	}

	inline static int32_t get_offset_of_host_4() { return static_cast<int32_t>(offsetof(Uri_t100236324, ___host_4)); }
	inline String_t* get_host_4() const { return ___host_4; }
	inline String_t** get_address_of_host_4() { return &___host_4; }
	inline void set_host_4(String_t* value)
	{
		___host_4 = value;
		Il2CppCodeGenWriteBarrier((&___host_4), value);
	}

	inline static int32_t get_offset_of_port_5() { return static_cast<int32_t>(offsetof(Uri_t100236324, ___port_5)); }
	inline int32_t get_port_5() const { return ___port_5; }
	inline int32_t* get_address_of_port_5() { return &___port_5; }
	inline void set_port_5(int32_t value)
	{
		___port_5 = value;
	}

	inline static int32_t get_offset_of_path_6() { return static_cast<int32_t>(offsetof(Uri_t100236324, ___path_6)); }
	inline String_t* get_path_6() const { return ___path_6; }
	inline String_t** get_address_of_path_6() { return &___path_6; }
	inline void set_path_6(String_t* value)
	{
		___path_6 = value;
		Il2CppCodeGenWriteBarrier((&___path_6), value);
	}

	inline static int32_t get_offset_of_query_7() { return static_cast<int32_t>(offsetof(Uri_t100236324, ___query_7)); }
	inline String_t* get_query_7() const { return ___query_7; }
	inline String_t** get_address_of_query_7() { return &___query_7; }
	inline void set_query_7(String_t* value)
	{
		___query_7 = value;
		Il2CppCodeGenWriteBarrier((&___query_7), value);
	}

	inline static int32_t get_offset_of_fragment_8() { return static_cast<int32_t>(offsetof(Uri_t100236324, ___fragment_8)); }
	inline String_t* get_fragment_8() const { return ___fragment_8; }
	inline String_t** get_address_of_fragment_8() { return &___fragment_8; }
	inline void set_fragment_8(String_t* value)
	{
		___fragment_8 = value;
		Il2CppCodeGenWriteBarrier((&___fragment_8), value);
	}

	inline static int32_t get_offset_of_userinfo_9() { return static_cast<int32_t>(offsetof(Uri_t100236324, ___userinfo_9)); }
	inline String_t* get_userinfo_9() const { return ___userinfo_9; }
	inline String_t** get_address_of_userinfo_9() { return &___userinfo_9; }
	inline void set_userinfo_9(String_t* value)
	{
		___userinfo_9 = value;
		Il2CppCodeGenWriteBarrier((&___userinfo_9), value);
	}

	inline static int32_t get_offset_of_isUnc_10() { return static_cast<int32_t>(offsetof(Uri_t100236324, ___isUnc_10)); }
	inline bool get_isUnc_10() const { return ___isUnc_10; }
	inline bool* get_address_of_isUnc_10() { return &___isUnc_10; }
	inline void set_isUnc_10(bool value)
	{
		___isUnc_10 = value;
	}

	inline static int32_t get_offset_of_isOpaquePart_11() { return static_cast<int32_t>(offsetof(Uri_t100236324, ___isOpaquePart_11)); }
	inline bool get_isOpaquePart_11() const { return ___isOpaquePart_11; }
	inline bool* get_address_of_isOpaquePart_11() { return &___isOpaquePart_11; }
	inline void set_isOpaquePart_11(bool value)
	{
		___isOpaquePart_11 = value;
	}

	inline static int32_t get_offset_of_isAbsoluteUri_12() { return static_cast<int32_t>(offsetof(Uri_t100236324, ___isAbsoluteUri_12)); }
	inline bool get_isAbsoluteUri_12() const { return ___isAbsoluteUri_12; }
	inline bool* get_address_of_isAbsoluteUri_12() { return &___isAbsoluteUri_12; }
	inline void set_isAbsoluteUri_12(bool value)
	{
		___isAbsoluteUri_12 = value;
	}

	inline static int32_t get_offset_of_segments_13() { return static_cast<int32_t>(offsetof(Uri_t100236324, ___segments_13)); }
	inline StringU5BU5D_t1281789340* get_segments_13() const { return ___segments_13; }
	inline StringU5BU5D_t1281789340** get_address_of_segments_13() { return &___segments_13; }
	inline void set_segments_13(StringU5BU5D_t1281789340* value)
	{
		___segments_13 = value;
		Il2CppCodeGenWriteBarrier((&___segments_13), value);
	}

	inline static int32_t get_offset_of_userEscaped_14() { return static_cast<int32_t>(offsetof(Uri_t100236324, ___userEscaped_14)); }
	inline bool get_userEscaped_14() const { return ___userEscaped_14; }
	inline bool* get_address_of_userEscaped_14() { return &___userEscaped_14; }
	inline void set_userEscaped_14(bool value)
	{
		___userEscaped_14 = value;
	}

	inline static int32_t get_offset_of_cachedAbsoluteUri_15() { return static_cast<int32_t>(offsetof(Uri_t100236324, ___cachedAbsoluteUri_15)); }
	inline String_t* get_cachedAbsoluteUri_15() const { return ___cachedAbsoluteUri_15; }
	inline String_t** get_address_of_cachedAbsoluteUri_15() { return &___cachedAbsoluteUri_15; }
	inline void set_cachedAbsoluteUri_15(String_t* value)
	{
		___cachedAbsoluteUri_15 = value;
		Il2CppCodeGenWriteBarrier((&___cachedAbsoluteUri_15), value);
	}

	inline static int32_t get_offset_of_cachedToString_16() { return static_cast<int32_t>(offsetof(Uri_t100236324, ___cachedToString_16)); }
	inline String_t* get_cachedToString_16() const { return ___cachedToString_16; }
	inline String_t** get_address_of_cachedToString_16() { return &___cachedToString_16; }
	inline void set_cachedToString_16(String_t* value)
	{
		___cachedToString_16 = value;
		Il2CppCodeGenWriteBarrier((&___cachedToString_16), value);
	}

	inline static int32_t get_offset_of_cachedLocalPath_17() { return static_cast<int32_t>(offsetof(Uri_t100236324, ___cachedLocalPath_17)); }
	inline String_t* get_cachedLocalPath_17() const { return ___cachedLocalPath_17; }
	inline String_t** get_address_of_cachedLocalPath_17() { return &___cachedLocalPath_17; }
	inline void set_cachedLocalPath_17(String_t* value)
	{
		___cachedLocalPath_17 = value;
		Il2CppCodeGenWriteBarrier((&___cachedLocalPath_17), value);
	}

	inline static int32_t get_offset_of_cachedHashCode_18() { return static_cast<int32_t>(offsetof(Uri_t100236324, ___cachedHashCode_18)); }
	inline int32_t get_cachedHashCode_18() const { return ___cachedHashCode_18; }
	inline int32_t* get_address_of_cachedHashCode_18() { return &___cachedHashCode_18; }
	inline void set_cachedHashCode_18(int32_t value)
	{
		___cachedHashCode_18 = value;
	}

	inline static int32_t get_offset_of_parser_32() { return static_cast<int32_t>(offsetof(Uri_t100236324, ___parser_32)); }
	inline UriParser_t3890150400 * get_parser_32() const { return ___parser_32; }
	inline UriParser_t3890150400 ** get_address_of_parser_32() { return &___parser_32; }
	inline void set_parser_32(UriParser_t3890150400 * value)
	{
		___parser_32 = value;
		Il2CppCodeGenWriteBarrier((&___parser_32), value);
	}
};

struct Uri_t100236324_StaticFields
{
public:
	// System.String System.Uri::hexUpperChars
	String_t* ___hexUpperChars_19;
	// System.String System.Uri::SchemeDelimiter
	String_t* ___SchemeDelimiter_20;
	// System.String System.Uri::UriSchemeFile
	String_t* ___UriSchemeFile_21;
	// System.String System.Uri::UriSchemeFtp
	String_t* ___UriSchemeFtp_22;
	// System.String System.Uri::UriSchemeGopher
	String_t* ___UriSchemeGopher_23;
	// System.String System.Uri::UriSchemeHttp
	String_t* ___UriSchemeHttp_24;
	// System.String System.Uri::UriSchemeHttps
	String_t* ___UriSchemeHttps_25;
	// System.String System.Uri::UriSchemeMailto
	String_t* ___UriSchemeMailto_26;
	// System.String System.Uri::UriSchemeNews
	String_t* ___UriSchemeNews_27;
	// System.String System.Uri::UriSchemeNntp
	String_t* ___UriSchemeNntp_28;
	// System.String System.Uri::UriSchemeNetPipe
	String_t* ___UriSchemeNetPipe_29;
	// System.String System.Uri::UriSchemeNetTcp
	String_t* ___UriSchemeNetTcp_30;
	// System.Uri/UriScheme[] System.Uri::schemes
	UriSchemeU5BU5D_t2082808316* ___schemes_31;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> System.Uri::<>f__switch$map12
	Dictionary_2_t2736202052 * ___U3CU3Ef__switchU24map12_33;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> System.Uri::<>f__switch$map13
	Dictionary_2_t2736202052 * ___U3CU3Ef__switchU24map13_34;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> System.Uri::<>f__switch$map14
	Dictionary_2_t2736202052 * ___U3CU3Ef__switchU24map14_35;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> System.Uri::<>f__switch$map15
	Dictionary_2_t2736202052 * ___U3CU3Ef__switchU24map15_36;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> System.Uri::<>f__switch$map16
	Dictionary_2_t2736202052 * ___U3CU3Ef__switchU24map16_37;

public:
	inline static int32_t get_offset_of_hexUpperChars_19() { return static_cast<int32_t>(offsetof(Uri_t100236324_StaticFields, ___hexUpperChars_19)); }
	inline String_t* get_hexUpperChars_19() const { return ___hexUpperChars_19; }
	inline String_t** get_address_of_hexUpperChars_19() { return &___hexUpperChars_19; }
	inline void set_hexUpperChars_19(String_t* value)
	{
		___hexUpperChars_19 = value;
		Il2CppCodeGenWriteBarrier((&___hexUpperChars_19), value);
	}

	inline static int32_t get_offset_of_SchemeDelimiter_20() { return static_cast<int32_t>(offsetof(Uri_t100236324_StaticFields, ___SchemeDelimiter_20)); }
	inline String_t* get_SchemeDelimiter_20() const { return ___SchemeDelimiter_20; }
	inline String_t** get_address_of_SchemeDelimiter_20() { return &___SchemeDelimiter_20; }
	inline void set_SchemeDelimiter_20(String_t* value)
	{
		___SchemeDelimiter_20 = value;
		Il2CppCodeGenWriteBarrier((&___SchemeDelimiter_20), value);
	}

	inline static int32_t get_offset_of_UriSchemeFile_21() { return static_cast<int32_t>(offsetof(Uri_t100236324_StaticFields, ___UriSchemeFile_21)); }
	inline String_t* get_UriSchemeFile_21() const { return ___UriSchemeFile_21; }
	inline String_t** get_address_of_UriSchemeFile_21() { return &___UriSchemeFile_21; }
	inline void set_UriSchemeFile_21(String_t* value)
	{
		___UriSchemeFile_21 = value;
		Il2CppCodeGenWriteBarrier((&___UriSchemeFile_21), value);
	}

	inline static int32_t get_offset_of_UriSchemeFtp_22() { return static_cast<int32_t>(offsetof(Uri_t100236324_StaticFields, ___UriSchemeFtp_22)); }
	inline String_t* get_UriSchemeFtp_22() const { return ___UriSchemeFtp_22; }
	inline String_t** get_address_of_UriSchemeFtp_22() { return &___UriSchemeFtp_22; }
	inline void set_UriSchemeFtp_22(String_t* value)
	{
		___UriSchemeFtp_22 = value;
		Il2CppCodeGenWriteBarrier((&___UriSchemeFtp_22), value);
	}

	inline static int32_t get_offset_of_UriSchemeGopher_23() { return static_cast<int32_t>(offsetof(Uri_t100236324_StaticFields, ___UriSchemeGopher_23)); }
	inline String_t* get_UriSchemeGopher_23() const { return ___UriSchemeGopher_23; }
	inline String_t** get_address_of_UriSchemeGopher_23() { return &___UriSchemeGopher_23; }
	inline void set_UriSchemeGopher_23(String_t* value)
	{
		___UriSchemeGopher_23 = value;
		Il2CppCodeGenWriteBarrier((&___UriSchemeGopher_23), value);
	}

	inline static int32_t get_offset_of_UriSchemeHttp_24() { return static_cast<int32_t>(offsetof(Uri_t100236324_StaticFields, ___UriSchemeHttp_24)); }
	inline String_t* get_UriSchemeHttp_24() const { return ___UriSchemeHttp_24; }
	inline String_t** get_address_of_UriSchemeHttp_24() { return &___UriSchemeHttp_24; }
	inline void set_UriSchemeHttp_24(String_t* value)
	{
		___UriSchemeHttp_24 = value;
		Il2CppCodeGenWriteBarrier((&___UriSchemeHttp_24), value);
	}

	inline static int32_t get_offset_of_UriSchemeHttps_25() { return static_cast<int32_t>(offsetof(Uri_t100236324_StaticFields, ___UriSchemeHttps_25)); }
	inline String_t* get_UriSchemeHttps_25() const { return ___UriSchemeHttps_25; }
	inline String_t** get_address_of_UriSchemeHttps_25() { return &___UriSchemeHttps_25; }
	inline void set_UriSchemeHttps_25(String_t* value)
	{
		___UriSchemeHttps_25 = value;
		Il2CppCodeGenWriteBarrier((&___UriSchemeHttps_25), value);
	}

	inline static int32_t get_offset_of_UriSchemeMailto_26() { return static_cast<int32_t>(offsetof(Uri_t100236324_StaticFields, ___UriSchemeMailto_26)); }
	inline String_t* get_UriSchemeMailto_26() const { return ___UriSchemeMailto_26; }
	inline String_t** get_address_of_UriSchemeMailto_26() { return &___UriSchemeMailto_26; }
	inline void set_UriSchemeMailto_26(String_t* value)
	{
		___UriSchemeMailto_26 = value;
		Il2CppCodeGenWriteBarrier((&___UriSchemeMailto_26), value);
	}

	inline static int32_t get_offset_of_UriSchemeNews_27() { return static_cast<int32_t>(offsetof(Uri_t100236324_StaticFields, ___UriSchemeNews_27)); }
	inline String_t* get_UriSchemeNews_27() const { return ___UriSchemeNews_27; }
	inline String_t** get_address_of_UriSchemeNews_27() { return &___UriSchemeNews_27; }
	inline void set_UriSchemeNews_27(String_t* value)
	{
		___UriSchemeNews_27 = value;
		Il2CppCodeGenWriteBarrier((&___UriSchemeNews_27), value);
	}

	inline static int32_t get_offset_of_UriSchemeNntp_28() { return static_cast<int32_t>(offsetof(Uri_t100236324_StaticFields, ___UriSchemeNntp_28)); }
	inline String_t* get_UriSchemeNntp_28() const { return ___UriSchemeNntp_28; }
	inline String_t** get_address_of_UriSchemeNntp_28() { return &___UriSchemeNntp_28; }
	inline void set_UriSchemeNntp_28(String_t* value)
	{
		___UriSchemeNntp_28 = value;
		Il2CppCodeGenWriteBarrier((&___UriSchemeNntp_28), value);
	}

	inline static int32_t get_offset_of_UriSchemeNetPipe_29() { return static_cast<int32_t>(offsetof(Uri_t100236324_StaticFields, ___UriSchemeNetPipe_29)); }
	inline String_t* get_UriSchemeNetPipe_29() const { return ___UriSchemeNetPipe_29; }
	inline String_t** get_address_of_UriSchemeNetPipe_29() { return &___UriSchemeNetPipe_29; }
	inline void set_UriSchemeNetPipe_29(String_t* value)
	{
		___UriSchemeNetPipe_29 = value;
		Il2CppCodeGenWriteBarrier((&___UriSchemeNetPipe_29), value);
	}

	inline static int32_t get_offset_of_UriSchemeNetTcp_30() { return static_cast<int32_t>(offsetof(Uri_t100236324_StaticFields, ___UriSchemeNetTcp_30)); }
	inline String_t* get_UriSchemeNetTcp_30() const { return ___UriSchemeNetTcp_30; }
	inline String_t** get_address_of_UriSchemeNetTcp_30() { return &___UriSchemeNetTcp_30; }
	inline void set_UriSchemeNetTcp_30(String_t* value)
	{
		___UriSchemeNetTcp_30 = value;
		Il2CppCodeGenWriteBarrier((&___UriSchemeNetTcp_30), value);
	}

	inline static int32_t get_offset_of_schemes_31() { return static_cast<int32_t>(offsetof(Uri_t100236324_StaticFields, ___schemes_31)); }
	inline UriSchemeU5BU5D_t2082808316* get_schemes_31() const { return ___schemes_31; }
	inline UriSchemeU5BU5D_t2082808316** get_address_of_schemes_31() { return &___schemes_31; }
	inline void set_schemes_31(UriSchemeU5BU5D_t2082808316* value)
	{
		___schemes_31 = value;
		Il2CppCodeGenWriteBarrier((&___schemes_31), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__switchU24map12_33() { return static_cast<int32_t>(offsetof(Uri_t100236324_StaticFields, ___U3CU3Ef__switchU24map12_33)); }
	inline Dictionary_2_t2736202052 * get_U3CU3Ef__switchU24map12_33() const { return ___U3CU3Ef__switchU24map12_33; }
	inline Dictionary_2_t2736202052 ** get_address_of_U3CU3Ef__switchU24map12_33() { return &___U3CU3Ef__switchU24map12_33; }
	inline void set_U3CU3Ef__switchU24map12_33(Dictionary_2_t2736202052 * value)
	{
		___U3CU3Ef__switchU24map12_33 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__switchU24map12_33), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__switchU24map13_34() { return static_cast<int32_t>(offsetof(Uri_t100236324_StaticFields, ___U3CU3Ef__switchU24map13_34)); }
	inline Dictionary_2_t2736202052 * get_U3CU3Ef__switchU24map13_34() const { return ___U3CU3Ef__switchU24map13_34; }
	inline Dictionary_2_t2736202052 ** get_address_of_U3CU3Ef__switchU24map13_34() { return &___U3CU3Ef__switchU24map13_34; }
	inline void set_U3CU3Ef__switchU24map13_34(Dictionary_2_t2736202052 * value)
	{
		___U3CU3Ef__switchU24map13_34 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__switchU24map13_34), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__switchU24map14_35() { return static_cast<int32_t>(offsetof(Uri_t100236324_StaticFields, ___U3CU3Ef__switchU24map14_35)); }
	inline Dictionary_2_t2736202052 * get_U3CU3Ef__switchU24map14_35() const { return ___U3CU3Ef__switchU24map14_35; }
	inline Dictionary_2_t2736202052 ** get_address_of_U3CU3Ef__switchU24map14_35() { return &___U3CU3Ef__switchU24map14_35; }
	inline void set_U3CU3Ef__switchU24map14_35(Dictionary_2_t2736202052 * value)
	{
		___U3CU3Ef__switchU24map14_35 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__switchU24map14_35), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__switchU24map15_36() { return static_cast<int32_t>(offsetof(Uri_t100236324_StaticFields, ___U3CU3Ef__switchU24map15_36)); }
	inline Dictionary_2_t2736202052 * get_U3CU3Ef__switchU24map15_36() const { return ___U3CU3Ef__switchU24map15_36; }
	inline Dictionary_2_t2736202052 ** get_address_of_U3CU3Ef__switchU24map15_36() { return &___U3CU3Ef__switchU24map15_36; }
	inline void set_U3CU3Ef__switchU24map15_36(Dictionary_2_t2736202052 * value)
	{
		___U3CU3Ef__switchU24map15_36 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__switchU24map15_36), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__switchU24map16_37() { return static_cast<int32_t>(offsetof(Uri_t100236324_StaticFields, ___U3CU3Ef__switchU24map16_37)); }
	inline Dictionary_2_t2736202052 * get_U3CU3Ef__switchU24map16_37() const { return ___U3CU3Ef__switchU24map16_37; }
	inline Dictionary_2_t2736202052 ** get_address_of_U3CU3Ef__switchU24map16_37() { return &___U3CU3Ef__switchU24map16_37; }
	inline void set_U3CU3Ef__switchU24map16_37(Dictionary_2_t2736202052 * value)
	{
		___U3CU3Ef__switchU24map16_37 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__switchU24map16_37), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // URI_T100236324_H
#ifndef VALUETYPE_T3640485471_H
#define VALUETYPE_T3640485471_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ValueType
struct  ValueType_t3640485471  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t3640485471_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t3640485471_marshaled_com
{
};
#endif // VALUETYPE_T3640485471_H
#ifndef COMPASS_T3092386685_H
#define COMPASS_T3092386685_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Compass
struct  Compass_t3092386685  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COMPASS_T3092386685_H
#ifndef CUSTOMYIELDINSTRUCTION_T1895667560_H
#define CUSTOMYIELDINSTRUCTION_T1895667560_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.CustomYieldInstruction
struct  CustomYieldInstruction_t1895667560  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CUSTOMYIELDINSTRUCTION_T1895667560_H
#ifndef LOCATIONSERVICE_T2839639379_H
#define LOCATIONSERVICE_T2839639379_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.LocationService
struct  LocationService_t2839639379  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LOCATIONSERVICE_T2839639379_H
#ifndef YIELDINSTRUCTION_T403091072_H
#define YIELDINSTRUCTION_T403091072_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.YieldInstruction
struct  YieldInstruction_t403091072  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_t403091072_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_t403091072_marshaled_com
{
};
#endif // YIELDINSTRUCTION_T403091072_H
#ifndef U3C_REFRESHMAPTILEU3EC__ITERATOR0_T2254000978_H
#define U3C_REFRESHMAPTILEU3EC__ITERATOR0_T2254000978_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// packt.FoodyGO.Mapping.GoogleMapTile/<_RefreshMapTile>c__Iterator0
struct  U3C_RefreshMapTileU3Ec__Iterator0_t2254000978  : public RuntimeObject
{
public:
	// System.String packt.FoodyGO.Mapping.GoogleMapTile/<_RefreshMapTile>c__Iterator0::<url>__0
	String_t* ___U3CurlU3E__0_0;
	// System.String packt.FoodyGO.Mapping.GoogleMapTile/<_RefreshMapTile>c__Iterator0::<queryString>__0
	String_t* ___U3CqueryStringU3E__0_1;
	// System.Boolean packt.FoodyGO.Mapping.GoogleMapTile/<_RefreshMapTile>c__Iterator0::<usingSensor>__0
	bool ___U3CusingSensorU3E__0_2;
	// UnityEngine.WWW packt.FoodyGO.Mapping.GoogleMapTile/<_RefreshMapTile>c__Iterator0::<req>__0
	WWW_t3688466362 * ___U3CreqU3E__0_3;
	// packt.FoodyGO.Mapping.GoogleMapTile packt.FoodyGO.Mapping.GoogleMapTile/<_RefreshMapTile>c__Iterator0::$this
	GoogleMapTile_t1047440669 * ___U24this_4;
	// System.Object packt.FoodyGO.Mapping.GoogleMapTile/<_RefreshMapTile>c__Iterator0::$current
	RuntimeObject * ___U24current_5;
	// System.Boolean packt.FoodyGO.Mapping.GoogleMapTile/<_RefreshMapTile>c__Iterator0::$disposing
	bool ___U24disposing_6;
	// System.Int32 packt.FoodyGO.Mapping.GoogleMapTile/<_RefreshMapTile>c__Iterator0::$PC
	int32_t ___U24PC_7;

public:
	inline static int32_t get_offset_of_U3CurlU3E__0_0() { return static_cast<int32_t>(offsetof(U3C_RefreshMapTileU3Ec__Iterator0_t2254000978, ___U3CurlU3E__0_0)); }
	inline String_t* get_U3CurlU3E__0_0() const { return ___U3CurlU3E__0_0; }
	inline String_t** get_address_of_U3CurlU3E__0_0() { return &___U3CurlU3E__0_0; }
	inline void set_U3CurlU3E__0_0(String_t* value)
	{
		___U3CurlU3E__0_0 = value;
		Il2CppCodeGenWriteBarrier((&___U3CurlU3E__0_0), value);
	}

	inline static int32_t get_offset_of_U3CqueryStringU3E__0_1() { return static_cast<int32_t>(offsetof(U3C_RefreshMapTileU3Ec__Iterator0_t2254000978, ___U3CqueryStringU3E__0_1)); }
	inline String_t* get_U3CqueryStringU3E__0_1() const { return ___U3CqueryStringU3E__0_1; }
	inline String_t** get_address_of_U3CqueryStringU3E__0_1() { return &___U3CqueryStringU3E__0_1; }
	inline void set_U3CqueryStringU3E__0_1(String_t* value)
	{
		___U3CqueryStringU3E__0_1 = value;
		Il2CppCodeGenWriteBarrier((&___U3CqueryStringU3E__0_1), value);
	}

	inline static int32_t get_offset_of_U3CusingSensorU3E__0_2() { return static_cast<int32_t>(offsetof(U3C_RefreshMapTileU3Ec__Iterator0_t2254000978, ___U3CusingSensorU3E__0_2)); }
	inline bool get_U3CusingSensorU3E__0_2() const { return ___U3CusingSensorU3E__0_2; }
	inline bool* get_address_of_U3CusingSensorU3E__0_2() { return &___U3CusingSensorU3E__0_2; }
	inline void set_U3CusingSensorU3E__0_2(bool value)
	{
		___U3CusingSensorU3E__0_2 = value;
	}

	inline static int32_t get_offset_of_U3CreqU3E__0_3() { return static_cast<int32_t>(offsetof(U3C_RefreshMapTileU3Ec__Iterator0_t2254000978, ___U3CreqU3E__0_3)); }
	inline WWW_t3688466362 * get_U3CreqU3E__0_3() const { return ___U3CreqU3E__0_3; }
	inline WWW_t3688466362 ** get_address_of_U3CreqU3E__0_3() { return &___U3CreqU3E__0_3; }
	inline void set_U3CreqU3E__0_3(WWW_t3688466362 * value)
	{
		___U3CreqU3E__0_3 = value;
		Il2CppCodeGenWriteBarrier((&___U3CreqU3E__0_3), value);
	}

	inline static int32_t get_offset_of_U24this_4() { return static_cast<int32_t>(offsetof(U3C_RefreshMapTileU3Ec__Iterator0_t2254000978, ___U24this_4)); }
	inline GoogleMapTile_t1047440669 * get_U24this_4() const { return ___U24this_4; }
	inline GoogleMapTile_t1047440669 ** get_address_of_U24this_4() { return &___U24this_4; }
	inline void set_U24this_4(GoogleMapTile_t1047440669 * value)
	{
		___U24this_4 = value;
		Il2CppCodeGenWriteBarrier((&___U24this_4), value);
	}

	inline static int32_t get_offset_of_U24current_5() { return static_cast<int32_t>(offsetof(U3C_RefreshMapTileU3Ec__Iterator0_t2254000978, ___U24current_5)); }
	inline RuntimeObject * get_U24current_5() const { return ___U24current_5; }
	inline RuntimeObject ** get_address_of_U24current_5() { return &___U24current_5; }
	inline void set_U24current_5(RuntimeObject * value)
	{
		___U24current_5 = value;
		Il2CppCodeGenWriteBarrier((&___U24current_5), value);
	}

	inline static int32_t get_offset_of_U24disposing_6() { return static_cast<int32_t>(offsetof(U3C_RefreshMapTileU3Ec__Iterator0_t2254000978, ___U24disposing_6)); }
	inline bool get_U24disposing_6() const { return ___U24disposing_6; }
	inline bool* get_address_of_U24disposing_6() { return &___U24disposing_6; }
	inline void set_U24disposing_6(bool value)
	{
		___U24disposing_6 = value;
	}

	inline static int32_t get_offset_of_U24PC_7() { return static_cast<int32_t>(offsetof(U3C_RefreshMapTileU3Ec__Iterator0_t2254000978, ___U24PC_7)); }
	inline int32_t get_U24PC_7() const { return ___U24PC_7; }
	inline int32_t* get_address_of_U24PC_7() { return &___U24PC_7; }
	inline void set_U24PC_7(int32_t value)
	{
		___U24PC_7 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3C_REFRESHMAPTILEU3EC__ITERATOR0_T2254000978_H
#ifndef GOOGLEMAPUTILS_T2374289053_H
#define GOOGLEMAPUTILS_T2374289053_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// packt.FoodyGO.Mapping.GoogleMapUtils
struct  GoogleMapUtils_t2374289053  : public RuntimeObject
{
public:

public:
};

struct GoogleMapUtils_t2374289053_StaticFields
{
public:
	// System.Single packt.FoodyGO.Mapping.GoogleMapUtils::GOOGLE_OFFSET
	float ___GOOGLE_OFFSET_0;
	// System.Single packt.FoodyGO.Mapping.GoogleMapUtils::GOOGLE_OFFSET_RADIUS
	float ___GOOGLE_OFFSET_RADIUS_1;
	// System.Single packt.FoodyGO.Mapping.GoogleMapUtils::MATHPI_180
	float ___MATHPI_180_2;
	// System.Single packt.FoodyGO.Mapping.GoogleMapUtils::preLonToX1
	float ___preLonToX1_3;

public:
	inline static int32_t get_offset_of_GOOGLE_OFFSET_0() { return static_cast<int32_t>(offsetof(GoogleMapUtils_t2374289053_StaticFields, ___GOOGLE_OFFSET_0)); }
	inline float get_GOOGLE_OFFSET_0() const { return ___GOOGLE_OFFSET_0; }
	inline float* get_address_of_GOOGLE_OFFSET_0() { return &___GOOGLE_OFFSET_0; }
	inline void set_GOOGLE_OFFSET_0(float value)
	{
		___GOOGLE_OFFSET_0 = value;
	}

	inline static int32_t get_offset_of_GOOGLE_OFFSET_RADIUS_1() { return static_cast<int32_t>(offsetof(GoogleMapUtils_t2374289053_StaticFields, ___GOOGLE_OFFSET_RADIUS_1)); }
	inline float get_GOOGLE_OFFSET_RADIUS_1() const { return ___GOOGLE_OFFSET_RADIUS_1; }
	inline float* get_address_of_GOOGLE_OFFSET_RADIUS_1() { return &___GOOGLE_OFFSET_RADIUS_1; }
	inline void set_GOOGLE_OFFSET_RADIUS_1(float value)
	{
		___GOOGLE_OFFSET_RADIUS_1 = value;
	}

	inline static int32_t get_offset_of_MATHPI_180_2() { return static_cast<int32_t>(offsetof(GoogleMapUtils_t2374289053_StaticFields, ___MATHPI_180_2)); }
	inline float get_MATHPI_180_2() const { return ___MATHPI_180_2; }
	inline float* get_address_of_MATHPI_180_2() { return &___MATHPI_180_2; }
	inline void set_MATHPI_180_2(float value)
	{
		___MATHPI_180_2 = value;
	}

	inline static int32_t get_offset_of_preLonToX1_3() { return static_cast<int32_t>(offsetof(GoogleMapUtils_t2374289053_StaticFields, ___preLonToX1_3)); }
	inline float get_preLonToX1_3() const { return ___preLonToX1_3; }
	inline float* get_address_of_preLonToX1_3() { return &___preLonToX1_3; }
	inline void set_preLonToX1_3(float value)
	{
		___preLonToX1_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GOOGLEMAPUTILS_T2374289053_H
#ifndef MAPLOCATION_T547849766_H
#define MAPLOCATION_T547849766_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// packt.FoodyGo.Mapping.MapLocation
struct  MapLocation_t547849766  : public RuntimeObject
{
public:
	// System.Single packt.FoodyGo.Mapping.MapLocation::Latitude
	float ___Latitude_0;
	// System.Single packt.FoodyGo.Mapping.MapLocation::Longitude
	float ___Longitude_1;

public:
	inline static int32_t get_offset_of_Latitude_0() { return static_cast<int32_t>(offsetof(MapLocation_t547849766, ___Latitude_0)); }
	inline float get_Latitude_0() const { return ___Latitude_0; }
	inline float* get_address_of_Latitude_0() { return &___Latitude_0; }
	inline void set_Latitude_0(float value)
	{
		___Latitude_0 = value;
	}

	inline static int32_t get_offset_of_Longitude_1() { return static_cast<int32_t>(offsetof(MapLocation_t547849766, ___Longitude_1)); }
	inline float get_Longitude_1() const { return ___Longitude_1; }
	inline float* get_address_of_Longitude_1() { return &___Longitude_1; }
	inline void set_Longitude_1(float value)
	{
		___Longitude_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MAPLOCATION_T547849766_H
#ifndef U3CSTARTSERVICEU3EC__ITERATOR0_T711529095_H
#define U3CSTARTSERVICEU3EC__ITERATOR0_T711529095_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// packt.FoodyGo.Services.GPSLocationService/<StartService>c__Iterator0
struct  U3CStartServiceU3Ec__Iterator0_t711529095  : public RuntimeObject
{
public:
	// System.Int32 packt.FoodyGo.Services.GPSLocationService/<StartService>c__Iterator0::<maxWait>__0
	int32_t ___U3CmaxWaitU3E__0_0;
	// packt.FoodyGo.Services.GPSLocationService packt.FoodyGo.Services.GPSLocationService/<StartService>c__Iterator0::$this
	GPSLocationService_t2374085698 * ___U24this_1;
	// System.Object packt.FoodyGo.Services.GPSLocationService/<StartService>c__Iterator0::$current
	RuntimeObject * ___U24current_2;
	// System.Boolean packt.FoodyGo.Services.GPSLocationService/<StartService>c__Iterator0::$disposing
	bool ___U24disposing_3;
	// System.Int32 packt.FoodyGo.Services.GPSLocationService/<StartService>c__Iterator0::$PC
	int32_t ___U24PC_4;

public:
	inline static int32_t get_offset_of_U3CmaxWaitU3E__0_0() { return static_cast<int32_t>(offsetof(U3CStartServiceU3Ec__Iterator0_t711529095, ___U3CmaxWaitU3E__0_0)); }
	inline int32_t get_U3CmaxWaitU3E__0_0() const { return ___U3CmaxWaitU3E__0_0; }
	inline int32_t* get_address_of_U3CmaxWaitU3E__0_0() { return &___U3CmaxWaitU3E__0_0; }
	inline void set_U3CmaxWaitU3E__0_0(int32_t value)
	{
		___U3CmaxWaitU3E__0_0 = value;
	}

	inline static int32_t get_offset_of_U24this_1() { return static_cast<int32_t>(offsetof(U3CStartServiceU3Ec__Iterator0_t711529095, ___U24this_1)); }
	inline GPSLocationService_t2374085698 * get_U24this_1() const { return ___U24this_1; }
	inline GPSLocationService_t2374085698 ** get_address_of_U24this_1() { return &___U24this_1; }
	inline void set_U24this_1(GPSLocationService_t2374085698 * value)
	{
		___U24this_1 = value;
		Il2CppCodeGenWriteBarrier((&___U24this_1), value);
	}

	inline static int32_t get_offset_of_U24current_2() { return static_cast<int32_t>(offsetof(U3CStartServiceU3Ec__Iterator0_t711529095, ___U24current_2)); }
	inline RuntimeObject * get_U24current_2() const { return ___U24current_2; }
	inline RuntimeObject ** get_address_of_U24current_2() { return &___U24current_2; }
	inline void set_U24current_2(RuntimeObject * value)
	{
		___U24current_2 = value;
		Il2CppCodeGenWriteBarrier((&___U24current_2), value);
	}

	inline static int32_t get_offset_of_U24disposing_3() { return static_cast<int32_t>(offsetof(U3CStartServiceU3Ec__Iterator0_t711529095, ___U24disposing_3)); }
	inline bool get_U24disposing_3() const { return ___U24disposing_3; }
	inline bool* get_address_of_U24disposing_3() { return &___U24disposing_3; }
	inline void set_U24disposing_3(bool value)
	{
		___U24disposing_3 = value;
	}

	inline static int32_t get_offset_of_U24PC_4() { return static_cast<int32_t>(offsetof(U3CStartServiceU3Ec__Iterator0_t711529095, ___U24PC_4)); }
	inline int32_t get_U24PC_4() const { return ___U24PC_4; }
	inline int32_t* get_address_of_U24PC_4() { return &___U24PC_4; }
	inline void set_U24PC_4(int32_t value)
	{
		___U24PC_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CSTARTSERVICEU3EC__ITERATOR0_T711529095_H
#ifndef COMMANDATTRIBUTE_T3967200570_H
#define COMMANDATTRIBUTE_T3967200570_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// CUDLR.CommandAttribute
struct  CommandAttribute_t3967200570  : public Attribute_t861562559
{
public:
	// System.String CUDLR.CommandAttribute::m_command
	String_t* ___m_command_0;
	// System.String CUDLR.CommandAttribute::m_help
	String_t* ___m_help_1;
	// System.Boolean CUDLR.CommandAttribute::m_runOnMainThread
	bool ___m_runOnMainThread_2;
	// CUDLR.CommandAttribute/Callback CUDLR.CommandAttribute::m_callback
	Callback_t1969551140 * ___m_callback_3;

public:
	inline static int32_t get_offset_of_m_command_0() { return static_cast<int32_t>(offsetof(CommandAttribute_t3967200570, ___m_command_0)); }
	inline String_t* get_m_command_0() const { return ___m_command_0; }
	inline String_t** get_address_of_m_command_0() { return &___m_command_0; }
	inline void set_m_command_0(String_t* value)
	{
		___m_command_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_command_0), value);
	}

	inline static int32_t get_offset_of_m_help_1() { return static_cast<int32_t>(offsetof(CommandAttribute_t3967200570, ___m_help_1)); }
	inline String_t* get_m_help_1() const { return ___m_help_1; }
	inline String_t** get_address_of_m_help_1() { return &___m_help_1; }
	inline void set_m_help_1(String_t* value)
	{
		___m_help_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_help_1), value);
	}

	inline static int32_t get_offset_of_m_runOnMainThread_2() { return static_cast<int32_t>(offsetof(CommandAttribute_t3967200570, ___m_runOnMainThread_2)); }
	inline bool get_m_runOnMainThread_2() const { return ___m_runOnMainThread_2; }
	inline bool* get_address_of_m_runOnMainThread_2() { return &___m_runOnMainThread_2; }
	inline void set_m_runOnMainThread_2(bool value)
	{
		___m_runOnMainThread_2 = value;
	}

	inline static int32_t get_offset_of_m_callback_3() { return static_cast<int32_t>(offsetof(CommandAttribute_t3967200570, ___m_callback_3)); }
	inline Callback_t1969551140 * get_m_callback_3() const { return ___m_callback_3; }
	inline Callback_t1969551140 ** get_address_of_m_callback_3() { return &___m_callback_3; }
	inline void set_m_callback_3(Callback_t1969551140 * value)
	{
		___m_callback_3 = value;
		Il2CppCodeGenWriteBarrier((&___m_callback_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COMMANDATTRIBUTE_T3967200570_H
#ifndef QUEUEDCOMMAND_T3856573170_H
#define QUEUEDCOMMAND_T3856573170_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// CUDLR.QueuedCommand
struct  QueuedCommand_t3856573170 
{
public:
	// CUDLR.CommandAttribute CUDLR.QueuedCommand::command
	CommandAttribute_t3967200570 * ___command_0;
	// System.String[] CUDLR.QueuedCommand::args
	StringU5BU5D_t1281789340* ___args_1;

public:
	inline static int32_t get_offset_of_command_0() { return static_cast<int32_t>(offsetof(QueuedCommand_t3856573170, ___command_0)); }
	inline CommandAttribute_t3967200570 * get_command_0() const { return ___command_0; }
	inline CommandAttribute_t3967200570 ** get_address_of_command_0() { return &___command_0; }
	inline void set_command_0(CommandAttribute_t3967200570 * value)
	{
		___command_0 = value;
		Il2CppCodeGenWriteBarrier((&___command_0), value);
	}

	inline static int32_t get_offset_of_args_1() { return static_cast<int32_t>(offsetof(QueuedCommand_t3856573170, ___args_1)); }
	inline StringU5BU5D_t1281789340* get_args_1() const { return ___args_1; }
	inline StringU5BU5D_t1281789340** get_address_of_args_1() { return &___args_1; }
	inline void set_args_1(StringU5BU5D_t1281789340* value)
	{
		___args_1 = value;
		Il2CppCodeGenWriteBarrier((&___args_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of CUDLR.QueuedCommand
struct QueuedCommand_t3856573170_marshaled_pinvoke
{
	CommandAttribute_t3967200570 * ___command_0;
	char** ___args_1;
};
// Native definition for COM marshalling of CUDLR.QueuedCommand
struct QueuedCommand_t3856573170_marshaled_com
{
	CommandAttribute_t3967200570 * ___command_0;
	Il2CppChar** ___args_1;
};
#endif // QUEUEDCOMMAND_T3856573170_H
#ifndef ROUTEATTRIBUTE_T574643108_H
#define ROUTEATTRIBUTE_T574643108_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// CUDLR.RouteAttribute
struct  RouteAttribute_t574643108  : public Attribute_t861562559
{
public:
	// System.Text.RegularExpressions.Regex CUDLR.RouteAttribute::m_route
	Regex_t3657309853 * ___m_route_0;
	// System.Text.RegularExpressions.Regex CUDLR.RouteAttribute::m_methods
	Regex_t3657309853 * ___m_methods_1;
	// System.Boolean CUDLR.RouteAttribute::m_runOnMainThread
	bool ___m_runOnMainThread_2;
	// CUDLR.RouteAttribute/Callback CUDLR.RouteAttribute::m_callback
	Callback_t1777011615 * ___m_callback_3;

public:
	inline static int32_t get_offset_of_m_route_0() { return static_cast<int32_t>(offsetof(RouteAttribute_t574643108, ___m_route_0)); }
	inline Regex_t3657309853 * get_m_route_0() const { return ___m_route_0; }
	inline Regex_t3657309853 ** get_address_of_m_route_0() { return &___m_route_0; }
	inline void set_m_route_0(Regex_t3657309853 * value)
	{
		___m_route_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_route_0), value);
	}

	inline static int32_t get_offset_of_m_methods_1() { return static_cast<int32_t>(offsetof(RouteAttribute_t574643108, ___m_methods_1)); }
	inline Regex_t3657309853 * get_m_methods_1() const { return ___m_methods_1; }
	inline Regex_t3657309853 ** get_address_of_m_methods_1() { return &___m_methods_1; }
	inline void set_m_methods_1(Regex_t3657309853 * value)
	{
		___m_methods_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_methods_1), value);
	}

	inline static int32_t get_offset_of_m_runOnMainThread_2() { return static_cast<int32_t>(offsetof(RouteAttribute_t574643108, ___m_runOnMainThread_2)); }
	inline bool get_m_runOnMainThread_2() const { return ___m_runOnMainThread_2; }
	inline bool* get_address_of_m_runOnMainThread_2() { return &___m_runOnMainThread_2; }
	inline void set_m_runOnMainThread_2(bool value)
	{
		___m_runOnMainThread_2 = value;
	}

	inline static int32_t get_offset_of_m_callback_3() { return static_cast<int32_t>(offsetof(RouteAttribute_t574643108, ___m_callback_3)); }
	inline Callback_t1777011615 * get_m_callback_3() const { return ___m_callback_3; }
	inline Callback_t1777011615 ** get_address_of_m_callback_3() { return &___m_callback_3; }
	inline void set_m_callback_3(Callback_t1777011615 * value)
	{
		___m_callback_3 = value;
		Il2CppCodeGenWriteBarrier((&___m_callback_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ROUTEATTRIBUTE_T574643108_H
#ifndef BOOLEAN_T97287965_H
#define BOOLEAN_T97287965_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Boolean
struct  Boolean_t97287965 
{
public:
	// System.Boolean System.Boolean::m_value
	bool ___m_value_2;

public:
	inline static int32_t get_offset_of_m_value_2() { return static_cast<int32_t>(offsetof(Boolean_t97287965, ___m_value_2)); }
	inline bool get_m_value_2() const { return ___m_value_2; }
	inline bool* get_address_of_m_value_2() { return &___m_value_2; }
	inline void set_m_value_2(bool value)
	{
		___m_value_2 = value;
	}
};

struct Boolean_t97287965_StaticFields
{
public:
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_0;
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_1;

public:
	inline static int32_t get_offset_of_FalseString_0() { return static_cast<int32_t>(offsetof(Boolean_t97287965_StaticFields, ___FalseString_0)); }
	inline String_t* get_FalseString_0() const { return ___FalseString_0; }
	inline String_t** get_address_of_FalseString_0() { return &___FalseString_0; }
	inline void set_FalseString_0(String_t* value)
	{
		___FalseString_0 = value;
		Il2CppCodeGenWriteBarrier((&___FalseString_0), value);
	}

	inline static int32_t get_offset_of_TrueString_1() { return static_cast<int32_t>(offsetof(Boolean_t97287965_StaticFields, ___TrueString_1)); }
	inline String_t* get_TrueString_1() const { return ___TrueString_1; }
	inline String_t** get_address_of_TrueString_1() { return &___TrueString_1; }
	inline void set_TrueString_1(String_t* value)
	{
		___TrueString_1 = value;
		Il2CppCodeGenWriteBarrier((&___TrueString_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BOOLEAN_T97287965_H
#ifndef BYTE_T1134296376_H
#define BYTE_T1134296376_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Byte
struct  Byte_t1134296376 
{
public:
	// System.Byte System.Byte::m_value
	uint8_t ___m_value_2;

public:
	inline static int32_t get_offset_of_m_value_2() { return static_cast<int32_t>(offsetof(Byte_t1134296376, ___m_value_2)); }
	inline uint8_t get_m_value_2() const { return ___m_value_2; }
	inline uint8_t* get_address_of_m_value_2() { return &___m_value_2; }
	inline void set_m_value_2(uint8_t value)
	{
		___m_value_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BYTE_T1134296376_H
#ifndef CHAR_T3634460470_H
#define CHAR_T3634460470_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Char
struct  Char_t3634460470 
{
public:
	// System.Char System.Char::m_value
	Il2CppChar ___m_value_2;

public:
	inline static int32_t get_offset_of_m_value_2() { return static_cast<int32_t>(offsetof(Char_t3634460470, ___m_value_2)); }
	inline Il2CppChar get_m_value_2() const { return ___m_value_2; }
	inline Il2CppChar* get_address_of_m_value_2() { return &___m_value_2; }
	inline void set_m_value_2(Il2CppChar value)
	{
		___m_value_2 = value;
	}
};

struct Char_t3634460470_StaticFields
{
public:
	// System.Byte* System.Char::category_data
	uint8_t* ___category_data_3;
	// System.Byte* System.Char::numeric_data
	uint8_t* ___numeric_data_4;
	// System.Double* System.Char::numeric_data_values
	double* ___numeric_data_values_5;
	// System.UInt16* System.Char::to_lower_data_low
	uint16_t* ___to_lower_data_low_6;
	// System.UInt16* System.Char::to_lower_data_high
	uint16_t* ___to_lower_data_high_7;
	// System.UInt16* System.Char::to_upper_data_low
	uint16_t* ___to_upper_data_low_8;
	// System.UInt16* System.Char::to_upper_data_high
	uint16_t* ___to_upper_data_high_9;

public:
	inline static int32_t get_offset_of_category_data_3() { return static_cast<int32_t>(offsetof(Char_t3634460470_StaticFields, ___category_data_3)); }
	inline uint8_t* get_category_data_3() const { return ___category_data_3; }
	inline uint8_t** get_address_of_category_data_3() { return &___category_data_3; }
	inline void set_category_data_3(uint8_t* value)
	{
		___category_data_3 = value;
	}

	inline static int32_t get_offset_of_numeric_data_4() { return static_cast<int32_t>(offsetof(Char_t3634460470_StaticFields, ___numeric_data_4)); }
	inline uint8_t* get_numeric_data_4() const { return ___numeric_data_4; }
	inline uint8_t** get_address_of_numeric_data_4() { return &___numeric_data_4; }
	inline void set_numeric_data_4(uint8_t* value)
	{
		___numeric_data_4 = value;
	}

	inline static int32_t get_offset_of_numeric_data_values_5() { return static_cast<int32_t>(offsetof(Char_t3634460470_StaticFields, ___numeric_data_values_5)); }
	inline double* get_numeric_data_values_5() const { return ___numeric_data_values_5; }
	inline double** get_address_of_numeric_data_values_5() { return &___numeric_data_values_5; }
	inline void set_numeric_data_values_5(double* value)
	{
		___numeric_data_values_5 = value;
	}

	inline static int32_t get_offset_of_to_lower_data_low_6() { return static_cast<int32_t>(offsetof(Char_t3634460470_StaticFields, ___to_lower_data_low_6)); }
	inline uint16_t* get_to_lower_data_low_6() const { return ___to_lower_data_low_6; }
	inline uint16_t** get_address_of_to_lower_data_low_6() { return &___to_lower_data_low_6; }
	inline void set_to_lower_data_low_6(uint16_t* value)
	{
		___to_lower_data_low_6 = value;
	}

	inline static int32_t get_offset_of_to_lower_data_high_7() { return static_cast<int32_t>(offsetof(Char_t3634460470_StaticFields, ___to_lower_data_high_7)); }
	inline uint16_t* get_to_lower_data_high_7() const { return ___to_lower_data_high_7; }
	inline uint16_t** get_address_of_to_lower_data_high_7() { return &___to_lower_data_high_7; }
	inline void set_to_lower_data_high_7(uint16_t* value)
	{
		___to_lower_data_high_7 = value;
	}

	inline static int32_t get_offset_of_to_upper_data_low_8() { return static_cast<int32_t>(offsetof(Char_t3634460470_StaticFields, ___to_upper_data_low_8)); }
	inline uint16_t* get_to_upper_data_low_8() const { return ___to_upper_data_low_8; }
	inline uint16_t** get_address_of_to_upper_data_low_8() { return &___to_upper_data_low_8; }
	inline void set_to_upper_data_low_8(uint16_t* value)
	{
		___to_upper_data_low_8 = value;
	}

	inline static int32_t get_offset_of_to_upper_data_high_9() { return static_cast<int32_t>(offsetof(Char_t3634460470_StaticFields, ___to_upper_data_high_9)); }
	inline uint16_t* get_to_upper_data_high_9() const { return ___to_upper_data_high_9; }
	inline uint16_t** get_address_of_to_upper_data_high_9() { return &___to_upper_data_high_9; }
	inline void set_to_upper_data_high_9(uint16_t* value)
	{
		___to_upper_data_high_9 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CHAR_T3634460470_H
#ifndef KEYVALUEPAIR_2_T2530217319_H
#define KEYVALUEPAIR_2_T2530217319_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>
struct  KeyValuePair_2_t2530217319 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	RuntimeObject * ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	RuntimeObject * ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t2530217319, ___key_0)); }
	inline RuntimeObject * get_key_0() const { return ___key_0; }
	inline RuntimeObject ** get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(RuntimeObject * value)
	{
		___key_0 = value;
		Il2CppCodeGenWriteBarrier((&___key_0), value);
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t2530217319, ___value_1)); }
	inline RuntimeObject * get_value_1() const { return ___value_1; }
	inline RuntimeObject ** get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(RuntimeObject * value)
	{
		___value_1 = value;
		Il2CppCodeGenWriteBarrier((&___value_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // KEYVALUEPAIR_2_T2530217319_H
#ifndef KEYVALUEPAIR_2_T620357653_H
#define KEYVALUEPAIR_2_T620357653_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.KeyValuePair`2<System.String,CUDLR.CommandTree>
struct  KeyValuePair_2_t620357653 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	String_t* ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	CommandTree_t2732396483 * ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t620357653, ___key_0)); }
	inline String_t* get_key_0() const { return ___key_0; }
	inline String_t** get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(String_t* value)
	{
		___key_0 = value;
		Il2CppCodeGenWriteBarrier((&___key_0), value);
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t620357653, ___value_1)); }
	inline CommandTree_t2732396483 * get_value_1() const { return ___value_1; }
	inline CommandTree_t2732396483 ** get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(CommandTree_t2732396483 * value)
	{
		___value_1 = value;
		Il2CppCodeGenWriteBarrier((&___value_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // KEYVALUEPAIR_2_T620357653_H
#ifndef KEYVALUEPAIR_2_T4030379155_H
#define KEYVALUEPAIR_2_T4030379155_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.KeyValuePair`2<System.String,System.String>
struct  KeyValuePair_2_t4030379155 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	String_t* ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	String_t* ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t4030379155, ___key_0)); }
	inline String_t* get_key_0() const { return ___key_0; }
	inline String_t** get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(String_t* value)
	{
		___key_0 = value;
		Il2CppCodeGenWriteBarrier((&___key_0), value);
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t4030379155, ___value_1)); }
	inline String_t* get_value_1() const { return ___value_1; }
	inline String_t** get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(String_t* value)
	{
		___value_1 = value;
		Il2CppCodeGenWriteBarrier((&___value_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // KEYVALUEPAIR_2_T4030379155_H
#ifndef ENUMERATOR_T2146457487_H
#define ENUMERATOR_T2146457487_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1/Enumerator<System.Object>
struct  Enumerator_t2146457487 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::l
	List_1_t257213610 * ___l_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::next
	int32_t ___next_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::ver
	int32_t ___ver_2;
	// T System.Collections.Generic.List`1/Enumerator::current
	RuntimeObject * ___current_3;

public:
	inline static int32_t get_offset_of_l_0() { return static_cast<int32_t>(offsetof(Enumerator_t2146457487, ___l_0)); }
	inline List_1_t257213610 * get_l_0() const { return ___l_0; }
	inline List_1_t257213610 ** get_address_of_l_0() { return &___l_0; }
	inline void set_l_0(List_1_t257213610 * value)
	{
		___l_0 = value;
		Il2CppCodeGenWriteBarrier((&___l_0), value);
	}

	inline static int32_t get_offset_of_next_1() { return static_cast<int32_t>(offsetof(Enumerator_t2146457487, ___next_1)); }
	inline int32_t get_next_1() const { return ___next_1; }
	inline int32_t* get_address_of_next_1() { return &___next_1; }
	inline void set_next_1(int32_t value)
	{
		___next_1 = value;
	}

	inline static int32_t get_offset_of_ver_2() { return static_cast<int32_t>(offsetof(Enumerator_t2146457487, ___ver_2)); }
	inline int32_t get_ver_2() const { return ___ver_2; }
	inline int32_t* get_address_of_ver_2() { return &___ver_2; }
	inline void set_ver_2(int32_t value)
	{
		___ver_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_t2146457487, ___current_3)); }
	inline RuntimeObject * get_current_3() const { return ___current_3; }
	inline RuntimeObject ** get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(RuntimeObject * value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((&___current_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENUMERATOR_T2146457487_H
#ifndef ENUMERATOR_T913802012_H
#define ENUMERATOR_T913802012_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1/Enumerator<System.String>
struct  Enumerator_t913802012 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::l
	List_1_t3319525431 * ___l_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::next
	int32_t ___next_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::ver
	int32_t ___ver_2;
	// T System.Collections.Generic.List`1/Enumerator::current
	String_t* ___current_3;

public:
	inline static int32_t get_offset_of_l_0() { return static_cast<int32_t>(offsetof(Enumerator_t913802012, ___l_0)); }
	inline List_1_t3319525431 * get_l_0() const { return ___l_0; }
	inline List_1_t3319525431 ** get_address_of_l_0() { return &___l_0; }
	inline void set_l_0(List_1_t3319525431 * value)
	{
		___l_0 = value;
		Il2CppCodeGenWriteBarrier((&___l_0), value);
	}

	inline static int32_t get_offset_of_next_1() { return static_cast<int32_t>(offsetof(Enumerator_t913802012, ___next_1)); }
	inline int32_t get_next_1() const { return ___next_1; }
	inline int32_t* get_address_of_next_1() { return &___next_1; }
	inline void set_next_1(int32_t value)
	{
		___next_1 = value;
	}

	inline static int32_t get_offset_of_ver_2() { return static_cast<int32_t>(offsetof(Enumerator_t913802012, ___ver_2)); }
	inline int32_t get_ver_2() const { return ___ver_2; }
	inline int32_t* get_address_of_ver_2() { return &___ver_2; }
	inline void set_ver_2(int32_t value)
	{
		___ver_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_t913802012, ___current_3)); }
	inline String_t* get_current_3() const { return ___current_3; }
	inline String_t** get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(String_t* value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((&___current_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENUMERATOR_T913802012_H
#ifndef NAMEVALUECOLLECTION_T407452768_H
#define NAMEVALUECOLLECTION_T407452768_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Specialized.NameValueCollection
struct  NameValueCollection_t407452768  : public NameObjectCollectionBase_t2091847364
{
public:
	// System.String[] System.Collections.Specialized.NameValueCollection::cachedAllKeys
	StringU5BU5D_t1281789340* ___cachedAllKeys_10;
	// System.String[] System.Collections.Specialized.NameValueCollection::cachedAll
	StringU5BU5D_t1281789340* ___cachedAll_11;

public:
	inline static int32_t get_offset_of_cachedAllKeys_10() { return static_cast<int32_t>(offsetof(NameValueCollection_t407452768, ___cachedAllKeys_10)); }
	inline StringU5BU5D_t1281789340* get_cachedAllKeys_10() const { return ___cachedAllKeys_10; }
	inline StringU5BU5D_t1281789340** get_address_of_cachedAllKeys_10() { return &___cachedAllKeys_10; }
	inline void set_cachedAllKeys_10(StringU5BU5D_t1281789340* value)
	{
		___cachedAllKeys_10 = value;
		Il2CppCodeGenWriteBarrier((&___cachedAllKeys_10), value);
	}

	inline static int32_t get_offset_of_cachedAll_11() { return static_cast<int32_t>(offsetof(NameValueCollection_t407452768, ___cachedAll_11)); }
	inline StringU5BU5D_t1281789340* get_cachedAll_11() const { return ___cachedAll_11; }
	inline StringU5BU5D_t1281789340** get_address_of_cachedAll_11() { return &___cachedAll_11; }
	inline void set_cachedAll_11(StringU5BU5D_t1281789340* value)
	{
		___cachedAll_11 = value;
		Il2CppCodeGenWriteBarrier((&___cachedAll_11), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NAMEVALUECOLLECTION_T407452768_H
#ifndef DOUBLE_T594665363_H
#define DOUBLE_T594665363_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Double
struct  Double_t594665363 
{
public:
	// System.Double System.Double::m_value
	double ___m_value_13;

public:
	inline static int32_t get_offset_of_m_value_13() { return static_cast<int32_t>(offsetof(Double_t594665363, ___m_value_13)); }
	inline double get_m_value_13() const { return ___m_value_13; }
	inline double* get_address_of_m_value_13() { return &___m_value_13; }
	inline void set_m_value_13(double value)
	{
		___m_value_13 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DOUBLE_T594665363_H
#ifndef ENUM_T4135868527_H
#define ENUM_T4135868527_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Enum
struct  Enum_t4135868527  : public ValueType_t3640485471
{
public:

public:
};

struct Enum_t4135868527_StaticFields
{
public:
	// System.Char[] System.Enum::split_char
	CharU5BU5D_t3528271667* ___split_char_0;

public:
	inline static int32_t get_offset_of_split_char_0() { return static_cast<int32_t>(offsetof(Enum_t4135868527_StaticFields, ___split_char_0)); }
	inline CharU5BU5D_t3528271667* get_split_char_0() const { return ___split_char_0; }
	inline CharU5BU5D_t3528271667** get_address_of_split_char_0() { return &___split_char_0; }
	inline void set_split_char_0(CharU5BU5D_t3528271667* value)
	{
		___split_char_0 = value;
		Il2CppCodeGenWriteBarrier((&___split_char_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t4135868527_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t4135868527_marshaled_com
{
};
#endif // ENUM_T4135868527_H
#ifndef GUID_T_H
#define GUID_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Guid
struct  Guid_t 
{
public:
	// System.Int32 System.Guid::_a
	int32_t ____a_0;
	// System.Int16 System.Guid::_b
	int16_t ____b_1;
	// System.Int16 System.Guid::_c
	int16_t ____c_2;
	// System.Byte System.Guid::_d
	uint8_t ____d_3;
	// System.Byte System.Guid::_e
	uint8_t ____e_4;
	// System.Byte System.Guid::_f
	uint8_t ____f_5;
	// System.Byte System.Guid::_g
	uint8_t ____g_6;
	// System.Byte System.Guid::_h
	uint8_t ____h_7;
	// System.Byte System.Guid::_i
	uint8_t ____i_8;
	// System.Byte System.Guid::_j
	uint8_t ____j_9;
	// System.Byte System.Guid::_k
	uint8_t ____k_10;

public:
	inline static int32_t get_offset_of__a_0() { return static_cast<int32_t>(offsetof(Guid_t, ____a_0)); }
	inline int32_t get__a_0() const { return ____a_0; }
	inline int32_t* get_address_of__a_0() { return &____a_0; }
	inline void set__a_0(int32_t value)
	{
		____a_0 = value;
	}

	inline static int32_t get_offset_of__b_1() { return static_cast<int32_t>(offsetof(Guid_t, ____b_1)); }
	inline int16_t get__b_1() const { return ____b_1; }
	inline int16_t* get_address_of__b_1() { return &____b_1; }
	inline void set__b_1(int16_t value)
	{
		____b_1 = value;
	}

	inline static int32_t get_offset_of__c_2() { return static_cast<int32_t>(offsetof(Guid_t, ____c_2)); }
	inline int16_t get__c_2() const { return ____c_2; }
	inline int16_t* get_address_of__c_2() { return &____c_2; }
	inline void set__c_2(int16_t value)
	{
		____c_2 = value;
	}

	inline static int32_t get_offset_of__d_3() { return static_cast<int32_t>(offsetof(Guid_t, ____d_3)); }
	inline uint8_t get__d_3() const { return ____d_3; }
	inline uint8_t* get_address_of__d_3() { return &____d_3; }
	inline void set__d_3(uint8_t value)
	{
		____d_3 = value;
	}

	inline static int32_t get_offset_of__e_4() { return static_cast<int32_t>(offsetof(Guid_t, ____e_4)); }
	inline uint8_t get__e_4() const { return ____e_4; }
	inline uint8_t* get_address_of__e_4() { return &____e_4; }
	inline void set__e_4(uint8_t value)
	{
		____e_4 = value;
	}

	inline static int32_t get_offset_of__f_5() { return static_cast<int32_t>(offsetof(Guid_t, ____f_5)); }
	inline uint8_t get__f_5() const { return ____f_5; }
	inline uint8_t* get_address_of__f_5() { return &____f_5; }
	inline void set__f_5(uint8_t value)
	{
		____f_5 = value;
	}

	inline static int32_t get_offset_of__g_6() { return static_cast<int32_t>(offsetof(Guid_t, ____g_6)); }
	inline uint8_t get__g_6() const { return ____g_6; }
	inline uint8_t* get_address_of__g_6() { return &____g_6; }
	inline void set__g_6(uint8_t value)
	{
		____g_6 = value;
	}

	inline static int32_t get_offset_of__h_7() { return static_cast<int32_t>(offsetof(Guid_t, ____h_7)); }
	inline uint8_t get__h_7() const { return ____h_7; }
	inline uint8_t* get_address_of__h_7() { return &____h_7; }
	inline void set__h_7(uint8_t value)
	{
		____h_7 = value;
	}

	inline static int32_t get_offset_of__i_8() { return static_cast<int32_t>(offsetof(Guid_t, ____i_8)); }
	inline uint8_t get__i_8() const { return ____i_8; }
	inline uint8_t* get_address_of__i_8() { return &____i_8; }
	inline void set__i_8(uint8_t value)
	{
		____i_8 = value;
	}

	inline static int32_t get_offset_of__j_9() { return static_cast<int32_t>(offsetof(Guid_t, ____j_9)); }
	inline uint8_t get__j_9() const { return ____j_9; }
	inline uint8_t* get_address_of__j_9() { return &____j_9; }
	inline void set__j_9(uint8_t value)
	{
		____j_9 = value;
	}

	inline static int32_t get_offset_of__k_10() { return static_cast<int32_t>(offsetof(Guid_t, ____k_10)); }
	inline uint8_t get__k_10() const { return ____k_10; }
	inline uint8_t* get_address_of__k_10() { return &____k_10; }
	inline void set__k_10(uint8_t value)
	{
		____k_10 = value;
	}
};

struct Guid_t_StaticFields
{
public:
	// System.Guid System.Guid::Empty
	Guid_t  ___Empty_11;
	// System.Object System.Guid::_rngAccess
	RuntimeObject * ____rngAccess_12;
	// System.Security.Cryptography.RandomNumberGenerator System.Guid::_rng
	RandomNumberGenerator_t386037858 * ____rng_13;
	// System.Security.Cryptography.RandomNumberGenerator System.Guid::_fastRng
	RandomNumberGenerator_t386037858 * ____fastRng_14;

public:
	inline static int32_t get_offset_of_Empty_11() { return static_cast<int32_t>(offsetof(Guid_t_StaticFields, ___Empty_11)); }
	inline Guid_t  get_Empty_11() const { return ___Empty_11; }
	inline Guid_t * get_address_of_Empty_11() { return &___Empty_11; }
	inline void set_Empty_11(Guid_t  value)
	{
		___Empty_11 = value;
	}

	inline static int32_t get_offset_of__rngAccess_12() { return static_cast<int32_t>(offsetof(Guid_t_StaticFields, ____rngAccess_12)); }
	inline RuntimeObject * get__rngAccess_12() const { return ____rngAccess_12; }
	inline RuntimeObject ** get_address_of__rngAccess_12() { return &____rngAccess_12; }
	inline void set__rngAccess_12(RuntimeObject * value)
	{
		____rngAccess_12 = value;
		Il2CppCodeGenWriteBarrier((&____rngAccess_12), value);
	}

	inline static int32_t get_offset_of__rng_13() { return static_cast<int32_t>(offsetof(Guid_t_StaticFields, ____rng_13)); }
	inline RandomNumberGenerator_t386037858 * get__rng_13() const { return ____rng_13; }
	inline RandomNumberGenerator_t386037858 ** get_address_of__rng_13() { return &____rng_13; }
	inline void set__rng_13(RandomNumberGenerator_t386037858 * value)
	{
		____rng_13 = value;
		Il2CppCodeGenWriteBarrier((&____rng_13), value);
	}

	inline static int32_t get_offset_of__fastRng_14() { return static_cast<int32_t>(offsetof(Guid_t_StaticFields, ____fastRng_14)); }
	inline RandomNumberGenerator_t386037858 * get__fastRng_14() const { return ____fastRng_14; }
	inline RandomNumberGenerator_t386037858 ** get_address_of__fastRng_14() { return &____fastRng_14; }
	inline void set__fastRng_14(RandomNumberGenerator_t386037858 * value)
	{
		____fastRng_14 = value;
		Il2CppCodeGenWriteBarrier((&____fastRng_14), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GUID_T_H
#ifndef INT32_T2950945753_H
#define INT32_T2950945753_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Int32
struct  Int32_t2950945753 
{
public:
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_2;

public:
	inline static int32_t get_offset_of_m_value_2() { return static_cast<int32_t>(offsetof(Int32_t2950945753, ___m_value_2)); }
	inline int32_t get_m_value_2() const { return ___m_value_2; }
	inline int32_t* get_address_of_m_value_2() { return &___m_value_2; }
	inline void set_m_value_2(int32_t value)
	{
		___m_value_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INT32_T2950945753_H
#ifndef INT64_T3736567304_H
#define INT64_T3736567304_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Int64
struct  Int64_t3736567304 
{
public:
	// System.Int64 System.Int64::m_value
	int64_t ___m_value_2;

public:
	inline static int32_t get_offset_of_m_value_2() { return static_cast<int32_t>(offsetof(Int64_t3736567304, ___m_value_2)); }
	inline int64_t get_m_value_2() const { return ___m_value_2; }
	inline int64_t* get_address_of_m_value_2() { return &___m_value_2; }
	inline void set_m_value_2(int64_t value)
	{
		___m_value_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INT64_T3736567304_H
#ifndef INTPTR_T_H
#define INTPTR_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.IntPtr
struct  IntPtr_t 
{
public:
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(IntPtr_t, ___m_value_0)); }
	inline void* get_m_value_0() const { return ___m_value_0; }
	inline void** get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(void* value)
	{
		___m_value_0 = value;
	}
};

struct IntPtr_t_StaticFields
{
public:
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;

public:
	inline static int32_t get_offset_of_Zero_1() { return static_cast<int32_t>(offsetof(IntPtr_t_StaticFields, ___Zero_1)); }
	inline intptr_t get_Zero_1() const { return ___Zero_1; }
	inline intptr_t* get_address_of_Zero_1() { return &___Zero_1; }
	inline void set_Zero_1(intptr_t value)
	{
		___Zero_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INTPTR_T_H
#ifndef FIELDINFO_T_H
#define FIELDINFO_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.FieldInfo
struct  FieldInfo_t  : public MemberInfo_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FIELDINFO_T_H
#ifndef METHODBASE_T_H
#define METHODBASE_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.MethodBase
struct  MethodBase_t  : public MemberInfo_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // METHODBASE_T_H
#ifndef SINGLE_T1397266774_H
#define SINGLE_T1397266774_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Single
struct  Single_t1397266774 
{
public:
	// System.Single System.Single::m_value
	float ___m_value_7;

public:
	inline static int32_t get_offset_of_m_value_7() { return static_cast<int32_t>(offsetof(Single_t1397266774, ___m_value_7)); }
	inline float get_m_value_7() const { return ___m_value_7; }
	inline float* get_address_of_m_value_7() { return &___m_value_7; }
	inline void set_m_value_7(float value)
	{
		___m_value_7 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SINGLE_T1397266774_H
#ifndef SYSTEMEXCEPTION_T176217640_H
#define SYSTEMEXCEPTION_T176217640_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.SystemException
struct  SystemException_t176217640  : public Exception_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SYSTEMEXCEPTION_T176217640_H
#ifndef GROUP_T2468205786_H
#define GROUP_T2468205786_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.RegularExpressions.Group
struct  Group_t2468205786  : public Capture_t2232016050
{
public:
	// System.Boolean System.Text.RegularExpressions.Group::success
	bool ___success_4;
	// System.Text.RegularExpressions.CaptureCollection System.Text.RegularExpressions.Group::captures
	CaptureCollection_t1760593541 * ___captures_5;

public:
	inline static int32_t get_offset_of_success_4() { return static_cast<int32_t>(offsetof(Group_t2468205786, ___success_4)); }
	inline bool get_success_4() const { return ___success_4; }
	inline bool* get_address_of_success_4() { return &___success_4; }
	inline void set_success_4(bool value)
	{
		___success_4 = value;
	}

	inline static int32_t get_offset_of_captures_5() { return static_cast<int32_t>(offsetof(Group_t2468205786, ___captures_5)); }
	inline CaptureCollection_t1760593541 * get_captures_5() const { return ___captures_5; }
	inline CaptureCollection_t1760593541 ** get_address_of_captures_5() { return &___captures_5; }
	inline void set_captures_5(CaptureCollection_t1760593541 * value)
	{
		___captures_5 = value;
		Il2CppCodeGenWriteBarrier((&___captures_5), value);
	}
};

struct Group_t2468205786_StaticFields
{
public:
	// System.Text.RegularExpressions.Group System.Text.RegularExpressions.Group::Fail
	Group_t2468205786 * ___Fail_3;

public:
	inline static int32_t get_offset_of_Fail_3() { return static_cast<int32_t>(offsetof(Group_t2468205786_StaticFields, ___Fail_3)); }
	inline Group_t2468205786 * get_Fail_3() const { return ___Fail_3; }
	inline Group_t2468205786 ** get_address_of_Fail_3() { return &___Fail_3; }
	inline void set_Fail_3(Group_t2468205786 * value)
	{
		___Fail_3 = value;
		Il2CppCodeGenWriteBarrier((&___Fail_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GROUP_T2468205786_H
#ifndef UINT32_T2560061978_H
#define UINT32_T2560061978_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.UInt32
struct  UInt32_t2560061978 
{
public:
	// System.UInt32 System.UInt32::m_value
	uint32_t ___m_value_2;

public:
	inline static int32_t get_offset_of_m_value_2() { return static_cast<int32_t>(offsetof(UInt32_t2560061978, ___m_value_2)); }
	inline uint32_t get_m_value_2() const { return ___m_value_2; }
	inline uint32_t* get_address_of_m_value_2() { return &___m_value_2; }
	inline void set_m_value_2(uint32_t value)
	{
		___m_value_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UINT32_T2560061978_H
#ifndef UINTPTR_T_H
#define UINTPTR_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.UIntPtr
struct  UIntPtr_t 
{
public:
	// System.Void* System.UIntPtr::_pointer
	void* ____pointer_1;

public:
	inline static int32_t get_offset_of__pointer_1() { return static_cast<int32_t>(offsetof(UIntPtr_t, ____pointer_1)); }
	inline void* get__pointer_1() const { return ____pointer_1; }
	inline void** get_address_of__pointer_1() { return &____pointer_1; }
	inline void set__pointer_1(void* value)
	{
		____pointer_1 = value;
	}
};

struct UIntPtr_t_StaticFields
{
public:
	// System.UIntPtr System.UIntPtr::Zero
	uintptr_t ___Zero_0;

public:
	inline static int32_t get_offset_of_Zero_0() { return static_cast<int32_t>(offsetof(UIntPtr_t_StaticFields, ___Zero_0)); }
	inline uintptr_t get_Zero_0() const { return ___Zero_0; }
	inline uintptr_t* get_address_of_Zero_0() { return &___Zero_0; }
	inline void set_Zero_0(uintptr_t value)
	{
		___Zero_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UINTPTR_T_H
#ifndef VOID_T1185182177_H
#define VOID_T1185182177_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Void
struct  Void_t1185182177 
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VOID_T1185182177_H
#ifndef LOCATIONINFO_T1192161013_H
#define LOCATIONINFO_T1192161013_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.LocationInfo
struct  LocationInfo_t1192161013 
{
public:
	// System.Double UnityEngine.LocationInfo::m_Timestamp
	double ___m_Timestamp_0;
	// System.Single UnityEngine.LocationInfo::m_Latitude
	float ___m_Latitude_1;
	// System.Single UnityEngine.LocationInfo::m_Longitude
	float ___m_Longitude_2;
	// System.Single UnityEngine.LocationInfo::m_Altitude
	float ___m_Altitude_3;
	// System.Single UnityEngine.LocationInfo::m_HorizontalAccuracy
	float ___m_HorizontalAccuracy_4;
	// System.Single UnityEngine.LocationInfo::m_VerticalAccuracy
	float ___m_VerticalAccuracy_5;

public:
	inline static int32_t get_offset_of_m_Timestamp_0() { return static_cast<int32_t>(offsetof(LocationInfo_t1192161013, ___m_Timestamp_0)); }
	inline double get_m_Timestamp_0() const { return ___m_Timestamp_0; }
	inline double* get_address_of_m_Timestamp_0() { return &___m_Timestamp_0; }
	inline void set_m_Timestamp_0(double value)
	{
		___m_Timestamp_0 = value;
	}

	inline static int32_t get_offset_of_m_Latitude_1() { return static_cast<int32_t>(offsetof(LocationInfo_t1192161013, ___m_Latitude_1)); }
	inline float get_m_Latitude_1() const { return ___m_Latitude_1; }
	inline float* get_address_of_m_Latitude_1() { return &___m_Latitude_1; }
	inline void set_m_Latitude_1(float value)
	{
		___m_Latitude_1 = value;
	}

	inline static int32_t get_offset_of_m_Longitude_2() { return static_cast<int32_t>(offsetof(LocationInfo_t1192161013, ___m_Longitude_2)); }
	inline float get_m_Longitude_2() const { return ___m_Longitude_2; }
	inline float* get_address_of_m_Longitude_2() { return &___m_Longitude_2; }
	inline void set_m_Longitude_2(float value)
	{
		___m_Longitude_2 = value;
	}

	inline static int32_t get_offset_of_m_Altitude_3() { return static_cast<int32_t>(offsetof(LocationInfo_t1192161013, ___m_Altitude_3)); }
	inline float get_m_Altitude_3() const { return ___m_Altitude_3; }
	inline float* get_address_of_m_Altitude_3() { return &___m_Altitude_3; }
	inline void set_m_Altitude_3(float value)
	{
		___m_Altitude_3 = value;
	}

	inline static int32_t get_offset_of_m_HorizontalAccuracy_4() { return static_cast<int32_t>(offsetof(LocationInfo_t1192161013, ___m_HorizontalAccuracy_4)); }
	inline float get_m_HorizontalAccuracy_4() const { return ___m_HorizontalAccuracy_4; }
	inline float* get_address_of_m_HorizontalAccuracy_4() { return &___m_HorizontalAccuracy_4; }
	inline void set_m_HorizontalAccuracy_4(float value)
	{
		___m_HorizontalAccuracy_4 = value;
	}

	inline static int32_t get_offset_of_m_VerticalAccuracy_5() { return static_cast<int32_t>(offsetof(LocationInfo_t1192161013, ___m_VerticalAccuracy_5)); }
	inline float get_m_VerticalAccuracy_5() const { return ___m_VerticalAccuracy_5; }
	inline float* get_address_of_m_VerticalAccuracy_5() { return &___m_VerticalAccuracy_5; }
	inline void set_m_VerticalAccuracy_5(float value)
	{
		___m_VerticalAccuracy_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LOCATIONINFO_T1192161013_H
#ifndef QUATERNION_T2301928331_H
#define QUATERNION_T2301928331_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Quaternion
struct  Quaternion_t2301928331 
{
public:
	// System.Single UnityEngine.Quaternion::x
	float ___x_0;
	// System.Single UnityEngine.Quaternion::y
	float ___y_1;
	// System.Single UnityEngine.Quaternion::z
	float ___z_2;
	// System.Single UnityEngine.Quaternion::w
	float ___w_3;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Quaternion_t2301928331, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Quaternion_t2301928331, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}

	inline static int32_t get_offset_of_z_2() { return static_cast<int32_t>(offsetof(Quaternion_t2301928331, ___z_2)); }
	inline float get_z_2() const { return ___z_2; }
	inline float* get_address_of_z_2() { return &___z_2; }
	inline void set_z_2(float value)
	{
		___z_2 = value;
	}

	inline static int32_t get_offset_of_w_3() { return static_cast<int32_t>(offsetof(Quaternion_t2301928331, ___w_3)); }
	inline float get_w_3() const { return ___w_3; }
	inline float* get_address_of_w_3() { return &___w_3; }
	inline void set_w_3(float value)
	{
		___w_3 = value;
	}
};

struct Quaternion_t2301928331_StaticFields
{
public:
	// UnityEngine.Quaternion UnityEngine.Quaternion::identityQuaternion
	Quaternion_t2301928331  ___identityQuaternion_4;

public:
	inline static int32_t get_offset_of_identityQuaternion_4() { return static_cast<int32_t>(offsetof(Quaternion_t2301928331_StaticFields, ___identityQuaternion_4)); }
	inline Quaternion_t2301928331  get_identityQuaternion_4() const { return ___identityQuaternion_4; }
	inline Quaternion_t2301928331 * get_address_of_identityQuaternion_4() { return &___identityQuaternion_4; }
	inline void set_identityQuaternion_4(Quaternion_t2301928331  value)
	{
		___identityQuaternion_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // QUATERNION_T2301928331_H
#ifndef VECTOR2_T2156229523_H
#define VECTOR2_T2156229523_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Vector2
struct  Vector2_t2156229523 
{
public:
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Vector2_t2156229523, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Vector2_t2156229523, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}
};

struct Vector2_t2156229523_StaticFields
{
public:
	// UnityEngine.Vector2 UnityEngine.Vector2::zeroVector
	Vector2_t2156229523  ___zeroVector_2;
	// UnityEngine.Vector2 UnityEngine.Vector2::oneVector
	Vector2_t2156229523  ___oneVector_3;
	// UnityEngine.Vector2 UnityEngine.Vector2::upVector
	Vector2_t2156229523  ___upVector_4;
	// UnityEngine.Vector2 UnityEngine.Vector2::downVector
	Vector2_t2156229523  ___downVector_5;
	// UnityEngine.Vector2 UnityEngine.Vector2::leftVector
	Vector2_t2156229523  ___leftVector_6;
	// UnityEngine.Vector2 UnityEngine.Vector2::rightVector
	Vector2_t2156229523  ___rightVector_7;
	// UnityEngine.Vector2 UnityEngine.Vector2::positiveInfinityVector
	Vector2_t2156229523  ___positiveInfinityVector_8;
	// UnityEngine.Vector2 UnityEngine.Vector2::negativeInfinityVector
	Vector2_t2156229523  ___negativeInfinityVector_9;

public:
	inline static int32_t get_offset_of_zeroVector_2() { return static_cast<int32_t>(offsetof(Vector2_t2156229523_StaticFields, ___zeroVector_2)); }
	inline Vector2_t2156229523  get_zeroVector_2() const { return ___zeroVector_2; }
	inline Vector2_t2156229523 * get_address_of_zeroVector_2() { return &___zeroVector_2; }
	inline void set_zeroVector_2(Vector2_t2156229523  value)
	{
		___zeroVector_2 = value;
	}

	inline static int32_t get_offset_of_oneVector_3() { return static_cast<int32_t>(offsetof(Vector2_t2156229523_StaticFields, ___oneVector_3)); }
	inline Vector2_t2156229523  get_oneVector_3() const { return ___oneVector_3; }
	inline Vector2_t2156229523 * get_address_of_oneVector_3() { return &___oneVector_3; }
	inline void set_oneVector_3(Vector2_t2156229523  value)
	{
		___oneVector_3 = value;
	}

	inline static int32_t get_offset_of_upVector_4() { return static_cast<int32_t>(offsetof(Vector2_t2156229523_StaticFields, ___upVector_4)); }
	inline Vector2_t2156229523  get_upVector_4() const { return ___upVector_4; }
	inline Vector2_t2156229523 * get_address_of_upVector_4() { return &___upVector_4; }
	inline void set_upVector_4(Vector2_t2156229523  value)
	{
		___upVector_4 = value;
	}

	inline static int32_t get_offset_of_downVector_5() { return static_cast<int32_t>(offsetof(Vector2_t2156229523_StaticFields, ___downVector_5)); }
	inline Vector2_t2156229523  get_downVector_5() const { return ___downVector_5; }
	inline Vector2_t2156229523 * get_address_of_downVector_5() { return &___downVector_5; }
	inline void set_downVector_5(Vector2_t2156229523  value)
	{
		___downVector_5 = value;
	}

	inline static int32_t get_offset_of_leftVector_6() { return static_cast<int32_t>(offsetof(Vector2_t2156229523_StaticFields, ___leftVector_6)); }
	inline Vector2_t2156229523  get_leftVector_6() const { return ___leftVector_6; }
	inline Vector2_t2156229523 * get_address_of_leftVector_6() { return &___leftVector_6; }
	inline void set_leftVector_6(Vector2_t2156229523  value)
	{
		___leftVector_6 = value;
	}

	inline static int32_t get_offset_of_rightVector_7() { return static_cast<int32_t>(offsetof(Vector2_t2156229523_StaticFields, ___rightVector_7)); }
	inline Vector2_t2156229523  get_rightVector_7() const { return ___rightVector_7; }
	inline Vector2_t2156229523 * get_address_of_rightVector_7() { return &___rightVector_7; }
	inline void set_rightVector_7(Vector2_t2156229523  value)
	{
		___rightVector_7 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_8() { return static_cast<int32_t>(offsetof(Vector2_t2156229523_StaticFields, ___positiveInfinityVector_8)); }
	inline Vector2_t2156229523  get_positiveInfinityVector_8() const { return ___positiveInfinityVector_8; }
	inline Vector2_t2156229523 * get_address_of_positiveInfinityVector_8() { return &___positiveInfinityVector_8; }
	inline void set_positiveInfinityVector_8(Vector2_t2156229523  value)
	{
		___positiveInfinityVector_8 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_9() { return static_cast<int32_t>(offsetof(Vector2_t2156229523_StaticFields, ___negativeInfinityVector_9)); }
	inline Vector2_t2156229523  get_negativeInfinityVector_9() const { return ___negativeInfinityVector_9; }
	inline Vector2_t2156229523 * get_address_of_negativeInfinityVector_9() { return &___negativeInfinityVector_9; }
	inline void set_negativeInfinityVector_9(Vector2_t2156229523  value)
	{
		___negativeInfinityVector_9 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VECTOR2_T2156229523_H
#ifndef VECTOR3_T3722313464_H
#define VECTOR3_T3722313464_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Vector3
struct  Vector3_t3722313464 
{
public:
	// System.Single UnityEngine.Vector3::x
	float ___x_2;
	// System.Single UnityEngine.Vector3::y
	float ___y_3;
	// System.Single UnityEngine.Vector3::z
	float ___z_4;

public:
	inline static int32_t get_offset_of_x_2() { return static_cast<int32_t>(offsetof(Vector3_t3722313464, ___x_2)); }
	inline float get_x_2() const { return ___x_2; }
	inline float* get_address_of_x_2() { return &___x_2; }
	inline void set_x_2(float value)
	{
		___x_2 = value;
	}

	inline static int32_t get_offset_of_y_3() { return static_cast<int32_t>(offsetof(Vector3_t3722313464, ___y_3)); }
	inline float get_y_3() const { return ___y_3; }
	inline float* get_address_of_y_3() { return &___y_3; }
	inline void set_y_3(float value)
	{
		___y_3 = value;
	}

	inline static int32_t get_offset_of_z_4() { return static_cast<int32_t>(offsetof(Vector3_t3722313464, ___z_4)); }
	inline float get_z_4() const { return ___z_4; }
	inline float* get_address_of_z_4() { return &___z_4; }
	inline void set_z_4(float value)
	{
		___z_4 = value;
	}
};

struct Vector3_t3722313464_StaticFields
{
public:
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_t3722313464  ___zeroVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_t3722313464  ___oneVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_t3722313464  ___upVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_t3722313464  ___downVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_t3722313464  ___leftVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_t3722313464  ___rightVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_t3722313464  ___forwardVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_t3722313464  ___backVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_t3722313464  ___positiveInfinityVector_13;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_t3722313464  ___negativeInfinityVector_14;

public:
	inline static int32_t get_offset_of_zeroVector_5() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___zeroVector_5)); }
	inline Vector3_t3722313464  get_zeroVector_5() const { return ___zeroVector_5; }
	inline Vector3_t3722313464 * get_address_of_zeroVector_5() { return &___zeroVector_5; }
	inline void set_zeroVector_5(Vector3_t3722313464  value)
	{
		___zeroVector_5 = value;
	}

	inline static int32_t get_offset_of_oneVector_6() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___oneVector_6)); }
	inline Vector3_t3722313464  get_oneVector_6() const { return ___oneVector_6; }
	inline Vector3_t3722313464 * get_address_of_oneVector_6() { return &___oneVector_6; }
	inline void set_oneVector_6(Vector3_t3722313464  value)
	{
		___oneVector_6 = value;
	}

	inline static int32_t get_offset_of_upVector_7() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___upVector_7)); }
	inline Vector3_t3722313464  get_upVector_7() const { return ___upVector_7; }
	inline Vector3_t3722313464 * get_address_of_upVector_7() { return &___upVector_7; }
	inline void set_upVector_7(Vector3_t3722313464  value)
	{
		___upVector_7 = value;
	}

	inline static int32_t get_offset_of_downVector_8() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___downVector_8)); }
	inline Vector3_t3722313464  get_downVector_8() const { return ___downVector_8; }
	inline Vector3_t3722313464 * get_address_of_downVector_8() { return &___downVector_8; }
	inline void set_downVector_8(Vector3_t3722313464  value)
	{
		___downVector_8 = value;
	}

	inline static int32_t get_offset_of_leftVector_9() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___leftVector_9)); }
	inline Vector3_t3722313464  get_leftVector_9() const { return ___leftVector_9; }
	inline Vector3_t3722313464 * get_address_of_leftVector_9() { return &___leftVector_9; }
	inline void set_leftVector_9(Vector3_t3722313464  value)
	{
		___leftVector_9 = value;
	}

	inline static int32_t get_offset_of_rightVector_10() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___rightVector_10)); }
	inline Vector3_t3722313464  get_rightVector_10() const { return ___rightVector_10; }
	inline Vector3_t3722313464 * get_address_of_rightVector_10() { return &___rightVector_10; }
	inline void set_rightVector_10(Vector3_t3722313464  value)
	{
		___rightVector_10 = value;
	}

	inline static int32_t get_offset_of_forwardVector_11() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___forwardVector_11)); }
	inline Vector3_t3722313464  get_forwardVector_11() const { return ___forwardVector_11; }
	inline Vector3_t3722313464 * get_address_of_forwardVector_11() { return &___forwardVector_11; }
	inline void set_forwardVector_11(Vector3_t3722313464  value)
	{
		___forwardVector_11 = value;
	}

	inline static int32_t get_offset_of_backVector_12() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___backVector_12)); }
	inline Vector3_t3722313464  get_backVector_12() const { return ___backVector_12; }
	inline Vector3_t3722313464 * get_address_of_backVector_12() { return &___backVector_12; }
	inline void set_backVector_12(Vector3_t3722313464  value)
	{
		___backVector_12 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_13() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___positiveInfinityVector_13)); }
	inline Vector3_t3722313464  get_positiveInfinityVector_13() const { return ___positiveInfinityVector_13; }
	inline Vector3_t3722313464 * get_address_of_positiveInfinityVector_13() { return &___positiveInfinityVector_13; }
	inline void set_positiveInfinityVector_13(Vector3_t3722313464  value)
	{
		___positiveInfinityVector_13 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_14() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___negativeInfinityVector_14)); }
	inline Vector3_t3722313464  get_negativeInfinityVector_14() const { return ___negativeInfinityVector_14; }
	inline Vector3_t3722313464 * get_address_of_negativeInfinityVector_14() { return &___negativeInfinityVector_14; }
	inline void set_negativeInfinityVector_14(Vector3_t3722313464  value)
	{
		___negativeInfinityVector_14 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VECTOR3_T3722313464_H
#ifndef WWW_T3688466362_H
#define WWW_T3688466362_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.WWW
struct  WWW_t3688466362  : public CustomYieldInstruction_t1895667560
{
public:
	// UnityEngine.Networking.UnityWebRequest UnityEngine.WWW::_uwr
	UnityWebRequest_t463507806 * ____uwr_0;

public:
	inline static int32_t get_offset_of__uwr_0() { return static_cast<int32_t>(offsetof(WWW_t3688466362, ____uwr_0)); }
	inline UnityWebRequest_t463507806 * get__uwr_0() const { return ____uwr_0; }
	inline UnityWebRequest_t463507806 ** get_address_of__uwr_0() { return &____uwr_0; }
	inline void set__uwr_0(UnityWebRequest_t463507806 * value)
	{
		____uwr_0 = value;
		Il2CppCodeGenWriteBarrier((&____uwr_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // WWW_T3688466362_H
#ifndef WAITFORENDOFFRAME_T1314943911_H
#define WAITFORENDOFFRAME_T1314943911_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.WaitForEndOfFrame
struct  WaitForEndOfFrame_t1314943911  : public YieldInstruction_t403091072
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // WAITFORENDOFFRAME_T1314943911_H
#ifndef WAITFORSECONDS_T1699091251_H
#define WAITFORSECONDS_T1699091251_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.WaitForSeconds
struct  WaitForSeconds_t1699091251  : public YieldInstruction_t403091072
{
public:
	// System.Single UnityEngine.WaitForSeconds::m_Seconds
	float ___m_Seconds_0;

public:
	inline static int32_t get_offset_of_m_Seconds_0() { return static_cast<int32_t>(offsetof(WaitForSeconds_t1699091251, ___m_Seconds_0)); }
	inline float get_m_Seconds_0() const { return ___m_Seconds_0; }
	inline float* get_address_of_m_Seconds_0() { return &___m_Seconds_0; }
	inline void set_m_Seconds_0(float value)
	{
		___m_Seconds_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.WaitForSeconds
struct WaitForSeconds_t1699091251_marshaled_pinvoke : public YieldInstruction_t403091072_marshaled_pinvoke
{
	float ___m_Seconds_0;
};
// Native definition for COM marshalling of UnityEngine.WaitForSeconds
struct WaitForSeconds_t1699091251_marshaled_com : public YieldInstruction_t403091072_marshaled_com
{
	float ___m_Seconds_0;
};
#endif // WAITFORSECONDS_T1699091251_H
#ifndef ENUMERATOR_T2086727927_H
#define ENUMERATOR_T2086727927_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>
struct  Enumerator_t2086727927 
{
public:
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::dictionary
	Dictionary_2_t132545152 * ___dictionary_0;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::next
	int32_t ___next_1;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::stamp
	int32_t ___stamp_2;
	// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::current
	KeyValuePair_2_t2530217319  ___current_3;

public:
	inline static int32_t get_offset_of_dictionary_0() { return static_cast<int32_t>(offsetof(Enumerator_t2086727927, ___dictionary_0)); }
	inline Dictionary_2_t132545152 * get_dictionary_0() const { return ___dictionary_0; }
	inline Dictionary_2_t132545152 ** get_address_of_dictionary_0() { return &___dictionary_0; }
	inline void set_dictionary_0(Dictionary_2_t132545152 * value)
	{
		___dictionary_0 = value;
		Il2CppCodeGenWriteBarrier((&___dictionary_0), value);
	}

	inline static int32_t get_offset_of_next_1() { return static_cast<int32_t>(offsetof(Enumerator_t2086727927, ___next_1)); }
	inline int32_t get_next_1() const { return ___next_1; }
	inline int32_t* get_address_of_next_1() { return &___next_1; }
	inline void set_next_1(int32_t value)
	{
		___next_1 = value;
	}

	inline static int32_t get_offset_of_stamp_2() { return static_cast<int32_t>(offsetof(Enumerator_t2086727927, ___stamp_2)); }
	inline int32_t get_stamp_2() const { return ___stamp_2; }
	inline int32_t* get_address_of_stamp_2() { return &___stamp_2; }
	inline void set_stamp_2(int32_t value)
	{
		___stamp_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_t2086727927, ___current_3)); }
	inline KeyValuePair_2_t2530217319  get_current_3() const { return ___current_3; }
	inline KeyValuePair_2_t2530217319 * get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(KeyValuePair_2_t2530217319  value)
	{
		___current_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENUMERATOR_T2086727927_H
#ifndef ENUMERATOR_T176868261_H
#define ENUMERATOR_T176868261_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.Dictionary`2/Enumerator<System.String,CUDLR.CommandTree>
struct  Enumerator_t176868261 
{
public:
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::dictionary
	Dictionary_2_t2517652782 * ___dictionary_0;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::next
	int32_t ___next_1;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::stamp
	int32_t ___stamp_2;
	// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::current
	KeyValuePair_2_t620357653  ___current_3;

public:
	inline static int32_t get_offset_of_dictionary_0() { return static_cast<int32_t>(offsetof(Enumerator_t176868261, ___dictionary_0)); }
	inline Dictionary_2_t2517652782 * get_dictionary_0() const { return ___dictionary_0; }
	inline Dictionary_2_t2517652782 ** get_address_of_dictionary_0() { return &___dictionary_0; }
	inline void set_dictionary_0(Dictionary_2_t2517652782 * value)
	{
		___dictionary_0 = value;
		Il2CppCodeGenWriteBarrier((&___dictionary_0), value);
	}

	inline static int32_t get_offset_of_next_1() { return static_cast<int32_t>(offsetof(Enumerator_t176868261, ___next_1)); }
	inline int32_t get_next_1() const { return ___next_1; }
	inline int32_t* get_address_of_next_1() { return &___next_1; }
	inline void set_next_1(int32_t value)
	{
		___next_1 = value;
	}

	inline static int32_t get_offset_of_stamp_2() { return static_cast<int32_t>(offsetof(Enumerator_t176868261, ___stamp_2)); }
	inline int32_t get_stamp_2() const { return ___stamp_2; }
	inline int32_t* get_address_of_stamp_2() { return &___stamp_2; }
	inline void set_stamp_2(int32_t value)
	{
		___stamp_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_t176868261, ___current_3)); }
	inline KeyValuePair_2_t620357653  get_current_3() const { return ___current_3; }
	inline KeyValuePair_2_t620357653 * get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(KeyValuePair_2_t620357653  value)
	{
		___current_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENUMERATOR_T176868261_H
#ifndef DELEGATE_T1188392813_H
#define DELEGATE_T1188392813_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Delegate
struct  Delegate_t1188392813  : public RuntimeObject
{
public:
	// System.IntPtr System.Delegate::method_ptr
	Il2CppMethodPointer ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	intptr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject * ___m_target_2;
	// System.IntPtr System.Delegate::method
	intptr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	intptr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_5;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t * ___method_info_6;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t * ___original_method_info_7;
	// System.DelegateData System.Delegate::data
	DelegateData_t1677132599 * ___data_8;

public:
	inline static int32_t get_offset_of_method_ptr_0() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___method_ptr_0)); }
	inline Il2CppMethodPointer get_method_ptr_0() const { return ___method_ptr_0; }
	inline Il2CppMethodPointer* get_address_of_method_ptr_0() { return &___method_ptr_0; }
	inline void set_method_ptr_0(Il2CppMethodPointer value)
	{
		___method_ptr_0 = value;
	}

	inline static int32_t get_offset_of_invoke_impl_1() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___invoke_impl_1)); }
	inline intptr_t get_invoke_impl_1() const { return ___invoke_impl_1; }
	inline intptr_t* get_address_of_invoke_impl_1() { return &___invoke_impl_1; }
	inline void set_invoke_impl_1(intptr_t value)
	{
		___invoke_impl_1 = value;
	}

	inline static int32_t get_offset_of_m_target_2() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___m_target_2)); }
	inline RuntimeObject * get_m_target_2() const { return ___m_target_2; }
	inline RuntimeObject ** get_address_of_m_target_2() { return &___m_target_2; }
	inline void set_m_target_2(RuntimeObject * value)
	{
		___m_target_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_target_2), value);
	}

	inline static int32_t get_offset_of_method_3() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___method_3)); }
	inline intptr_t get_method_3() const { return ___method_3; }
	inline intptr_t* get_address_of_method_3() { return &___method_3; }
	inline void set_method_3(intptr_t value)
	{
		___method_3 = value;
	}

	inline static int32_t get_offset_of_delegate_trampoline_4() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___delegate_trampoline_4)); }
	inline intptr_t get_delegate_trampoline_4() const { return ___delegate_trampoline_4; }
	inline intptr_t* get_address_of_delegate_trampoline_4() { return &___delegate_trampoline_4; }
	inline void set_delegate_trampoline_4(intptr_t value)
	{
		___delegate_trampoline_4 = value;
	}

	inline static int32_t get_offset_of_method_code_5() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___method_code_5)); }
	inline intptr_t get_method_code_5() const { return ___method_code_5; }
	inline intptr_t* get_address_of_method_code_5() { return &___method_code_5; }
	inline void set_method_code_5(intptr_t value)
	{
		___method_code_5 = value;
	}

	inline static int32_t get_offset_of_method_info_6() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___method_info_6)); }
	inline MethodInfo_t * get_method_info_6() const { return ___method_info_6; }
	inline MethodInfo_t ** get_address_of_method_info_6() { return &___method_info_6; }
	inline void set_method_info_6(MethodInfo_t * value)
	{
		___method_info_6 = value;
		Il2CppCodeGenWriteBarrier((&___method_info_6), value);
	}

	inline static int32_t get_offset_of_original_method_info_7() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___original_method_info_7)); }
	inline MethodInfo_t * get_original_method_info_7() const { return ___original_method_info_7; }
	inline MethodInfo_t ** get_address_of_original_method_info_7() { return &___original_method_info_7; }
	inline void set_original_method_info_7(MethodInfo_t * value)
	{
		___original_method_info_7 = value;
		Il2CppCodeGenWriteBarrier((&___original_method_info_7), value);
	}

	inline static int32_t get_offset_of_data_8() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___data_8)); }
	inline DelegateData_t1677132599 * get_data_8() const { return ___data_8; }
	inline DelegateData_t1677132599 ** get_address_of_data_8() { return &___data_8; }
	inline void set_data_8(DelegateData_t1677132599 * value)
	{
		___data_8 = value;
		Il2CppCodeGenWriteBarrier((&___data_8), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DELEGATE_T1188392813_H
#ifndef FILEACCESS_T1659085276_H
#define FILEACCESS_T1659085276_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.IO.FileAccess
struct  FileAccess_t1659085276 
{
public:
	// System.Int32 System.IO.FileAccess::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(FileAccess_t1659085276, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FILEACCESS_T1659085276_H
#ifndef AUTHENTICATIONSCHEMES_T3459406435_H
#define AUTHENTICATIONSCHEMES_T3459406435_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.AuthenticationSchemes
struct  AuthenticationSchemes_t3459406435 
{
public:
	// System.Int32 System.Net.AuthenticationSchemes::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(AuthenticationSchemes_t3459406435, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // AUTHENTICATIONSCHEMES_T3459406435_H
#ifndef HTTPLISTENERREQUEST_T630699488_H
#define HTTPLISTENERREQUEST_T630699488_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.HttpListenerRequest
struct  HttpListenerRequest_t630699488  : public RuntimeObject
{
public:
	// System.String[] System.Net.HttpListenerRequest::accept_types
	StringU5BU5D_t1281789340* ___accept_types_0;
	// System.Text.Encoding System.Net.HttpListenerRequest::content_encoding
	Encoding_t1523322056 * ___content_encoding_1;
	// System.Int64 System.Net.HttpListenerRequest::content_length
	int64_t ___content_length_2;
	// System.Boolean System.Net.HttpListenerRequest::cl_set
	bool ___cl_set_3;
	// System.Net.CookieCollection System.Net.HttpListenerRequest::cookies
	CookieCollection_t3881042616 * ___cookies_4;
	// System.Net.WebHeaderCollection System.Net.HttpListenerRequest::headers
	WebHeaderCollection_t1942268960 * ___headers_5;
	// System.String System.Net.HttpListenerRequest::method
	String_t* ___method_6;
	// System.IO.Stream System.Net.HttpListenerRequest::input_stream
	Stream_t1273022909 * ___input_stream_7;
	// System.Version System.Net.HttpListenerRequest::version
	Version_t3456873960 * ___version_8;
	// System.Collections.Specialized.NameValueCollection System.Net.HttpListenerRequest::query_string
	NameValueCollection_t407452768 * ___query_string_9;
	// System.String System.Net.HttpListenerRequest::raw_url
	String_t* ___raw_url_10;
	// System.Guid System.Net.HttpListenerRequest::identifier
	Guid_t  ___identifier_11;
	// System.Uri System.Net.HttpListenerRequest::url
	Uri_t100236324 * ___url_12;
	// System.Uri System.Net.HttpListenerRequest::referrer
	Uri_t100236324 * ___referrer_13;
	// System.String[] System.Net.HttpListenerRequest::user_languages
	StringU5BU5D_t1281789340* ___user_languages_14;
	// System.Net.HttpListenerContext System.Net.HttpListenerRequest::context
	HttpListenerContext_t424880822 * ___context_15;
	// System.Boolean System.Net.HttpListenerRequest::is_chunked
	bool ___is_chunked_16;

public:
	inline static int32_t get_offset_of_accept_types_0() { return static_cast<int32_t>(offsetof(HttpListenerRequest_t630699488, ___accept_types_0)); }
	inline StringU5BU5D_t1281789340* get_accept_types_0() const { return ___accept_types_0; }
	inline StringU5BU5D_t1281789340** get_address_of_accept_types_0() { return &___accept_types_0; }
	inline void set_accept_types_0(StringU5BU5D_t1281789340* value)
	{
		___accept_types_0 = value;
		Il2CppCodeGenWriteBarrier((&___accept_types_0), value);
	}

	inline static int32_t get_offset_of_content_encoding_1() { return static_cast<int32_t>(offsetof(HttpListenerRequest_t630699488, ___content_encoding_1)); }
	inline Encoding_t1523322056 * get_content_encoding_1() const { return ___content_encoding_1; }
	inline Encoding_t1523322056 ** get_address_of_content_encoding_1() { return &___content_encoding_1; }
	inline void set_content_encoding_1(Encoding_t1523322056 * value)
	{
		___content_encoding_1 = value;
		Il2CppCodeGenWriteBarrier((&___content_encoding_1), value);
	}

	inline static int32_t get_offset_of_content_length_2() { return static_cast<int32_t>(offsetof(HttpListenerRequest_t630699488, ___content_length_2)); }
	inline int64_t get_content_length_2() const { return ___content_length_2; }
	inline int64_t* get_address_of_content_length_2() { return &___content_length_2; }
	inline void set_content_length_2(int64_t value)
	{
		___content_length_2 = value;
	}

	inline static int32_t get_offset_of_cl_set_3() { return static_cast<int32_t>(offsetof(HttpListenerRequest_t630699488, ___cl_set_3)); }
	inline bool get_cl_set_3() const { return ___cl_set_3; }
	inline bool* get_address_of_cl_set_3() { return &___cl_set_3; }
	inline void set_cl_set_3(bool value)
	{
		___cl_set_3 = value;
	}

	inline static int32_t get_offset_of_cookies_4() { return static_cast<int32_t>(offsetof(HttpListenerRequest_t630699488, ___cookies_4)); }
	inline CookieCollection_t3881042616 * get_cookies_4() const { return ___cookies_4; }
	inline CookieCollection_t3881042616 ** get_address_of_cookies_4() { return &___cookies_4; }
	inline void set_cookies_4(CookieCollection_t3881042616 * value)
	{
		___cookies_4 = value;
		Il2CppCodeGenWriteBarrier((&___cookies_4), value);
	}

	inline static int32_t get_offset_of_headers_5() { return static_cast<int32_t>(offsetof(HttpListenerRequest_t630699488, ___headers_5)); }
	inline WebHeaderCollection_t1942268960 * get_headers_5() const { return ___headers_5; }
	inline WebHeaderCollection_t1942268960 ** get_address_of_headers_5() { return &___headers_5; }
	inline void set_headers_5(WebHeaderCollection_t1942268960 * value)
	{
		___headers_5 = value;
		Il2CppCodeGenWriteBarrier((&___headers_5), value);
	}

	inline static int32_t get_offset_of_method_6() { return static_cast<int32_t>(offsetof(HttpListenerRequest_t630699488, ___method_6)); }
	inline String_t* get_method_6() const { return ___method_6; }
	inline String_t** get_address_of_method_6() { return &___method_6; }
	inline void set_method_6(String_t* value)
	{
		___method_6 = value;
		Il2CppCodeGenWriteBarrier((&___method_6), value);
	}

	inline static int32_t get_offset_of_input_stream_7() { return static_cast<int32_t>(offsetof(HttpListenerRequest_t630699488, ___input_stream_7)); }
	inline Stream_t1273022909 * get_input_stream_7() const { return ___input_stream_7; }
	inline Stream_t1273022909 ** get_address_of_input_stream_7() { return &___input_stream_7; }
	inline void set_input_stream_7(Stream_t1273022909 * value)
	{
		___input_stream_7 = value;
		Il2CppCodeGenWriteBarrier((&___input_stream_7), value);
	}

	inline static int32_t get_offset_of_version_8() { return static_cast<int32_t>(offsetof(HttpListenerRequest_t630699488, ___version_8)); }
	inline Version_t3456873960 * get_version_8() const { return ___version_8; }
	inline Version_t3456873960 ** get_address_of_version_8() { return &___version_8; }
	inline void set_version_8(Version_t3456873960 * value)
	{
		___version_8 = value;
		Il2CppCodeGenWriteBarrier((&___version_8), value);
	}

	inline static int32_t get_offset_of_query_string_9() { return static_cast<int32_t>(offsetof(HttpListenerRequest_t630699488, ___query_string_9)); }
	inline NameValueCollection_t407452768 * get_query_string_9() const { return ___query_string_9; }
	inline NameValueCollection_t407452768 ** get_address_of_query_string_9() { return &___query_string_9; }
	inline void set_query_string_9(NameValueCollection_t407452768 * value)
	{
		___query_string_9 = value;
		Il2CppCodeGenWriteBarrier((&___query_string_9), value);
	}

	inline static int32_t get_offset_of_raw_url_10() { return static_cast<int32_t>(offsetof(HttpListenerRequest_t630699488, ___raw_url_10)); }
	inline String_t* get_raw_url_10() const { return ___raw_url_10; }
	inline String_t** get_address_of_raw_url_10() { return &___raw_url_10; }
	inline void set_raw_url_10(String_t* value)
	{
		___raw_url_10 = value;
		Il2CppCodeGenWriteBarrier((&___raw_url_10), value);
	}

	inline static int32_t get_offset_of_identifier_11() { return static_cast<int32_t>(offsetof(HttpListenerRequest_t630699488, ___identifier_11)); }
	inline Guid_t  get_identifier_11() const { return ___identifier_11; }
	inline Guid_t * get_address_of_identifier_11() { return &___identifier_11; }
	inline void set_identifier_11(Guid_t  value)
	{
		___identifier_11 = value;
	}

	inline static int32_t get_offset_of_url_12() { return static_cast<int32_t>(offsetof(HttpListenerRequest_t630699488, ___url_12)); }
	inline Uri_t100236324 * get_url_12() const { return ___url_12; }
	inline Uri_t100236324 ** get_address_of_url_12() { return &___url_12; }
	inline void set_url_12(Uri_t100236324 * value)
	{
		___url_12 = value;
		Il2CppCodeGenWriteBarrier((&___url_12), value);
	}

	inline static int32_t get_offset_of_referrer_13() { return static_cast<int32_t>(offsetof(HttpListenerRequest_t630699488, ___referrer_13)); }
	inline Uri_t100236324 * get_referrer_13() const { return ___referrer_13; }
	inline Uri_t100236324 ** get_address_of_referrer_13() { return &___referrer_13; }
	inline void set_referrer_13(Uri_t100236324 * value)
	{
		___referrer_13 = value;
		Il2CppCodeGenWriteBarrier((&___referrer_13), value);
	}

	inline static int32_t get_offset_of_user_languages_14() { return static_cast<int32_t>(offsetof(HttpListenerRequest_t630699488, ___user_languages_14)); }
	inline StringU5BU5D_t1281789340* get_user_languages_14() const { return ___user_languages_14; }
	inline StringU5BU5D_t1281789340** get_address_of_user_languages_14() { return &___user_languages_14; }
	inline void set_user_languages_14(StringU5BU5D_t1281789340* value)
	{
		___user_languages_14 = value;
		Il2CppCodeGenWriteBarrier((&___user_languages_14), value);
	}

	inline static int32_t get_offset_of_context_15() { return static_cast<int32_t>(offsetof(HttpListenerRequest_t630699488, ___context_15)); }
	inline HttpListenerContext_t424880822 * get_context_15() const { return ___context_15; }
	inline HttpListenerContext_t424880822 ** get_address_of_context_15() { return &___context_15; }
	inline void set_context_15(HttpListenerContext_t424880822 * value)
	{
		___context_15 = value;
		Il2CppCodeGenWriteBarrier((&___context_15), value);
	}

	inline static int32_t get_offset_of_is_chunked_16() { return static_cast<int32_t>(offsetof(HttpListenerRequest_t630699488, ___is_chunked_16)); }
	inline bool get_is_chunked_16() const { return ___is_chunked_16; }
	inline bool* get_address_of_is_chunked_16() { return &___is_chunked_16; }
	inline void set_is_chunked_16(bool value)
	{
		___is_chunked_16 = value;
	}
};

struct HttpListenerRequest_t630699488_StaticFields
{
public:
	// System.Byte[] System.Net.HttpListenerRequest::_100continue
	ByteU5BU5D_t4116647657* ____100continue_17;
	// System.String[] System.Net.HttpListenerRequest::no_body_methods
	StringU5BU5D_t1281789340* ___no_body_methods_18;
	// System.Char[] System.Net.HttpListenerRequest::separators
	CharU5BU5D_t3528271667* ___separators_19;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> System.Net.HttpListenerRequest::<>f__switch$map7
	Dictionary_2_t2736202052 * ___U3CU3Ef__switchU24map7_20;

public:
	inline static int32_t get_offset_of__100continue_17() { return static_cast<int32_t>(offsetof(HttpListenerRequest_t630699488_StaticFields, ____100continue_17)); }
	inline ByteU5BU5D_t4116647657* get__100continue_17() const { return ____100continue_17; }
	inline ByteU5BU5D_t4116647657** get_address_of__100continue_17() { return &____100continue_17; }
	inline void set__100continue_17(ByteU5BU5D_t4116647657* value)
	{
		____100continue_17 = value;
		Il2CppCodeGenWriteBarrier((&____100continue_17), value);
	}

	inline static int32_t get_offset_of_no_body_methods_18() { return static_cast<int32_t>(offsetof(HttpListenerRequest_t630699488_StaticFields, ___no_body_methods_18)); }
	inline StringU5BU5D_t1281789340* get_no_body_methods_18() const { return ___no_body_methods_18; }
	inline StringU5BU5D_t1281789340** get_address_of_no_body_methods_18() { return &___no_body_methods_18; }
	inline void set_no_body_methods_18(StringU5BU5D_t1281789340* value)
	{
		___no_body_methods_18 = value;
		Il2CppCodeGenWriteBarrier((&___no_body_methods_18), value);
	}

	inline static int32_t get_offset_of_separators_19() { return static_cast<int32_t>(offsetof(HttpListenerRequest_t630699488_StaticFields, ___separators_19)); }
	inline CharU5BU5D_t3528271667* get_separators_19() const { return ___separators_19; }
	inline CharU5BU5D_t3528271667** get_address_of_separators_19() { return &___separators_19; }
	inline void set_separators_19(CharU5BU5D_t3528271667* value)
	{
		___separators_19 = value;
		Il2CppCodeGenWriteBarrier((&___separators_19), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__switchU24map7_20() { return static_cast<int32_t>(offsetof(HttpListenerRequest_t630699488_StaticFields, ___U3CU3Ef__switchU24map7_20)); }
	inline Dictionary_2_t2736202052 * get_U3CU3Ef__switchU24map7_20() const { return ___U3CU3Ef__switchU24map7_20; }
	inline Dictionary_2_t2736202052 ** get_address_of_U3CU3Ef__switchU24map7_20() { return &___U3CU3Ef__switchU24map7_20; }
	inline void set_U3CU3Ef__switchU24map7_20(Dictionary_2_t2736202052 * value)
	{
		___U3CU3Ef__switchU24map7_20 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__switchU24map7_20), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // HTTPLISTENERREQUEST_T630699488_H
#ifndef NOTSUPPORTEDEXCEPTION_T1314879016_H
#define NOTSUPPORTEDEXCEPTION_T1314879016_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.NotSupportedException
struct  NotSupportedException_t1314879016  : public SystemException_t176217640
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NOTSUPPORTEDEXCEPTION_T1314879016_H
#ifndef ASSEMBLY_T_H
#define ASSEMBLY_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.Assembly
struct  Assembly_t  : public RuntimeObject
{
public:
	// System.IntPtr System.Reflection.Assembly::_mono_assembly
	intptr_t ____mono_assembly_0;
	// System.Reflection.Assembly/ResolveEventHolder System.Reflection.Assembly::resolve_event_holder
	ResolveEventHolder_t2120639521 * ___resolve_event_holder_1;
	// System.Security.Policy.Evidence System.Reflection.Assembly::_evidence
	Evidence_t2008144148 * ____evidence_2;
	// System.Security.PermissionSet System.Reflection.Assembly::_minimum
	PermissionSet_t223948603 * ____minimum_3;
	// System.Security.PermissionSet System.Reflection.Assembly::_optional
	PermissionSet_t223948603 * ____optional_4;
	// System.Security.PermissionSet System.Reflection.Assembly::_refuse
	PermissionSet_t223948603 * ____refuse_5;
	// System.Security.PermissionSet System.Reflection.Assembly::_granted
	PermissionSet_t223948603 * ____granted_6;
	// System.Security.PermissionSet System.Reflection.Assembly::_denied
	PermissionSet_t223948603 * ____denied_7;
	// System.Boolean System.Reflection.Assembly::fromByteArray
	bool ___fromByteArray_8;
	// System.String System.Reflection.Assembly::assemblyName
	String_t* ___assemblyName_9;

public:
	inline static int32_t get_offset_of__mono_assembly_0() { return static_cast<int32_t>(offsetof(Assembly_t, ____mono_assembly_0)); }
	inline intptr_t get__mono_assembly_0() const { return ____mono_assembly_0; }
	inline intptr_t* get_address_of__mono_assembly_0() { return &____mono_assembly_0; }
	inline void set__mono_assembly_0(intptr_t value)
	{
		____mono_assembly_0 = value;
	}

	inline static int32_t get_offset_of_resolve_event_holder_1() { return static_cast<int32_t>(offsetof(Assembly_t, ___resolve_event_holder_1)); }
	inline ResolveEventHolder_t2120639521 * get_resolve_event_holder_1() const { return ___resolve_event_holder_1; }
	inline ResolveEventHolder_t2120639521 ** get_address_of_resolve_event_holder_1() { return &___resolve_event_holder_1; }
	inline void set_resolve_event_holder_1(ResolveEventHolder_t2120639521 * value)
	{
		___resolve_event_holder_1 = value;
		Il2CppCodeGenWriteBarrier((&___resolve_event_holder_1), value);
	}

	inline static int32_t get_offset_of__evidence_2() { return static_cast<int32_t>(offsetof(Assembly_t, ____evidence_2)); }
	inline Evidence_t2008144148 * get__evidence_2() const { return ____evidence_2; }
	inline Evidence_t2008144148 ** get_address_of__evidence_2() { return &____evidence_2; }
	inline void set__evidence_2(Evidence_t2008144148 * value)
	{
		____evidence_2 = value;
		Il2CppCodeGenWriteBarrier((&____evidence_2), value);
	}

	inline static int32_t get_offset_of__minimum_3() { return static_cast<int32_t>(offsetof(Assembly_t, ____minimum_3)); }
	inline PermissionSet_t223948603 * get__minimum_3() const { return ____minimum_3; }
	inline PermissionSet_t223948603 ** get_address_of__minimum_3() { return &____minimum_3; }
	inline void set__minimum_3(PermissionSet_t223948603 * value)
	{
		____minimum_3 = value;
		Il2CppCodeGenWriteBarrier((&____minimum_3), value);
	}

	inline static int32_t get_offset_of__optional_4() { return static_cast<int32_t>(offsetof(Assembly_t, ____optional_4)); }
	inline PermissionSet_t223948603 * get__optional_4() const { return ____optional_4; }
	inline PermissionSet_t223948603 ** get_address_of__optional_4() { return &____optional_4; }
	inline void set__optional_4(PermissionSet_t223948603 * value)
	{
		____optional_4 = value;
		Il2CppCodeGenWriteBarrier((&____optional_4), value);
	}

	inline static int32_t get_offset_of__refuse_5() { return static_cast<int32_t>(offsetof(Assembly_t, ____refuse_5)); }
	inline PermissionSet_t223948603 * get__refuse_5() const { return ____refuse_5; }
	inline PermissionSet_t223948603 ** get_address_of__refuse_5() { return &____refuse_5; }
	inline void set__refuse_5(PermissionSet_t223948603 * value)
	{
		____refuse_5 = value;
		Il2CppCodeGenWriteBarrier((&____refuse_5), value);
	}

	inline static int32_t get_offset_of__granted_6() { return static_cast<int32_t>(offsetof(Assembly_t, ____granted_6)); }
	inline PermissionSet_t223948603 * get__granted_6() const { return ____granted_6; }
	inline PermissionSet_t223948603 ** get_address_of__granted_6() { return &____granted_6; }
	inline void set__granted_6(PermissionSet_t223948603 * value)
	{
		____granted_6 = value;
		Il2CppCodeGenWriteBarrier((&____granted_6), value);
	}

	inline static int32_t get_offset_of__denied_7() { return static_cast<int32_t>(offsetof(Assembly_t, ____denied_7)); }
	inline PermissionSet_t223948603 * get__denied_7() const { return ____denied_7; }
	inline PermissionSet_t223948603 ** get_address_of__denied_7() { return &____denied_7; }
	inline void set__denied_7(PermissionSet_t223948603 * value)
	{
		____denied_7 = value;
		Il2CppCodeGenWriteBarrier((&____denied_7), value);
	}

	inline static int32_t get_offset_of_fromByteArray_8() { return static_cast<int32_t>(offsetof(Assembly_t, ___fromByteArray_8)); }
	inline bool get_fromByteArray_8() const { return ___fromByteArray_8; }
	inline bool* get_address_of_fromByteArray_8() { return &___fromByteArray_8; }
	inline void set_fromByteArray_8(bool value)
	{
		___fromByteArray_8 = value;
	}

	inline static int32_t get_offset_of_assemblyName_9() { return static_cast<int32_t>(offsetof(Assembly_t, ___assemblyName_9)); }
	inline String_t* get_assemblyName_9() const { return ___assemblyName_9; }
	inline String_t** get_address_of_assemblyName_9() { return &___assemblyName_9; }
	inline void set_assemblyName_9(String_t* value)
	{
		___assemblyName_9 = value;
		Il2CppCodeGenWriteBarrier((&___assemblyName_9), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ASSEMBLY_T_H
#ifndef BINDINGFLAGS_T2721792723_H
#define BINDINGFLAGS_T2721792723_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.BindingFlags
struct  BindingFlags_t2721792723 
{
public:
	// System.Int32 System.Reflection.BindingFlags::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(BindingFlags_t2721792723, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BINDINGFLAGS_T2721792723_H
#ifndef METHODINFO_T_H
#define METHODINFO_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.MethodInfo
struct  MethodInfo_t  : public MethodBase_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // METHODINFO_T_H
#ifndef RUNTIMETYPEHANDLE_T3027515415_H
#define RUNTIMETYPEHANDLE_T3027515415_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.RuntimeTypeHandle
struct  RuntimeTypeHandle_t3027515415 
{
public:
	// System.IntPtr System.RuntimeTypeHandle::value
	intptr_t ___value_0;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(RuntimeTypeHandle_t3027515415, ___value_0)); }
	inline intptr_t get_value_0() const { return ___value_0; }
	inline intptr_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(intptr_t value)
	{
		___value_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNTIMETYPEHANDLE_T3027515415_H
#ifndef MATCH_T3408321083_H
#define MATCH_T3408321083_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.RegularExpressions.Match
struct  Match_t3408321083  : public Group_t2468205786
{
public:
	// System.Text.RegularExpressions.Regex System.Text.RegularExpressions.Match::regex
	Regex_t3657309853 * ___regex_6;
	// System.Text.RegularExpressions.IMachine System.Text.RegularExpressions.Match::machine
	RuntimeObject* ___machine_7;
	// System.Int32 System.Text.RegularExpressions.Match::text_length
	int32_t ___text_length_8;
	// System.Text.RegularExpressions.GroupCollection System.Text.RegularExpressions.Match::groups
	GroupCollection_t69770484 * ___groups_9;

public:
	inline static int32_t get_offset_of_regex_6() { return static_cast<int32_t>(offsetof(Match_t3408321083, ___regex_6)); }
	inline Regex_t3657309853 * get_regex_6() const { return ___regex_6; }
	inline Regex_t3657309853 ** get_address_of_regex_6() { return &___regex_6; }
	inline void set_regex_6(Regex_t3657309853 * value)
	{
		___regex_6 = value;
		Il2CppCodeGenWriteBarrier((&___regex_6), value);
	}

	inline static int32_t get_offset_of_machine_7() { return static_cast<int32_t>(offsetof(Match_t3408321083, ___machine_7)); }
	inline RuntimeObject* get_machine_7() const { return ___machine_7; }
	inline RuntimeObject** get_address_of_machine_7() { return &___machine_7; }
	inline void set_machine_7(RuntimeObject* value)
	{
		___machine_7 = value;
		Il2CppCodeGenWriteBarrier((&___machine_7), value);
	}

	inline static int32_t get_offset_of_text_length_8() { return static_cast<int32_t>(offsetof(Match_t3408321083, ___text_length_8)); }
	inline int32_t get_text_length_8() const { return ___text_length_8; }
	inline int32_t* get_address_of_text_length_8() { return &___text_length_8; }
	inline void set_text_length_8(int32_t value)
	{
		___text_length_8 = value;
	}

	inline static int32_t get_offset_of_groups_9() { return static_cast<int32_t>(offsetof(Match_t3408321083, ___groups_9)); }
	inline GroupCollection_t69770484 * get_groups_9() const { return ___groups_9; }
	inline GroupCollection_t69770484 ** get_address_of_groups_9() { return &___groups_9; }
	inline void set_groups_9(GroupCollection_t69770484 * value)
	{
		___groups_9 = value;
		Il2CppCodeGenWriteBarrier((&___groups_9), value);
	}
};

struct Match_t3408321083_StaticFields
{
public:
	// System.Text.RegularExpressions.Match System.Text.RegularExpressions.Match::empty
	Match_t3408321083 * ___empty_10;

public:
	inline static int32_t get_offset_of_empty_10() { return static_cast<int32_t>(offsetof(Match_t3408321083_StaticFields, ___empty_10)); }
	inline Match_t3408321083 * get_empty_10() const { return ___empty_10; }
	inline Match_t3408321083 ** get_address_of_empty_10() { return &___empty_10; }
	inline void set_empty_10(Match_t3408321083 * value)
	{
		___empty_10 = value;
		Il2CppCodeGenWriteBarrier((&___empty_10), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MATCH_T3408321083_H
#ifndef REGEXOPTIONS_T92845595_H
#define REGEXOPTIONS_T92845595_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.RegularExpressions.RegexOptions
struct  RegexOptions_t92845595 
{
public:
	// System.Int32 System.Text.RegularExpressions.RegexOptions::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(RegexOptions_t92845595, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // REGEXOPTIONS_T92845595_H
#ifndef THREADSTATE_T2533302383_H
#define THREADSTATE_T2533302383_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Threading.ThreadState
struct  ThreadState_t2533302383 
{
public:
	// System.Int32 System.Threading.ThreadState::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(ThreadState_t2533302383, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // THREADSTATE_T2533302383_H
#ifndef COROUTINE_T3829159415_H
#define COROUTINE_T3829159415_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Coroutine
struct  Coroutine_t3829159415  : public YieldInstruction_t403091072
{
public:
	// System.IntPtr UnityEngine.Coroutine::m_Ptr
	intptr_t ___m_Ptr_0;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(Coroutine_t3829159415, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.Coroutine
struct Coroutine_t3829159415_marshaled_pinvoke : public YieldInstruction_t403091072_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.Coroutine
struct Coroutine_t3829159415_marshaled_com : public YieldInstruction_t403091072_marshaled_com
{
	intptr_t ___m_Ptr_0;
};
#endif // COROUTINE_T3829159415_H
#ifndef LOCATIONSERVICESTATUS_T1778527219_H
#define LOCATIONSERVICESTATUS_T1778527219_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.LocationServiceStatus
struct  LocationServiceStatus_t1778527219 
{
public:
	// System.Int32 UnityEngine.LocationServiceStatus::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(LocationServiceStatus_t1778527219, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LOCATIONSERVICESTATUS_T1778527219_H
#ifndef LOGTYPE_T73765434_H
#define LOGTYPE_T73765434_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.LogType
struct  LogType_t73765434 
{
public:
	// System.Int32 UnityEngine.LogType::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(LogType_t73765434, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LOGTYPE_T73765434_H
#ifndef OBJECT_T631007953_H
#define OBJECT_T631007953_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Object
struct  Object_t631007953  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;

public:
	inline static int32_t get_offset_of_m_CachedPtr_0() { return static_cast<int32_t>(offsetof(Object_t631007953, ___m_CachedPtr_0)); }
	inline intptr_t get_m_CachedPtr_0() const { return ___m_CachedPtr_0; }
	inline intptr_t* get_address_of_m_CachedPtr_0() { return &___m_CachedPtr_0; }
	inline void set_m_CachedPtr_0(intptr_t value)
	{
		___m_CachedPtr_0 = value;
	}
};

struct Object_t631007953_StaticFields
{
public:
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;

public:
	inline static int32_t get_offset_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return static_cast<int32_t>(offsetof(Object_t631007953_StaticFields, ___OffsetOfInstanceIDInCPlusPlusObject_1)); }
	inline int32_t get_OffsetOfInstanceIDInCPlusPlusObject_1() const { return ___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline int32_t* get_address_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return &___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline void set_OffsetOfInstanceIDInCPlusPlusObject_1(int32_t value)
	{
		___OffsetOfInstanceIDInCPlusPlusObject_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_t631007953_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_t631007953_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};
#endif // OBJECT_T631007953_H
#ifndef MAPTYPE_T3185662864_H
#define MAPTYPE_T3185662864_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// packt.FoodyGO.Mapping.GoogleMapTile/MapType
struct  MapType_t3185662864 
{
public:
	// System.Int32 packt.FoodyGO.Mapping.GoogleMapTile/MapType::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(MapType_t3185662864, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MAPTYPE_T3185662864_H
#ifndef ENUMERATOR_T314722136_H
#define ENUMERATOR_T314722136_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<System.Object,System.Object>
struct  Enumerator_t314722136 
{
public:
	// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator::host_enumerator
	Enumerator_t2086727927  ___host_enumerator_0;

public:
	inline static int32_t get_offset_of_host_enumerator_0() { return static_cast<int32_t>(offsetof(Enumerator_t314722136, ___host_enumerator_0)); }
	inline Enumerator_t2086727927  get_host_enumerator_0() const { return ___host_enumerator_0; }
	inline Enumerator_t2086727927 * get_address_of_host_enumerator_0() { return &___host_enumerator_0; }
	inline void set_host_enumerator_0(Enumerator_t2086727927  value)
	{
		___host_enumerator_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENUMERATOR_T314722136_H
#ifndef ENUMERATOR_T2699829766_H
#define ENUMERATOR_T2699829766_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<System.String,CUDLR.CommandTree>
struct  Enumerator_t2699829766 
{
public:
	// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator::host_enumerator
	Enumerator_t176868261  ___host_enumerator_0;

public:
	inline static int32_t get_offset_of_host_enumerator_0() { return static_cast<int32_t>(offsetof(Enumerator_t2699829766, ___host_enumerator_0)); }
	inline Enumerator_t176868261  get_host_enumerator_0() const { return ___host_enumerator_0; }
	inline Enumerator_t176868261 * get_address_of_host_enumerator_0() { return &___host_enumerator_0; }
	inline void set_host_enumerator_0(Enumerator_t176868261  value)
	{
		___host_enumerator_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENUMERATOR_T2699829766_H
#ifndef FILESTREAM_T4292183065_H
#define FILESTREAM_T4292183065_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.IO.FileStream
struct  FileStream_t4292183065  : public Stream_t1273022909
{
public:
	// System.IO.FileAccess System.IO.FileStream::access
	int32_t ___access_1;
	// System.Boolean System.IO.FileStream::owner
	bool ___owner_2;
	// System.Boolean System.IO.FileStream::async
	bool ___async_3;
	// System.Boolean System.IO.FileStream::canseek
	bool ___canseek_4;
	// System.Int64 System.IO.FileStream::append_startpos
	int64_t ___append_startpos_5;
	// System.Boolean System.IO.FileStream::anonymous
	bool ___anonymous_6;
	// System.Byte[] System.IO.FileStream::buf
	ByteU5BU5D_t4116647657* ___buf_7;
	// System.Int32 System.IO.FileStream::buf_size
	int32_t ___buf_size_8;
	// System.Int32 System.IO.FileStream::buf_length
	int32_t ___buf_length_9;
	// System.Int32 System.IO.FileStream::buf_offset
	int32_t ___buf_offset_10;
	// System.Boolean System.IO.FileStream::buf_dirty
	bool ___buf_dirty_11;
	// System.Int64 System.IO.FileStream::buf_start
	int64_t ___buf_start_12;
	// System.String System.IO.FileStream::name
	String_t* ___name_13;
	// System.IntPtr System.IO.FileStream::handle
	intptr_t ___handle_14;

public:
	inline static int32_t get_offset_of_access_1() { return static_cast<int32_t>(offsetof(FileStream_t4292183065, ___access_1)); }
	inline int32_t get_access_1() const { return ___access_1; }
	inline int32_t* get_address_of_access_1() { return &___access_1; }
	inline void set_access_1(int32_t value)
	{
		___access_1 = value;
	}

	inline static int32_t get_offset_of_owner_2() { return static_cast<int32_t>(offsetof(FileStream_t4292183065, ___owner_2)); }
	inline bool get_owner_2() const { return ___owner_2; }
	inline bool* get_address_of_owner_2() { return &___owner_2; }
	inline void set_owner_2(bool value)
	{
		___owner_2 = value;
	}

	inline static int32_t get_offset_of_async_3() { return static_cast<int32_t>(offsetof(FileStream_t4292183065, ___async_3)); }
	inline bool get_async_3() const { return ___async_3; }
	inline bool* get_address_of_async_3() { return &___async_3; }
	inline void set_async_3(bool value)
	{
		___async_3 = value;
	}

	inline static int32_t get_offset_of_canseek_4() { return static_cast<int32_t>(offsetof(FileStream_t4292183065, ___canseek_4)); }
	inline bool get_canseek_4() const { return ___canseek_4; }
	inline bool* get_address_of_canseek_4() { return &___canseek_4; }
	inline void set_canseek_4(bool value)
	{
		___canseek_4 = value;
	}

	inline static int32_t get_offset_of_append_startpos_5() { return static_cast<int32_t>(offsetof(FileStream_t4292183065, ___append_startpos_5)); }
	inline int64_t get_append_startpos_5() const { return ___append_startpos_5; }
	inline int64_t* get_address_of_append_startpos_5() { return &___append_startpos_5; }
	inline void set_append_startpos_5(int64_t value)
	{
		___append_startpos_5 = value;
	}

	inline static int32_t get_offset_of_anonymous_6() { return static_cast<int32_t>(offsetof(FileStream_t4292183065, ___anonymous_6)); }
	inline bool get_anonymous_6() const { return ___anonymous_6; }
	inline bool* get_address_of_anonymous_6() { return &___anonymous_6; }
	inline void set_anonymous_6(bool value)
	{
		___anonymous_6 = value;
	}

	inline static int32_t get_offset_of_buf_7() { return static_cast<int32_t>(offsetof(FileStream_t4292183065, ___buf_7)); }
	inline ByteU5BU5D_t4116647657* get_buf_7() const { return ___buf_7; }
	inline ByteU5BU5D_t4116647657** get_address_of_buf_7() { return &___buf_7; }
	inline void set_buf_7(ByteU5BU5D_t4116647657* value)
	{
		___buf_7 = value;
		Il2CppCodeGenWriteBarrier((&___buf_7), value);
	}

	inline static int32_t get_offset_of_buf_size_8() { return static_cast<int32_t>(offsetof(FileStream_t4292183065, ___buf_size_8)); }
	inline int32_t get_buf_size_8() const { return ___buf_size_8; }
	inline int32_t* get_address_of_buf_size_8() { return &___buf_size_8; }
	inline void set_buf_size_8(int32_t value)
	{
		___buf_size_8 = value;
	}

	inline static int32_t get_offset_of_buf_length_9() { return static_cast<int32_t>(offsetof(FileStream_t4292183065, ___buf_length_9)); }
	inline int32_t get_buf_length_9() const { return ___buf_length_9; }
	inline int32_t* get_address_of_buf_length_9() { return &___buf_length_9; }
	inline void set_buf_length_9(int32_t value)
	{
		___buf_length_9 = value;
	}

	inline static int32_t get_offset_of_buf_offset_10() { return static_cast<int32_t>(offsetof(FileStream_t4292183065, ___buf_offset_10)); }
	inline int32_t get_buf_offset_10() const { return ___buf_offset_10; }
	inline int32_t* get_address_of_buf_offset_10() { return &___buf_offset_10; }
	inline void set_buf_offset_10(int32_t value)
	{
		___buf_offset_10 = value;
	}

	inline static int32_t get_offset_of_buf_dirty_11() { return static_cast<int32_t>(offsetof(FileStream_t4292183065, ___buf_dirty_11)); }
	inline bool get_buf_dirty_11() const { return ___buf_dirty_11; }
	inline bool* get_address_of_buf_dirty_11() { return &___buf_dirty_11; }
	inline void set_buf_dirty_11(bool value)
	{
		___buf_dirty_11 = value;
	}

	inline static int32_t get_offset_of_buf_start_12() { return static_cast<int32_t>(offsetof(FileStream_t4292183065, ___buf_start_12)); }
	inline int64_t get_buf_start_12() const { return ___buf_start_12; }
	inline int64_t* get_address_of_buf_start_12() { return &___buf_start_12; }
	inline void set_buf_start_12(int64_t value)
	{
		___buf_start_12 = value;
	}

	inline static int32_t get_offset_of_name_13() { return static_cast<int32_t>(offsetof(FileStream_t4292183065, ___name_13)); }
	inline String_t* get_name_13() const { return ___name_13; }
	inline String_t** get_address_of_name_13() { return &___name_13; }
	inline void set_name_13(String_t* value)
	{
		___name_13 = value;
		Il2CppCodeGenWriteBarrier((&___name_13), value);
	}

	inline static int32_t get_offset_of_handle_14() { return static_cast<int32_t>(offsetof(FileStream_t4292183065, ___handle_14)); }
	inline intptr_t get_handle_14() const { return ___handle_14; }
	inline intptr_t* get_address_of_handle_14() { return &___handle_14; }
	inline void set_handle_14(intptr_t value)
	{
		___handle_14 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FILESTREAM_T4292183065_H
#ifndef MULTICASTDELEGATE_T_H
#define MULTICASTDELEGATE_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.MulticastDelegate
struct  MulticastDelegate_t  : public Delegate_t1188392813
{
public:
	// System.MulticastDelegate System.MulticastDelegate::prev
	MulticastDelegate_t * ___prev_9;
	// System.MulticastDelegate System.MulticastDelegate::kpm_next
	MulticastDelegate_t * ___kpm_next_10;

public:
	inline static int32_t get_offset_of_prev_9() { return static_cast<int32_t>(offsetof(MulticastDelegate_t, ___prev_9)); }
	inline MulticastDelegate_t * get_prev_9() const { return ___prev_9; }
	inline MulticastDelegate_t ** get_address_of_prev_9() { return &___prev_9; }
	inline void set_prev_9(MulticastDelegate_t * value)
	{
		___prev_9 = value;
		Il2CppCodeGenWriteBarrier((&___prev_9), value);
	}

	inline static int32_t get_offset_of_kpm_next_10() { return static_cast<int32_t>(offsetof(MulticastDelegate_t, ___kpm_next_10)); }
	inline MulticastDelegate_t * get_kpm_next_10() const { return ___kpm_next_10; }
	inline MulticastDelegate_t ** get_address_of_kpm_next_10() { return &___kpm_next_10; }
	inline void set_kpm_next_10(MulticastDelegate_t * value)
	{
		___kpm_next_10 = value;
		Il2CppCodeGenWriteBarrier((&___kpm_next_10), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MULTICASTDELEGATE_T_H
#ifndef HTTPLISTENER_T988452056_H
#define HTTPLISTENER_T988452056_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.HttpListener
struct  HttpListener_t988452056  : public RuntimeObject
{
public:
	// System.Net.AuthenticationSchemes System.Net.HttpListener::auth_schemes
	int32_t ___auth_schemes_0;
	// System.Net.HttpListenerPrefixCollection System.Net.HttpListener::prefixes
	HttpListenerPrefixCollection_t2963430373 * ___prefixes_1;
	// System.Net.AuthenticationSchemeSelector System.Net.HttpListener::auth_selector
	AuthenticationSchemeSelector_t375327801 * ___auth_selector_2;
	// System.String System.Net.HttpListener::realm
	String_t* ___realm_3;
	// System.Boolean System.Net.HttpListener::ignore_write_exceptions
	bool ___ignore_write_exceptions_4;
	// System.Boolean System.Net.HttpListener::unsafe_ntlm_auth
	bool ___unsafe_ntlm_auth_5;
	// System.Boolean System.Net.HttpListener::listening
	bool ___listening_6;
	// System.Boolean System.Net.HttpListener::disposed
	bool ___disposed_7;
	// System.Collections.Hashtable System.Net.HttpListener::registry
	Hashtable_t1853889766 * ___registry_8;
	// System.Collections.ArrayList System.Net.HttpListener::ctx_queue
	ArrayList_t2718874744 * ___ctx_queue_9;
	// System.Collections.ArrayList System.Net.HttpListener::wait_queue
	ArrayList_t2718874744 * ___wait_queue_10;

public:
	inline static int32_t get_offset_of_auth_schemes_0() { return static_cast<int32_t>(offsetof(HttpListener_t988452056, ___auth_schemes_0)); }
	inline int32_t get_auth_schemes_0() const { return ___auth_schemes_0; }
	inline int32_t* get_address_of_auth_schemes_0() { return &___auth_schemes_0; }
	inline void set_auth_schemes_0(int32_t value)
	{
		___auth_schemes_0 = value;
	}

	inline static int32_t get_offset_of_prefixes_1() { return static_cast<int32_t>(offsetof(HttpListener_t988452056, ___prefixes_1)); }
	inline HttpListenerPrefixCollection_t2963430373 * get_prefixes_1() const { return ___prefixes_1; }
	inline HttpListenerPrefixCollection_t2963430373 ** get_address_of_prefixes_1() { return &___prefixes_1; }
	inline void set_prefixes_1(HttpListenerPrefixCollection_t2963430373 * value)
	{
		___prefixes_1 = value;
		Il2CppCodeGenWriteBarrier((&___prefixes_1), value);
	}

	inline static int32_t get_offset_of_auth_selector_2() { return static_cast<int32_t>(offsetof(HttpListener_t988452056, ___auth_selector_2)); }
	inline AuthenticationSchemeSelector_t375327801 * get_auth_selector_2() const { return ___auth_selector_2; }
	inline AuthenticationSchemeSelector_t375327801 ** get_address_of_auth_selector_2() { return &___auth_selector_2; }
	inline void set_auth_selector_2(AuthenticationSchemeSelector_t375327801 * value)
	{
		___auth_selector_2 = value;
		Il2CppCodeGenWriteBarrier((&___auth_selector_2), value);
	}

	inline static int32_t get_offset_of_realm_3() { return static_cast<int32_t>(offsetof(HttpListener_t988452056, ___realm_3)); }
	inline String_t* get_realm_3() const { return ___realm_3; }
	inline String_t** get_address_of_realm_3() { return &___realm_3; }
	inline void set_realm_3(String_t* value)
	{
		___realm_3 = value;
		Il2CppCodeGenWriteBarrier((&___realm_3), value);
	}

	inline static int32_t get_offset_of_ignore_write_exceptions_4() { return static_cast<int32_t>(offsetof(HttpListener_t988452056, ___ignore_write_exceptions_4)); }
	inline bool get_ignore_write_exceptions_4() const { return ___ignore_write_exceptions_4; }
	inline bool* get_address_of_ignore_write_exceptions_4() { return &___ignore_write_exceptions_4; }
	inline void set_ignore_write_exceptions_4(bool value)
	{
		___ignore_write_exceptions_4 = value;
	}

	inline static int32_t get_offset_of_unsafe_ntlm_auth_5() { return static_cast<int32_t>(offsetof(HttpListener_t988452056, ___unsafe_ntlm_auth_5)); }
	inline bool get_unsafe_ntlm_auth_5() const { return ___unsafe_ntlm_auth_5; }
	inline bool* get_address_of_unsafe_ntlm_auth_5() { return &___unsafe_ntlm_auth_5; }
	inline void set_unsafe_ntlm_auth_5(bool value)
	{
		___unsafe_ntlm_auth_5 = value;
	}

	inline static int32_t get_offset_of_listening_6() { return static_cast<int32_t>(offsetof(HttpListener_t988452056, ___listening_6)); }
	inline bool get_listening_6() const { return ___listening_6; }
	inline bool* get_address_of_listening_6() { return &___listening_6; }
	inline void set_listening_6(bool value)
	{
		___listening_6 = value;
	}

	inline static int32_t get_offset_of_disposed_7() { return static_cast<int32_t>(offsetof(HttpListener_t988452056, ___disposed_7)); }
	inline bool get_disposed_7() const { return ___disposed_7; }
	inline bool* get_address_of_disposed_7() { return &___disposed_7; }
	inline void set_disposed_7(bool value)
	{
		___disposed_7 = value;
	}

	inline static int32_t get_offset_of_registry_8() { return static_cast<int32_t>(offsetof(HttpListener_t988452056, ___registry_8)); }
	inline Hashtable_t1853889766 * get_registry_8() const { return ___registry_8; }
	inline Hashtable_t1853889766 ** get_address_of_registry_8() { return &___registry_8; }
	inline void set_registry_8(Hashtable_t1853889766 * value)
	{
		___registry_8 = value;
		Il2CppCodeGenWriteBarrier((&___registry_8), value);
	}

	inline static int32_t get_offset_of_ctx_queue_9() { return static_cast<int32_t>(offsetof(HttpListener_t988452056, ___ctx_queue_9)); }
	inline ArrayList_t2718874744 * get_ctx_queue_9() const { return ___ctx_queue_9; }
	inline ArrayList_t2718874744 ** get_address_of_ctx_queue_9() { return &___ctx_queue_9; }
	inline void set_ctx_queue_9(ArrayList_t2718874744 * value)
	{
		___ctx_queue_9 = value;
		Il2CppCodeGenWriteBarrier((&___ctx_queue_9), value);
	}

	inline static int32_t get_offset_of_wait_queue_10() { return static_cast<int32_t>(offsetof(HttpListener_t988452056, ___wait_queue_10)); }
	inline ArrayList_t2718874744 * get_wait_queue_10() const { return ___wait_queue_10; }
	inline ArrayList_t2718874744 ** get_address_of_wait_queue_10() { return &___wait_queue_10; }
	inline void set_wait_queue_10(ArrayList_t2718874744 * value)
	{
		___wait_queue_10 = value;
		Il2CppCodeGenWriteBarrier((&___wait_queue_10), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // HTTPLISTENER_T988452056_H
#ifndef REGEX_T3657309853_H
#define REGEX_T3657309853_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.RegularExpressions.Regex
struct  Regex_t3657309853  : public RuntimeObject
{
public:
	// System.Text.RegularExpressions.IMachineFactory System.Text.RegularExpressions.Regex::machineFactory
	RuntimeObject* ___machineFactory_1;
	// System.Collections.IDictionary System.Text.RegularExpressions.Regex::mapping
	RuntimeObject* ___mapping_2;
	// System.Int32 System.Text.RegularExpressions.Regex::group_count
	int32_t ___group_count_3;
	// System.Int32 System.Text.RegularExpressions.Regex::gap
	int32_t ___gap_4;
	// System.Boolean System.Text.RegularExpressions.Regex::refsInitialized
	bool ___refsInitialized_5;
	// System.String[] System.Text.RegularExpressions.Regex::group_names
	StringU5BU5D_t1281789340* ___group_names_6;
	// System.Int32[] System.Text.RegularExpressions.Regex::group_numbers
	Int32U5BU5D_t385246372* ___group_numbers_7;
	// System.String System.Text.RegularExpressions.Regex::pattern
	String_t* ___pattern_8;
	// System.Text.RegularExpressions.RegexOptions System.Text.RegularExpressions.Regex::roptions
	int32_t ___roptions_9;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> System.Text.RegularExpressions.Regex::capnames
	Dictionary_2_t2736202052 * ___capnames_10;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Int32> System.Text.RegularExpressions.Regex::caps
	Dictionary_2_t1839659084 * ___caps_11;
	// System.Int32 System.Text.RegularExpressions.Regex::capsize
	int32_t ___capsize_12;
	// System.String[] System.Text.RegularExpressions.Regex::capslist
	StringU5BU5D_t1281789340* ___capslist_13;

public:
	inline static int32_t get_offset_of_machineFactory_1() { return static_cast<int32_t>(offsetof(Regex_t3657309853, ___machineFactory_1)); }
	inline RuntimeObject* get_machineFactory_1() const { return ___machineFactory_1; }
	inline RuntimeObject** get_address_of_machineFactory_1() { return &___machineFactory_1; }
	inline void set_machineFactory_1(RuntimeObject* value)
	{
		___machineFactory_1 = value;
		Il2CppCodeGenWriteBarrier((&___machineFactory_1), value);
	}

	inline static int32_t get_offset_of_mapping_2() { return static_cast<int32_t>(offsetof(Regex_t3657309853, ___mapping_2)); }
	inline RuntimeObject* get_mapping_2() const { return ___mapping_2; }
	inline RuntimeObject** get_address_of_mapping_2() { return &___mapping_2; }
	inline void set_mapping_2(RuntimeObject* value)
	{
		___mapping_2 = value;
		Il2CppCodeGenWriteBarrier((&___mapping_2), value);
	}

	inline static int32_t get_offset_of_group_count_3() { return static_cast<int32_t>(offsetof(Regex_t3657309853, ___group_count_3)); }
	inline int32_t get_group_count_3() const { return ___group_count_3; }
	inline int32_t* get_address_of_group_count_3() { return &___group_count_3; }
	inline void set_group_count_3(int32_t value)
	{
		___group_count_3 = value;
	}

	inline static int32_t get_offset_of_gap_4() { return static_cast<int32_t>(offsetof(Regex_t3657309853, ___gap_4)); }
	inline int32_t get_gap_4() const { return ___gap_4; }
	inline int32_t* get_address_of_gap_4() { return &___gap_4; }
	inline void set_gap_4(int32_t value)
	{
		___gap_4 = value;
	}

	inline static int32_t get_offset_of_refsInitialized_5() { return static_cast<int32_t>(offsetof(Regex_t3657309853, ___refsInitialized_5)); }
	inline bool get_refsInitialized_5() const { return ___refsInitialized_5; }
	inline bool* get_address_of_refsInitialized_5() { return &___refsInitialized_5; }
	inline void set_refsInitialized_5(bool value)
	{
		___refsInitialized_5 = value;
	}

	inline static int32_t get_offset_of_group_names_6() { return static_cast<int32_t>(offsetof(Regex_t3657309853, ___group_names_6)); }
	inline StringU5BU5D_t1281789340* get_group_names_6() const { return ___group_names_6; }
	inline StringU5BU5D_t1281789340** get_address_of_group_names_6() { return &___group_names_6; }
	inline void set_group_names_6(StringU5BU5D_t1281789340* value)
	{
		___group_names_6 = value;
		Il2CppCodeGenWriteBarrier((&___group_names_6), value);
	}

	inline static int32_t get_offset_of_group_numbers_7() { return static_cast<int32_t>(offsetof(Regex_t3657309853, ___group_numbers_7)); }
	inline Int32U5BU5D_t385246372* get_group_numbers_7() const { return ___group_numbers_7; }
	inline Int32U5BU5D_t385246372** get_address_of_group_numbers_7() { return &___group_numbers_7; }
	inline void set_group_numbers_7(Int32U5BU5D_t385246372* value)
	{
		___group_numbers_7 = value;
		Il2CppCodeGenWriteBarrier((&___group_numbers_7), value);
	}

	inline static int32_t get_offset_of_pattern_8() { return static_cast<int32_t>(offsetof(Regex_t3657309853, ___pattern_8)); }
	inline String_t* get_pattern_8() const { return ___pattern_8; }
	inline String_t** get_address_of_pattern_8() { return &___pattern_8; }
	inline void set_pattern_8(String_t* value)
	{
		___pattern_8 = value;
		Il2CppCodeGenWriteBarrier((&___pattern_8), value);
	}

	inline static int32_t get_offset_of_roptions_9() { return static_cast<int32_t>(offsetof(Regex_t3657309853, ___roptions_9)); }
	inline int32_t get_roptions_9() const { return ___roptions_9; }
	inline int32_t* get_address_of_roptions_9() { return &___roptions_9; }
	inline void set_roptions_9(int32_t value)
	{
		___roptions_9 = value;
	}

	inline static int32_t get_offset_of_capnames_10() { return static_cast<int32_t>(offsetof(Regex_t3657309853, ___capnames_10)); }
	inline Dictionary_2_t2736202052 * get_capnames_10() const { return ___capnames_10; }
	inline Dictionary_2_t2736202052 ** get_address_of_capnames_10() { return &___capnames_10; }
	inline void set_capnames_10(Dictionary_2_t2736202052 * value)
	{
		___capnames_10 = value;
		Il2CppCodeGenWriteBarrier((&___capnames_10), value);
	}

	inline static int32_t get_offset_of_caps_11() { return static_cast<int32_t>(offsetof(Regex_t3657309853, ___caps_11)); }
	inline Dictionary_2_t1839659084 * get_caps_11() const { return ___caps_11; }
	inline Dictionary_2_t1839659084 ** get_address_of_caps_11() { return &___caps_11; }
	inline void set_caps_11(Dictionary_2_t1839659084 * value)
	{
		___caps_11 = value;
		Il2CppCodeGenWriteBarrier((&___caps_11), value);
	}

	inline static int32_t get_offset_of_capsize_12() { return static_cast<int32_t>(offsetof(Regex_t3657309853, ___capsize_12)); }
	inline int32_t get_capsize_12() const { return ___capsize_12; }
	inline int32_t* get_address_of_capsize_12() { return &___capsize_12; }
	inline void set_capsize_12(int32_t value)
	{
		___capsize_12 = value;
	}

	inline static int32_t get_offset_of_capslist_13() { return static_cast<int32_t>(offsetof(Regex_t3657309853, ___capslist_13)); }
	inline StringU5BU5D_t1281789340* get_capslist_13() const { return ___capslist_13; }
	inline StringU5BU5D_t1281789340** get_address_of_capslist_13() { return &___capslist_13; }
	inline void set_capslist_13(StringU5BU5D_t1281789340* value)
	{
		___capslist_13 = value;
		Il2CppCodeGenWriteBarrier((&___capslist_13), value);
	}
};

struct Regex_t3657309853_StaticFields
{
public:
	// System.Text.RegularExpressions.FactoryCache System.Text.RegularExpressions.Regex::cache
	FactoryCache_t2327118887 * ___cache_0;

public:
	inline static int32_t get_offset_of_cache_0() { return static_cast<int32_t>(offsetof(Regex_t3657309853_StaticFields, ___cache_0)); }
	inline FactoryCache_t2327118887 * get_cache_0() const { return ___cache_0; }
	inline FactoryCache_t2327118887 ** get_address_of_cache_0() { return &___cache_0; }
	inline void set_cache_0(FactoryCache_t2327118887 * value)
	{
		___cache_0 = value;
		Il2CppCodeGenWriteBarrier((&___cache_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // REGEX_T3657309853_H
#ifndef THREAD_T2300836069_H
#define THREAD_T2300836069_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Threading.Thread
struct  Thread_t2300836069  : public CriticalFinalizerObject_t701527852
{
public:
	// System.Int32 System.Threading.Thread::lock_thread_id
	int32_t ___lock_thread_id_0;
	// System.IntPtr System.Threading.Thread::system_thread_handle
	intptr_t ___system_thread_handle_1;
	// System.Object System.Threading.Thread::cached_culture_info
	RuntimeObject * ___cached_culture_info_2;
	// System.IntPtr System.Threading.Thread::unused0
	intptr_t ___unused0_3;
	// System.Boolean System.Threading.Thread::threadpool_thread
	bool ___threadpool_thread_4;
	// System.IntPtr System.Threading.Thread::name
	intptr_t ___name_5;
	// System.Int32 System.Threading.Thread::name_len
	int32_t ___name_len_6;
	// System.Threading.ThreadState System.Threading.Thread::state
	int32_t ___state_7;
	// System.Object System.Threading.Thread::abort_exc
	RuntimeObject * ___abort_exc_8;
	// System.Int32 System.Threading.Thread::abort_state_handle
	int32_t ___abort_state_handle_9;
	// System.Int64 System.Threading.Thread::thread_id
	int64_t ___thread_id_10;
	// System.IntPtr System.Threading.Thread::start_notify
	intptr_t ___start_notify_11;
	// System.IntPtr System.Threading.Thread::stack_ptr
	intptr_t ___stack_ptr_12;
	// System.UIntPtr System.Threading.Thread::static_data
	uintptr_t ___static_data_13;
	// System.IntPtr System.Threading.Thread::jit_data
	intptr_t ___jit_data_14;
	// System.IntPtr System.Threading.Thread::lock_data
	intptr_t ___lock_data_15;
	// System.Object System.Threading.Thread::current_appcontext
	RuntimeObject * ___current_appcontext_16;
	// System.Int32 System.Threading.Thread::stack_size
	int32_t ___stack_size_17;
	// System.Object System.Threading.Thread::start_obj
	RuntimeObject * ___start_obj_18;
	// System.IntPtr System.Threading.Thread::appdomain_refs
	intptr_t ___appdomain_refs_19;
	// System.Int32 System.Threading.Thread::interruption_requested
	int32_t ___interruption_requested_20;
	// System.IntPtr System.Threading.Thread::suspend_event
	intptr_t ___suspend_event_21;
	// System.IntPtr System.Threading.Thread::suspended_event
	intptr_t ___suspended_event_22;
	// System.IntPtr System.Threading.Thread::resume_event
	intptr_t ___resume_event_23;
	// System.IntPtr System.Threading.Thread::synch_cs
	intptr_t ___synch_cs_24;
	// System.IntPtr System.Threading.Thread::serialized_culture_info
	intptr_t ___serialized_culture_info_25;
	// System.Int32 System.Threading.Thread::serialized_culture_info_len
	int32_t ___serialized_culture_info_len_26;
	// System.IntPtr System.Threading.Thread::serialized_ui_culture_info
	intptr_t ___serialized_ui_culture_info_27;
	// System.Int32 System.Threading.Thread::serialized_ui_culture_info_len
	int32_t ___serialized_ui_culture_info_len_28;
	// System.Boolean System.Threading.Thread::thread_dump_requested
	bool ___thread_dump_requested_29;
	// System.IntPtr System.Threading.Thread::end_stack
	intptr_t ___end_stack_30;
	// System.Boolean System.Threading.Thread::thread_interrupt_requested
	bool ___thread_interrupt_requested_31;
	// System.Byte System.Threading.Thread::apartment_state
	uint8_t ___apartment_state_32;
	// System.Int32 modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Thread::critical_region_level
	int32_t ___critical_region_level_33;
	// System.Int32 System.Threading.Thread::small_id
	int32_t ___small_id_34;
	// System.IntPtr System.Threading.Thread::manage_callback
	intptr_t ___manage_callback_35;
	// System.Object System.Threading.Thread::pending_exception
	RuntimeObject * ___pending_exception_36;
	// System.Threading.ExecutionContext System.Threading.Thread::ec_to_set
	ExecutionContext_t1748372627 * ___ec_to_set_37;
	// System.IntPtr System.Threading.Thread::interrupt_on_stop
	intptr_t ___interrupt_on_stop_38;
	// System.IntPtr System.Threading.Thread::unused3
	intptr_t ___unused3_39;
	// System.IntPtr System.Threading.Thread::unused4
	intptr_t ___unused4_40;
	// System.IntPtr System.Threading.Thread::unused5
	intptr_t ___unused5_41;
	// System.IntPtr System.Threading.Thread::unused6
	intptr_t ___unused6_42;
	// System.MulticastDelegate System.Threading.Thread::threadstart
	MulticastDelegate_t * ___threadstart_45;
	// System.Int32 System.Threading.Thread::managed_id
	int32_t ___managed_id_46;
	// System.Security.Principal.IPrincipal System.Threading.Thread::_principal
	RuntimeObject* ____principal_47;
	// System.Boolean System.Threading.Thread::in_currentculture
	bool ___in_currentculture_50;

public:
	inline static int32_t get_offset_of_lock_thread_id_0() { return static_cast<int32_t>(offsetof(Thread_t2300836069, ___lock_thread_id_0)); }
	inline int32_t get_lock_thread_id_0() const { return ___lock_thread_id_0; }
	inline int32_t* get_address_of_lock_thread_id_0() { return &___lock_thread_id_0; }
	inline void set_lock_thread_id_0(int32_t value)
	{
		___lock_thread_id_0 = value;
	}

	inline static int32_t get_offset_of_system_thread_handle_1() { return static_cast<int32_t>(offsetof(Thread_t2300836069, ___system_thread_handle_1)); }
	inline intptr_t get_system_thread_handle_1() const { return ___system_thread_handle_1; }
	inline intptr_t* get_address_of_system_thread_handle_1() { return &___system_thread_handle_1; }
	inline void set_system_thread_handle_1(intptr_t value)
	{
		___system_thread_handle_1 = value;
	}

	inline static int32_t get_offset_of_cached_culture_info_2() { return static_cast<int32_t>(offsetof(Thread_t2300836069, ___cached_culture_info_2)); }
	inline RuntimeObject * get_cached_culture_info_2() const { return ___cached_culture_info_2; }
	inline RuntimeObject ** get_address_of_cached_culture_info_2() { return &___cached_culture_info_2; }
	inline void set_cached_culture_info_2(RuntimeObject * value)
	{
		___cached_culture_info_2 = value;
		Il2CppCodeGenWriteBarrier((&___cached_culture_info_2), value);
	}

	inline static int32_t get_offset_of_unused0_3() { return static_cast<int32_t>(offsetof(Thread_t2300836069, ___unused0_3)); }
	inline intptr_t get_unused0_3() const { return ___unused0_3; }
	inline intptr_t* get_address_of_unused0_3() { return &___unused0_3; }
	inline void set_unused0_3(intptr_t value)
	{
		___unused0_3 = value;
	}

	inline static int32_t get_offset_of_threadpool_thread_4() { return static_cast<int32_t>(offsetof(Thread_t2300836069, ___threadpool_thread_4)); }
	inline bool get_threadpool_thread_4() const { return ___threadpool_thread_4; }
	inline bool* get_address_of_threadpool_thread_4() { return &___threadpool_thread_4; }
	inline void set_threadpool_thread_4(bool value)
	{
		___threadpool_thread_4 = value;
	}

	inline static int32_t get_offset_of_name_5() { return static_cast<int32_t>(offsetof(Thread_t2300836069, ___name_5)); }
	inline intptr_t get_name_5() const { return ___name_5; }
	inline intptr_t* get_address_of_name_5() { return &___name_5; }
	inline void set_name_5(intptr_t value)
	{
		___name_5 = value;
	}

	inline static int32_t get_offset_of_name_len_6() { return static_cast<int32_t>(offsetof(Thread_t2300836069, ___name_len_6)); }
	inline int32_t get_name_len_6() const { return ___name_len_6; }
	inline int32_t* get_address_of_name_len_6() { return &___name_len_6; }
	inline void set_name_len_6(int32_t value)
	{
		___name_len_6 = value;
	}

	inline static int32_t get_offset_of_state_7() { return static_cast<int32_t>(offsetof(Thread_t2300836069, ___state_7)); }
	inline int32_t get_state_7() const { return ___state_7; }
	inline int32_t* get_address_of_state_7() { return &___state_7; }
	inline void set_state_7(int32_t value)
	{
		___state_7 = value;
	}

	inline static int32_t get_offset_of_abort_exc_8() { return static_cast<int32_t>(offsetof(Thread_t2300836069, ___abort_exc_8)); }
	inline RuntimeObject * get_abort_exc_8() const { return ___abort_exc_8; }
	inline RuntimeObject ** get_address_of_abort_exc_8() { return &___abort_exc_8; }
	inline void set_abort_exc_8(RuntimeObject * value)
	{
		___abort_exc_8 = value;
		Il2CppCodeGenWriteBarrier((&___abort_exc_8), value);
	}

	inline static int32_t get_offset_of_abort_state_handle_9() { return static_cast<int32_t>(offsetof(Thread_t2300836069, ___abort_state_handle_9)); }
	inline int32_t get_abort_state_handle_9() const { return ___abort_state_handle_9; }
	inline int32_t* get_address_of_abort_state_handle_9() { return &___abort_state_handle_9; }
	inline void set_abort_state_handle_9(int32_t value)
	{
		___abort_state_handle_9 = value;
	}

	inline static int32_t get_offset_of_thread_id_10() { return static_cast<int32_t>(offsetof(Thread_t2300836069, ___thread_id_10)); }
	inline int64_t get_thread_id_10() const { return ___thread_id_10; }
	inline int64_t* get_address_of_thread_id_10() { return &___thread_id_10; }
	inline void set_thread_id_10(int64_t value)
	{
		___thread_id_10 = value;
	}

	inline static int32_t get_offset_of_start_notify_11() { return static_cast<int32_t>(offsetof(Thread_t2300836069, ___start_notify_11)); }
	inline intptr_t get_start_notify_11() const { return ___start_notify_11; }
	inline intptr_t* get_address_of_start_notify_11() { return &___start_notify_11; }
	inline void set_start_notify_11(intptr_t value)
	{
		___start_notify_11 = value;
	}

	inline static int32_t get_offset_of_stack_ptr_12() { return static_cast<int32_t>(offsetof(Thread_t2300836069, ___stack_ptr_12)); }
	inline intptr_t get_stack_ptr_12() const { return ___stack_ptr_12; }
	inline intptr_t* get_address_of_stack_ptr_12() { return &___stack_ptr_12; }
	inline void set_stack_ptr_12(intptr_t value)
	{
		___stack_ptr_12 = value;
	}

	inline static int32_t get_offset_of_static_data_13() { return static_cast<int32_t>(offsetof(Thread_t2300836069, ___static_data_13)); }
	inline uintptr_t get_static_data_13() const { return ___static_data_13; }
	inline uintptr_t* get_address_of_static_data_13() { return &___static_data_13; }
	inline void set_static_data_13(uintptr_t value)
	{
		___static_data_13 = value;
	}

	inline static int32_t get_offset_of_jit_data_14() { return static_cast<int32_t>(offsetof(Thread_t2300836069, ___jit_data_14)); }
	inline intptr_t get_jit_data_14() const { return ___jit_data_14; }
	inline intptr_t* get_address_of_jit_data_14() { return &___jit_data_14; }
	inline void set_jit_data_14(intptr_t value)
	{
		___jit_data_14 = value;
	}

	inline static int32_t get_offset_of_lock_data_15() { return static_cast<int32_t>(offsetof(Thread_t2300836069, ___lock_data_15)); }
	inline intptr_t get_lock_data_15() const { return ___lock_data_15; }
	inline intptr_t* get_address_of_lock_data_15() { return &___lock_data_15; }
	inline void set_lock_data_15(intptr_t value)
	{
		___lock_data_15 = value;
	}

	inline static int32_t get_offset_of_current_appcontext_16() { return static_cast<int32_t>(offsetof(Thread_t2300836069, ___current_appcontext_16)); }
	inline RuntimeObject * get_current_appcontext_16() const { return ___current_appcontext_16; }
	inline RuntimeObject ** get_address_of_current_appcontext_16() { return &___current_appcontext_16; }
	inline void set_current_appcontext_16(RuntimeObject * value)
	{
		___current_appcontext_16 = value;
		Il2CppCodeGenWriteBarrier((&___current_appcontext_16), value);
	}

	inline static int32_t get_offset_of_stack_size_17() { return static_cast<int32_t>(offsetof(Thread_t2300836069, ___stack_size_17)); }
	inline int32_t get_stack_size_17() const { return ___stack_size_17; }
	inline int32_t* get_address_of_stack_size_17() { return &___stack_size_17; }
	inline void set_stack_size_17(int32_t value)
	{
		___stack_size_17 = value;
	}

	inline static int32_t get_offset_of_start_obj_18() { return static_cast<int32_t>(offsetof(Thread_t2300836069, ___start_obj_18)); }
	inline RuntimeObject * get_start_obj_18() const { return ___start_obj_18; }
	inline RuntimeObject ** get_address_of_start_obj_18() { return &___start_obj_18; }
	inline void set_start_obj_18(RuntimeObject * value)
	{
		___start_obj_18 = value;
		Il2CppCodeGenWriteBarrier((&___start_obj_18), value);
	}

	inline static int32_t get_offset_of_appdomain_refs_19() { return static_cast<int32_t>(offsetof(Thread_t2300836069, ___appdomain_refs_19)); }
	inline intptr_t get_appdomain_refs_19() const { return ___appdomain_refs_19; }
	inline intptr_t* get_address_of_appdomain_refs_19() { return &___appdomain_refs_19; }
	inline void set_appdomain_refs_19(intptr_t value)
	{
		___appdomain_refs_19 = value;
	}

	inline static int32_t get_offset_of_interruption_requested_20() { return static_cast<int32_t>(offsetof(Thread_t2300836069, ___interruption_requested_20)); }
	inline int32_t get_interruption_requested_20() const { return ___interruption_requested_20; }
	inline int32_t* get_address_of_interruption_requested_20() { return &___interruption_requested_20; }
	inline void set_interruption_requested_20(int32_t value)
	{
		___interruption_requested_20 = value;
	}

	inline static int32_t get_offset_of_suspend_event_21() { return static_cast<int32_t>(offsetof(Thread_t2300836069, ___suspend_event_21)); }
	inline intptr_t get_suspend_event_21() const { return ___suspend_event_21; }
	inline intptr_t* get_address_of_suspend_event_21() { return &___suspend_event_21; }
	inline void set_suspend_event_21(intptr_t value)
	{
		___suspend_event_21 = value;
	}

	inline static int32_t get_offset_of_suspended_event_22() { return static_cast<int32_t>(offsetof(Thread_t2300836069, ___suspended_event_22)); }
	inline intptr_t get_suspended_event_22() const { return ___suspended_event_22; }
	inline intptr_t* get_address_of_suspended_event_22() { return &___suspended_event_22; }
	inline void set_suspended_event_22(intptr_t value)
	{
		___suspended_event_22 = value;
	}

	inline static int32_t get_offset_of_resume_event_23() { return static_cast<int32_t>(offsetof(Thread_t2300836069, ___resume_event_23)); }
	inline intptr_t get_resume_event_23() const { return ___resume_event_23; }
	inline intptr_t* get_address_of_resume_event_23() { return &___resume_event_23; }
	inline void set_resume_event_23(intptr_t value)
	{
		___resume_event_23 = value;
	}

	inline static int32_t get_offset_of_synch_cs_24() { return static_cast<int32_t>(offsetof(Thread_t2300836069, ___synch_cs_24)); }
	inline intptr_t get_synch_cs_24() const { return ___synch_cs_24; }
	inline intptr_t* get_address_of_synch_cs_24() { return &___synch_cs_24; }
	inline void set_synch_cs_24(intptr_t value)
	{
		___synch_cs_24 = value;
	}

	inline static int32_t get_offset_of_serialized_culture_info_25() { return static_cast<int32_t>(offsetof(Thread_t2300836069, ___serialized_culture_info_25)); }
	inline intptr_t get_serialized_culture_info_25() const { return ___serialized_culture_info_25; }
	inline intptr_t* get_address_of_serialized_culture_info_25() { return &___serialized_culture_info_25; }
	inline void set_serialized_culture_info_25(intptr_t value)
	{
		___serialized_culture_info_25 = value;
	}

	inline static int32_t get_offset_of_serialized_culture_info_len_26() { return static_cast<int32_t>(offsetof(Thread_t2300836069, ___serialized_culture_info_len_26)); }
	inline int32_t get_serialized_culture_info_len_26() const { return ___serialized_culture_info_len_26; }
	inline int32_t* get_address_of_serialized_culture_info_len_26() { return &___serialized_culture_info_len_26; }
	inline void set_serialized_culture_info_len_26(int32_t value)
	{
		___serialized_culture_info_len_26 = value;
	}

	inline static int32_t get_offset_of_serialized_ui_culture_info_27() { return static_cast<int32_t>(offsetof(Thread_t2300836069, ___serialized_ui_culture_info_27)); }
	inline intptr_t get_serialized_ui_culture_info_27() const { return ___serialized_ui_culture_info_27; }
	inline intptr_t* get_address_of_serialized_ui_culture_info_27() { return &___serialized_ui_culture_info_27; }
	inline void set_serialized_ui_culture_info_27(intptr_t value)
	{
		___serialized_ui_culture_info_27 = value;
	}

	inline static int32_t get_offset_of_serialized_ui_culture_info_len_28() { return static_cast<int32_t>(offsetof(Thread_t2300836069, ___serialized_ui_culture_info_len_28)); }
	inline int32_t get_serialized_ui_culture_info_len_28() const { return ___serialized_ui_culture_info_len_28; }
	inline int32_t* get_address_of_serialized_ui_culture_info_len_28() { return &___serialized_ui_culture_info_len_28; }
	inline void set_serialized_ui_culture_info_len_28(int32_t value)
	{
		___serialized_ui_culture_info_len_28 = value;
	}

	inline static int32_t get_offset_of_thread_dump_requested_29() { return static_cast<int32_t>(offsetof(Thread_t2300836069, ___thread_dump_requested_29)); }
	inline bool get_thread_dump_requested_29() const { return ___thread_dump_requested_29; }
	inline bool* get_address_of_thread_dump_requested_29() { return &___thread_dump_requested_29; }
	inline void set_thread_dump_requested_29(bool value)
	{
		___thread_dump_requested_29 = value;
	}

	inline static int32_t get_offset_of_end_stack_30() { return static_cast<int32_t>(offsetof(Thread_t2300836069, ___end_stack_30)); }
	inline intptr_t get_end_stack_30() const { return ___end_stack_30; }
	inline intptr_t* get_address_of_end_stack_30() { return &___end_stack_30; }
	inline void set_end_stack_30(intptr_t value)
	{
		___end_stack_30 = value;
	}

	inline static int32_t get_offset_of_thread_interrupt_requested_31() { return static_cast<int32_t>(offsetof(Thread_t2300836069, ___thread_interrupt_requested_31)); }
	inline bool get_thread_interrupt_requested_31() const { return ___thread_interrupt_requested_31; }
	inline bool* get_address_of_thread_interrupt_requested_31() { return &___thread_interrupt_requested_31; }
	inline void set_thread_interrupt_requested_31(bool value)
	{
		___thread_interrupt_requested_31 = value;
	}

	inline static int32_t get_offset_of_apartment_state_32() { return static_cast<int32_t>(offsetof(Thread_t2300836069, ___apartment_state_32)); }
	inline uint8_t get_apartment_state_32() const { return ___apartment_state_32; }
	inline uint8_t* get_address_of_apartment_state_32() { return &___apartment_state_32; }
	inline void set_apartment_state_32(uint8_t value)
	{
		___apartment_state_32 = value;
	}

	inline static int32_t get_offset_of_critical_region_level_33() { return static_cast<int32_t>(offsetof(Thread_t2300836069, ___critical_region_level_33)); }
	inline int32_t get_critical_region_level_33() const { return ___critical_region_level_33; }
	inline int32_t* get_address_of_critical_region_level_33() { return &___critical_region_level_33; }
	inline void set_critical_region_level_33(int32_t value)
	{
		___critical_region_level_33 = value;
	}

	inline static int32_t get_offset_of_small_id_34() { return static_cast<int32_t>(offsetof(Thread_t2300836069, ___small_id_34)); }
	inline int32_t get_small_id_34() const { return ___small_id_34; }
	inline int32_t* get_address_of_small_id_34() { return &___small_id_34; }
	inline void set_small_id_34(int32_t value)
	{
		___small_id_34 = value;
	}

	inline static int32_t get_offset_of_manage_callback_35() { return static_cast<int32_t>(offsetof(Thread_t2300836069, ___manage_callback_35)); }
	inline intptr_t get_manage_callback_35() const { return ___manage_callback_35; }
	inline intptr_t* get_address_of_manage_callback_35() { return &___manage_callback_35; }
	inline void set_manage_callback_35(intptr_t value)
	{
		___manage_callback_35 = value;
	}

	inline static int32_t get_offset_of_pending_exception_36() { return static_cast<int32_t>(offsetof(Thread_t2300836069, ___pending_exception_36)); }
	inline RuntimeObject * get_pending_exception_36() const { return ___pending_exception_36; }
	inline RuntimeObject ** get_address_of_pending_exception_36() { return &___pending_exception_36; }
	inline void set_pending_exception_36(RuntimeObject * value)
	{
		___pending_exception_36 = value;
		Il2CppCodeGenWriteBarrier((&___pending_exception_36), value);
	}

	inline static int32_t get_offset_of_ec_to_set_37() { return static_cast<int32_t>(offsetof(Thread_t2300836069, ___ec_to_set_37)); }
	inline ExecutionContext_t1748372627 * get_ec_to_set_37() const { return ___ec_to_set_37; }
	inline ExecutionContext_t1748372627 ** get_address_of_ec_to_set_37() { return &___ec_to_set_37; }
	inline void set_ec_to_set_37(ExecutionContext_t1748372627 * value)
	{
		___ec_to_set_37 = value;
		Il2CppCodeGenWriteBarrier((&___ec_to_set_37), value);
	}

	inline static int32_t get_offset_of_interrupt_on_stop_38() { return static_cast<int32_t>(offsetof(Thread_t2300836069, ___interrupt_on_stop_38)); }
	inline intptr_t get_interrupt_on_stop_38() const { return ___interrupt_on_stop_38; }
	inline intptr_t* get_address_of_interrupt_on_stop_38() { return &___interrupt_on_stop_38; }
	inline void set_interrupt_on_stop_38(intptr_t value)
	{
		___interrupt_on_stop_38 = value;
	}

	inline static int32_t get_offset_of_unused3_39() { return static_cast<int32_t>(offsetof(Thread_t2300836069, ___unused3_39)); }
	inline intptr_t get_unused3_39() const { return ___unused3_39; }
	inline intptr_t* get_address_of_unused3_39() { return &___unused3_39; }
	inline void set_unused3_39(intptr_t value)
	{
		___unused3_39 = value;
	}

	inline static int32_t get_offset_of_unused4_40() { return static_cast<int32_t>(offsetof(Thread_t2300836069, ___unused4_40)); }
	inline intptr_t get_unused4_40() const { return ___unused4_40; }
	inline intptr_t* get_address_of_unused4_40() { return &___unused4_40; }
	inline void set_unused4_40(intptr_t value)
	{
		___unused4_40 = value;
	}

	inline static int32_t get_offset_of_unused5_41() { return static_cast<int32_t>(offsetof(Thread_t2300836069, ___unused5_41)); }
	inline intptr_t get_unused5_41() const { return ___unused5_41; }
	inline intptr_t* get_address_of_unused5_41() { return &___unused5_41; }
	inline void set_unused5_41(intptr_t value)
	{
		___unused5_41 = value;
	}

	inline static int32_t get_offset_of_unused6_42() { return static_cast<int32_t>(offsetof(Thread_t2300836069, ___unused6_42)); }
	inline intptr_t get_unused6_42() const { return ___unused6_42; }
	inline intptr_t* get_address_of_unused6_42() { return &___unused6_42; }
	inline void set_unused6_42(intptr_t value)
	{
		___unused6_42 = value;
	}

	inline static int32_t get_offset_of_threadstart_45() { return static_cast<int32_t>(offsetof(Thread_t2300836069, ___threadstart_45)); }
	inline MulticastDelegate_t * get_threadstart_45() const { return ___threadstart_45; }
	inline MulticastDelegate_t ** get_address_of_threadstart_45() { return &___threadstart_45; }
	inline void set_threadstart_45(MulticastDelegate_t * value)
	{
		___threadstart_45 = value;
		Il2CppCodeGenWriteBarrier((&___threadstart_45), value);
	}

	inline static int32_t get_offset_of_managed_id_46() { return static_cast<int32_t>(offsetof(Thread_t2300836069, ___managed_id_46)); }
	inline int32_t get_managed_id_46() const { return ___managed_id_46; }
	inline int32_t* get_address_of_managed_id_46() { return &___managed_id_46; }
	inline void set_managed_id_46(int32_t value)
	{
		___managed_id_46 = value;
	}

	inline static int32_t get_offset_of__principal_47() { return static_cast<int32_t>(offsetof(Thread_t2300836069, ____principal_47)); }
	inline RuntimeObject* get__principal_47() const { return ____principal_47; }
	inline RuntimeObject** get_address_of__principal_47() { return &____principal_47; }
	inline void set__principal_47(RuntimeObject* value)
	{
		____principal_47 = value;
		Il2CppCodeGenWriteBarrier((&____principal_47), value);
	}

	inline static int32_t get_offset_of_in_currentculture_50() { return static_cast<int32_t>(offsetof(Thread_t2300836069, ___in_currentculture_50)); }
	inline bool get_in_currentculture_50() const { return ___in_currentculture_50; }
	inline bool* get_address_of_in_currentculture_50() { return &___in_currentculture_50; }
	inline void set_in_currentculture_50(bool value)
	{
		___in_currentculture_50 = value;
	}
};

struct Thread_t2300836069_StaticFields
{
public:
	// System.Collections.Hashtable System.Threading.Thread::datastorehash
	Hashtable_t1853889766 * ___datastorehash_48;
	// System.Object System.Threading.Thread::datastore_lock
	RuntimeObject * ___datastore_lock_49;
	// System.Object System.Threading.Thread::culture_lock
	RuntimeObject * ___culture_lock_51;

public:
	inline static int32_t get_offset_of_datastorehash_48() { return static_cast<int32_t>(offsetof(Thread_t2300836069_StaticFields, ___datastorehash_48)); }
	inline Hashtable_t1853889766 * get_datastorehash_48() const { return ___datastorehash_48; }
	inline Hashtable_t1853889766 ** get_address_of_datastorehash_48() { return &___datastorehash_48; }
	inline void set_datastorehash_48(Hashtable_t1853889766 * value)
	{
		___datastorehash_48 = value;
		Il2CppCodeGenWriteBarrier((&___datastorehash_48), value);
	}

	inline static int32_t get_offset_of_datastore_lock_49() { return static_cast<int32_t>(offsetof(Thread_t2300836069_StaticFields, ___datastore_lock_49)); }
	inline RuntimeObject * get_datastore_lock_49() const { return ___datastore_lock_49; }
	inline RuntimeObject ** get_address_of_datastore_lock_49() { return &___datastore_lock_49; }
	inline void set_datastore_lock_49(RuntimeObject * value)
	{
		___datastore_lock_49 = value;
		Il2CppCodeGenWriteBarrier((&___datastore_lock_49), value);
	}

	inline static int32_t get_offset_of_culture_lock_51() { return static_cast<int32_t>(offsetof(Thread_t2300836069_StaticFields, ___culture_lock_51)); }
	inline RuntimeObject * get_culture_lock_51() const { return ___culture_lock_51; }
	inline RuntimeObject ** get_address_of_culture_lock_51() { return &___culture_lock_51; }
	inline void set_culture_lock_51(RuntimeObject * value)
	{
		___culture_lock_51 = value;
		Il2CppCodeGenWriteBarrier((&___culture_lock_51), value);
	}
};

struct Thread_t2300836069_ThreadStaticFields
{
public:
	// System.Object[] System.Threading.Thread::local_slots
	ObjectU5BU5D_t2843939325* ___local_slots_43;
	// System.Threading.ExecutionContext System.Threading.Thread::_ec
	ExecutionContext_t1748372627 * ____ec_44;

public:
	inline static int32_t get_offset_of_local_slots_43() { return static_cast<int32_t>(offsetof(Thread_t2300836069_ThreadStaticFields, ___local_slots_43)); }
	inline ObjectU5BU5D_t2843939325* get_local_slots_43() const { return ___local_slots_43; }
	inline ObjectU5BU5D_t2843939325** get_address_of_local_slots_43() { return &___local_slots_43; }
	inline void set_local_slots_43(ObjectU5BU5D_t2843939325* value)
	{
		___local_slots_43 = value;
		Il2CppCodeGenWriteBarrier((&___local_slots_43), value);
	}

	inline static int32_t get_offset_of__ec_44() { return static_cast<int32_t>(offsetof(Thread_t2300836069_ThreadStaticFields, ____ec_44)); }
	inline ExecutionContext_t1748372627 * get__ec_44() const { return ____ec_44; }
	inline ExecutionContext_t1748372627 ** get_address_of__ec_44() { return &____ec_44; }
	inline void set__ec_44(ExecutionContext_t1748372627 * value)
	{
		____ec_44 = value;
		Il2CppCodeGenWriteBarrier((&____ec_44), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // THREAD_T2300836069_H
#ifndef TYPE_T_H
#define TYPE_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Type
struct  Type_t  : public MemberInfo_t
{
public:
	// System.RuntimeTypeHandle System.Type::_impl
	RuntimeTypeHandle_t3027515415  ____impl_1;

public:
	inline static int32_t get_offset_of__impl_1() { return static_cast<int32_t>(offsetof(Type_t, ____impl_1)); }
	inline RuntimeTypeHandle_t3027515415  get__impl_1() const { return ____impl_1; }
	inline RuntimeTypeHandle_t3027515415 * get_address_of__impl_1() { return &____impl_1; }
	inline void set__impl_1(RuntimeTypeHandle_t3027515415  value)
	{
		____impl_1 = value;
	}
};

struct Type_t_StaticFields
{
public:
	// System.Char System.Type::Delimiter
	Il2CppChar ___Delimiter_2;
	// System.Type[] System.Type::EmptyTypes
	TypeU5BU5D_t3940880105* ___EmptyTypes_3;
	// System.Reflection.MemberFilter System.Type::FilterAttribute
	MemberFilter_t426314064 * ___FilterAttribute_4;
	// System.Reflection.MemberFilter System.Type::FilterName
	MemberFilter_t426314064 * ___FilterName_5;
	// System.Reflection.MemberFilter System.Type::FilterNameIgnoreCase
	MemberFilter_t426314064 * ___FilterNameIgnoreCase_6;
	// System.Object System.Type::Missing
	RuntimeObject * ___Missing_7;

public:
	inline static int32_t get_offset_of_Delimiter_2() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___Delimiter_2)); }
	inline Il2CppChar get_Delimiter_2() const { return ___Delimiter_2; }
	inline Il2CppChar* get_address_of_Delimiter_2() { return &___Delimiter_2; }
	inline void set_Delimiter_2(Il2CppChar value)
	{
		___Delimiter_2 = value;
	}

	inline static int32_t get_offset_of_EmptyTypes_3() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___EmptyTypes_3)); }
	inline TypeU5BU5D_t3940880105* get_EmptyTypes_3() const { return ___EmptyTypes_3; }
	inline TypeU5BU5D_t3940880105** get_address_of_EmptyTypes_3() { return &___EmptyTypes_3; }
	inline void set_EmptyTypes_3(TypeU5BU5D_t3940880105* value)
	{
		___EmptyTypes_3 = value;
		Il2CppCodeGenWriteBarrier((&___EmptyTypes_3), value);
	}

	inline static int32_t get_offset_of_FilterAttribute_4() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterAttribute_4)); }
	inline MemberFilter_t426314064 * get_FilterAttribute_4() const { return ___FilterAttribute_4; }
	inline MemberFilter_t426314064 ** get_address_of_FilterAttribute_4() { return &___FilterAttribute_4; }
	inline void set_FilterAttribute_4(MemberFilter_t426314064 * value)
	{
		___FilterAttribute_4 = value;
		Il2CppCodeGenWriteBarrier((&___FilterAttribute_4), value);
	}

	inline static int32_t get_offset_of_FilterName_5() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterName_5)); }
	inline MemberFilter_t426314064 * get_FilterName_5() const { return ___FilterName_5; }
	inline MemberFilter_t426314064 ** get_address_of_FilterName_5() { return &___FilterName_5; }
	inline void set_FilterName_5(MemberFilter_t426314064 * value)
	{
		___FilterName_5 = value;
		Il2CppCodeGenWriteBarrier((&___FilterName_5), value);
	}

	inline static int32_t get_offset_of_FilterNameIgnoreCase_6() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterNameIgnoreCase_6)); }
	inline MemberFilter_t426314064 * get_FilterNameIgnoreCase_6() const { return ___FilterNameIgnoreCase_6; }
	inline MemberFilter_t426314064 ** get_address_of_FilterNameIgnoreCase_6() { return &___FilterNameIgnoreCase_6; }
	inline void set_FilterNameIgnoreCase_6(MemberFilter_t426314064 * value)
	{
		___FilterNameIgnoreCase_6 = value;
		Il2CppCodeGenWriteBarrier((&___FilterNameIgnoreCase_6), value);
	}

	inline static int32_t get_offset_of_Missing_7() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___Missing_7)); }
	inline RuntimeObject * get_Missing_7() const { return ___Missing_7; }
	inline RuntimeObject ** get_address_of_Missing_7() { return &___Missing_7; }
	inline void set_Missing_7(RuntimeObject * value)
	{
		___Missing_7 = value;
		Il2CppCodeGenWriteBarrier((&___Missing_7), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TYPE_T_H
#ifndef COMPONENT_T1923634451_H
#define COMPONENT_T1923634451_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Component
struct  Component_t1923634451  : public Object_t631007953
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COMPONENT_T1923634451_H
#ifndef GAMEOBJECT_T1113636619_H
#define GAMEOBJECT_T1113636619_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.GameObject
struct  GameObject_t1113636619  : public Object_t631007953
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GAMEOBJECT_T1113636619_H
#ifndef MATERIAL_T340375123_H
#define MATERIAL_T340375123_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Material
struct  Material_t340375123  : public Object_t631007953
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MATERIAL_T340375123_H
#ifndef TEXTURE_T3661962703_H
#define TEXTURE_T3661962703_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Texture
struct  Texture_t3661962703  : public Object_t631007953
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TEXTURE_T3661962703_H
#ifndef CALLBACK_T1969551140_H
#define CALLBACK_T1969551140_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// CUDLR.CommandAttribute/Callback
struct  Callback_t1969551140  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CALLBACK_T1969551140_H
#ifndef CALLBACKSIMPLE_T200441164_H
#define CALLBACKSIMPLE_T200441164_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// CUDLR.CommandAttribute/CallbackSimple
struct  CallbackSimple_t200441164  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CALLBACKSIMPLE_T200441164_H
#ifndef CALLBACK_T1777011615_H
#define CALLBACK_T1777011615_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// CUDLR.RouteAttribute/Callback
struct  Callback_t1777011615  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CALLBACK_T1777011615_H
#ifndef FILEHANDLERDELEGATE_T13458300_H
#define FILEHANDLERDELEGATE_T13458300_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// CUDLR.Server/FileHandlerDelegate
struct  FileHandlerDelegate_t13458300  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FILEHANDLERDELEGATE_T13458300_H
#ifndef ASYNCCALLBACK_T3962456242_H
#define ASYNCCALLBACK_T3962456242_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.AsyncCallback
struct  AsyncCallback_t3962456242  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ASYNCCALLBACK_T3962456242_H
#ifndef FUNC_2_T3001800792_H
#define FUNC_2_T3001800792_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Func`2<System.Collections.Generic.KeyValuePair`2<System.String,System.String>,System.String>
struct  Func_2_t3001800792  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FUNC_2_T3001800792_H
#ifndef LOGCALLBACK_T3588208630_H
#define LOGCALLBACK_T3588208630_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Application/LogCallback
struct  LogCallback_t3588208630  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LOGCALLBACK_T3588208630_H
#ifndef BEHAVIOUR_T1437897464_H
#define BEHAVIOUR_T1437897464_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Behaviour
struct  Behaviour_t1437897464  : public Component_t1923634451
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BEHAVIOUR_T1437897464_H
#ifndef RENDERER_T2627027031_H
#define RENDERER_T2627027031_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Renderer
struct  Renderer_t2627027031  : public Component_t1923634451
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RENDERER_T2627027031_H
#ifndef TEXTURE2D_T3840446185_H
#define TEXTURE2D_T3840446185_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Texture2D
struct  Texture2D_t3840446185  : public Texture_t3661962703
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TEXTURE2D_T3840446185_H
#ifndef TRANSFORM_T3600365921_H
#define TRANSFORM_T3600365921_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Transform
struct  Transform_t3600365921  : public Component_t1923634451
{
public:
	// System.Int32 UnityEngine.Transform::<hierarchyCount>k__BackingField
	int32_t ___U3ChierarchyCountU3Ek__BackingField_4;

public:
	inline static int32_t get_offset_of_U3ChierarchyCountU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(Transform_t3600365921, ___U3ChierarchyCountU3Ek__BackingField_4)); }
	inline int32_t get_U3ChierarchyCountU3Ek__BackingField_4() const { return ___U3ChierarchyCountU3Ek__BackingField_4; }
	inline int32_t* get_address_of_U3ChierarchyCountU3Ek__BackingField_4() { return &___U3ChierarchyCountU3Ek__BackingField_4; }
	inline void set_U3ChierarchyCountU3Ek__BackingField_4(int32_t value)
	{
		___U3ChierarchyCountU3Ek__BackingField_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TRANSFORM_T3600365921_H
#ifndef MONOBEHAVIOUR_T3962482529_H
#define MONOBEHAVIOUR_T3962482529_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.MonoBehaviour
struct  MonoBehaviour_t3962482529  : public Behaviour_t1437897464
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MONOBEHAVIOUR_T3962482529_H
#ifndef SERVER_T545360578_H
#define SERVER_T545360578_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// CUDLR.Server
struct  Server_t545360578  : public MonoBehaviour_t3962482529
{
public:
	// System.Int32 CUDLR.Server::Port
	int32_t ___Port_4;

public:
	inline static int32_t get_offset_of_Port_4() { return static_cast<int32_t>(offsetof(Server_t545360578, ___Port_4)); }
	inline int32_t get_Port_4() const { return ___Port_4; }
	inline int32_t* get_address_of_Port_4() { return &___Port_4; }
	inline void set_Port_4(int32_t value)
	{
		___Port_4 = value;
	}
};

struct Server_t545360578_StaticFields
{
public:
	// System.Threading.Thread CUDLR.Server::mainThread
	Thread_t2300836069 * ___mainThread_5;
	// System.String CUDLR.Server::fileRoot
	String_t* ___fileRoot_6;
	// System.Net.HttpListener CUDLR.Server::listener
	HttpListener_t988452056 * ___listener_7;
	// System.Collections.Generic.List`1<CUDLR.RouteAttribute> CUDLR.Server::registeredRoutes
	List_1_t2046717850 * ___registeredRoutes_8;
	// System.Collections.Generic.Queue`1<CUDLR.RequestContext> CUDLR.Server::mainRequests
	Queue_1_t3448891251 * ___mainRequests_9;
	// System.Collections.Generic.Dictionary`2<System.String,System.String> CUDLR.Server::fileTypes
	Dictionary_2_t1632706988 * ___fileTypes_10;
	// CUDLR.Server/FileHandlerDelegate CUDLR.Server::<>f__mg$cache0
	FileHandlerDelegate_t13458300 * ___U3CU3Ef__mgU24cache0_11;
	// CUDLR.Server/FileHandlerDelegate CUDLR.Server::<>f__mg$cache1
	FileHandlerDelegate_t13458300 * ___U3CU3Ef__mgU24cache1_12;
	// System.Func`2<System.Collections.Generic.KeyValuePair`2<System.String,System.String>,System.String> CUDLR.Server::<>f__am$cache0
	Func_2_t3001800792 * ___U3CU3Ef__amU24cache0_13;
	// UnityEngine.Application/LogCallback CUDLR.Server::<>f__mg$cache2
	LogCallback_t3588208630 * ___U3CU3Ef__mgU24cache2_14;

public:
	inline static int32_t get_offset_of_mainThread_5() { return static_cast<int32_t>(offsetof(Server_t545360578_StaticFields, ___mainThread_5)); }
	inline Thread_t2300836069 * get_mainThread_5() const { return ___mainThread_5; }
	inline Thread_t2300836069 ** get_address_of_mainThread_5() { return &___mainThread_5; }
	inline void set_mainThread_5(Thread_t2300836069 * value)
	{
		___mainThread_5 = value;
		Il2CppCodeGenWriteBarrier((&___mainThread_5), value);
	}

	inline static int32_t get_offset_of_fileRoot_6() { return static_cast<int32_t>(offsetof(Server_t545360578_StaticFields, ___fileRoot_6)); }
	inline String_t* get_fileRoot_6() const { return ___fileRoot_6; }
	inline String_t** get_address_of_fileRoot_6() { return &___fileRoot_6; }
	inline void set_fileRoot_6(String_t* value)
	{
		___fileRoot_6 = value;
		Il2CppCodeGenWriteBarrier((&___fileRoot_6), value);
	}

	inline static int32_t get_offset_of_listener_7() { return static_cast<int32_t>(offsetof(Server_t545360578_StaticFields, ___listener_7)); }
	inline HttpListener_t988452056 * get_listener_7() const { return ___listener_7; }
	inline HttpListener_t988452056 ** get_address_of_listener_7() { return &___listener_7; }
	inline void set_listener_7(HttpListener_t988452056 * value)
	{
		___listener_7 = value;
		Il2CppCodeGenWriteBarrier((&___listener_7), value);
	}

	inline static int32_t get_offset_of_registeredRoutes_8() { return static_cast<int32_t>(offsetof(Server_t545360578_StaticFields, ___registeredRoutes_8)); }
	inline List_1_t2046717850 * get_registeredRoutes_8() const { return ___registeredRoutes_8; }
	inline List_1_t2046717850 ** get_address_of_registeredRoutes_8() { return &___registeredRoutes_8; }
	inline void set_registeredRoutes_8(List_1_t2046717850 * value)
	{
		___registeredRoutes_8 = value;
		Il2CppCodeGenWriteBarrier((&___registeredRoutes_8), value);
	}

	inline static int32_t get_offset_of_mainRequests_9() { return static_cast<int32_t>(offsetof(Server_t545360578_StaticFields, ___mainRequests_9)); }
	inline Queue_1_t3448891251 * get_mainRequests_9() const { return ___mainRequests_9; }
	inline Queue_1_t3448891251 ** get_address_of_mainRequests_9() { return &___mainRequests_9; }
	inline void set_mainRequests_9(Queue_1_t3448891251 * value)
	{
		___mainRequests_9 = value;
		Il2CppCodeGenWriteBarrier((&___mainRequests_9), value);
	}

	inline static int32_t get_offset_of_fileTypes_10() { return static_cast<int32_t>(offsetof(Server_t545360578_StaticFields, ___fileTypes_10)); }
	inline Dictionary_2_t1632706988 * get_fileTypes_10() const { return ___fileTypes_10; }
	inline Dictionary_2_t1632706988 ** get_address_of_fileTypes_10() { return &___fileTypes_10; }
	inline void set_fileTypes_10(Dictionary_2_t1632706988 * value)
	{
		___fileTypes_10 = value;
		Il2CppCodeGenWriteBarrier((&___fileTypes_10), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache0_11() { return static_cast<int32_t>(offsetof(Server_t545360578_StaticFields, ___U3CU3Ef__mgU24cache0_11)); }
	inline FileHandlerDelegate_t13458300 * get_U3CU3Ef__mgU24cache0_11() const { return ___U3CU3Ef__mgU24cache0_11; }
	inline FileHandlerDelegate_t13458300 ** get_address_of_U3CU3Ef__mgU24cache0_11() { return &___U3CU3Ef__mgU24cache0_11; }
	inline void set_U3CU3Ef__mgU24cache0_11(FileHandlerDelegate_t13458300 * value)
	{
		___U3CU3Ef__mgU24cache0_11 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__mgU24cache0_11), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache1_12() { return static_cast<int32_t>(offsetof(Server_t545360578_StaticFields, ___U3CU3Ef__mgU24cache1_12)); }
	inline FileHandlerDelegate_t13458300 * get_U3CU3Ef__mgU24cache1_12() const { return ___U3CU3Ef__mgU24cache1_12; }
	inline FileHandlerDelegate_t13458300 ** get_address_of_U3CU3Ef__mgU24cache1_12() { return &___U3CU3Ef__mgU24cache1_12; }
	inline void set_U3CU3Ef__mgU24cache1_12(FileHandlerDelegate_t13458300 * value)
	{
		___U3CU3Ef__mgU24cache1_12 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__mgU24cache1_12), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache0_13() { return static_cast<int32_t>(offsetof(Server_t545360578_StaticFields, ___U3CU3Ef__amU24cache0_13)); }
	inline Func_2_t3001800792 * get_U3CU3Ef__amU24cache0_13() const { return ___U3CU3Ef__amU24cache0_13; }
	inline Func_2_t3001800792 ** get_address_of_U3CU3Ef__amU24cache0_13() { return &___U3CU3Ef__amU24cache0_13; }
	inline void set_U3CU3Ef__amU24cache0_13(Func_2_t3001800792 * value)
	{
		___U3CU3Ef__amU24cache0_13 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__amU24cache0_13), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache2_14() { return static_cast<int32_t>(offsetof(Server_t545360578_StaticFields, ___U3CU3Ef__mgU24cache2_14)); }
	inline LogCallback_t3588208630 * get_U3CU3Ef__mgU24cache2_14() const { return ___U3CU3Ef__mgU24cache2_14; }
	inline LogCallback_t3588208630 ** get_address_of_U3CU3Ef__mgU24cache2_14() { return &___U3CU3Ef__mgU24cache2_14; }
	inline void set_U3CU3Ef__mgU24cache2_14(LogCallback_t3588208630 * value)
	{
		___U3CU3Ef__mgU24cache2_14 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__mgU24cache2_14), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SERVER_T545360578_H
#ifndef CHARACTERGPSCOPMASSCONTROLLER_T3516088559_H
#define CHARACTERGPSCOPMASSCONTROLLER_T3516088559_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// CharacterGPSCopmassController
struct  CharacterGPSCopmassController_t3516088559  : public MonoBehaviour_t3962482529
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CHARACTERGPSCOPMASSCONTROLLER_T3516088559_H
#ifndef GOOGLEMAPTILE_T1047440669_H
#define GOOGLEMAPTILE_T1047440669_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// packt.FoodyGO.Mapping.GoogleMapTile
struct  GoogleMapTile_t1047440669  : public MonoBehaviour_t3962482529
{
public:
	// System.Int32 packt.FoodyGO.Mapping.GoogleMapTile::zoomLevel
	int32_t ___zoomLevel_5;
	// packt.FoodyGO.Mapping.GoogleMapTile/MapType packt.FoodyGO.Mapping.GoogleMapTile::mapType
	int32_t ___mapType_6;
	// System.Int32 packt.FoodyGO.Mapping.GoogleMapTile::size
	int32_t ___size_7;
	// System.Boolean packt.FoodyGO.Mapping.GoogleMapTile::doubleResolution
	bool ___doubleResolution_8;
	// packt.FoodyGo.Services.GPSLocationService packt.FoodyGO.Mapping.GoogleMapTile::gpsLocationService
	GPSLocationService_t2374085698 * ___gpsLocationService_9;
	// packt.FoodyGo.Mapping.MapLocation packt.FoodyGO.Mapping.GoogleMapTile::worldCenterLocation
	MapLocation_t547849766 * ___worldCenterLocation_10;
	// packt.FoodyGo.Mapping.MapLocation packt.FoodyGO.Mapping.GoogleMapTile::tileCenterLocation
	MapLocation_t547849766 * ___tileCenterLocation_11;
	// UnityEngine.Vector2 packt.FoodyGO.Mapping.GoogleMapTile::TileOffset
	Vector2_t2156229523  ___TileOffset_12;
	// UnityEngine.Vector2 packt.FoodyGO.Mapping.GoogleMapTile::TopLeftCorner
	Vector2_t2156229523  ___TopLeftCorner_13;
	// UnityEngine.Vector2 packt.FoodyGO.Mapping.GoogleMapTile::BottomRightCorner
	Vector2_t2156229523  ___BottomRightCorner_14;
	// System.Double packt.FoodyGO.Mapping.GoogleMapTile::lastGPSUpdate
	double ___lastGPSUpdate_15;

public:
	inline static int32_t get_offset_of_zoomLevel_5() { return static_cast<int32_t>(offsetof(GoogleMapTile_t1047440669, ___zoomLevel_5)); }
	inline int32_t get_zoomLevel_5() const { return ___zoomLevel_5; }
	inline int32_t* get_address_of_zoomLevel_5() { return &___zoomLevel_5; }
	inline void set_zoomLevel_5(int32_t value)
	{
		___zoomLevel_5 = value;
	}

	inline static int32_t get_offset_of_mapType_6() { return static_cast<int32_t>(offsetof(GoogleMapTile_t1047440669, ___mapType_6)); }
	inline int32_t get_mapType_6() const { return ___mapType_6; }
	inline int32_t* get_address_of_mapType_6() { return &___mapType_6; }
	inline void set_mapType_6(int32_t value)
	{
		___mapType_6 = value;
	}

	inline static int32_t get_offset_of_size_7() { return static_cast<int32_t>(offsetof(GoogleMapTile_t1047440669, ___size_7)); }
	inline int32_t get_size_7() const { return ___size_7; }
	inline int32_t* get_address_of_size_7() { return &___size_7; }
	inline void set_size_7(int32_t value)
	{
		___size_7 = value;
	}

	inline static int32_t get_offset_of_doubleResolution_8() { return static_cast<int32_t>(offsetof(GoogleMapTile_t1047440669, ___doubleResolution_8)); }
	inline bool get_doubleResolution_8() const { return ___doubleResolution_8; }
	inline bool* get_address_of_doubleResolution_8() { return &___doubleResolution_8; }
	inline void set_doubleResolution_8(bool value)
	{
		___doubleResolution_8 = value;
	}

	inline static int32_t get_offset_of_gpsLocationService_9() { return static_cast<int32_t>(offsetof(GoogleMapTile_t1047440669, ___gpsLocationService_9)); }
	inline GPSLocationService_t2374085698 * get_gpsLocationService_9() const { return ___gpsLocationService_9; }
	inline GPSLocationService_t2374085698 ** get_address_of_gpsLocationService_9() { return &___gpsLocationService_9; }
	inline void set_gpsLocationService_9(GPSLocationService_t2374085698 * value)
	{
		___gpsLocationService_9 = value;
		Il2CppCodeGenWriteBarrier((&___gpsLocationService_9), value);
	}

	inline static int32_t get_offset_of_worldCenterLocation_10() { return static_cast<int32_t>(offsetof(GoogleMapTile_t1047440669, ___worldCenterLocation_10)); }
	inline MapLocation_t547849766 * get_worldCenterLocation_10() const { return ___worldCenterLocation_10; }
	inline MapLocation_t547849766 ** get_address_of_worldCenterLocation_10() { return &___worldCenterLocation_10; }
	inline void set_worldCenterLocation_10(MapLocation_t547849766 * value)
	{
		___worldCenterLocation_10 = value;
		Il2CppCodeGenWriteBarrier((&___worldCenterLocation_10), value);
	}

	inline static int32_t get_offset_of_tileCenterLocation_11() { return static_cast<int32_t>(offsetof(GoogleMapTile_t1047440669, ___tileCenterLocation_11)); }
	inline MapLocation_t547849766 * get_tileCenterLocation_11() const { return ___tileCenterLocation_11; }
	inline MapLocation_t547849766 ** get_address_of_tileCenterLocation_11() { return &___tileCenterLocation_11; }
	inline void set_tileCenterLocation_11(MapLocation_t547849766 * value)
	{
		___tileCenterLocation_11 = value;
		Il2CppCodeGenWriteBarrier((&___tileCenterLocation_11), value);
	}

	inline static int32_t get_offset_of_TileOffset_12() { return static_cast<int32_t>(offsetof(GoogleMapTile_t1047440669, ___TileOffset_12)); }
	inline Vector2_t2156229523  get_TileOffset_12() const { return ___TileOffset_12; }
	inline Vector2_t2156229523 * get_address_of_TileOffset_12() { return &___TileOffset_12; }
	inline void set_TileOffset_12(Vector2_t2156229523  value)
	{
		___TileOffset_12 = value;
	}

	inline static int32_t get_offset_of_TopLeftCorner_13() { return static_cast<int32_t>(offsetof(GoogleMapTile_t1047440669, ___TopLeftCorner_13)); }
	inline Vector2_t2156229523  get_TopLeftCorner_13() const { return ___TopLeftCorner_13; }
	inline Vector2_t2156229523 * get_address_of_TopLeftCorner_13() { return &___TopLeftCorner_13; }
	inline void set_TopLeftCorner_13(Vector2_t2156229523  value)
	{
		___TopLeftCorner_13 = value;
	}

	inline static int32_t get_offset_of_BottomRightCorner_14() { return static_cast<int32_t>(offsetof(GoogleMapTile_t1047440669, ___BottomRightCorner_14)); }
	inline Vector2_t2156229523  get_BottomRightCorner_14() const { return ___BottomRightCorner_14; }
	inline Vector2_t2156229523 * get_address_of_BottomRightCorner_14() { return &___BottomRightCorner_14; }
	inline void set_BottomRightCorner_14(Vector2_t2156229523  value)
	{
		___BottomRightCorner_14 = value;
	}

	inline static int32_t get_offset_of_lastGPSUpdate_15() { return static_cast<int32_t>(offsetof(GoogleMapTile_t1047440669, ___lastGPSUpdate_15)); }
	inline double get_lastGPSUpdate_15() const { return ___lastGPSUpdate_15; }
	inline double* get_address_of_lastGPSUpdate_15() { return &___lastGPSUpdate_15; }
	inline void set_lastGPSUpdate_15(double value)
	{
		___lastGPSUpdate_15 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GOOGLEMAPTILE_T1047440669_H
#ifndef GPSLOCATIONSERVICE_T2374085698_H
#define GPSLOCATIONSERVICE_T2374085698_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// packt.FoodyGo.Services.GPSLocationService
struct  GPSLocationService_t2374085698  : public MonoBehaviour_t3962482529
{
public:
	// System.Boolean packt.FoodyGo.Services.GPSLocationService::IsServiceStarted
	bool ___IsServiceStarted_4;
	// System.Single packt.FoodyGo.Services.GPSLocationService::Latitude
	float ___Latitude_5;
	// System.Single packt.FoodyGo.Services.GPSLocationService::Longitude
	float ___Longitude_6;
	// System.Single packt.FoodyGo.Services.GPSLocationService::Altitude
	float ___Altitude_7;
	// System.Single packt.FoodyGo.Services.GPSLocationService::Accuracy
	float ___Accuracy_8;
	// System.Double packt.FoodyGo.Services.GPSLocationService::Timestamp
	double ___Timestamp_9;

public:
	inline static int32_t get_offset_of_IsServiceStarted_4() { return static_cast<int32_t>(offsetof(GPSLocationService_t2374085698, ___IsServiceStarted_4)); }
	inline bool get_IsServiceStarted_4() const { return ___IsServiceStarted_4; }
	inline bool* get_address_of_IsServiceStarted_4() { return &___IsServiceStarted_4; }
	inline void set_IsServiceStarted_4(bool value)
	{
		___IsServiceStarted_4 = value;
	}

	inline static int32_t get_offset_of_Latitude_5() { return static_cast<int32_t>(offsetof(GPSLocationService_t2374085698, ___Latitude_5)); }
	inline float get_Latitude_5() const { return ___Latitude_5; }
	inline float* get_address_of_Latitude_5() { return &___Latitude_5; }
	inline void set_Latitude_5(float value)
	{
		___Latitude_5 = value;
	}

	inline static int32_t get_offset_of_Longitude_6() { return static_cast<int32_t>(offsetof(GPSLocationService_t2374085698, ___Longitude_6)); }
	inline float get_Longitude_6() const { return ___Longitude_6; }
	inline float* get_address_of_Longitude_6() { return &___Longitude_6; }
	inline void set_Longitude_6(float value)
	{
		___Longitude_6 = value;
	}

	inline static int32_t get_offset_of_Altitude_7() { return static_cast<int32_t>(offsetof(GPSLocationService_t2374085698, ___Altitude_7)); }
	inline float get_Altitude_7() const { return ___Altitude_7; }
	inline float* get_address_of_Altitude_7() { return &___Altitude_7; }
	inline void set_Altitude_7(float value)
	{
		___Altitude_7 = value;
	}

	inline static int32_t get_offset_of_Accuracy_8() { return static_cast<int32_t>(offsetof(GPSLocationService_t2374085698, ___Accuracy_8)); }
	inline float get_Accuracy_8() const { return ___Accuracy_8; }
	inline float* get_address_of_Accuracy_8() { return &___Accuracy_8; }
	inline void set_Accuracy_8(float value)
	{
		___Accuracy_8 = value;
	}

	inline static int32_t get_offset_of_Timestamp_9() { return static_cast<int32_t>(offsetof(GPSLocationService_t2374085698, ___Timestamp_9)); }
	inline double get_Timestamp_9() const { return ___Timestamp_9; }
	inline double* get_address_of_Timestamp_9() { return &___Timestamp_9; }
	inline void set_Timestamp_9(double value)
	{
		___Timestamp_9 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GPSLOCATIONSERVICE_T2374085698_H
// System.String[]
struct StringU5BU5D_t1281789340  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) String_t* m_Items[1];

public:
	inline String_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline String_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, String_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline String_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline String_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, String_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// System.Char[]
struct CharU5BU5D_t3528271667  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Il2CppChar m_Items[1];

public:
	inline Il2CppChar GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Il2CppChar* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Il2CppChar value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Il2CppChar GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Il2CppChar* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Il2CppChar value)
	{
		m_Items[index] = value;
	}
};
// System.Type[]
struct TypeU5BU5D_t3940880105  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Type_t * m_Items[1];

public:
	inline Type_t * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Type_t ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Type_t * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline Type_t * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Type_t ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Type_t * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// System.Reflection.MethodInfo[]
struct MethodInfoU5BU5D_t2572182361  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) MethodInfo_t * m_Items[1];

public:
	inline MethodInfo_t * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline MethodInfo_t ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, MethodInfo_t * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline MethodInfo_t * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline MethodInfo_t ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, MethodInfo_t * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// CUDLR.CommandAttribute[]
struct CommandAttributeU5BU5D_t3855148191  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) CommandAttribute_t3967200570 * m_Items[1];

public:
	inline CommandAttribute_t3967200570 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline CommandAttribute_t3967200570 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, CommandAttribute_t3967200570 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline CommandAttribute_t3967200570 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline CommandAttribute_t3967200570 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, CommandAttribute_t3967200570 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// System.Object[]
struct ObjectU5BU5D_t2843939325  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) RuntimeObject * m_Items[1];

public:
	inline RuntimeObject * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RuntimeObject ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RuntimeObject * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline RuntimeObject * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RuntimeObject ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RuntimeObject * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// CUDLR.RouteAttribute[]
struct RouteAttributeU5BU5D_t1966353741  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) RouteAttribute_t574643108 * m_Items[1];

public:
	inline RouteAttribute_t574643108 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RouteAttribute_t574643108 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RouteAttribute_t574643108 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline RouteAttribute_t574643108 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RouteAttribute_t574643108 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RouteAttribute_t574643108 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// System.Byte[]
struct ByteU5BU5D_t4116647657  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) uint8_t m_Items[1];

public:
	inline uint8_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline uint8_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, uint8_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline uint8_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline uint8_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, uint8_t value)
	{
		m_Items[index] = value;
	}
};
// UnityEngine.Object[]
struct ObjectU5BU5D_t1417781964  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Object_t631007953 * m_Items[1];

public:
	inline Object_t631007953 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Object_t631007953 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Object_t631007953 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline Object_t631007953 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Object_t631007953 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Object_t631007953 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// UnityEngine.Component[]
struct ComponentU5BU5D_t3294940482  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Component_t1923634451 * m_Items[1];

public:
	inline Component_t1923634451 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Component_t1923634451 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Component_t1923634451 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline Component_t1923634451 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Component_t1923634451 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Component_t1923634451 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// System.Reflection.FieldInfo[]
struct FieldInfoU5BU5D_t846150980  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) FieldInfo_t * m_Items[1];

public:
	inline FieldInfo_t * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline FieldInfo_t ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, FieldInfo_t * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline FieldInfo_t * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline FieldInfo_t ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, FieldInfo_t * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};


// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor()
extern "C" IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m518943619_gshared (Dictionary_2_t132545152 * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::ContainsKey(!0)
extern "C" IL2CPP_METHOD_ATTR bool Dictionary_2_ContainsKey_m2278349286_gshared (Dictionary_2_t132545152 * __this, RuntimeObject * p0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::set_Item(!0,!1)
extern "C" IL2CPP_METHOD_ATTR void Dictionary_2_set_Item_m3474379962_gshared (Dictionary_2_t132545152 * __this, RuntimeObject * p0, RuntimeObject * p1, const RuntimeMethod* method);
// !1 System.Collections.Generic.Dictionary`2<System.Object,System.Object>::get_Item(!0)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * Dictionary_2_get_Item_m2714930061_gshared (Dictionary_2_t132545152 * __this, RuntimeObject * p0, const RuntimeMethod* method);
// System.Collections.Generic.Dictionary`2/KeyCollection<!0,!1> System.Collections.Generic.Dictionary`2<System.Object,System.Object>::get_Keys()
extern "C" IL2CPP_METHOD_ATTR KeyCollection_t322220623 * Dictionary_2_get_Keys_m2217135091_gshared (Dictionary_2_t132545152 * __this, const RuntimeMethod* method);
// System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<!0,!1> System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Object>::GetEnumerator()
extern "C" IL2CPP_METHOD_ATTR Enumerator_t314722136  KeyCollection_GetEnumerator_m982770428_gshared (KeyCollection_t322220623 * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<System.Object,System.Object>::get_Current()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * Enumerator_get_Current_m3687673883_gshared (Enumerator_t314722136 * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<System.Object,System.Object>::MoveNext()
extern "C" IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_m76191888_gshared (Enumerator_t314722136 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<System.Object,System.Object>::Dispose()
extern "C" IL2CPP_METHOD_ATTR void Enumerator_Dispose_m260444170_gshared (Enumerator_t314722136 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
extern "C" IL2CPP_METHOD_ATTR void List_1__ctor_m2321703786_gshared (List_1_t257213610 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::Add(!0)
extern "C" IL2CPP_METHOD_ATTR void List_1_Add_m3338814081_gshared (List_1_t257213610 * __this, RuntimeObject * p0, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count()
extern "C" IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m2934127733_gshared (List_1_t257213610 * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1<System.Object>::get_Item(System.Int32)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * List_1_get_Item_m2287542950_gshared (List_1_t257213610 * __this, int32_t p0, const RuntimeMethod* method);
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<System.Object>::GetEnumerator()
extern "C" IL2CPP_METHOD_ATTR Enumerator_t2146457487  List_1_GetEnumerator_m2930774921_gshared (List_1_t257213610 * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1/Enumerator<System.Object>::get_Current()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * Enumerator_get_Current_m470245444_gshared (Enumerator_t2146457487 * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Object>::MoveNext()
extern "C" IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_m2142368520_gshared (Enumerator_t2146457487 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1/Enumerator<System.Object>::Dispose()
extern "C" IL2CPP_METHOD_ATTR void Enumerator_Dispose_m3007748546_gshared (Enumerator_t2146457487 * __this, const RuntimeMethod* method);
// System.Collections.Generic.IEnumerable`1<!!0> System.Linq.Enumerable::Skip<System.Object>(System.Collections.Generic.IEnumerable`1<!!0>,System.Int32)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* Enumerable_Skip_TisRuntimeObject_m2899964092_gshared (RuntimeObject * __this /* static, unused */, RuntimeObject* p0, int32_t p1, const RuntimeMethod* method);
// !!0[] System.Linq.Enumerable::ToArray<System.Object>(System.Collections.Generic.IEnumerable`1<!!0>)
extern "C" IL2CPP_METHOD_ATTR ObjectU5BU5D_t2843939325* Enumerable_ToArray_TisRuntimeObject_m698722831_gshared (RuntimeObject * __this /* static, unused */, RuntimeObject* p0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Queue`1<CUDLR.QueuedCommand>::.ctor()
extern "C" IL2CPP_METHOD_ATTR void Queue_1__ctor_m1114640169_gshared (Queue_1_t3702832664 * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.Queue`1<CUDLR.QueuedCommand>::Dequeue()
extern "C" IL2CPP_METHOD_ATTR QueuedCommand_t3856573170  Queue_1_Dequeue_m940720808_gshared (Queue_1_t3702832664 * __this, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.Queue`1<CUDLR.QueuedCommand>::get_Count()
extern "C" IL2CPP_METHOD_ATTR int32_t Queue_1_get_Count_m1457504846_gshared (Queue_1_t3702832664 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Queue`1<CUDLR.QueuedCommand>::Enqueue(!0)
extern "C" IL2CPP_METHOD_ATTR void Queue_1_Enqueue_m1798554875_gshared (Queue_1_t3702832664 * __this, QueuedCommand_t3856573170  p0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::Clear()
extern "C" IL2CPP_METHOD_ATTR void List_1_Clear_m3697625829_gshared (List_1_t257213610 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::RemoveAt(System.Int32)
extern "C" IL2CPP_METHOD_ATTR void List_1_RemoveAt_m2730968292_gshared (List_1_t257213610 * __this, int32_t p0, const RuntimeMethod* method);
// !0[] System.Collections.Generic.List`1<System.Object>::ToArray()
extern "C" IL2CPP_METHOD_ATTR ObjectU5BU5D_t2843939325* List_1_ToArray_m4168020446_gshared (List_1_t257213610 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::Insert(System.Int32,!0)
extern "C" IL2CPP_METHOD_ATTR void List_1_Insert_m3748206754_gshared (List_1_t257213610 * __this, int32_t p0, RuntimeObject * p1, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::TryGetValue(!0,!1&)
extern "C" IL2CPP_METHOD_ATTR bool Dictionary_2_TryGetValue_m3280774074_gshared (Dictionary_2_t132545152 * __this, RuntimeObject * p0, RuntimeObject ** p1, const RuntimeMethod* method);
// System.Void System.Func`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>,System.Object>::.ctor(System.Object,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void Func_2__ctor_m146726457_gshared (Func_2_t4016427559 * __this, RuntimeObject * p0, intptr_t p1, const RuntimeMethod* method);
// System.Collections.Generic.IEnumerable`1<!!1> System.Linq.Enumerable::Select<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>,System.Object>(System.Collections.Generic.IEnumerable`1<!!0>,System.Func`2<!!0,!!1>)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* Enumerable_Select_TisKeyValuePair_2_t2530217319_TisRuntimeObject_m3051228765_gshared (RuntimeObject * __this /* static, unused */, RuntimeObject* p0, Func_2_t4016427559 * p1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Queue`1<System.Object>::Enqueue(!0)
extern "C" IL2CPP_METHOD_ATTR void Queue_1_Enqueue_m1868480850_gshared (Queue_1_t2926365658 * __this, RuntimeObject * p0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Queue`1<System.Object>::.ctor()
extern "C" IL2CPP_METHOD_ATTR void Queue_1__ctor_m3749217910_gshared (Queue_1_t2926365658 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Add(!0,!1)
extern "C" IL2CPP_METHOD_ATTR void Dictionary_2_Add_m2387223709_gshared (Dictionary_2_t132545152 * __this, RuntimeObject * p0, RuntimeObject * p1, const RuntimeMethod* method);
// !0 System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>::get_Key()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * KeyValuePair_2_get_Key_m1328507389_gshared (KeyValuePair_2_t2530217319 * __this, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.Queue`1<System.Object>::get_Count()
extern "C" IL2CPP_METHOD_ATTR int32_t Queue_1_get_Count_m2496300460_gshared (Queue_1_t2926365658 * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.Queue`1<System.Object>::Dequeue()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * Queue_1_Dequeue_m3550993416_gshared (Queue_1_t2926365658 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<System.Object>()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * Component_GetComponent_TisRuntimeObject_m2906321015_gshared (Component_t1923634451 * __this, const RuntimeMethod* method);

// System.Void System.Attribute::.ctor()
extern "C" IL2CPP_METHOD_ATTR void Attribute__ctor_m1529526131 (Attribute_t861562559 * __this, const RuntimeMethod* method);
// System.Void CUDLR.CommandAttribute/Callback::Invoke(System.String[])
extern "C" IL2CPP_METHOD_ATTR void Callback_Invoke_m995029599 (Callback_t1969551140 * __this, StringU5BU5D_t1281789340* ___args0, const RuntimeMethod* method);
// System.Void CUDLR.CommandAttribute/CallbackSimple::Invoke()
extern "C" IL2CPP_METHOD_ATTR void CallbackSimple_Invoke_m2849167808 (CallbackSimple_t200441164 * __this, const RuntimeMethod* method);
// System.Void System.Object::.ctor()
extern "C" IL2CPP_METHOD_ATTR void Object__ctor_m297566312 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.String,CUDLR.CommandTree>::.ctor()
inline void Dictionary_2__ctor_m3655204740 (Dictionary_2_t2517652782 * __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t2517652782 *, const RuntimeMethod*))Dictionary_2__ctor_m518943619_gshared)(__this, method);
}
// System.String System.String::ToLower()
extern "C" IL2CPP_METHOD_ATTR String_t* String_ToLower_m2029374922 (String_t* __this, const RuntimeMethod* method);
// System.String[] System.String::Split(System.Char[])
extern "C" IL2CPP_METHOD_ATTR StringU5BU5D_t1281789340* String_Split_m3646115398 (String_t* __this, CharU5BU5D_t3528271667* p0, const RuntimeMethod* method);
// System.Void CUDLR.CommandTree::_add(System.String[],System.Int32,CUDLR.CommandAttribute)
extern "C" IL2CPP_METHOD_ATTR void CommandTree__add_m2357921295 (CommandTree_t2732396483 * __this, StringU5BU5D_t1281789340* ___commands0, int32_t ___command_index1, CommandAttribute_t3967200570 * ___cmd2, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,CUDLR.CommandTree>::ContainsKey(!0)
inline bool Dictionary_2_ContainsKey_m108370318 (Dictionary_2_t2517652782 * __this, String_t* p0, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t2517652782 *, String_t*, const RuntimeMethod*))Dictionary_2_ContainsKey_m2278349286_gshared)(__this, p0, method);
}
// System.Void CUDLR.CommandTree::.ctor()
extern "C" IL2CPP_METHOD_ATTR void CommandTree__ctor_m628957943 (CommandTree_t2732396483 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.String,CUDLR.CommandTree>::set_Item(!0,!1)
inline void Dictionary_2_set_Item_m367355386 (Dictionary_2_t2517652782 * __this, String_t* p0, CommandTree_t2732396483 * p1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t2517652782 *, String_t*, CommandTree_t2732396483 *, const RuntimeMethod*))Dictionary_2_set_Item_m3474379962_gshared)(__this, p0, p1, method);
}
// !1 System.Collections.Generic.Dictionary`2<System.String,CUDLR.CommandTree>::get_Item(!0)
inline CommandTree_t2732396483 * Dictionary_2_get_Item_m2160169883 (Dictionary_2_t2517652782 * __this, String_t* p0, const RuntimeMethod* method)
{
	return ((  CommandTree_t2732396483 * (*) (Dictionary_2_t2517652782 *, String_t*, const RuntimeMethod*))Dictionary_2_get_Item_m2714930061_gshared)(__this, p0, method);
}
// System.String CUDLR.CommandTree::_complete(System.String[],System.Int32,System.String)
extern "C" IL2CPP_METHOD_ATTR String_t* CommandTree__complete_m3984793792 (CommandTree_t2732396483 * __this, StringU5BU5D_t1281789340* ___partialCommand0, int32_t ___index1, String_t* ___result2, const RuntimeMethod* method);
// System.Void CUDLR.Console::LogCommand(System.String)
extern "C" IL2CPP_METHOD_ATTR void Console_LogCommand_m2514322523 (RuntimeObject * __this /* static, unused */, String_t* ___cmd0, const RuntimeMethod* method);
// System.Collections.Generic.Dictionary`2/KeyCollection<!0,!1> System.Collections.Generic.Dictionary`2<System.String,CUDLR.CommandTree>::get_Keys()
inline KeyCollection_t2707328253 * Dictionary_2_get_Keys_m1160280914 (Dictionary_2_t2517652782 * __this, const RuntimeMethod* method)
{
	return ((  KeyCollection_t2707328253 * (*) (Dictionary_2_t2517652782 *, const RuntimeMethod*))Dictionary_2_get_Keys_m2217135091_gshared)(__this, method);
}
// System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<!0,!1> System.Collections.Generic.Dictionary`2/KeyCollection<System.String,CUDLR.CommandTree>::GetEnumerator()
inline Enumerator_t2699829766  KeyCollection_GetEnumerator_m2274835298 (KeyCollection_t2707328253 * __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t2699829766  (*) (KeyCollection_t2707328253 *, const RuntimeMethod*))KeyCollection_GetEnumerator_m982770428_gshared)(__this, method);
}
// !0 System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<System.String,CUDLR.CommandTree>::get_Current()
inline String_t* Enumerator_get_Current_m3106489094 (Enumerator_t2699829766 * __this, const RuntimeMethod* method)
{
	return ((  String_t* (*) (Enumerator_t2699829766 *, const RuntimeMethod*))Enumerator_get_Current_m3687673883_gshared)(__this, method);
}
// System.String System.String::Concat(System.String,System.String,System.String)
extern "C" IL2CPP_METHOD_ATTR String_t* String_Concat_m3755062657 (RuntimeObject * __this /* static, unused */, String_t* p0, String_t* p1, String_t* p2, const RuntimeMethod* method);
// System.Void CUDLR.Console::Log(System.String)
extern "C" IL2CPP_METHOD_ATTR void Console_Log_m4248649498 (RuntimeObject * __this /* static, unused */, String_t* ___str0, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<System.String,CUDLR.CommandTree>::MoveNext()
inline bool Enumerator_MoveNext_m3675082026 (Enumerator_t2699829766 * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t2699829766 *, const RuntimeMethod*))Enumerator_MoveNext_m76191888_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<System.String,CUDLR.CommandTree>::Dispose()
inline void Enumerator_Dispose_m975943653 (Enumerator_t2699829766 * __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t2699829766 *, const RuntimeMethod*))Enumerator_Dispose_m260444170_gshared)(__this, method);
}
// System.String System.String::Concat(System.String,System.String)
extern "C" IL2CPP_METHOD_ATTR String_t* String_Concat_m3937257545 (RuntimeObject * __this /* static, unused */, String_t* p0, String_t* p1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.String>::.ctor()
inline void List_1__ctor_m706204246 (List_1_t3319525431 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t3319525431 *, const RuntimeMethod*))List_1__ctor_m2321703786_gshared)(__this, method);
}
// System.Boolean System.String::StartsWith(System.String)
extern "C" IL2CPP_METHOD_ATTR bool String_StartsWith_m1759067526 (String_t* __this, String_t* p0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.String>::Add(!0)
inline void List_1_Add_m1685793073 (List_1_t3319525431 * __this, String_t* p0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t3319525431 *, String_t*, const RuntimeMethod*))List_1_Add_m3338814081_gshared)(__this, p0, method);
}
// System.Int32 System.Collections.Generic.List`1<System.String>::get_Count()
inline int32_t List_1_get_Count_m2276455407 (List_1_t3319525431 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t3319525431 *, const RuntimeMethod*))List_1_get_Count_m2934127733_gshared)(__this, method);
}
// !0 System.Collections.Generic.List`1<System.String>::get_Item(System.Int32)
inline String_t* List_1_get_Item_m3346958548 (List_1_t3319525431 * __this, int32_t p0, const RuntimeMethod* method)
{
	return ((  String_t* (*) (List_1_t3319525431 *, int32_t, const RuntimeMethod*))List_1_get_Item_m2287542950_gshared)(__this, p0, method);
}
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<System.String>::GetEnumerator()
inline Enumerator_t913802012  List_1_GetEnumerator_m2043795 (List_1_t3319525431 * __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t913802012  (*) (List_1_t3319525431 *, const RuntimeMethod*))List_1_GetEnumerator_m2930774921_gshared)(__this, method);
}
// !0 System.Collections.Generic.List`1/Enumerator<System.String>::get_Current()
inline String_t* Enumerator_get_Current_m236733038 (Enumerator_t913802012 * __this, const RuntimeMethod* method)
{
	return ((  String_t* (*) (Enumerator_t913802012 *, const RuntimeMethod*))Enumerator_get_Current_m470245444_gshared)(__this, method);
}
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.String>::MoveNext()
inline bool Enumerator_MoveNext_m4158182743 (Enumerator_t913802012 * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t913802012 *, const RuntimeMethod*))Enumerator_MoveNext_m2142368520_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<System.String>::Dispose()
inline void Enumerator_Dispose_m2026665411 (Enumerator_t913802012 * __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t913802012 *, const RuntimeMethod*))Enumerator_Dispose_m3007748546_gshared)(__this, method);
}
// System.Void System.Text.RegularExpressions.Regex::.ctor(System.String)
extern "C" IL2CPP_METHOD_ATTR void Regex__ctor_m897876424 (Regex_t3657309853 * __this, String_t* p0, const RuntimeMethod* method);
// System.Text.RegularExpressions.MatchCollection System.Text.RegularExpressions.Regex::Matches(System.String)
extern "C" IL2CPP_METHOD_ATTR MatchCollection_t1395363720 * Regex_Matches_m175567660 (Regex_t3657309853 * __this, String_t* p0, const RuntimeMethod* method);
// System.Int32 System.Text.RegularExpressions.MatchCollection::get_Count()
extern "C" IL2CPP_METHOD_ATTR int32_t MatchCollection_get_Count_m1667454419 (MatchCollection_t1395363720 * __this, const RuntimeMethod* method);
// System.String System.Text.RegularExpressions.Capture::get_Value()
extern "C" IL2CPP_METHOD_ATTR String_t* Capture_get_Value_m538076933 (Capture_t2232016050 * __this, const RuntimeMethod* method);
// System.String System.String::Replace(System.String,System.String)
extern "C" IL2CPP_METHOD_ATTR String_t* String_Replace_m1273907647 (String_t* __this, String_t* p0, String_t* p1, const RuntimeMethod* method);
// System.Void CUDLR.CommandTree::_run(System.String[],System.Int32)
extern "C" IL2CPP_METHOD_ATTR void CommandTree__run_m3314472370 (CommandTree_t2732396483 * __this, StringU5BU5D_t1281789340* ___commands0, int32_t ___index1, const RuntimeMethod* method);
// System.Void CUDLR.CommandTree::RunCommand(System.String[])
extern "C" IL2CPP_METHOD_ATTR void CommandTree_RunCommand_m942982424 (CommandTree_t2732396483 * __this, StringU5BU5D_t1281789340* ___args0, const RuntimeMethod* method);
// System.Collections.Generic.IEnumerable`1<!!0> System.Linq.Enumerable::Skip<System.String>(System.Collections.Generic.IEnumerable`1<!!0>,System.Int32)
inline RuntimeObject* Enumerable_Skip_TisString_t_m1381761333 (RuntimeObject * __this /* static, unused */, RuntimeObject* p0, int32_t p1, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (RuntimeObject * /* static, unused */, RuntimeObject*, int32_t, const RuntimeMethod*))Enumerable_Skip_TisRuntimeObject_m2899964092_gshared)(__this /* static, unused */, p0, p1, method);
}
// !!0[] System.Linq.Enumerable::ToArray<System.String>(System.Collections.Generic.IEnumerable`1<!!0>)
inline StringU5BU5D_t1281789340* Enumerable_ToArray_TisString_t_m4208096419 (RuntimeObject * __this /* static, unused */, RuntimeObject* p0, const RuntimeMethod* method)
{
	return ((  StringU5BU5D_t1281789340* (*) (RuntimeObject * /* static, unused */, RuntimeObject*, const RuntimeMethod*))Enumerable_ToArray_TisRuntimeObject_m698722831_gshared)(__this /* static, unused */, p0, method);
}
// System.Void CUDLR.Console::Queue(CUDLR.CommandAttribute,System.String[])
extern "C" IL2CPP_METHOD_ATTR void Console_Queue_m3385174577 (RuntimeObject * __this /* static, unused */, CommandAttribute_t3967200570 * ___command0, StringU5BU5D_t1281789340* ___args1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Queue`1<CUDLR.QueuedCommand>::.ctor()
inline void Queue_1__ctor_m1114640169 (Queue_1_t3702832664 * __this, const RuntimeMethod* method)
{
	((  void (*) (Queue_1_t3702832664 *, const RuntimeMethod*))Queue_1__ctor_m1114640169_gshared)(__this, method);
}
// System.Void CUDLR.Console::RegisterAttributes()
extern "C" IL2CPP_METHOD_ATTR void Console_RegisterAttributes_m1913084373 (Console_t978607149 * __this, const RuntimeMethod* method);
// System.Void CUDLR.Console::.ctor()
extern "C" IL2CPP_METHOD_ATTR void Console__ctor_m1493958339 (Console_t978607149 * __this, const RuntimeMethod* method);
// CUDLR.Console CUDLR.Console::get_Instance()
extern "C" IL2CPP_METHOD_ATTR Console_t978607149 * Console_get_Instance_m2769456780 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// !0 System.Collections.Generic.Queue`1<CUDLR.QueuedCommand>::Dequeue()
inline QueuedCommand_t3856573170  Queue_1_Dequeue_m940720808 (Queue_1_t3702832664 * __this, const RuntimeMethod* method)
{
	return ((  QueuedCommand_t3856573170  (*) (Queue_1_t3702832664 *, const RuntimeMethod*))Queue_1_Dequeue_m940720808_gshared)(__this, method);
}
// System.Int32 System.Collections.Generic.Queue`1<CUDLR.QueuedCommand>::get_Count()
inline int32_t Queue_1_get_Count_m1457504846 (Queue_1_t3702832664 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Queue_1_t3702832664 *, const RuntimeMethod*))Queue_1_get_Count_m1457504846_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Queue`1<CUDLR.QueuedCommand>::Enqueue(!0)
inline void Queue_1_Enqueue_m1798554875 (Queue_1_t3702832664 * __this, QueuedCommand_t3856573170  p0, const RuntimeMethod* method)
{
	((  void (*) (Queue_1_t3702832664 *, QueuedCommand_t3856573170 , const RuntimeMethod*))Queue_1_Enqueue_m1798554875_gshared)(__this, p0, method);
}
// System.Int32 System.String::get_Length()
extern "C" IL2CPP_METHOD_ATTR int32_t String_get_Length_m3847582255 (String_t* __this, const RuntimeMethod* method);
// System.Void CUDLR.Console::RecordCommand(System.String)
extern "C" IL2CPP_METHOD_ATTR void Console_RecordCommand_m426163633 (Console_t978607149 * __this, String_t* ___command0, const RuntimeMethod* method);
// System.Void CUDLR.CommandTree::Run(System.String)
extern "C" IL2CPP_METHOD_ATTR void CommandTree_Run_m911914304 (CommandTree_t2732396483 * __this, String_t* ___commandStr0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.String>::Clear()
inline void List_1_Clear_m3111619026 (List_1_t3319525431 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t3319525431 *, const RuntimeMethod*))List_1_Clear_m3697625829_gshared)(__this, method);
}
// System.String System.String::Format(System.String,System.Object)
extern "C" IL2CPP_METHOD_ATTR String_t* String_Format_m2844511972 (RuntimeObject * __this /* static, unused */, String_t* p0, RuntimeObject * p1, const RuntimeMethod* method);
// System.String CUDLR.CommandTree::Complete(System.String)
extern "C" IL2CPP_METHOD_ATTR String_t* CommandTree_Complete_m4074238911 (CommandTree_t2732396483 * __this, String_t* ___partialCommand0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.String>::RemoveAt(System.Int32)
inline void List_1_RemoveAt_m815285786 (List_1_t3319525431 * __this, int32_t p0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t3319525431 *, int32_t, const RuntimeMethod*))List_1_RemoveAt_m2730968292_gshared)(__this, p0, method);
}
// !0[] System.Collections.Generic.List`1<System.String>::ToArray()
inline StringU5BU5D_t1281789340* List_1_ToArray_m3983937259 (List_1_t3319525431 * __this, const RuntimeMethod* method)
{
	return ((  StringU5BU5D_t1281789340* (*) (List_1_t3319525431 *, const RuntimeMethod*))List_1_ToArray_m4168020446_gshared)(__this, method);
}
// System.String System.String::Join(System.String,System.String[])
extern "C" IL2CPP_METHOD_ATTR String_t* String_Join_m2050845953 (RuntimeObject * __this /* static, unused */, String_t* p0, StringU5BU5D_t1281789340* p1, const RuntimeMethod* method);
// System.Void System.Exception::.ctor(System.String)
extern "C" IL2CPP_METHOD_ATTR void Exception__ctor_m1152696503 (Exception_t * __this, String_t* p0, const RuntimeMethod* method);
// System.Void CUDLR.CommandAttribute::.ctor(System.String,System.String,System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void CommandAttribute__ctor_m3176663506 (CommandAttribute_t3967200570 * __this, String_t* ___cmd0, String_t* ___help1, bool ___runOnMainThread2, const RuntimeMethod* method);
// System.Void CUDLR.CommandTree::Add(CUDLR.CommandAttribute)
extern "C" IL2CPP_METHOD_ATTR void CommandTree_Add_m1413729376 (CommandTree_t2732396483 * __this, CommandAttribute_t3967200570 * ___cmd0, const RuntimeMethod* method);
// System.String System.String::Format(System.String,System.Object,System.Object)
extern "C" IL2CPP_METHOD_ATTR String_t* String_Format_m2556382932 (RuntimeObject * __this /* static, unused */, String_t* p0, RuntimeObject * p1, RuntimeObject * p2, const RuntimeMethod* method);
// System.Type System.Type::GetTypeFromHandle(System.RuntimeTypeHandle)
extern "C" IL2CPP_METHOD_ATTR Type_t * Type_GetTypeFromHandle_m1620074514 (RuntimeObject * __this /* static, unused */, RuntimeTypeHandle_t3027515415  p0, const RuntimeMethod* method);
// System.Delegate System.Delegate::CreateDelegate(System.Type,System.Reflection.MethodInfo,System.Boolean)
extern "C" IL2CPP_METHOD_ATTR Delegate_t1188392813 * Delegate_CreateDelegate_m1051651521 (RuntimeObject * __this /* static, unused */, Type_t * p0, MethodInfo_t * p1, bool p2, const RuntimeMethod* method);
// System.Void CUDLR.Console/<RegisterAttributes>c__AnonStorey0::.ctor()
extern "C" IL2CPP_METHOD_ATTR void U3CRegisterAttributesU3Ec__AnonStorey0__ctor_m3969912081 (U3CRegisterAttributesU3Ec__AnonStorey0_t2829874507 * __this, const RuntimeMethod* method);
// System.Void CUDLR.CommandAttribute/Callback::.ctor(System.Object,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void Callback__ctor_m947519337 (Callback_t1969551140 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::LogError(System.Object)
extern "C" IL2CPP_METHOD_ATTR void Debug_LogError_m2850623458 (RuntimeObject * __this /* static, unused */, RuntimeObject * p0, const RuntimeMethod* method);
// System.Boolean System.String::IsNullOrEmpty(System.String)
extern "C" IL2CPP_METHOD_ATTR bool String_IsNullOrEmpty_m2969720369 (RuntimeObject * __this /* static, unused */, String_t* p0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.String>::Insert(System.Int32,!0)
inline void List_1_Insert_m1169937215 (List_1_t3319525431 * __this, int32_t p0, String_t* p1, const RuntimeMethod* method)
{
	((  void (*) (List_1_t3319525431 *, int32_t, String_t*, const RuntimeMethod*))List_1_Insert_m3748206754_gshared)(__this, p0, p1, method);
}
// System.Net.HttpListenerResponse CUDLR.RequestContext::get_Response()
extern "C" IL2CPP_METHOD_ATTR HttpListenerResponse_t3502667045 * RequestContext_get_Response_m1933452700 (RequestContext_t3602631757 * __this, const RuntimeMethod* method);
// System.String CUDLR.Console::Output()
extern "C" IL2CPP_METHOD_ATTR String_t* Console_Output_m1199728895 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// System.Void ResponseExtension::WriteString(System.Net.HttpListenerResponse,System.String,System.String)
extern "C" IL2CPP_METHOD_ATTR void ResponseExtension_WriteString_m1918185232 (RuntimeObject * __this /* static, unused */, HttpListenerResponse_t3502667045 * ___response0, String_t* ___input1, String_t* ___type2, const RuntimeMethod* method);
// System.Net.HttpListenerRequest CUDLR.RequestContext::get_Request()
extern "C" IL2CPP_METHOD_ATTR HttpListenerRequest_t630699488 * RequestContext_get_Request_m4257748949 (RequestContext_t3602631757 * __this, const RuntimeMethod* method);
// System.Collections.Specialized.NameValueCollection System.Net.HttpListenerRequest::get_QueryString()
extern "C" IL2CPP_METHOD_ATTR NameValueCollection_t407452768 * HttpListenerRequest_get_QueryString_m2395793573 (HttpListenerRequest_t630699488 * __this, const RuntimeMethod* method);
// System.Void CUDLR.Console::Run(System.String)
extern "C" IL2CPP_METHOD_ATTR void Console_Run_m1342859034 (RuntimeObject * __this /* static, unused */, String_t* ___str0, const RuntimeMethod* method);
// System.Void System.Net.HttpListenerResponse::set_StatusCode(System.Int32)
extern "C" IL2CPP_METHOD_ATTR void HttpListenerResponse_set_StatusCode_m2769870340 (HttpListenerResponse_t3502667045 * __this, int32_t p0, const RuntimeMethod* method);
// System.Void System.Net.HttpListenerResponse::set_StatusDescription(System.String)
extern "C" IL2CPP_METHOD_ATTR void HttpListenerResponse_set_StatusDescription_m2635984301 (HttpListenerResponse_t3502667045 * __this, String_t* p0, const RuntimeMethod* method);
// System.Int32 System.Int32::Parse(System.String)
extern "C" IL2CPP_METHOD_ATTR int32_t Int32_Parse_m1033611559 (RuntimeObject * __this /* static, unused */, String_t* p0, const RuntimeMethod* method);
// System.String CUDLR.Console::PreviousCommand(System.Int32)
extern "C" IL2CPP_METHOD_ATTR String_t* Console_PreviousCommand_m687773879 (RuntimeObject * __this /* static, unused */, int32_t ___index0, const RuntimeMethod* method);
// System.String CUDLR.Console::Complete(System.String)
extern "C" IL2CPP_METHOD_ATTR String_t* Console_Complete_m2408208350 (RuntimeObject * __this /* static, unused */, String_t* ___partialCommand0, const RuntimeMethod* method);
// System.Net.HttpListenerRequest System.Net.HttpListenerContext::get_Request()
extern "C" IL2CPP_METHOD_ATTR HttpListenerRequest_t630699488 * HttpListenerContext_get_Request_m4128271285 (HttpListenerContext_t424880822 * __this, const RuntimeMethod* method);
// System.Uri System.Net.HttpListenerRequest::get_Url()
extern "C" IL2CPP_METHOD_ATTR Uri_t100236324 * HttpListenerRequest_get_Url_m3001623383 (HttpListenerRequest_t630699488 * __this, const RuntimeMethod* method);
// System.String System.Uri::get_AbsolutePath()
extern "C" IL2CPP_METHOD_ATTR String_t* Uri_get_AbsolutePath_m590948575 (Uri_t100236324 * __this, const RuntimeMethod* method);
// System.String UnityEngine.WWW::UnEscapeURL(System.String)
extern "C" IL2CPP_METHOD_ATTR String_t* WWW_UnEscapeURL_m2827350915 (RuntimeObject * __this /* static, unused */, String_t* p0, const RuntimeMethod* method);
// System.Boolean System.String::op_Equality(System.String,System.String)
extern "C" IL2CPP_METHOD_ATTR bool String_op_Equality_m920492651 (RuntimeObject * __this /* static, unused */, String_t* p0, String_t* p1, const RuntimeMethod* method);
// System.Net.HttpListenerResponse System.Net.HttpListenerContext::get_Response()
extern "C" IL2CPP_METHOD_ATTR HttpListenerResponse_t3502667045 * HttpListenerContext_get_Response_m3502405584 (HttpListenerContext_t424880822 * __this, const RuntimeMethod* method);
// System.Void System.Text.RegularExpressions.Regex::.ctor(System.String,System.Text.RegularExpressions.RegexOptions)
extern "C" IL2CPP_METHOD_ATTR void Regex__ctor_m1728442805 (Regex_t3657309853 * __this, String_t* p0, int32_t p1, const RuntimeMethod* method);
// System.Void CUDLR.RouteAttribute/Callback::Invoke(CUDLR.RequestContext)
extern "C" IL2CPP_METHOD_ATTR void Callback_Invoke_m1735851838 (Callback_t1777011615 * __this, RequestContext_t3602631757 * ___context0, const RuntimeMethod* method);
// System.Void UnityEngine.MonoBehaviour::.ctor()
extern "C" IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_m1579109191 (MonoBehaviour_t3962482529 * __this, const RuntimeMethod* method);
// System.Threading.Thread System.Threading.Thread::get_CurrentThread()
extern "C" IL2CPP_METHOD_ATTR Thread_t2300836069 * Thread_get_CurrentThread_m4142136012 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// System.String UnityEngine.Application::get_streamingAssetsPath()
extern "C" IL2CPP_METHOD_ATTR String_t* Application_get_streamingAssetsPath_m1172141117 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// System.String System.IO.Path::Combine(System.String,System.String)
extern "C" IL2CPP_METHOD_ATTR String_t* Path_Combine_m3389272516 (RuntimeObject * __this /* static, unused */, String_t* p0, String_t* p1, const RuntimeMethod* method);
// System.Void CUDLR.Server::RegisterRoutes()
extern "C" IL2CPP_METHOD_ATTR void Server_RegisterRoutes_m2940078606 (Server_t545360578 * __this, const RuntimeMethod* method);
// System.Void CUDLR.Server::RegisterFileHandlers()
extern "C" IL2CPP_METHOD_ATTR void Server_RegisterFileHandlers_m3848080522 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// System.String System.String::Concat(System.Object,System.Object)
extern "C" IL2CPP_METHOD_ATTR String_t* String_Concat_m904156431 (RuntimeObject * __this /* static, unused */, RuntimeObject * p0, RuntimeObject * p1, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::Log(System.Object)
extern "C" IL2CPP_METHOD_ATTR void Debug_Log_m4051431634 (RuntimeObject * __this /* static, unused */, RuntimeObject * p0, const RuntimeMethod* method);
// System.Net.HttpListenerPrefixCollection System.Net.HttpListener::get_Prefixes()
extern "C" IL2CPP_METHOD_ATTR HttpListenerPrefixCollection_t2963430373 * HttpListener_get_Prefixes_m3351938452 (HttpListener_t988452056 * __this, const RuntimeMethod* method);
// System.String System.String::Concat(System.Object,System.Object,System.Object)
extern "C" IL2CPP_METHOD_ATTR String_t* String_Concat_m1715369213 (RuntimeObject * __this /* static, unused */, RuntimeObject * p0, RuntimeObject * p1, RuntimeObject * p2, const RuntimeMethod* method);
// System.Void System.Net.HttpListenerPrefixCollection::Add(System.String)
extern "C" IL2CPP_METHOD_ATTR void HttpListenerPrefixCollection_Add_m2988392880 (HttpListenerPrefixCollection_t2963430373 * __this, String_t* p0, const RuntimeMethod* method);
// System.Void System.Net.HttpListener::Start()
extern "C" IL2CPP_METHOD_ATTR void HttpListener_Start_m1585765732 (HttpListener_t988452056 * __this, const RuntimeMethod* method);
// System.Void System.AsyncCallback::.ctor(System.Object,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void AsyncCallback__ctor_m530647953 (AsyncCallback_t3962456242 * __this, RuntimeObject * p0, intptr_t p1, const RuntimeMethod* method);
// System.IAsyncResult System.Net.HttpListener::BeginGetContext(System.AsyncCallback,System.Object)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* HttpListener_BeginGetContext_m484775909 (HttpListener_t988452056 * __this, AsyncCallback_t3962456242 * p0, RuntimeObject * p1, const RuntimeMethod* method);
// System.Collections.IEnumerator CUDLR.Server::HandleRequests()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* Server_HandleRequests_m1187942297 (Server_t545360578 * __this, const RuntimeMethod* method);
// UnityEngine.Coroutine UnityEngine.MonoBehaviour::StartCoroutine(System.Collections.IEnumerator)
extern "C" IL2CPP_METHOD_ATTR Coroutine_t3829159415 * MonoBehaviour_StartCoroutine_m3411253000 (MonoBehaviour_t3962482529 * __this, RuntimeObject* p0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<CUDLR.RouteAttribute>::.ctor()
inline void List_1__ctor_m2948823990 (List_1_t2046717850 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t2046717850 *, const RuntimeMethod*))List_1__ctor_m2321703786_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<CUDLR.RouteAttribute>::Add(!0)
inline void List_1_Add_m3083894502 (List_1_t2046717850 * __this, RouteAttribute_t574643108 * p0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t2046717850 *, RouteAttribute_t574643108 *, const RuntimeMethod*))List_1_Add_m3338814081_gshared)(__this, p0, method);
}
// System.Text.RegularExpressions.Group System.Text.RegularExpressions.GroupCollection::get_Item(System.Int32)
extern "C" IL2CPP_METHOD_ATTR Group_t2468205786 * GroupCollection_get_Item_m2465789076 (GroupCollection_t69770484 * __this, int32_t p0, const RuntimeMethod* method);
// System.String System.IO.Path::GetExtension(System.String)
extern "C" IL2CPP_METHOD_ATTR String_t* Path_GetExtension_m1021339115 (RuntimeObject * __this /* static, unused */, String_t* p0, const RuntimeMethod* method);
// System.String System.String::TrimStart(System.Char[])
extern "C" IL2CPP_METHOD_ATTR String_t* String_TrimStart_m1431283012 (String_t* __this, CharU5BU5D_t3528271667* p0, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.String>::TryGetValue(!0,!1&)
inline bool Dictionary_2_TryGetValue_m1185325717 (Dictionary_2_t1632706988 * __this, String_t* p0, String_t** p1, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t1632706988 *, String_t*, String_t**, const RuntimeMethod*))Dictionary_2_TryGetValue_m3280774074_gshared)(__this, p0, p1, method);
}
// System.Void CUDLR.Server::FindFileType(CUDLR.RequestContext,System.Boolean,System.String&,System.String&)
extern "C" IL2CPP_METHOD_ATTR void Server_FindFileType_m1180339088 (RuntimeObject * __this /* static, unused */, RequestContext_t3602631757 * ___context0, bool ___download1, String_t** ___path2, String_t** ___type3, const RuntimeMethod* method);
// System.Void UnityEngine.WWW::.ctor(System.String)
extern "C" IL2CPP_METHOD_ATTR void WWW__ctor_m2915079343 (WWW_t3688466362 * __this, String_t* p0, const RuntimeMethod* method);
// System.Void System.Threading.Thread::Sleep(System.Int32)
extern "C" IL2CPP_METHOD_ATTR void Thread_Sleep_m483098292 (RuntimeObject * __this /* static, unused */, int32_t p0, const RuntimeMethod* method);
// System.Boolean UnityEngine.WWW::get_isDone()
extern "C" IL2CPP_METHOD_ATTR bool WWW_get_isDone_m3426350689 (WWW_t3688466362 * __this, const RuntimeMethod* method);
// System.String UnityEngine.WWW::get_error()
extern "C" IL2CPP_METHOD_ATTR String_t* WWW_get_error_m3055313367 (WWW_t3688466362 * __this, const RuntimeMethod* method);
// System.Void System.Net.HttpListenerResponse::set_ContentType(System.String)
extern "C" IL2CPP_METHOD_ATTR void HttpListenerResponse_set_ContentType_m4030363041 (HttpListenerResponse_t3502667045 * __this, String_t* p0, const RuntimeMethod* method);
// System.String System.IO.Path::GetFileName(System.String)
extern "C" IL2CPP_METHOD_ATTR String_t* Path_GetFileName_m1354558116 (RuntimeObject * __this /* static, unused */, String_t* p0, const RuntimeMethod* method);
// System.Void System.Net.HttpListenerResponse::AddHeader(System.String,System.String)
extern "C" IL2CPP_METHOD_ATTR void HttpListenerResponse_AddHeader_m536198768 (HttpListenerResponse_t3502667045 * __this, String_t* p0, String_t* p1, const RuntimeMethod* method);
// System.Byte[] UnityEngine.WWW::get_bytes()
extern "C" IL2CPP_METHOD_ATTR ByteU5BU5D_t4116647657* WWW_get_bytes_m3061182897 (WWW_t3688466362 * __this, const RuntimeMethod* method);
// System.Void ResponseExtension::WriteBytes(System.Net.HttpListenerResponse,System.Byte[])
extern "C" IL2CPP_METHOD_ATTR void ResponseExtension_WriteBytes_m1603091416 (RuntimeObject * __this /* static, unused */, HttpListenerResponse_t3502667045 * ___response0, ByteU5BU5D_t4116647657* ___bytes1, const RuntimeMethod* method);
// System.Boolean System.IO.File::Exists(System.String)
extern "C" IL2CPP_METHOD_ATTR bool File_Exists_m3943585060 (RuntimeObject * __this /* static, unused */, String_t* p0, const RuntimeMethod* method);
// System.Void ResponseExtension::WriteFile(System.Net.HttpListenerResponse,System.String,System.String,System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void ResponseExtension_WriteFile_m2406796800 (RuntimeObject * __this /* static, unused */, HttpListenerResponse_t3502667045 * ___response0, String_t* ___path1, String_t* ___type2, bool ___download3, const RuntimeMethod* method);
// System.Void CUDLR.Server/<RegisterFileHandlers>c__AnonStorey1::.ctor()
extern "C" IL2CPP_METHOD_ATTR void U3CRegisterFileHandlersU3Ec__AnonStorey1__ctor_m529639330 (U3CRegisterFileHandlersU3Ec__AnonStorey1_t3770007581 * __this, const RuntimeMethod* method);
// System.Void System.Func`2<System.Collections.Generic.KeyValuePair`2<System.String,System.String>,System.String>::.ctor(System.Object,System.IntPtr)
inline void Func_2__ctor_m3780063840 (Func_2_t3001800792 * __this, RuntimeObject * p0, intptr_t p1, const RuntimeMethod* method)
{
	((  void (*) (Func_2_t3001800792 *, RuntimeObject *, intptr_t, const RuntimeMethod*))Func_2__ctor_m146726457_gshared)(__this, p0, p1, method);
}
// System.Collections.Generic.IEnumerable`1<!!1> System.Linq.Enumerable::Select<System.Collections.Generic.KeyValuePair`2<System.String,System.String>,System.String>(System.Collections.Generic.IEnumerable`1<!!0>,System.Func`2<!!0,!!1>)
inline RuntimeObject* Enumerable_Select_TisKeyValuePair_2_t4030379155_TisString_t_m3591192767 (RuntimeObject * __this /* static, unused */, RuntimeObject* p0, Func_2_t3001800792 * p1, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (RuntimeObject * /* static, unused */, RuntimeObject*, Func_2_t3001800792 *, const RuntimeMethod*))Enumerable_Select_TisKeyValuePair_2_t2530217319_TisRuntimeObject_m3051228765_gshared)(__this /* static, unused */, p0, p1, method);
}
// System.Void CUDLR.RouteAttribute::.ctor(System.String,System.String,System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void RouteAttribute__ctor_m1948716522 (RouteAttribute_t574643108 * __this, String_t* ___route0, String_t* ___methods1, bool ___runOnMainThread2, const RuntimeMethod* method);
// System.Boolean System.String::Contains(System.String)
extern "C" IL2CPP_METHOD_ATTR bool String_Contains_m1147431944 (String_t* __this, String_t* p0, const RuntimeMethod* method);
// System.Void CUDLR.Server/FileHandlerDelegate::.ctor(System.Object,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void FileHandlerDelegate__ctor_m3475249825 (FileHandlerDelegate_t13458300 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void CUDLR.RouteAttribute/Callback::.ctor(System.Object,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void Callback__ctor_m2226827237 (Callback_t1777011615 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void UnityEngine.Application/LogCallback::.ctor(System.Object,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void LogCallback__ctor_m144650965 (LogCallback_t3588208630 * __this, RuntimeObject * p0, intptr_t p1, const RuntimeMethod* method);
// System.Void UnityEngine.Application::RegisterLogCallback(UnityEngine.Application/LogCallback)
extern "C" IL2CPP_METHOD_ATTR void Application_RegisterLogCallback_m484975236 (RuntimeObject * __this /* static, unused */, LogCallback_t3588208630 * p0, const RuntimeMethod* method);
// System.Void CUDLR.Console::Update()
extern "C" IL2CPP_METHOD_ATTR void Console_Update_m2794781264 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// System.Net.HttpListenerContext System.Net.HttpListener::EndGetContext(System.IAsyncResult)
extern "C" IL2CPP_METHOD_ATTR HttpListenerContext_t424880822 * HttpListener_EndGetContext_m990137025 (HttpListener_t988452056 * __this, RuntimeObject* p0, const RuntimeMethod* method);
// System.Void CUDLR.RequestContext::.ctor(System.Net.HttpListenerContext)
extern "C" IL2CPP_METHOD_ATTR void RequestContext__ctor_m925727424 (RequestContext_t3602631757 * __this, HttpListenerContext_t424880822 * ___ctx0, const RuntimeMethod* method);
// System.Void CUDLR.Server::HandleRequest(CUDLR.RequestContext)
extern "C" IL2CPP_METHOD_ATTR void Server_HandleRequest_m2125684724 (Server_t545360578 * __this, RequestContext_t3602631757 * ___context0, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1<CUDLR.RouteAttribute>::get_Item(System.Int32)
inline RouteAttribute_t574643108 * List_1_get_Item_m1432922716 (List_1_t2046717850 * __this, int32_t p0, const RuntimeMethod* method)
{
	return ((  RouteAttribute_t574643108 * (*) (List_1_t2046717850 *, int32_t, const RuntimeMethod*))List_1_get_Item_m2287542950_gshared)(__this, p0, method);
}
// System.Text.RegularExpressions.Match System.Text.RegularExpressions.Regex::Match(System.String)
extern "C" IL2CPP_METHOD_ATTR Match_t3408321083 * Regex_Match_m2255756165 (Regex_t3657309853 * __this, String_t* p0, const RuntimeMethod* method);
// System.Boolean System.Text.RegularExpressions.Group::get_Success()
extern "C" IL2CPP_METHOD_ATTR bool Group_get_Success_m1492300455 (Group_t2468205786 * __this, const RuntimeMethod* method);
// System.String System.Net.HttpListenerRequest::get_HttpMethod()
extern "C" IL2CPP_METHOD_ATTR String_t* HttpListenerRequest_get_HttpMethod_m1222760753 (HttpListenerRequest_t630699488 * __this, const RuntimeMethod* method);
// System.Boolean System.Text.RegularExpressions.Regex::IsMatch(System.String)
extern "C" IL2CPP_METHOD_ATTR bool Regex_IsMatch_m4067478295 (Regex_t3657309853 * __this, String_t* p0, const RuntimeMethod* method);
// System.Void System.Threading.Monitor::Enter(System.Object)
extern "C" IL2CPP_METHOD_ATTR void Monitor_Enter_m2249409497 (RuntimeObject * __this /* static, unused */, RuntimeObject * p0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Queue`1<CUDLR.RequestContext>::Enqueue(!0)
inline void Queue_1_Enqueue_m39812848 (Queue_1_t3448891251 * __this, RequestContext_t3602631757 * p0, const RuntimeMethod* method)
{
	((  void (*) (Queue_1_t3448891251 *, RequestContext_t3602631757 *, const RuntimeMethod*))Queue_1_Enqueue_m1868480850_gshared)(__this, p0, method);
}
// System.Void System.Threading.Monitor::Exit(System.Object)
extern "C" IL2CPP_METHOD_ATTR void Monitor_Exit_m3585316909 (RuntimeObject * __this /* static, unused */, RuntimeObject * p0, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<CUDLR.RouteAttribute>::get_Count()
inline int32_t List_1_get_Count_m4178165277 (List_1_t2046717850 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t2046717850 *, const RuntimeMethod*))List_1_get_Count_m2934127733_gshared)(__this, method);
}
// System.Void UnityEngine.Debug::LogException(System.Exception)
extern "C" IL2CPP_METHOD_ATTR void Debug_LogException_m2207318968 (RuntimeObject * __this /* static, unused */, Exception_t * p0, const RuntimeMethod* method);
// System.IO.Stream System.Net.HttpListenerResponse::get_OutputStream()
extern "C" IL2CPP_METHOD_ATTR Stream_t1273022909 * HttpListenerResponse_get_OutputStream_m1739985205 (HttpListenerResponse_t3502667045 * __this, const RuntimeMethod* method);
// System.Void CUDLR.Server/<HandleRequests>c__Iterator0::.ctor()
extern "C" IL2CPP_METHOD_ATTR void U3CHandleRequestsU3Ec__Iterator0__ctor_m2736900648 (U3CHandleRequestsU3Ec__Iterator0_t4068759609 * __this, const RuntimeMethod* method);
// System.Void System.Net.HttpListener::.ctor()
extern "C" IL2CPP_METHOD_ATTR void HttpListener__ctor_m2603387468 (HttpListener_t988452056 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Queue`1<CUDLR.RequestContext>::.ctor()
inline void Queue_1__ctor_m3997517759 (Queue_1_t3448891251 * __this, const RuntimeMethod* method)
{
	((  void (*) (Queue_1_t3448891251 *, const RuntimeMethod*))Queue_1__ctor_m3749217910_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.String>::.ctor()
inline void Dictionary_2__ctor_m2842384104 (Dictionary_2_t1632706988 * __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t1632706988 *, const RuntimeMethod*))Dictionary_2__ctor_m518943619_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.String>::Add(!0,!1)
inline void Dictionary_2_Add_m2799738156 (Dictionary_2_t1632706988 * __this, String_t* p0, String_t* p1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t1632706988 *, String_t*, String_t*, const RuntimeMethod*))Dictionary_2_Add_m2387223709_gshared)(__this, p0, p1, method);
}
// !0 System.Collections.Generic.KeyValuePair`2<System.String,System.String>::get_Key()
inline String_t* KeyValuePair_2_get_Key_m1970167909 (KeyValuePair_2_t4030379155 * __this, const RuntimeMethod* method)
{
	return ((  String_t* (*) (KeyValuePair_2_t4030379155 *, const RuntimeMethod*))KeyValuePair_2_get_Key_m1328507389_gshared)(__this, method);
}
// System.Void UnityEngine.WaitForEndOfFrame::.ctor()
extern "C" IL2CPP_METHOD_ATTR void WaitForEndOfFrame__ctor_m1381314187 (WaitForEndOfFrame_t1314943911 * __this, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.Queue`1<CUDLR.RequestContext>::get_Count()
inline int32_t Queue_1_get_Count_m3459060730 (Queue_1_t3448891251 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Queue_1_t3448891251 *, const RuntimeMethod*))Queue_1_get_Count_m2496300460_gshared)(__this, method);
}
// !0 System.Collections.Generic.Queue`1<CUDLR.RequestContext>::Dequeue()
inline RequestContext_t3602631757 * Queue_1_Dequeue_m992750647 (Queue_1_t3448891251 * __this, const RuntimeMethod* method)
{
	return ((  RequestContext_t3602631757 * (*) (Queue_1_t3448891251 *, const RuntimeMethod*))Queue_1_Dequeue_m3550993416_gshared)(__this, method);
}
// System.Void System.NotSupportedException::.ctor()
extern "C" IL2CPP_METHOD_ATTR void NotSupportedException__ctor_m2730133172 (NotSupportedException_t1314879016 * __this, const RuntimeMethod* method);
// System.Void CUDLR.Server/FileHandlerDelegate::Invoke(CUDLR.RequestContext,System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void FileHandlerDelegate_Invoke_m2709275937 (FileHandlerDelegate_t13458300 * __this, RequestContext_t3602631757 * ___context0, bool ___download1, const RuntimeMethod* method);
// UnityEngine.Compass UnityEngine.Input::get_compass()
extern "C" IL2CPP_METHOD_ATTR Compass_t3092386685 * Input_get_compass_m4226377434 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// System.Void UnityEngine.Compass::set_enabled(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void Compass_set_enabled_m3413005128 (Compass_t3092386685 * __this, bool p0, const RuntimeMethod* method);
// System.Single UnityEngine.Compass::get_magneticHeading()
extern "C" IL2CPP_METHOD_ATTR float Compass_get_magneticHeading_m3730814099 (Compass_t3092386685 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::get_up()
extern "C" IL2CPP_METHOD_ATTR Vector3_t3722313464  Vector3_get_up_m3584168373 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Quaternion::AngleAxis(System.Single,UnityEngine.Vector3)
extern "C" IL2CPP_METHOD_ATTR Quaternion_t2301928331  Quaternion_AngleAxis_m1767165696 (RuntimeObject * __this /* static, unused */, float p0, Vector3_t3722313464  p1, const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.Component::get_transform()
extern "C" IL2CPP_METHOD_ATTR Transform_t3600365921 * Component_get_transform_m3162698980 (Component_t1923634451 * __this, const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Transform::get_rotation()
extern "C" IL2CPP_METHOD_ATTR Quaternion_t2301928331  Transform_get_rotation_m3502953881 (Transform_t3600365921 * __this, const RuntimeMethod* method);
// System.Single UnityEngine.Time::get_fixedTime()
extern "C" IL2CPP_METHOD_ATTR float Time_get_fixedTime_m908791845 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Quaternion::Slerp(UnityEngine.Quaternion,UnityEngine.Quaternion,System.Single)
extern "C" IL2CPP_METHOD_ATTR Quaternion_t2301928331  Quaternion_Slerp_m1234055455 (RuntimeObject * __this /* static, unused */, Quaternion_t2301928331  p0, Quaternion_t2301928331  p1, float p2, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_rotation(UnityEngine.Quaternion)
extern "C" IL2CPP_METHOD_ATTR void Transform_set_rotation_m3524318132 (Transform_t3600365921 * __this, Quaternion_t2301928331  p0, const RuntimeMethod* method);
// UnityEngine.Object[] UnityEngine.Object::FindObjectsOfType(System.Type)
extern "C" IL2CPP_METHOD_ATTR ObjectU5BU5D_t1417781964* Object_FindObjectsOfType_m2295101757 (RuntimeObject * __this /* static, unused */, Type_t * p0, const RuntimeMethod* method);
// System.String UnityEngine.Object::get_name()
extern "C" IL2CPP_METHOD_ATTR String_t* Object_get_name_m4211327027 (Object_t631007953 * __this, const RuntimeMethod* method);
// UnityEngine.GameObject UnityEngine.GameObject::Find(System.String)
extern "C" IL2CPP_METHOD_ATTR GameObject_t1113636619 * GameObject_Find_m2032535176 (RuntimeObject * __this /* static, unused */, String_t* p0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
extern "C" IL2CPP_METHOD_ATTR bool Object_op_Equality_m1810815630 (RuntimeObject * __this /* static, unused */, Object_t631007953 * p0, Object_t631007953 * p1, const RuntimeMethod* method);
// UnityEngine.Component[] UnityEngine.GameObject::GetComponents(System.Type)
extern "C" IL2CPP_METHOD_ATTR ComponentU5BU5D_t3294940482* GameObject_GetComponents_m1158098240 (GameObject_t1113636619 * __this, Type_t * p0, const RuntimeMethod* method);
// System.Type System.Object::GetType()
extern "C" IL2CPP_METHOD_ATTR Type_t * Object_GetType_m88164663 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Reflection.FieldInfo[] System.Type::GetFields()
extern "C" IL2CPP_METHOD_ATTR FieldInfoU5BU5D_t846150980* Type_GetFields_m3709891696 (Type_t * __this, const RuntimeMethod* method);
// System.String System.String::Concat(System.Object[])
extern "C" IL2CPP_METHOD_ATTR String_t* String_Concat_m2971454694 (RuntimeObject * __this /* static, unused */, ObjectU5BU5D_t2843939325* p0, const RuntimeMethod* method);
// System.String System.String::TrimEnd(System.Char[])
extern "C" IL2CPP_METHOD_ATTR String_t* String_TrimEnd_m3824727301 (String_t* __this, CharU5BU5D_t3528271667* p0, const RuntimeMethod* method);
// System.Text.Encoding System.Text.Encoding::get_UTF8()
extern "C" IL2CPP_METHOD_ATTR Encoding_t1523322056 * Encoding_get_UTF8_m1008486739 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// System.Void System.Net.HttpListenerResponse::set_ContentLength64(System.Int64)
extern "C" IL2CPP_METHOD_ATTR void HttpListenerResponse_set_ContentLength64_m3790368474 (HttpListenerResponse_t3502667045 * __this, int64_t p0, const RuntimeMethod* method);
// System.IO.FileStream System.IO.File::OpenRead(System.String)
extern "C" IL2CPP_METHOD_ATTR FileStream_t4292183065 * File_OpenRead_m2936789020 (RuntimeObject * __this /* static, unused */, String_t* p0, const RuntimeMethod* method);
// System.Void packt.FoodyGO.Mapping.GoogleMapTile::RefreshMapTile()
extern "C" IL2CPP_METHOD_ATTR void GoogleMapTile_RefreshMapTile_m3307423562 (GoogleMapTile_t1047440669 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
extern "C" IL2CPP_METHOD_ATTR bool Object_op_Inequality_m4071470834 (RuntimeObject * __this /* static, unused */, Object_t631007953 * p0, Object_t631007953 * p1, const RuntimeMethod* method);
// System.Void UnityEngine.MonoBehaviour::print(System.Object)
extern "C" IL2CPP_METHOD_ATTR void MonoBehaviour_print_m330341231 (RuntimeObject * __this /* static, unused */, RuntimeObject * p0, const RuntimeMethod* method);
// System.Collections.IEnumerator packt.FoodyGO.Mapping.GoogleMapTile::_RefreshMapTile()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* GoogleMapTile__RefreshMapTile_m2584278457 (GoogleMapTile_t1047440669 * __this, const RuntimeMethod* method);
// System.Void packt.FoodyGO.Mapping.GoogleMapTile/<_RefreshMapTile>c__Iterator0::.ctor()
extern "C" IL2CPP_METHOD_ATTR void U3C_RefreshMapTileU3Ec__Iterator0__ctor_m3279329334 (U3C_RefreshMapTileU3Ec__Iterator0_t2254000978 * __this, const RuntimeMethod* method);
// System.Single packt.FoodyGO.Mapping.GoogleMapUtils::adjustLatByPixels(System.Single,System.Int32,System.Int32)
extern "C" IL2CPP_METHOD_ATTR float GoogleMapUtils_adjustLatByPixels_m912186372 (RuntimeObject * __this /* static, unused */, float ___lat0, int32_t ___delta1, int32_t ___zoom2, const RuntimeMethod* method);
// System.Single packt.FoodyGO.Mapping.GoogleMapUtils::adjustLonByPixels(System.Single,System.Int32,System.Int32)
extern "C" IL2CPP_METHOD_ATTR float GoogleMapUtils_adjustLonByPixels_m308880460 (RuntimeObject * __this /* static, unused */, float ___lon0, int32_t ___delta1, int32_t ___zoom2, const RuntimeMethod* method);
// System.String System.Int32::ToString()
extern "C" IL2CPP_METHOD_ATTR String_t* Int32_ToString_m141394615 (int32_t* __this, const RuntimeMethod* method);
// UnityEngine.LocationService UnityEngine.Input::get_location()
extern "C" IL2CPP_METHOD_ATTR LocationService_t2839639379 * Input_get_location_m1744795999 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// System.Boolean UnityEngine.LocationService::get_isEnabledByUser()
extern "C" IL2CPP_METHOD_ATTR bool LocationService_get_isEnabledByUser_m3325769302 (LocationService_t2839639379 * __this, const RuntimeMethod* method);
// UnityEngine.LocationServiceStatus UnityEngine.LocationService::get_status()
extern "C" IL2CPP_METHOD_ATTR int32_t LocationService_get_status_m1450164038 (LocationService_t2839639379 * __this, const RuntimeMethod* method);
// System.String System.String::Format(System.String,System.Object,System.Object,System.Object)
extern "C" IL2CPP_METHOD_ATTR String_t* String_Format_m3339413201 (RuntimeObject * __this /* static, unused */, String_t* p0, RuntimeObject * p1, RuntimeObject * p2, RuntimeObject * p3, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<UnityEngine.Renderer>()
inline Renderer_t2627027031 * Component_GetComponent_TisRenderer_t2627027031_m2651633905 (Component_t1923634451 * __this, const RuntimeMethod* method)
{
	return ((  Renderer_t2627027031 * (*) (Component_t1923634451 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m2906321015_gshared)(__this, method);
}
// UnityEngine.Material UnityEngine.Renderer::get_material()
extern "C" IL2CPP_METHOD_ATTR Material_t340375123 * Renderer_get_material_m4171603682 (Renderer_t2627027031 * __this, const RuntimeMethod* method);
// UnityEngine.Texture UnityEngine.Material::get_mainTexture()
extern "C" IL2CPP_METHOD_ATTR Texture_t3661962703 * Material_get_mainTexture_m692510677 (Material_t340375123 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Object::Destroy(UnityEngine.Object)
extern "C" IL2CPP_METHOD_ATTR void Object_Destroy_m565254235 (RuntimeObject * __this /* static, unused */, Object_t631007953 * p0, const RuntimeMethod* method);
// UnityEngine.Texture2D UnityEngine.WWW::get_texture()
extern "C" IL2CPP_METHOD_ATTR Texture2D_t3840446185 * WWW_get_texture_m3513075325 (WWW_t3688466362 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Material::set_mainTexture(UnityEngine.Texture)
extern "C" IL2CPP_METHOD_ATTR void Material_set_mainTexture_m544811714 (Material_t340375123 * __this, Texture_t3661962703 * p0, const RuntimeMethod* method);
// System.Int32 packt.FoodyGO.Mapping.GoogleMapUtils::LonToX(System.Single)
extern "C" IL2CPP_METHOD_ATTR int32_t GoogleMapUtils_LonToX_m1415447982 (RuntimeObject * __this /* static, unused */, float ___lon0, const RuntimeMethod* method);
// System.Single packt.FoodyGO.Mapping.GoogleMapUtils::XToLon(System.Single)
extern "C" IL2CPP_METHOD_ATTR float GoogleMapUtils_XToLon_m1418710473 (RuntimeObject * __this /* static, unused */, float ___x0, const RuntimeMethod* method);
// System.Int32 packt.FoodyGO.Mapping.GoogleMapUtils::LatToY(System.Single)
extern "C" IL2CPP_METHOD_ATTR int32_t GoogleMapUtils_LatToY_m801633232 (RuntimeObject * __this /* static, unused */, float ___lat0, const RuntimeMethod* method);
// System.Single packt.FoodyGO.Mapping.GoogleMapUtils::YToLat(System.Single)
extern "C" IL2CPP_METHOD_ATTR float GoogleMapUtils_YToLat_m2128429579 (RuntimeObject * __this /* static, unused */, float ___y0, const RuntimeMethod* method);
// System.Collections.IEnumerator packt.FoodyGo.Services.GPSLocationService::StartService()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* GPSLocationService_StartService_m3512225000 (GPSLocationService_t2374085698 * __this, const RuntimeMethod* method);
// System.Void packt.FoodyGo.Services.GPSLocationService/<StartService>c__Iterator0::.ctor()
extern "C" IL2CPP_METHOD_ATTR void U3CStartServiceU3Ec__Iterator0__ctor_m1434179243 (U3CStartServiceU3Ec__Iterator0_t711529095 * __this, const RuntimeMethod* method);
// UnityEngine.LocationInfo UnityEngine.LocationService::get_lastData()
extern "C" IL2CPP_METHOD_ATTR LocationInfo_t1192161013  LocationService_get_lastData_m1985729390 (LocationService_t2839639379 * __this, const RuntimeMethod* method);
// System.Single UnityEngine.LocationInfo::get_latitude()
extern "C" IL2CPP_METHOD_ATTR float LocationInfo_get_latitude_m341869276 (LocationInfo_t1192161013 * __this, const RuntimeMethod* method);
// System.Single UnityEngine.LocationInfo::get_longitude()
extern "C" IL2CPP_METHOD_ATTR float LocationInfo_get_longitude_m1454980142 (LocationInfo_t1192161013 * __this, const RuntimeMethod* method);
// System.Single UnityEngine.LocationInfo::get_altitude()
extern "C" IL2CPP_METHOD_ATTR float LocationInfo_get_altitude_m2556363964 (LocationInfo_t1192161013 * __this, const RuntimeMethod* method);
// System.Single UnityEngine.LocationInfo::get_horizontalAccuracy()
extern "C" IL2CPP_METHOD_ATTR float LocationInfo_get_horizontalAccuracy_m1238049393 (LocationInfo_t1192161013 * __this, const RuntimeMethod* method);
// System.Double UnityEngine.LocationInfo::get_timestamp()
extern "C" IL2CPP_METHOD_ATTR double LocationInfo_get_timestamp_m3431861872 (LocationInfo_t1192161013 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.LocationService::Stop()
extern "C" IL2CPP_METHOD_ATTR void LocationService_Stop_m2430709999 (LocationService_t2839639379 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.LocationService::Start()
extern "C" IL2CPP_METHOD_ATTR void LocationService_Start_m399575407 (LocationService_t2839639379 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.WaitForSeconds::.ctor(System.Single)
extern "C" IL2CPP_METHOD_ATTR void WaitForSeconds__ctor_m2199082655 (WaitForSeconds_t1699091251 * __this, float p0, const RuntimeMethod* method);
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
// System.Void CUDLR.CommandAttribute::.ctor(System.String,System.String,System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void CommandAttribute__ctor_m3176663506 (CommandAttribute_t3967200570 * __this, String_t* ___cmd0, String_t* ___help1, bool ___runOnMainThread2, const RuntimeMethod* method)
{
	{
		Attribute__ctor_m1529526131(__this, /*hidden argument*/NULL);
		String_t* L_0 = ___cmd0;
		__this->set_m_command_0(L_0);
		String_t* L_1 = ___help1;
		__this->set_m_help_1(L_1);
		bool L_2 = ___runOnMainThread2;
		__this->set_m_runOnMainThread_2(L_2);
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
extern "C"  void DelegatePInvokeWrapper_Callback_t1969551140 (Callback_t1969551140 * __this, StringU5BU5D_t1281789340* ___args0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(char**);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Marshaling of parameter '___args0' to native representation
	char** ____args0_marshaled = NULL;
	if (___args0 != NULL)
	{
		il2cpp_array_size_t ____args0_Length = (___args0)->max_length;
		____args0_marshaled = il2cpp_codegen_marshal_allocate_array<char*>(____args0_Length + 1);
		(____args0_marshaled)[____args0_Length] = NULL;
		for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(____args0_Length); i++)
		{
			(____args0_marshaled)[i] = il2cpp_codegen_marshal_string((___args0)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(i)));
		}
	}
	else
	{
		____args0_marshaled = NULL;
	}

	// Native function invocation
	il2cppPInvokeFunc(____args0_marshaled);

	// Marshaling cleanup of parameter '___args0' native representation
	if (____args0_marshaled != NULL)
	{
		const il2cpp_array_size_t ____args0_marshaled_CleanupLoopCount = (___args0 != NULL) ? (___args0)->max_length : 0;
		for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(____args0_marshaled_CleanupLoopCount); i++)
		{
			il2cpp_codegen_marshal_free((____args0_marshaled)[i]);
			(____args0_marshaled)[i] = NULL;
		}
		il2cpp_codegen_marshal_free(____args0_marshaled);
		____args0_marshaled = NULL;
	}

}
// System.Void CUDLR.CommandAttribute/Callback::.ctor(System.Object,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void Callback__ctor_m947519337 (Callback_t1969551140 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void CUDLR.CommandAttribute/Callback::Invoke(System.String[])
extern "C" IL2CPP_METHOD_ATTR void Callback_Invoke_m995029599 (Callback_t1969551140 * __this, StringU5BU5D_t1281789340* ___args0, const RuntimeMethod* method)
{
	if(__this->get_prev_9() != NULL)
	{
		Callback_Invoke_m995029599((Callback_t1969551140 *)__this->get_prev_9(), ___args0, method);
	}
	Il2CppMethodPointer targetMethodPointer = __this->get_method_ptr_0();
	RuntimeMethod* targetMethod = (RuntimeMethod*)(__this->get_method_3());
	RuntimeObject* targetThis = __this->get_m_target_2();
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
	bool ___methodIsStatic = MethodIsStatic(targetMethod);
	if (___methodIsStatic)
	{
		if (il2cpp_codegen_method_parameter_count(targetMethod) == 1)
		{
			// open
			{
				typedef void (*FunctionPointerType) (RuntimeObject *, StringU5BU5D_t1281789340*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(NULL, ___args0, targetMethod);
			}
		}
		else
		{
			// closed
			{
				typedef void (*FunctionPointerType) (RuntimeObject *, void*, StringU5BU5D_t1281789340*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(NULL, targetThis, ___args0, targetMethod);
			}
		}
	}
	else
	{
		if (il2cpp_codegen_method_parameter_count(targetMethod) == 1)
		{
			// closed
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker1< StringU5BU5D_t1281789340* >::Invoke(targetMethod, targetThis, ___args0);
					else
						GenericVirtActionInvoker1< StringU5BU5D_t1281789340* >::Invoke(targetMethod, targetThis, ___args0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker1< StringU5BU5D_t1281789340* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___args0);
					else
						VirtActionInvoker1< StringU5BU5D_t1281789340* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___args0);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (void*, StringU5BU5D_t1281789340*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___args0, targetMethod);
			}
		}
		else
		{
			// open
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker0::Invoke(targetMethod, ___args0);
					else
						GenericVirtActionInvoker0::Invoke(targetMethod, ___args0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___args0);
					else
						VirtActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___args0);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (StringU5BU5D_t1281789340*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___args0, targetMethod);
			}
		}
	}
}
// System.IAsyncResult CUDLR.CommandAttribute/Callback::BeginInvoke(System.String[],System.AsyncCallback,System.Object)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* Callback_BeginInvoke_m600213726 (Callback_t1969551140 * __this, StringU5BU5D_t1281789340* ___args0, AsyncCallback_t3962456242 * ___callback1, RuntimeObject * ___object2, const RuntimeMethod* method)
{
	void *__d_args[2] = {0};
	__d_args[0] = ___args0;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);
}
// System.Void CUDLR.CommandAttribute/Callback::EndInvoke(System.IAsyncResult)
extern "C" IL2CPP_METHOD_ATTR void Callback_EndInvoke_m3903919491 (Callback_t1969551140 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
extern "C"  void DelegatePInvokeWrapper_CallbackSimple_t200441164 (CallbackSimple_t200441164 * __this, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)();
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Native function invocation
	il2cppPInvokeFunc();

}
// System.Void CUDLR.CommandAttribute/CallbackSimple::.ctor(System.Object,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void CallbackSimple__ctor_m1308234006 (CallbackSimple_t200441164 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void CUDLR.CommandAttribute/CallbackSimple::Invoke()
extern "C" IL2CPP_METHOD_ATTR void CallbackSimple_Invoke_m2849167808 (CallbackSimple_t200441164 * __this, const RuntimeMethod* method)
{
	if(__this->get_prev_9() != NULL)
	{
		CallbackSimple_Invoke_m2849167808((CallbackSimple_t200441164 *)__this->get_prev_9(), method);
	}
	Il2CppMethodPointer targetMethodPointer = __this->get_method_ptr_0();
	RuntimeMethod* targetMethod = (RuntimeMethod*)(__this->get_method_3());
	RuntimeObject* targetThis = __this->get_m_target_2();
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
	bool ___methodIsStatic = MethodIsStatic(targetMethod);
	if (___methodIsStatic)
	{
		if (il2cpp_codegen_method_parameter_count(targetMethod) == 0)
		{
			// open
			{
				typedef void (*FunctionPointerType) (RuntimeObject *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(NULL, targetMethod);
			}
		}
		else
		{
			// closed
			{
				typedef void (*FunctionPointerType) (RuntimeObject *, void*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(NULL, targetThis, targetMethod);
			}
		}
	}
	else
	{
		{
			// closed
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker0::Invoke(targetMethod, targetThis);
					else
						GenericVirtActionInvoker0::Invoke(targetMethod, targetThis);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis);
					else
						VirtActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (void*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, targetMethod);
			}
		}
	}
}
// System.IAsyncResult CUDLR.CommandAttribute/CallbackSimple::BeginInvoke(System.AsyncCallback,System.Object)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* CallbackSimple_BeginInvoke_m2225592340 (CallbackSimple_t200441164 * __this, AsyncCallback_t3962456242 * ___callback0, RuntimeObject * ___object1, const RuntimeMethod* method)
{
	void *__d_args[1] = {0};
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback0, (RuntimeObject*)___object1);
}
// System.Void CUDLR.CommandAttribute/CallbackSimple::EndInvoke(System.IAsyncResult)
extern "C" IL2CPP_METHOD_ATTR void CallbackSimple_EndInvoke_m4248855482 (CallbackSimple_t200441164 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void CUDLR.CommandTree::.ctor()
extern "C" IL2CPP_METHOD_ATTR void CommandTree__ctor_m628957943 (CommandTree_t2732396483 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (CommandTree__ctor_m628957943_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		Dictionary_2_t2517652782 * L_0 = (Dictionary_2_t2517652782 *)il2cpp_codegen_object_new(Dictionary_2_t2517652782_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m3655204740(L_0, /*hidden argument*/Dictionary_2__ctor_m3655204740_RuntimeMethod_var);
		__this->set_m_subcommands_0(L_0);
		return;
	}
}
// System.Void CUDLR.CommandTree::Add(CUDLR.CommandAttribute)
extern "C" IL2CPP_METHOD_ATTR void CommandTree_Add_m1413729376 (CommandTree_t2732396483 * __this, CommandAttribute_t3967200570 * ___cmd0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (CommandTree_Add_m1413729376_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		CommandAttribute_t3967200570 * L_0 = ___cmd0;
		NullCheck(L_0);
		String_t* L_1 = L_0->get_m_command_0();
		NullCheck(L_1);
		String_t* L_2 = String_ToLower_m2029374922(L_1, /*hidden argument*/NULL);
		CharU5BU5D_t3528271667* L_3 = (CharU5BU5D_t3528271667*)SZArrayNew(CharU5BU5D_t3528271667_il2cpp_TypeInfo_var, (uint32_t)1);
		CharU5BU5D_t3528271667* L_4 = L_3;
		NullCheck(L_4);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(0), (Il2CppChar)((int32_t)32));
		NullCheck(L_2);
		StringU5BU5D_t1281789340* L_5 = String_Split_m3646115398(L_2, L_4, /*hidden argument*/NULL);
		CommandAttribute_t3967200570 * L_6 = ___cmd0;
		CommandTree__add_m2357921295(__this, L_5, 0, L_6, /*hidden argument*/NULL);
		return;
	}
}
// System.Void CUDLR.CommandTree::_add(System.String[],System.Int32,CUDLR.CommandAttribute)
extern "C" IL2CPP_METHOD_ATTR void CommandTree__add_m2357921295 (CommandTree_t2732396483 * __this, StringU5BU5D_t1281789340* ___commands0, int32_t ___command_index1, CommandAttribute_t3967200570 * ___cmd2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (CommandTree__add_m2357921295_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		StringU5BU5D_t1281789340* L_0 = ___commands0;
		NullCheck(L_0);
		int32_t L_1 = ___command_index1;
		if ((!(((uint32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_0)->max_length))))) == ((uint32_t)L_1))))
		{
			goto IL_0011;
		}
	}
	{
		CommandAttribute_t3967200570 * L_2 = ___cmd2;
		__this->set_m_command_1(L_2);
		return;
	}

IL_0011:
	{
		StringU5BU5D_t1281789340* L_3 = ___commands0;
		int32_t L_4 = ___command_index1;
		NullCheck(L_3);
		int32_t L_5 = L_4;
		String_t* L_6 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		V_0 = L_6;
		Dictionary_2_t2517652782 * L_7 = __this->get_m_subcommands_0();
		String_t* L_8 = V_0;
		NullCheck(L_7);
		bool L_9 = Dictionary_2_ContainsKey_m108370318(L_7, L_8, /*hidden argument*/Dictionary_2_ContainsKey_m108370318_RuntimeMethod_var);
		if (L_9)
		{
			goto IL_0037;
		}
	}
	{
		Dictionary_2_t2517652782 * L_10 = __this->get_m_subcommands_0();
		String_t* L_11 = V_0;
		CommandTree_t2732396483 * L_12 = (CommandTree_t2732396483 *)il2cpp_codegen_object_new(CommandTree_t2732396483_il2cpp_TypeInfo_var);
		CommandTree__ctor_m628957943(L_12, /*hidden argument*/NULL);
		NullCheck(L_10);
		Dictionary_2_set_Item_m367355386(L_10, L_11, L_12, /*hidden argument*/Dictionary_2_set_Item_m367355386_RuntimeMethod_var);
	}

IL_0037:
	{
		Dictionary_2_t2517652782 * L_13 = __this->get_m_subcommands_0();
		String_t* L_14 = V_0;
		NullCheck(L_13);
		CommandTree_t2732396483 * L_15 = Dictionary_2_get_Item_m2160169883(L_13, L_14, /*hidden argument*/Dictionary_2_get_Item_m2160169883_RuntimeMethod_var);
		StringU5BU5D_t1281789340* L_16 = ___commands0;
		int32_t L_17 = ___command_index1;
		CommandAttribute_t3967200570 * L_18 = ___cmd2;
		NullCheck(L_15);
		CommandTree__add_m2357921295(L_15, L_16, ((int32_t)il2cpp_codegen_add((int32_t)L_17, (int32_t)1)), L_18, /*hidden argument*/NULL);
		return;
	}
}
// System.String CUDLR.CommandTree::Complete(System.String)
extern "C" IL2CPP_METHOD_ATTR String_t* CommandTree_Complete_m4074238911 (CommandTree_t2732396483 * __this, String_t* ___partialCommand0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (CommandTree_Complete_m4074238911_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___partialCommand0;
		CharU5BU5D_t3528271667* L_1 = (CharU5BU5D_t3528271667*)SZArrayNew(CharU5BU5D_t3528271667_il2cpp_TypeInfo_var, (uint32_t)1);
		CharU5BU5D_t3528271667* L_2 = L_1;
		NullCheck(L_2);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (Il2CppChar)((int32_t)32));
		NullCheck(L_0);
		StringU5BU5D_t1281789340* L_3 = String_Split_m3646115398(L_0, L_2, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_4 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_2();
		String_t* L_5 = CommandTree__complete_m3984793792(__this, L_3, 0, L_4, /*hidden argument*/NULL);
		return L_5;
	}
}
// System.String CUDLR.CommandTree::_complete(System.String[],System.Int32,System.String)
extern "C" IL2CPP_METHOD_ATTR String_t* CommandTree__complete_m3984793792 (CommandTree_t2732396483 * __this, StringU5BU5D_t1281789340* ___partialCommand0, int32_t ___index1, String_t* ___result2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (CommandTree__complete_m3984793792_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	Enumerator_t2699829766  V_1;
	memset(&V_1, 0, sizeof(V_1));
	String_t* V_2 = NULL;
	List_1_t3319525431 * V_3 = NULL;
	String_t* V_4 = NULL;
	Enumerator_t2699829766  V_5;
	memset(&V_5, 0, sizeof(V_5));
	String_t* V_6 = NULL;
	Enumerator_t913802012  V_7;
	memset(&V_7, 0, sizeof(V_7));
	String_t* V_8 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = -1;
	NO_UNUSED_WARNING (__leave_target);
	{
		StringU5BU5D_t1281789340* L_0 = ___partialCommand0;
		NullCheck(L_0);
		int32_t L_1 = ___index1;
		if ((!(((uint32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_0)->max_length))))) == ((uint32_t)L_1))))
		{
			goto IL_0016;
		}
	}
	{
		CommandAttribute_t3967200570 * L_2 = __this->get_m_command_1();
		if (!L_2)
		{
			goto IL_0016;
		}
	}
	{
		String_t* L_3 = ___result2;
		return L_3;
	}

IL_0016:
	{
		StringU5BU5D_t1281789340* L_4 = ___partialCommand0;
		NullCheck(L_4);
		int32_t L_5 = ___index1;
		if ((!(((uint32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_4)->max_length))))) == ((uint32_t)L_5))))
		{
			goto IL_007f;
		}
	}
	{
		String_t* L_6 = ___result2;
		Console_LogCommand_m2514322523(NULL /*static, unused*/, L_6, /*hidden argument*/NULL);
		Dictionary_2_t2517652782 * L_7 = __this->get_m_subcommands_0();
		NullCheck(L_7);
		KeyCollection_t2707328253 * L_8 = Dictionary_2_get_Keys_m1160280914(L_7, /*hidden argument*/Dictionary_2_get_Keys_m1160280914_RuntimeMethod_var);
		NullCheck(L_8);
		Enumerator_t2699829766  L_9 = KeyCollection_GetEnumerator_m2274835298(L_8, /*hidden argument*/KeyCollection_GetEnumerator_m2274835298_RuntimeMethod_var);
		V_1 = L_9;
	}

IL_0036:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0054;
		}

IL_003b:
		{
			String_t* L_10 = Enumerator_get_Current_m3106489094((Enumerator_t2699829766 *)(&V_1), /*hidden argument*/Enumerator_get_Current_m3106489094_RuntimeMethod_var);
			V_0 = L_10;
			String_t* L_11 = ___result2;
			String_t* L_12 = V_0;
			IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
			String_t* L_13 = String_Concat_m3755062657(NULL /*static, unused*/, L_11, _stringLiteral3452614528, L_12, /*hidden argument*/NULL);
			Console_Log_m4248649498(NULL /*static, unused*/, L_13, /*hidden argument*/NULL);
		}

IL_0054:
		{
			bool L_14 = Enumerator_MoveNext_m3675082026((Enumerator_t2699829766 *)(&V_1), /*hidden argument*/Enumerator_MoveNext_m3675082026_RuntimeMethod_var);
			if (L_14)
			{
				goto IL_003b;
			}
		}

IL_0060:
		{
			IL2CPP_LEAVE(0x73, FINALLY_0065);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0065;
	}

FINALLY_0065:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_m975943653((Enumerator_t2699829766 *)(&V_1), /*hidden argument*/Enumerator_Dispose_m975943653_RuntimeMethod_var);
		IL2CPP_END_FINALLY(101)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(101)
	{
		IL2CPP_JUMP_TBL(0x73, IL_0073)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_0073:
	{
		String_t* L_15 = ___result2;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_16 = String_Concat_m3937257545(NULL /*static, unused*/, L_15, _stringLiteral3452614528, /*hidden argument*/NULL);
		return L_16;
	}

IL_007f:
	{
		StringU5BU5D_t1281789340* L_17 = ___partialCommand0;
		NullCheck(L_17);
		int32_t L_18 = ___index1;
		if ((!(((uint32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_17)->max_length))))) == ((uint32_t)((int32_t)il2cpp_codegen_add((int32_t)L_18, (int32_t)1))))))
		{
			goto IL_019a;
		}
	}
	{
		StringU5BU5D_t1281789340* L_19 = ___partialCommand0;
		int32_t L_20 = ___index1;
		NullCheck(L_19);
		int32_t L_21 = L_20;
		String_t* L_22 = (L_19)->GetAt(static_cast<il2cpp_array_size_t>(L_21));
		V_2 = L_22;
		Dictionary_2_t2517652782 * L_23 = __this->get_m_subcommands_0();
		String_t* L_24 = V_2;
		NullCheck(L_23);
		bool L_25 = Dictionary_2_ContainsKey_m108370318(L_23, L_24, /*hidden argument*/Dictionary_2_ContainsKey_m108370318_RuntimeMethod_var);
		if (!L_25)
		{
			goto IL_00bf;
		}
	}
	{
		String_t* L_26 = ___result2;
		String_t* L_27 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_28 = String_Concat_m3937257545(NULL /*static, unused*/, L_26, L_27, /*hidden argument*/NULL);
		___result2 = L_28;
		Dictionary_2_t2517652782 * L_29 = __this->get_m_subcommands_0();
		String_t* L_30 = V_2;
		NullCheck(L_29);
		CommandTree_t2732396483 * L_31 = Dictionary_2_get_Item_m2160169883(L_29, L_30, /*hidden argument*/Dictionary_2_get_Item_m2160169883_RuntimeMethod_var);
		StringU5BU5D_t1281789340* L_32 = ___partialCommand0;
		int32_t L_33 = ___index1;
		String_t* L_34 = ___result2;
		NullCheck(L_31);
		String_t* L_35 = CommandTree__complete_m3984793792(L_31, L_32, ((int32_t)il2cpp_codegen_add((int32_t)L_33, (int32_t)1)), L_34, /*hidden argument*/NULL);
		return L_35;
	}

IL_00bf:
	{
		List_1_t3319525431 * L_36 = (List_1_t3319525431 *)il2cpp_codegen_object_new(List_1_t3319525431_il2cpp_TypeInfo_var);
		List_1__ctor_m706204246(L_36, /*hidden argument*/List_1__ctor_m706204246_RuntimeMethod_var);
		V_3 = L_36;
		Dictionary_2_t2517652782 * L_37 = __this->get_m_subcommands_0();
		NullCheck(L_37);
		KeyCollection_t2707328253 * L_38 = Dictionary_2_get_Keys_m1160280914(L_37, /*hidden argument*/Dictionary_2_get_Keys_m1160280914_RuntimeMethod_var);
		NullCheck(L_38);
		Enumerator_t2699829766  L_39 = KeyCollection_GetEnumerator_m2274835298(L_38, /*hidden argument*/KeyCollection_GetEnumerator_m2274835298_RuntimeMethod_var);
		V_5 = L_39;
	}

IL_00d7:
	try
	{ // begin try (depth: 1)
		{
			goto IL_00fa;
		}

IL_00dc:
		{
			String_t* L_40 = Enumerator_get_Current_m3106489094((Enumerator_t2699829766 *)(&V_5), /*hidden argument*/Enumerator_get_Current_m3106489094_RuntimeMethod_var);
			V_4 = L_40;
			String_t* L_41 = V_4;
			String_t* L_42 = V_2;
			NullCheck(L_41);
			bool L_43 = String_StartsWith_m1759067526(L_41, L_42, /*hidden argument*/NULL);
			if (!L_43)
			{
				goto IL_00fa;
			}
		}

IL_00f2:
		{
			List_1_t3319525431 * L_44 = V_3;
			String_t* L_45 = V_4;
			NullCheck(L_44);
			List_1_Add_m1685793073(L_44, L_45, /*hidden argument*/List_1_Add_m1685793073_RuntimeMethod_var);
		}

IL_00fa:
		{
			bool L_46 = Enumerator_MoveNext_m3675082026((Enumerator_t2699829766 *)(&V_5), /*hidden argument*/Enumerator_MoveNext_m3675082026_RuntimeMethod_var);
			if (L_46)
			{
				goto IL_00dc;
			}
		}

IL_0106:
		{
			IL2CPP_LEAVE(0x119, FINALLY_010b);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_010b;
	}

FINALLY_010b:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_m975943653((Enumerator_t2699829766 *)(&V_5), /*hidden argument*/Enumerator_Dispose_m975943653_RuntimeMethod_var);
		IL2CPP_END_FINALLY(267)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(267)
	{
		IL2CPP_JUMP_TBL(0x119, IL_0119)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_0119:
	{
		List_1_t3319525431 * L_47 = V_3;
		NullCheck(L_47);
		int32_t L_48 = List_1_get_Count_m2276455407(L_47, /*hidden argument*/List_1_get_Count_m2276455407_RuntimeMethod_var);
		if ((!(((uint32_t)L_48) == ((uint32_t)1))))
		{
			goto IL_0138;
		}
	}
	{
		String_t* L_49 = ___result2;
		List_1_t3319525431 * L_50 = V_3;
		NullCheck(L_50);
		String_t* L_51 = List_1_get_Item_m3346958548(L_50, 0, /*hidden argument*/List_1_get_Item_m3346958548_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_52 = String_Concat_m3755062657(NULL /*static, unused*/, L_49, L_51, _stringLiteral3452614528, /*hidden argument*/NULL);
		return L_52;
	}

IL_0138:
	{
		List_1_t3319525431 * L_53 = V_3;
		NullCheck(L_53);
		int32_t L_54 = List_1_get_Count_m2276455407(L_53, /*hidden argument*/List_1_get_Count_m2276455407_RuntimeMethod_var);
		if ((((int32_t)L_54) <= ((int32_t)1)))
		{
			goto IL_0192;
		}
	}
	{
		String_t* L_55 = ___result2;
		String_t* L_56 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_57 = String_Concat_m3937257545(NULL /*static, unused*/, L_55, L_56, /*hidden argument*/NULL);
		Console_LogCommand_m2514322523(NULL /*static, unused*/, L_57, /*hidden argument*/NULL);
		List_1_t3319525431 * L_58 = V_3;
		NullCheck(L_58);
		Enumerator_t913802012  L_59 = List_1_GetEnumerator_m2043795(L_58, /*hidden argument*/List_1_GetEnumerator_m2043795_RuntimeMethod_var);
		V_7 = L_59;
	}

IL_0158:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0173;
		}

IL_015d:
		{
			String_t* L_60 = Enumerator_get_Current_m236733038((Enumerator_t913802012 *)(&V_7), /*hidden argument*/Enumerator_get_Current_m236733038_RuntimeMethod_var);
			V_6 = L_60;
			String_t* L_61 = ___result2;
			String_t* L_62 = V_6;
			IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
			String_t* L_63 = String_Concat_m3937257545(NULL /*static, unused*/, L_61, L_62, /*hidden argument*/NULL);
			Console_Log_m4248649498(NULL /*static, unused*/, L_63, /*hidden argument*/NULL);
		}

IL_0173:
		{
			bool L_64 = Enumerator_MoveNext_m4158182743((Enumerator_t913802012 *)(&V_7), /*hidden argument*/Enumerator_MoveNext_m4158182743_RuntimeMethod_var);
			if (L_64)
			{
				goto IL_015d;
			}
		}

IL_017f:
		{
			IL2CPP_LEAVE(0x192, FINALLY_0184);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0184;
	}

FINALLY_0184:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_m2026665411((Enumerator_t913802012 *)(&V_7), /*hidden argument*/Enumerator_Dispose_m2026665411_RuntimeMethod_var);
		IL2CPP_END_FINALLY(388)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(388)
	{
		IL2CPP_JUMP_TBL(0x192, IL_0192)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_0192:
	{
		String_t* L_65 = ___result2;
		String_t* L_66 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_67 = String_Concat_m3937257545(NULL /*static, unused*/, L_65, L_66, /*hidden argument*/NULL);
		return L_67;
	}

IL_019a:
	{
		StringU5BU5D_t1281789340* L_68 = ___partialCommand0;
		int32_t L_69 = ___index1;
		NullCheck(L_68);
		int32_t L_70 = L_69;
		String_t* L_71 = (L_68)->GetAt(static_cast<il2cpp_array_size_t>(L_70));
		V_8 = L_71;
		Dictionary_2_t2517652782 * L_72 = __this->get_m_subcommands_0();
		String_t* L_73 = V_8;
		NullCheck(L_72);
		bool L_74 = Dictionary_2_ContainsKey_m108370318(L_72, L_73, /*hidden argument*/Dictionary_2_ContainsKey_m108370318_RuntimeMethod_var);
		if (L_74)
		{
			goto IL_01b3;
		}
	}
	{
		String_t* L_75 = ___result2;
		return L_75;
	}

IL_01b3:
	{
		String_t* L_76 = ___result2;
		String_t* L_77 = V_8;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_78 = String_Concat_m3755062657(NULL /*static, unused*/, L_76, L_77, _stringLiteral3452614528, /*hidden argument*/NULL);
		___result2 = L_78;
		Dictionary_2_t2517652782 * L_79 = __this->get_m_subcommands_0();
		String_t* L_80 = V_8;
		NullCheck(L_79);
		CommandTree_t2732396483 * L_81 = Dictionary_2_get_Item_m2160169883(L_79, L_80, /*hidden argument*/Dictionary_2_get_Item_m2160169883_RuntimeMethod_var);
		StringU5BU5D_t1281789340* L_82 = ___partialCommand0;
		int32_t L_83 = ___index1;
		String_t* L_84 = ___result2;
		NullCheck(L_81);
		String_t* L_85 = CommandTree__complete_m3984793792(L_81, L_82, ((int32_t)il2cpp_codegen_add((int32_t)L_83, (int32_t)1)), L_84, /*hidden argument*/NULL);
		return L_85;
	}
}
// System.Void CUDLR.CommandTree::Run(System.String)
extern "C" IL2CPP_METHOD_ATTR void CommandTree_Run_m911914304 (CommandTree_t2732396483 * __this, String_t* ___commandStr0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (CommandTree_Run_m911914304_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Regex_t3657309853 * V_0 = NULL;
	MatchCollection_t1395363720 * V_1 = NULL;
	StringU5BU5D_t1281789340* V_2 = NULL;
	int32_t V_3 = 0;
	{
		Regex_t3657309853 * L_0 = (Regex_t3657309853 *)il2cpp_codegen_object_new(Regex_t3657309853_il2cpp_TypeInfo_var);
		Regex__ctor_m897876424(L_0, _stringLiteral3735861361, /*hidden argument*/NULL);
		V_0 = L_0;
		Regex_t3657309853 * L_1 = V_0;
		String_t* L_2 = ___commandStr0;
		NullCheck(L_1);
		MatchCollection_t1395363720 * L_3 = Regex_Matches_m175567660(L_1, L_2, /*hidden argument*/NULL);
		V_1 = L_3;
		MatchCollection_t1395363720 * L_4 = V_1;
		NullCheck(L_4);
		int32_t L_5 = MatchCollection_get_Count_m1667454419(L_4, /*hidden argument*/NULL);
		StringU5BU5D_t1281789340* L_6 = (StringU5BU5D_t1281789340*)SZArrayNew(StringU5BU5D_t1281789340_il2cpp_TypeInfo_var, (uint32_t)L_5);
		V_2 = L_6;
		V_3 = 0;
		goto IL_0048;
	}

IL_0026:
	{
		StringU5BU5D_t1281789340* L_7 = V_2;
		int32_t L_8 = V_3;
		MatchCollection_t1395363720 * L_9 = V_1;
		int32_t L_10 = V_3;
		NullCheck(L_9);
		Match_t3408321083 * L_11 = VirtFuncInvoker1< Match_t3408321083 *, int32_t >::Invoke(9 /* System.Text.RegularExpressions.Match System.Text.RegularExpressions.MatchCollection::get_Item(System.Int32) */, L_9, L_10);
		NullCheck(L_11);
		String_t* L_12 = Capture_get_Value_m538076933(L_11, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_13 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_2();
		NullCheck(L_12);
		String_t* L_14 = String_Replace_m1273907647(L_12, _stringLiteral3452614526, L_13, /*hidden argument*/NULL);
		NullCheck(L_7);
		ArrayElementTypeCheck (L_7, L_14);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(L_8), (String_t*)L_14);
		int32_t L_15 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_15, (int32_t)1));
	}

IL_0048:
	{
		int32_t L_16 = V_3;
		StringU5BU5D_t1281789340* L_17 = V_2;
		NullCheck(L_17);
		if ((((int32_t)L_16) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_17)->max_length)))))))
		{
			goto IL_0026;
		}
	}
	{
		StringU5BU5D_t1281789340* L_18 = V_2;
		CommandTree__run_m3314472370(__this, L_18, 0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void CUDLR.CommandTree::_run(System.String[],System.Int32)
extern "C" IL2CPP_METHOD_ATTR void CommandTree__run_m3314472370 (CommandTree_t2732396483 * __this, StringU5BU5D_t1281789340* ___commands0, int32_t ___index1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (CommandTree__run_m3314472370_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		StringU5BU5D_t1281789340* L_0 = ___commands0;
		NullCheck(L_0);
		int32_t L_1 = ___index1;
		if ((!(((uint32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_0)->max_length))))) == ((uint32_t)L_1))))
		{
			goto IL_0015;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(CommandTree_t2732396483_il2cpp_TypeInfo_var);
		StringU5BU5D_t1281789340* L_2 = ((CommandTree_t2732396483_StaticFields*)il2cpp_codegen_static_fields_for(CommandTree_t2732396483_il2cpp_TypeInfo_var))->get_emptyArgs_2();
		CommandTree_RunCommand_m942982424(__this, L_2, /*hidden argument*/NULL);
		return;
	}

IL_0015:
	{
		StringU5BU5D_t1281789340* L_3 = ___commands0;
		int32_t L_4 = ___index1;
		NullCheck(L_3);
		int32_t L_5 = L_4;
		String_t* L_6 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		NullCheck(L_6);
		String_t* L_7 = String_ToLower_m2029374922(L_6, /*hidden argument*/NULL);
		V_0 = L_7;
		Dictionary_2_t2517652782 * L_8 = __this->get_m_subcommands_0();
		String_t* L_9 = V_0;
		NullCheck(L_8);
		bool L_10 = Dictionary_2_ContainsKey_m108370318(L_8, L_9, /*hidden argument*/Dictionary_2_ContainsKey_m108370318_RuntimeMethod_var);
		if (L_10)
		{
			goto IL_0042;
		}
	}
	{
		StringU5BU5D_t1281789340* L_11 = ___commands0;
		int32_t L_12 = ___index1;
		RuntimeObject* L_13 = Enumerable_Skip_TisString_t_m1381761333(NULL /*static, unused*/, (RuntimeObject*)(RuntimeObject*)L_11, L_12, /*hidden argument*/Enumerable_Skip_TisString_t_m1381761333_RuntimeMethod_var);
		StringU5BU5D_t1281789340* L_14 = Enumerable_ToArray_TisString_t_m4208096419(NULL /*static, unused*/, L_13, /*hidden argument*/Enumerable_ToArray_TisString_t_m4208096419_RuntimeMethod_var);
		CommandTree_RunCommand_m942982424(__this, L_14, /*hidden argument*/NULL);
		return;
	}

IL_0042:
	{
		Dictionary_2_t2517652782 * L_15 = __this->get_m_subcommands_0();
		String_t* L_16 = V_0;
		NullCheck(L_15);
		CommandTree_t2732396483 * L_17 = Dictionary_2_get_Item_m2160169883(L_15, L_16, /*hidden argument*/Dictionary_2_get_Item_m2160169883_RuntimeMethod_var);
		StringU5BU5D_t1281789340* L_18 = ___commands0;
		int32_t L_19 = ___index1;
		NullCheck(L_17);
		CommandTree__run_m3314472370(L_17, L_18, ((int32_t)il2cpp_codegen_add((int32_t)L_19, (int32_t)1)), /*hidden argument*/NULL);
		return;
	}
}
// System.Void CUDLR.CommandTree::RunCommand(System.String[])
extern "C" IL2CPP_METHOD_ATTR void CommandTree_RunCommand_m942982424 (CommandTree_t2732396483 * __this, StringU5BU5D_t1281789340* ___args0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (CommandTree_RunCommand_m942982424_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		CommandAttribute_t3967200570 * L_0 = __this->get_m_command_1();
		if (L_0)
		{
			goto IL_001a;
		}
	}
	{
		Console_Log_m4248649498(NULL /*static, unused*/, _stringLiteral2044213326, /*hidden argument*/NULL);
		goto IL_004c;
	}

IL_001a:
	{
		CommandAttribute_t3967200570 * L_1 = __this->get_m_command_1();
		NullCheck(L_1);
		bool L_2 = L_1->get_m_runOnMainThread_2();
		if (!L_2)
		{
			goto IL_003b;
		}
	}
	{
		CommandAttribute_t3967200570 * L_3 = __this->get_m_command_1();
		StringU5BU5D_t1281789340* L_4 = ___args0;
		Console_Queue_m3385174577(NULL /*static, unused*/, L_3, L_4, /*hidden argument*/NULL);
		goto IL_004c;
	}

IL_003b:
	{
		CommandAttribute_t3967200570 * L_5 = __this->get_m_command_1();
		NullCheck(L_5);
		Callback_t1969551140 * L_6 = L_5->get_m_callback_3();
		StringU5BU5D_t1281789340* L_7 = ___args0;
		NullCheck(L_6);
		Callback_Invoke_m995029599(L_6, L_7, /*hidden argument*/NULL);
	}

IL_004c:
	{
		return;
	}
}
// System.Void CUDLR.CommandTree::.cctor()
extern "C" IL2CPP_METHOD_ATTR void CommandTree__cctor_m3699406789 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (CommandTree__cctor_m3699406789_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		StringU5BU5D_t1281789340* L_0 = (StringU5BU5D_t1281789340*)SZArrayNew(StringU5BU5D_t1281789340_il2cpp_TypeInfo_var, (uint32_t)0);
		((CommandTree_t2732396483_StaticFields*)il2cpp_codegen_static_fields_for(CommandTree_t2732396483_il2cpp_TypeInfo_var))->set_emptyArgs_2(L_0);
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
// System.Void CUDLR.Console::.ctor()
extern "C" IL2CPP_METHOD_ATTR void Console__ctor_m1493958339 (Console_t978607149 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Console__ctor_m1493958339_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		CommandTree_t2732396483 * L_0 = (CommandTree_t2732396483 *)il2cpp_codegen_object_new(CommandTree_t2732396483_il2cpp_TypeInfo_var);
		CommandTree__ctor_m628957943(L_0, /*hidden argument*/NULL);
		__this->set_m_commands_4(L_0);
		List_1_t3319525431 * L_1 = (List_1_t3319525431 *)il2cpp_codegen_object_new(List_1_t3319525431_il2cpp_TypeInfo_var);
		List_1__ctor_m706204246(L_1, /*hidden argument*/List_1__ctor_m706204246_RuntimeMethod_var);
		__this->set_m_output_5(L_1);
		List_1_t3319525431 * L_2 = (List_1_t3319525431 *)il2cpp_codegen_object_new(List_1_t3319525431_il2cpp_TypeInfo_var);
		List_1__ctor_m706204246(L_2, /*hidden argument*/List_1__ctor_m706204246_RuntimeMethod_var);
		__this->set_m_history_6(L_2);
		Queue_1_t3702832664 * L_3 = (Queue_1_t3702832664 *)il2cpp_codegen_object_new(Queue_1_t3702832664_il2cpp_TypeInfo_var);
		Queue_1__ctor_m1114640169(L_3, /*hidden argument*/Queue_1__ctor_m1114640169_RuntimeMethod_var);
		__this->set_m_commandQueue_8(L_3);
		Console_RegisterAttributes_m1913084373(__this, /*hidden argument*/NULL);
		return;
	}
}
// CUDLR.Console CUDLR.Console::get_Instance()
extern "C" IL2CPP_METHOD_ATTR Console_t978607149 * Console_get_Instance_m2769456780 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Console_get_Instance_m2769456780_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Console_t978607149 * L_0 = ((Console_t978607149_StaticFields*)il2cpp_codegen_static_fields_for(Console_t978607149_il2cpp_TypeInfo_var))->get_instance_3();
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		Console_t978607149 * L_1 = (Console_t978607149 *)il2cpp_codegen_object_new(Console_t978607149_il2cpp_TypeInfo_var);
		Console__ctor_m1493958339(L_1, /*hidden argument*/NULL);
		((Console_t978607149_StaticFields*)il2cpp_codegen_static_fields_for(Console_t978607149_il2cpp_TypeInfo_var))->set_instance_3(L_1);
	}

IL_0014:
	{
		Console_t978607149 * L_2 = ((Console_t978607149_StaticFields*)il2cpp_codegen_static_fields_for(Console_t978607149_il2cpp_TypeInfo_var))->get_instance_3();
		return L_2;
	}
}
// System.Void CUDLR.Console::Update()
extern "C" IL2CPP_METHOD_ATTR void Console_Update_m2794781264 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Console_Update_m2794781264_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	QueuedCommand_t3856573170  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		goto IL_002d;
	}

IL_0005:
	{
		Console_t978607149 * L_0 = Console_get_Instance_m2769456780(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_0);
		Queue_1_t3702832664 * L_1 = L_0->get_m_commandQueue_8();
		NullCheck(L_1);
		QueuedCommand_t3856573170  L_2 = Queue_1_Dequeue_m940720808(L_1, /*hidden argument*/Queue_1_Dequeue_m940720808_RuntimeMethod_var);
		V_0 = L_2;
		CommandAttribute_t3967200570 * L_3 = (&V_0)->get_command_0();
		NullCheck(L_3);
		Callback_t1969551140 * L_4 = L_3->get_m_callback_3();
		StringU5BU5D_t1281789340* L_5 = (&V_0)->get_args_1();
		NullCheck(L_4);
		Callback_Invoke_m995029599(L_4, L_5, /*hidden argument*/NULL);
	}

IL_002d:
	{
		Console_t978607149 * L_6 = Console_get_Instance_m2769456780(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_6);
		Queue_1_t3702832664 * L_7 = L_6->get_m_commandQueue_8();
		NullCheck(L_7);
		int32_t L_8 = Queue_1_get_Count_m1457504846(L_7, /*hidden argument*/Queue_1_get_Count_m1457504846_RuntimeMethod_var);
		if ((((int32_t)L_8) > ((int32_t)0)))
		{
			goto IL_0005;
		}
	}
	{
		return;
	}
}
// System.Void CUDLR.Console::Queue(CUDLR.CommandAttribute,System.String[])
extern "C" IL2CPP_METHOD_ATTR void Console_Queue_m3385174577 (RuntimeObject * __this /* static, unused */, CommandAttribute_t3967200570 * ___command0, StringU5BU5D_t1281789340* ___args1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Console_Queue_m3385174577_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	QueuedCommand_t3856573170  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		il2cpp_codegen_initobj((&V_0), sizeof(QueuedCommand_t3856573170 ));
		CommandAttribute_t3967200570 * L_0 = ___command0;
		(&V_0)->set_command_0(L_0);
		StringU5BU5D_t1281789340* L_1 = ___args1;
		(&V_0)->set_args_1(L_1);
		Console_t978607149 * L_2 = Console_get_Instance_m2769456780(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_2);
		Queue_1_t3702832664 * L_3 = L_2->get_m_commandQueue_8();
		QueuedCommand_t3856573170  L_4 = V_0;
		NullCheck(L_3);
		Queue_1_Enqueue_m1798554875(L_3, L_4, /*hidden argument*/Queue_1_Enqueue_m1798554875_RuntimeMethod_var);
		return;
	}
}
// System.Void CUDLR.Console::Run(System.String)
extern "C" IL2CPP_METHOD_ATTR void Console_Run_m1342859034 (RuntimeObject * __this /* static, unused */, String_t* ___str0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___str0;
		NullCheck(L_0);
		int32_t L_1 = String_get_Length_m3847582255(L_0, /*hidden argument*/NULL);
		if ((((int32_t)L_1) <= ((int32_t)0)))
		{
			goto IL_002d;
		}
	}
	{
		String_t* L_2 = ___str0;
		Console_LogCommand_m2514322523(NULL /*static, unused*/, L_2, /*hidden argument*/NULL);
		Console_t978607149 * L_3 = Console_get_Instance_m2769456780(NULL /*static, unused*/, /*hidden argument*/NULL);
		String_t* L_4 = ___str0;
		NullCheck(L_3);
		Console_RecordCommand_m426163633(L_3, L_4, /*hidden argument*/NULL);
		Console_t978607149 * L_5 = Console_get_Instance_m2769456780(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_5);
		CommandTree_t2732396483 * L_6 = L_5->get_m_commands_4();
		String_t* L_7 = ___str0;
		NullCheck(L_6);
		CommandTree_Run_m911914304(L_6, L_7, /*hidden argument*/NULL);
	}

IL_002d:
	{
		return;
	}
}
// System.Void CUDLR.Console::Clear()
extern "C" IL2CPP_METHOD_ATTR void Console_Clear_m3017360572 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Console_Clear_m3017360572_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Console_t978607149 * L_0 = Console_get_Instance_m2769456780(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_0);
		List_1_t3319525431 * L_1 = L_0->get_m_output_5();
		NullCheck(L_1);
		List_1_Clear_m3111619026(L_1, /*hidden argument*/List_1_Clear_m3111619026_RuntimeMethod_var);
		return;
	}
}
// System.Void CUDLR.Console::Help()
extern "C" IL2CPP_METHOD_ATTR void Console_Help_m733938095 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Console_Help_m733938095_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Console_t978607149 * L_0 = Console_get_Instance_m2769456780(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_0);
		String_t* L_1 = L_0->get_m_help_7();
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_2 = String_Format_m2844511972(NULL /*static, unused*/, _stringLiteral2435037111, L_1, /*hidden argument*/NULL);
		Console_Log_m4248649498(NULL /*static, unused*/, L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.String CUDLR.Console::Complete(System.String)
extern "C" IL2CPP_METHOD_ATTR String_t* Console_Complete_m2408208350 (RuntimeObject * __this /* static, unused */, String_t* ___partialCommand0, const RuntimeMethod* method)
{
	{
		Console_t978607149 * L_0 = Console_get_Instance_m2769456780(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_0);
		CommandTree_t2732396483 * L_1 = L_0->get_m_commands_4();
		String_t* L_2 = ___partialCommand0;
		NullCheck(L_1);
		String_t* L_3 = CommandTree_Complete_m4074238911(L_1, L_2, /*hidden argument*/NULL);
		return L_3;
	}
}
// System.Void CUDLR.Console::LogCommand(System.String)
extern "C" IL2CPP_METHOD_ATTR void Console_LogCommand_m2514322523 (RuntimeObject * __this /* static, unused */, String_t* ___cmd0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Console_LogCommand_m2514322523_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___cmd0;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_1 = String_Concat_m3937257545(NULL /*static, unused*/, _stringLiteral3450517394, L_0, /*hidden argument*/NULL);
		Console_Log_m4248649498(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void CUDLR.Console::Log(System.String)
extern "C" IL2CPP_METHOD_ATTR void Console_Log_m4248649498 (RuntimeObject * __this /* static, unused */, String_t* ___str0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Console_Log_m4248649498_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Console_t978607149 * L_0 = Console_get_Instance_m2769456780(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_0);
		List_1_t3319525431 * L_1 = L_0->get_m_output_5();
		String_t* L_2 = ___str0;
		NullCheck(L_1);
		List_1_Add_m1685793073(L_1, L_2, /*hidden argument*/List_1_Add_m1685793073_RuntimeMethod_var);
		Console_t978607149 * L_3 = Console_get_Instance_m2769456780(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_3);
		List_1_t3319525431 * L_4 = L_3->get_m_output_5();
		NullCheck(L_4);
		int32_t L_5 = List_1_get_Count_m2276455407(L_4, /*hidden argument*/List_1_get_Count_m2276455407_RuntimeMethod_var);
		if ((((int32_t)L_5) <= ((int32_t)((int32_t)100))))
		{
			goto IL_0036;
		}
	}
	{
		Console_t978607149 * L_6 = Console_get_Instance_m2769456780(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_6);
		List_1_t3319525431 * L_7 = L_6->get_m_output_5();
		NullCheck(L_7);
		List_1_RemoveAt_m815285786(L_7, 0, /*hidden argument*/List_1_RemoveAt_m815285786_RuntimeMethod_var);
	}

IL_0036:
	{
		return;
	}
}
// System.Void CUDLR.Console::LogCallback(System.String,System.String,UnityEngine.LogType)
extern "C" IL2CPP_METHOD_ATTR void Console_LogCallback_m3679510954 (RuntimeObject * __this /* static, unused */, String_t* ___logString0, String_t* ___stackTrace1, int32_t ___type2, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___logString0;
		Console_Log_m4248649498(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		int32_t L_1 = ___type2;
		if ((((int32_t)L_1) == ((int32_t)3)))
		{
			goto IL_0013;
		}
	}
	{
		String_t* L_2 = ___stackTrace1;
		Console_Log_m4248649498(NULL /*static, unused*/, L_2, /*hidden argument*/NULL);
	}

IL_0013:
	{
		return;
	}
}
// System.String CUDLR.Console::Output()
extern "C" IL2CPP_METHOD_ATTR String_t* Console_Output_m1199728895 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Console_Output_m1199728895_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Console_t978607149 * L_0 = Console_get_Instance_m2769456780(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_0);
		List_1_t3319525431 * L_1 = L_0->get_m_output_5();
		NullCheck(L_1);
		StringU5BU5D_t1281789340* L_2 = List_1_ToArray_m3983937259(L_1, /*hidden argument*/List_1_ToArray_m3983937259_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_3 = String_Join_m2050845953(NULL /*static, unused*/, _stringLiteral3452614566, L_2, /*hidden argument*/NULL);
		return L_3;
	}
}
// System.Void CUDLR.Console::RegisterCommand(System.String,System.String,CUDLR.CommandAttribute/Callback,System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void Console_RegisterCommand_m3820069520 (RuntimeObject * __this /* static, unused */, String_t* ___command0, String_t* ___desc1, Callback_t1969551140 * ___callback2, bool ___runOnMainThread3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Console_RegisterCommand_m3820069520_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	CommandAttribute_t3967200570 * V_0 = NULL;
	{
		String_t* L_0 = ___command0;
		if (!L_0)
		{
			goto IL_0011;
		}
	}
	{
		String_t* L_1 = ___command0;
		NullCheck(L_1);
		int32_t L_2 = String_get_Length_m3847582255(L_1, /*hidden argument*/NULL);
		if (L_2)
		{
			goto IL_001c;
		}
	}

IL_0011:
	{
		Exception_t * L_3 = (Exception_t *)il2cpp_codegen_object_new(Exception_t_il2cpp_TypeInfo_var);
		Exception__ctor_m1152696503(L_3, _stringLiteral211277911, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, NULL, Console_RegisterCommand_m3820069520_RuntimeMethod_var);
	}

IL_001c:
	{
		String_t* L_4 = ___command0;
		String_t* L_5 = ___desc1;
		bool L_6 = ___runOnMainThread3;
		CommandAttribute_t3967200570 * L_7 = (CommandAttribute_t3967200570 *)il2cpp_codegen_object_new(CommandAttribute_t3967200570_il2cpp_TypeInfo_var);
		CommandAttribute__ctor_m3176663506(L_7, L_4, L_5, L_6, /*hidden argument*/NULL);
		V_0 = L_7;
		CommandAttribute_t3967200570 * L_8 = V_0;
		Callback_t1969551140 * L_9 = ___callback2;
		NullCheck(L_8);
		L_8->set_m_callback_3(L_9);
		Console_t978607149 * L_10 = Console_get_Instance_m2769456780(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_10);
		CommandTree_t2732396483 * L_11 = L_10->get_m_commands_4();
		CommandAttribute_t3967200570 * L_12 = V_0;
		NullCheck(L_11);
		CommandTree_Add_m1413729376(L_11, L_12, /*hidden argument*/NULL);
		Console_t978607149 * L_13 = Console_get_Instance_m2769456780(NULL /*static, unused*/, /*hidden argument*/NULL);
		Console_t978607149 * L_14 = L_13;
		NullCheck(L_14);
		String_t* L_15 = L_14->get_m_help_7();
		String_t* L_16 = ___command0;
		String_t* L_17 = ___desc1;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_18 = String_Format_m2556382932(NULL /*static, unused*/, _stringLiteral2256588097, L_16, L_17, /*hidden argument*/NULL);
		String_t* L_19 = String_Concat_m3937257545(NULL /*static, unused*/, L_15, L_18, /*hidden argument*/NULL);
		NullCheck(L_14);
		L_14->set_m_help_7(L_19);
		return;
	}
}
// System.Void CUDLR.Console::RegisterAttributes()
extern "C" IL2CPP_METHOD_ATTR void Console_RegisterAttributes_m1913084373 (Console_t978607149 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Console_RegisterAttributes_m1913084373_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Type_t * V_0 = NULL;
	TypeU5BU5D_t3940880105* V_1 = NULL;
	int32_t V_2 = 0;
	MethodInfo_t * V_3 = NULL;
	MethodInfoU5BU5D_t2572182361* V_4 = NULL;
	int32_t V_5 = 0;
	CommandAttributeU5BU5D_t3855148191* V_6 = NULL;
	Callback_t1969551140 * V_7 = NULL;
	U3CRegisterAttributesU3Ec__AnonStorey0_t2829874507 * V_8 = NULL;
	CommandAttribute_t3967200570 * V_9 = NULL;
	CommandAttributeU5BU5D_t3855148191* V_10 = NULL;
	int32_t V_11 = 0;
	{
		Assembly_t * L_0 = il2cpp_codegen_get_executing_assembly(Console_RegisterAttributes_m1913084373_RuntimeMethod_var);
		NullCheck(L_0);
		TypeU5BU5D_t3940880105* L_1 = VirtFuncInvoker0< TypeU5BU5D_t3940880105* >::Invoke(11 /* System.Type[] System.Reflection.Assembly::GetTypes() */, L_0);
		V_1 = L_1;
		V_2 = 0;
		goto IL_0178;
	}

IL_0012:
	{
		TypeU5BU5D_t3940880105* L_2 = V_1;
		int32_t L_3 = V_2;
		NullCheck(L_2);
		int32_t L_4 = L_3;
		Type_t * L_5 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		V_0 = L_5;
		Type_t * L_6 = V_0;
		NullCheck(L_6);
		MethodInfoU5BU5D_t2572182361* L_7 = VirtFuncInvoker1< MethodInfoU5BU5D_t2572182361*, int32_t >::Invoke(55 /* System.Reflection.MethodInfo[] System.Type::GetMethods(System.Reflection.BindingFlags) */, L_6, ((int32_t)24));
		V_4 = L_7;
		V_5 = 0;
		goto IL_0169;
	}

IL_0028:
	{
		MethodInfoU5BU5D_t2572182361* L_8 = V_4;
		int32_t L_9 = V_5;
		NullCheck(L_8);
		int32_t L_10 = L_9;
		MethodInfo_t * L_11 = (L_8)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		V_3 = L_11;
		MethodInfo_t * L_12 = V_3;
		RuntimeTypeHandle_t3027515415  L_13 = { reinterpret_cast<intptr_t> (CommandAttribute_t3967200570_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_14 = Type_GetTypeFromHandle_m1620074514(NULL /*static, unused*/, L_13, /*hidden argument*/NULL);
		NullCheck(L_12);
		ObjectU5BU5D_t2843939325* L_15 = VirtFuncInvoker2< ObjectU5BU5D_t2843939325*, Type_t *, bool >::Invoke(13 /* System.Object[] System.Reflection.MemberInfo::GetCustomAttributes(System.Type,System.Boolean) */, L_12, L_14, (bool)1);
		V_6 = ((CommandAttributeU5BU5D_t3855148191*)IsInst((RuntimeObject*)L_15, CommandAttributeU5BU5D_t3855148191_il2cpp_TypeInfo_var));
		CommandAttributeU5BU5D_t3855148191* L_16 = V_6;
		NullCheck(L_16);
		if ((((int32_t)((int32_t)(((RuntimeArray *)L_16)->max_length)))))
		{
			goto IL_0054;
		}
	}
	{
		goto IL_0163;
	}

IL_0054:
	{
		RuntimeTypeHandle_t3027515415  L_17 = { reinterpret_cast<intptr_t> (Callback_t1969551140_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_18 = Type_GetTypeFromHandle_m1620074514(NULL /*static, unused*/, L_17, /*hidden argument*/NULL);
		MethodInfo_t * L_19 = V_3;
		Delegate_t1188392813 * L_20 = Delegate_CreateDelegate_m1051651521(NULL /*static, unused*/, L_18, L_19, (bool)0, /*hidden argument*/NULL);
		V_7 = ((Callback_t1969551140 *)IsInstSealed((RuntimeObject*)L_20, Callback_t1969551140_il2cpp_TypeInfo_var));
		Callback_t1969551140 * L_21 = V_7;
		if (L_21)
		{
			goto IL_00b2;
		}
	}
	{
		U3CRegisterAttributesU3Ec__AnonStorey0_t2829874507 * L_22 = (U3CRegisterAttributesU3Ec__AnonStorey0_t2829874507 *)il2cpp_codegen_object_new(U3CRegisterAttributesU3Ec__AnonStorey0_t2829874507_il2cpp_TypeInfo_var);
		U3CRegisterAttributesU3Ec__AnonStorey0__ctor_m3969912081(L_22, /*hidden argument*/NULL);
		V_8 = L_22;
		U3CRegisterAttributesU3Ec__AnonStorey0_t2829874507 * L_23 = V_8;
		RuntimeTypeHandle_t3027515415  L_24 = { reinterpret_cast<intptr_t> (CallbackSimple_t200441164_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_25 = Type_GetTypeFromHandle_m1620074514(NULL /*static, unused*/, L_24, /*hidden argument*/NULL);
		MethodInfo_t * L_26 = V_3;
		Delegate_t1188392813 * L_27 = Delegate_CreateDelegate_m1051651521(NULL /*static, unused*/, L_25, L_26, (bool)0, /*hidden argument*/NULL);
		NullCheck(L_23);
		L_23->set_cbs_0(((CallbackSimple_t200441164 *)IsInstSealed((RuntimeObject*)L_27, CallbackSimple_t200441164_il2cpp_TypeInfo_var)));
		U3CRegisterAttributesU3Ec__AnonStorey0_t2829874507 * L_28 = V_8;
		NullCheck(L_28);
		CallbackSimple_t200441164 * L_29 = L_28->get_cbs_0();
		if (!L_29)
		{
			goto IL_00b2;
		}
	}
	{
		U3CRegisterAttributesU3Ec__AnonStorey0_t2829874507 * L_30 = V_8;
		intptr_t L_31 = (intptr_t)U3CRegisterAttributesU3Ec__AnonStorey0_U3CU3Em__0_m290692866_RuntimeMethod_var;
		Callback_t1969551140 * L_32 = (Callback_t1969551140 *)il2cpp_codegen_object_new(Callback_t1969551140_il2cpp_TypeInfo_var);
		Callback__ctor_m947519337(L_32, L_30, L_31, /*hidden argument*/NULL);
		V_7 = L_32;
	}

IL_00b2:
	{
		Callback_t1969551140 * L_33 = V_7;
		if (L_33)
		{
			goto IL_00d4;
		}
	}
	{
		Type_t * L_34 = V_0;
		MethodInfo_t * L_35 = V_3;
		NullCheck(L_35);
		String_t* L_36 = VirtFuncInvoker0< String_t* >::Invoke(8 /* System.String System.Reflection.MemberInfo::get_Name() */, L_35);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_37 = String_Format_m2556382932(NULL /*static, unused*/, _stringLiteral583427657, L_34, L_36, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_LogError_m2850623458(NULL /*static, unused*/, L_37, /*hidden argument*/NULL);
		goto IL_0163;
	}

IL_00d4:
	{
		CommandAttributeU5BU5D_t3855148191* L_38 = V_6;
		V_10 = L_38;
		V_11 = 0;
		goto IL_0158;
	}

IL_00e0:
	{
		CommandAttributeU5BU5D_t3855148191* L_39 = V_10;
		int32_t L_40 = V_11;
		NullCheck(L_39);
		int32_t L_41 = L_40;
		CommandAttribute_t3967200570 * L_42 = (L_39)->GetAt(static_cast<il2cpp_array_size_t>(L_41));
		V_9 = L_42;
		CommandAttribute_t3967200570 * L_43 = V_9;
		NullCheck(L_43);
		String_t* L_44 = L_43->get_m_command_0();
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_45 = String_IsNullOrEmpty_m2969720369(NULL /*static, unused*/, L_44, /*hidden argument*/NULL);
		if (!L_45)
		{
			goto IL_0113;
		}
	}
	{
		Type_t * L_46 = V_0;
		MethodInfo_t * L_47 = V_3;
		NullCheck(L_47);
		String_t* L_48 = VirtFuncInvoker0< String_t* >::Invoke(8 /* System.String System.Reflection.MemberInfo::get_Name() */, L_47);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_49 = String_Format_m2556382932(NULL /*static, unused*/, _stringLiteral2813937213, L_46, L_48, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_LogError_m2850623458(NULL /*static, unused*/, L_49, /*hidden argument*/NULL);
		goto IL_0152;
	}

IL_0113:
	{
		CommandAttribute_t3967200570 * L_50 = V_9;
		Callback_t1969551140 * L_51 = V_7;
		NullCheck(L_50);
		L_50->set_m_callback_3(L_51);
		CommandTree_t2732396483 * L_52 = __this->get_m_commands_4();
		CommandAttribute_t3967200570 * L_53 = V_9;
		NullCheck(L_52);
		CommandTree_Add_m1413729376(L_52, L_53, /*hidden argument*/NULL);
		String_t* L_54 = __this->get_m_help_7();
		CommandAttribute_t3967200570 * L_55 = V_9;
		NullCheck(L_55);
		String_t* L_56 = L_55->get_m_command_0();
		CommandAttribute_t3967200570 * L_57 = V_9;
		NullCheck(L_57);
		String_t* L_58 = L_57->get_m_help_1();
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_59 = String_Format_m2556382932(NULL /*static, unused*/, _stringLiteral2256588097, L_56, L_58, /*hidden argument*/NULL);
		String_t* L_60 = String_Concat_m3937257545(NULL /*static, unused*/, L_54, L_59, /*hidden argument*/NULL);
		__this->set_m_help_7(L_60);
	}

IL_0152:
	{
		int32_t L_61 = V_11;
		V_11 = ((int32_t)il2cpp_codegen_add((int32_t)L_61, (int32_t)1));
	}

IL_0158:
	{
		int32_t L_62 = V_11;
		CommandAttributeU5BU5D_t3855148191* L_63 = V_10;
		NullCheck(L_63);
		if ((((int32_t)L_62) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_63)->max_length)))))))
		{
			goto IL_00e0;
		}
	}

IL_0163:
	{
		int32_t L_64 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add((int32_t)L_64, (int32_t)1));
	}

IL_0169:
	{
		int32_t L_65 = V_5;
		MethodInfoU5BU5D_t2572182361* L_66 = V_4;
		NullCheck(L_66);
		if ((((int32_t)L_65) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_66)->max_length)))))))
		{
			goto IL_0028;
		}
	}
	{
		int32_t L_67 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_67, (int32_t)1));
	}

IL_0178:
	{
		int32_t L_68 = V_2;
		TypeU5BU5D_t3940880105* L_69 = V_1;
		NullCheck(L_69);
		if ((((int32_t)L_68) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_69)->max_length)))))))
		{
			goto IL_0012;
		}
	}
	{
		return;
	}
}
// System.String CUDLR.Console::PreviousCommand(System.Int32)
extern "C" IL2CPP_METHOD_ATTR String_t* Console_PreviousCommand_m687773879 (RuntimeObject * __this /* static, unused */, int32_t ___index0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Console_PreviousCommand_m687773879_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* G_B4_0 = NULL;
	{
		int32_t L_0 = ___index0;
		if ((((int32_t)L_0) < ((int32_t)0)))
		{
			goto IL_0031;
		}
	}
	{
		int32_t L_1 = ___index0;
		Console_t978607149 * L_2 = Console_get_Instance_m2769456780(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_2);
		List_1_t3319525431 * L_3 = L_2->get_m_history_6();
		NullCheck(L_3);
		int32_t L_4 = List_1_get_Count_m2276455407(L_3, /*hidden argument*/List_1_get_Count_m2276455407_RuntimeMethod_var);
		if ((((int32_t)L_1) >= ((int32_t)L_4)))
		{
			goto IL_0031;
		}
	}
	{
		Console_t978607149 * L_5 = Console_get_Instance_m2769456780(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_5);
		List_1_t3319525431 * L_6 = L_5->get_m_history_6();
		int32_t L_7 = ___index0;
		NullCheck(L_6);
		String_t* L_8 = List_1_get_Item_m3346958548(L_6, L_7, /*hidden argument*/List_1_get_Item_m3346958548_RuntimeMethod_var);
		G_B4_0 = L_8;
		goto IL_0032;
	}

IL_0031:
	{
		G_B4_0 = ((String_t*)(NULL));
	}

IL_0032:
	{
		return G_B4_0;
	}
}
// System.Void CUDLR.Console::RecordCommand(System.String)
extern "C" IL2CPP_METHOD_ATTR void Console_RecordCommand_m426163633 (Console_t978607149 * __this, String_t* ___command0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Console_RecordCommand_m426163633_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		List_1_t3319525431 * L_0 = __this->get_m_history_6();
		String_t* L_1 = ___command0;
		NullCheck(L_0);
		List_1_Insert_m1169937215(L_0, 0, L_1, /*hidden argument*/List_1_Insert_m1169937215_RuntimeMethod_var);
		List_1_t3319525431 * L_2 = __this->get_m_history_6();
		NullCheck(L_2);
		int32_t L_3 = List_1_get_Count_m2276455407(L_2, /*hidden argument*/List_1_get_Count_m2276455407_RuntimeMethod_var);
		if ((((int32_t)L_3) <= ((int32_t)((int32_t)50))))
		{
			goto IL_0037;
		}
	}
	{
		List_1_t3319525431 * L_4 = __this->get_m_history_6();
		List_1_t3319525431 * L_5 = __this->get_m_history_6();
		NullCheck(L_5);
		int32_t L_6 = List_1_get_Count_m2276455407(L_5, /*hidden argument*/List_1_get_Count_m2276455407_RuntimeMethod_var);
		NullCheck(L_4);
		List_1_RemoveAt_m815285786(L_4, ((int32_t)il2cpp_codegen_subtract((int32_t)L_6, (int32_t)1)), /*hidden argument*/List_1_RemoveAt_m815285786_RuntimeMethod_var);
	}

IL_0037:
	{
		return;
	}
}
// System.Void CUDLR.Console::Output(CUDLR.RequestContext)
extern "C" IL2CPP_METHOD_ATTR void Console_Output_m2834947948 (RuntimeObject * __this /* static, unused */, RequestContext_t3602631757 * ___context0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Console_Output_m2834947948_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RequestContext_t3602631757 * L_0 = ___context0;
		NullCheck(L_0);
		HttpListenerResponse_t3502667045 * L_1 = RequestContext_get_Response_m1933452700(L_0, /*hidden argument*/NULL);
		String_t* L_2 = Console_Output_m1199728895(NULL /*static, unused*/, /*hidden argument*/NULL);
		ResponseExtension_WriteString_m1918185232(NULL /*static, unused*/, L_1, L_2, _stringLiteral193343063, /*hidden argument*/NULL);
		return;
	}
}
// System.Void CUDLR.Console::Run(CUDLR.RequestContext)
extern "C" IL2CPP_METHOD_ATTR void Console_Run_m2973565217 (RuntimeObject * __this /* static, unused */, RequestContext_t3602631757 * ___context0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Console_Run_m2973565217_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		RequestContext_t3602631757 * L_0 = ___context0;
		NullCheck(L_0);
		HttpListenerRequest_t630699488 * L_1 = RequestContext_get_Request_m4257748949(L_0, /*hidden argument*/NULL);
		NullCheck(L_1);
		NameValueCollection_t407452768 * L_2 = HttpListenerRequest_get_QueryString_m2395793573(L_1, /*hidden argument*/NULL);
		NullCheck(L_2);
		String_t* L_3 = VirtFuncInvoker1< String_t*, String_t* >::Invoke(18 /* System.String System.Collections.Specialized.NameValueCollection::Get(System.String) */, L_2, _stringLiteral213757135);
		V_0 = L_3;
		String_t* L_4 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_5 = String_IsNullOrEmpty_m2969720369(NULL /*static, unused*/, L_4, /*hidden argument*/NULL);
		if (L_5)
		{
			goto IL_0027;
		}
	}
	{
		String_t* L_6 = V_0;
		Console_Run_m1342859034(NULL /*static, unused*/, L_6, /*hidden argument*/NULL);
	}

IL_0027:
	{
		RequestContext_t3602631757 * L_7 = ___context0;
		NullCheck(L_7);
		HttpListenerResponse_t3502667045 * L_8 = RequestContext_get_Response_m1933452700(L_7, /*hidden argument*/NULL);
		NullCheck(L_8);
		HttpListenerResponse_set_StatusCode_m2769870340(L_8, ((int32_t)200), /*hidden argument*/NULL);
		RequestContext_t3602631757 * L_9 = ___context0;
		NullCheck(L_9);
		HttpListenerResponse_t3502667045 * L_10 = RequestContext_get_Response_m1933452700(L_9, /*hidden argument*/NULL);
		NullCheck(L_10);
		HttpListenerResponse_set_StatusDescription_m2635984301(L_10, _stringLiteral3457136609, /*hidden argument*/NULL);
		return;
	}
}
// System.Void CUDLR.Console::History(CUDLR.RequestContext)
extern "C" IL2CPP_METHOD_ATTR void Console_History_m2709646712 (RuntimeObject * __this /* static, unused */, RequestContext_t3602631757 * ___context0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Console_History_m2709646712_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	String_t* V_1 = NULL;
	{
		RequestContext_t3602631757 * L_0 = ___context0;
		NullCheck(L_0);
		HttpListenerRequest_t630699488 * L_1 = RequestContext_get_Request_m4257748949(L_0, /*hidden argument*/NULL);
		NullCheck(L_1);
		NameValueCollection_t407452768 * L_2 = HttpListenerRequest_get_QueryString_m2395793573(L_1, /*hidden argument*/NULL);
		NullCheck(L_2);
		String_t* L_3 = VirtFuncInvoker1< String_t*, String_t* >::Invoke(18 /* System.String System.Collections.Specialized.NameValueCollection::Get(System.String) */, L_2, _stringLiteral797640427);
		V_0 = L_3;
		V_1 = (String_t*)NULL;
		String_t* L_4 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_5 = String_IsNullOrEmpty_m2969720369(NULL /*static, unused*/, L_4, /*hidden argument*/NULL);
		if (L_5)
		{
			goto IL_002f;
		}
	}
	{
		String_t* L_6 = V_0;
		int32_t L_7 = Int32_Parse_m1033611559(NULL /*static, unused*/, L_6, /*hidden argument*/NULL);
		String_t* L_8 = Console_PreviousCommand_m687773879(NULL /*static, unused*/, L_7, /*hidden argument*/NULL);
		V_1 = L_8;
	}

IL_002f:
	{
		RequestContext_t3602631757 * L_9 = ___context0;
		NullCheck(L_9);
		HttpListenerResponse_t3502667045 * L_10 = RequestContext_get_Response_m1933452700(L_9, /*hidden argument*/NULL);
		String_t* L_11 = V_1;
		ResponseExtension_WriteString_m1918185232(NULL /*static, unused*/, L_10, L_11, _stringLiteral193343063, /*hidden argument*/NULL);
		return;
	}
}
// System.Void CUDLR.Console::Complete(CUDLR.RequestContext)
extern "C" IL2CPP_METHOD_ATTR void Console_Complete_m1040027326 (RuntimeObject * __this /* static, unused */, RequestContext_t3602631757 * ___context0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Console_Complete_m1040027326_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	String_t* V_1 = NULL;
	{
		RequestContext_t3602631757 * L_0 = ___context0;
		NullCheck(L_0);
		HttpListenerRequest_t630699488 * L_1 = RequestContext_get_Request_m4257748949(L_0, /*hidden argument*/NULL);
		NullCheck(L_1);
		NameValueCollection_t407452768 * L_2 = HttpListenerRequest_get_QueryString_m2395793573(L_1, /*hidden argument*/NULL);
		NullCheck(L_2);
		String_t* L_3 = VirtFuncInvoker1< String_t*, String_t* >::Invoke(18 /* System.String System.Collections.Specialized.NameValueCollection::Get(System.String) */, L_2, _stringLiteral213757135);
		V_0 = L_3;
		V_1 = (String_t*)NULL;
		String_t* L_4 = V_0;
		if (!L_4)
		{
			goto IL_0025;
		}
	}
	{
		String_t* L_5 = V_0;
		String_t* L_6 = Console_Complete_m2408208350(NULL /*static, unused*/, L_5, /*hidden argument*/NULL);
		V_1 = L_6;
	}

IL_0025:
	{
		RequestContext_t3602631757 * L_7 = ___context0;
		NullCheck(L_7);
		HttpListenerResponse_t3502667045 * L_8 = RequestContext_get_Response_m1933452700(L_7, /*hidden argument*/NULL);
		String_t* L_9 = V_1;
		ResponseExtension_WriteString_m1918185232(NULL /*static, unused*/, L_8, L_9, _stringLiteral193343063, /*hidden argument*/NULL);
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
// System.Void CUDLR.Console/<RegisterAttributes>c__AnonStorey0::.ctor()
extern "C" IL2CPP_METHOD_ATTR void U3CRegisterAttributesU3Ec__AnonStorey0__ctor_m3969912081 (U3CRegisterAttributesU3Ec__AnonStorey0_t2829874507 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void CUDLR.Console/<RegisterAttributes>c__AnonStorey0::<>m__0(System.String[])
extern "C" IL2CPP_METHOD_ATTR void U3CRegisterAttributesU3Ec__AnonStorey0_U3CU3Em__0_m290692866 (U3CRegisterAttributesU3Ec__AnonStorey0_t2829874507 * __this, StringU5BU5D_t1281789340* ___args0, const RuntimeMethod* method)
{
	{
		CallbackSimple_t200441164 * L_0 = __this->get_cbs_0();
		NullCheck(L_0);
		CallbackSimple_Invoke_m2849167808(L_0, /*hidden argument*/NULL);
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
// Conversion methods for marshalling of: CUDLR.QueuedCommand
extern "C" void QueuedCommand_t3856573170_marshal_pinvoke(const QueuedCommand_t3856573170& unmarshaled, QueuedCommand_t3856573170_marshaled_pinvoke& marshaled)
{
	Exception_t* ___command_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'command' of type 'QueuedCommand': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___command_0Exception, NULL, NULL);
}
extern "C" void QueuedCommand_t3856573170_marshal_pinvoke_back(const QueuedCommand_t3856573170_marshaled_pinvoke& marshaled, QueuedCommand_t3856573170& unmarshaled)
{
	Exception_t* ___command_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'command' of type 'QueuedCommand': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___command_0Exception, NULL, NULL);
}
// Conversion method for clean up from marshalling of: CUDLR.QueuedCommand
extern "C" void QueuedCommand_t3856573170_marshal_pinvoke_cleanup(QueuedCommand_t3856573170_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: CUDLR.QueuedCommand
extern "C" void QueuedCommand_t3856573170_marshal_com(const QueuedCommand_t3856573170& unmarshaled, QueuedCommand_t3856573170_marshaled_com& marshaled)
{
	Exception_t* ___command_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'command' of type 'QueuedCommand': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___command_0Exception, NULL, NULL);
}
extern "C" void QueuedCommand_t3856573170_marshal_com_back(const QueuedCommand_t3856573170_marshaled_com& marshaled, QueuedCommand_t3856573170& unmarshaled)
{
	Exception_t* ___command_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'command' of type 'QueuedCommand': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___command_0Exception, NULL, NULL);
}
// Conversion method for clean up from marshalling of: CUDLR.QueuedCommand
extern "C" void QueuedCommand_t3856573170_marshal_com_cleanup(QueuedCommand_t3856573170_marshaled_com& marshaled)
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
// System.Void CUDLR.RequestContext::.ctor(System.Net.HttpListenerContext)
extern "C" IL2CPP_METHOD_ATTR void RequestContext__ctor_m925727424 (RequestContext_t3602631757 * __this, HttpListenerContext_t424880822 * ___ctx0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (RequestContext__ctor_m925727424_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		HttpListenerContext_t424880822 * L_0 = ___ctx0;
		__this->set_context_0(L_0);
		__this->set_match_1((Match_t3408321083 *)NULL);
		__this->set_pass_2((bool)0);
		HttpListenerContext_t424880822 * L_1 = __this->get_context_0();
		NullCheck(L_1);
		HttpListenerRequest_t630699488 * L_2 = HttpListenerContext_get_Request_m4128271285(L_1, /*hidden argument*/NULL);
		NullCheck(L_2);
		Uri_t100236324 * L_3 = HttpListenerRequest_get_Url_m3001623383(L_2, /*hidden argument*/NULL);
		NullCheck(L_3);
		String_t* L_4 = Uri_get_AbsolutePath_m590948575(L_3, /*hidden argument*/NULL);
		String_t* L_5 = WWW_UnEscapeURL_m2827350915(NULL /*static, unused*/, L_4, /*hidden argument*/NULL);
		__this->set_path_3(L_5);
		String_t* L_6 = __this->get_path_3();
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_7 = String_op_Equality_m920492651(NULL /*static, unused*/, L_6, _stringLiteral3452614529, /*hidden argument*/NULL);
		if (!L_7)
		{
			goto IL_005b;
		}
	}
	{
		__this->set_path_3(_stringLiteral3596787190);
	}

IL_005b:
	{
		__this->set_currentRoute_4(0);
		return;
	}
}
// System.Net.HttpListenerRequest CUDLR.RequestContext::get_Request()
extern "C" IL2CPP_METHOD_ATTR HttpListenerRequest_t630699488 * RequestContext_get_Request_m4257748949 (RequestContext_t3602631757 * __this, const RuntimeMethod* method)
{
	{
		HttpListenerContext_t424880822 * L_0 = __this->get_context_0();
		NullCheck(L_0);
		HttpListenerRequest_t630699488 * L_1 = HttpListenerContext_get_Request_m4128271285(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Net.HttpListenerResponse CUDLR.RequestContext::get_Response()
extern "C" IL2CPP_METHOD_ATTR HttpListenerResponse_t3502667045 * RequestContext_get_Response_m1933452700 (RequestContext_t3602631757 * __this, const RuntimeMethod* method)
{
	{
		HttpListenerContext_t424880822 * L_0 = __this->get_context_0();
		NullCheck(L_0);
		HttpListenerResponse_t3502667045 * L_1 = HttpListenerContext_get_Response_m3502405584(L_0, /*hidden argument*/NULL);
		return L_1;
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
// System.Void CUDLR.RouteAttribute::.ctor(System.String,System.String,System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void RouteAttribute__ctor_m1948716522 (RouteAttribute_t574643108 * __this, String_t* ___route0, String_t* ___methods1, bool ___runOnMainThread2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (RouteAttribute__ctor_m1948716522_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Attribute__ctor_m1529526131(__this, /*hidden argument*/NULL);
		String_t* L_0 = ___route0;
		Regex_t3657309853 * L_1 = (Regex_t3657309853 *)il2cpp_codegen_object_new(Regex_t3657309853_il2cpp_TypeInfo_var);
		Regex__ctor_m1728442805(L_1, L_0, 1, /*hidden argument*/NULL);
		__this->set_m_route_0(L_1);
		String_t* L_2 = ___methods1;
		Regex_t3657309853 * L_3 = (Regex_t3657309853 *)il2cpp_codegen_object_new(Regex_t3657309853_il2cpp_TypeInfo_var);
		Regex__ctor_m897876424(L_3, L_2, /*hidden argument*/NULL);
		__this->set_m_methods_1(L_3);
		bool L_4 = ___runOnMainThread2;
		__this->set_m_runOnMainThread_2(L_4);
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
// System.Void CUDLR.RouteAttribute/Callback::.ctor(System.Object,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void Callback__ctor_m2226827237 (Callback_t1777011615 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void CUDLR.RouteAttribute/Callback::Invoke(CUDLR.RequestContext)
extern "C" IL2CPP_METHOD_ATTR void Callback_Invoke_m1735851838 (Callback_t1777011615 * __this, RequestContext_t3602631757 * ___context0, const RuntimeMethod* method)
{
	if(__this->get_prev_9() != NULL)
	{
		Callback_Invoke_m1735851838((Callback_t1777011615 *)__this->get_prev_9(), ___context0, method);
	}
	Il2CppMethodPointer targetMethodPointer = __this->get_method_ptr_0();
	RuntimeMethod* targetMethod = (RuntimeMethod*)(__this->get_method_3());
	RuntimeObject* targetThis = __this->get_m_target_2();
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
	bool ___methodIsStatic = MethodIsStatic(targetMethod);
	if (___methodIsStatic)
	{
		if (il2cpp_codegen_method_parameter_count(targetMethod) == 1)
		{
			// open
			{
				typedef void (*FunctionPointerType) (RuntimeObject *, RequestContext_t3602631757 *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(NULL, ___context0, targetMethod);
			}
		}
		else
		{
			// closed
			{
				typedef void (*FunctionPointerType) (RuntimeObject *, void*, RequestContext_t3602631757 *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(NULL, targetThis, ___context0, targetMethod);
			}
		}
	}
	else
	{
		if (il2cpp_codegen_method_parameter_count(targetMethod) == 1)
		{
			// closed
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker1< RequestContext_t3602631757 * >::Invoke(targetMethod, targetThis, ___context0);
					else
						GenericVirtActionInvoker1< RequestContext_t3602631757 * >::Invoke(targetMethod, targetThis, ___context0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker1< RequestContext_t3602631757 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___context0);
					else
						VirtActionInvoker1< RequestContext_t3602631757 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___context0);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (void*, RequestContext_t3602631757 *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___context0, targetMethod);
			}
		}
		else
		{
			// open
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker0::Invoke(targetMethod, ___context0);
					else
						GenericVirtActionInvoker0::Invoke(targetMethod, ___context0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___context0);
					else
						VirtActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___context0);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (RequestContext_t3602631757 *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___context0, targetMethod);
			}
		}
	}
}
// System.IAsyncResult CUDLR.RouteAttribute/Callback::BeginInvoke(CUDLR.RequestContext,System.AsyncCallback,System.Object)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* Callback_BeginInvoke_m1018202073 (Callback_t1777011615 * __this, RequestContext_t3602631757 * ___context0, AsyncCallback_t3962456242 * ___callback1, RuntimeObject * ___object2, const RuntimeMethod* method)
{
	void *__d_args[2] = {0};
	__d_args[0] = ___context0;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);
}
// System.Void CUDLR.RouteAttribute/Callback::EndInvoke(System.IAsyncResult)
extern "C" IL2CPP_METHOD_ATTR void Callback_EndInvoke_m2968035195 (Callback_t1777011615 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void CUDLR.Server::.ctor()
extern "C" IL2CPP_METHOD_ATTR void Server__ctor_m1958464887 (Server_t545360578 * __this, const RuntimeMethod* method)
{
	{
		__this->set_Port_4(((int32_t)55055));
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void CUDLR.Server::Awake()
extern "C" IL2CPP_METHOD_ATTR void Server_Awake_m447341606 (Server_t545360578 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Server_Awake_m447341606_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Thread_t2300836069_il2cpp_TypeInfo_var);
		Thread_t2300836069 * L_0 = Thread_get_CurrentThread_m4142136012(NULL /*static, unused*/, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Server_t545360578_il2cpp_TypeInfo_var);
		((Server_t545360578_StaticFields*)il2cpp_codegen_static_fields_for(Server_t545360578_il2cpp_TypeInfo_var))->set_mainThread_5(L_0);
		String_t* L_1 = Application_get_streamingAssetsPath_m1172141117(NULL /*static, unused*/, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Path_t1605229823_il2cpp_TypeInfo_var);
		String_t* L_2 = Path_Combine_m3389272516(NULL /*static, unused*/, L_1, _stringLiteral856847767, /*hidden argument*/NULL);
		((Server_t545360578_StaticFields*)il2cpp_codegen_static_fields_for(Server_t545360578_il2cpp_TypeInfo_var))->set_fileRoot_6(L_2);
		Server_RegisterRoutes_m2940078606(__this, /*hidden argument*/NULL);
		Server_RegisterFileHandlers_m3848080522(NULL /*static, unused*/, /*hidden argument*/NULL);
		int32_t L_3 = __this->get_Port_4();
		int32_t L_4 = L_3;
		RuntimeObject * L_5 = Box(Int32_t2950945753_il2cpp_TypeInfo_var, &L_4);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_6 = String_Concat_m904156431(NULL /*static, unused*/, _stringLiteral907197241, L_5, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_Log_m4051431634(NULL /*static, unused*/, L_6, /*hidden argument*/NULL);
		HttpListener_t988452056 * L_7 = ((Server_t545360578_StaticFields*)il2cpp_codegen_static_fields_for(Server_t545360578_il2cpp_TypeInfo_var))->get_listener_7();
		NullCheck(L_7);
		HttpListenerPrefixCollection_t2963430373 * L_8 = HttpListener_get_Prefixes_m3351938452(L_7, /*hidden argument*/NULL);
		int32_t L_9 = __this->get_Port_4();
		int32_t L_10 = L_9;
		RuntimeObject * L_11 = Box(Int32_t2950945753_il2cpp_TypeInfo_var, &L_10);
		String_t* L_12 = String_Concat_m1715369213(NULL /*static, unused*/, _stringLiteral3222722581, L_11, _stringLiteral3452614529, /*hidden argument*/NULL);
		NullCheck(L_8);
		HttpListenerPrefixCollection_Add_m2988392880(L_8, L_12, /*hidden argument*/NULL);
		HttpListener_t988452056 * L_13 = ((Server_t545360578_StaticFields*)il2cpp_codegen_static_fields_for(Server_t545360578_il2cpp_TypeInfo_var))->get_listener_7();
		NullCheck(L_13);
		HttpListener_Start_m1585765732(L_13, /*hidden argument*/NULL);
		HttpListener_t988452056 * L_14 = ((Server_t545360578_StaticFields*)il2cpp_codegen_static_fields_for(Server_t545360578_il2cpp_TypeInfo_var))->get_listener_7();
		intptr_t L_15 = (intptr_t)Server_ListenerCallback_m1101166877_RuntimeMethod_var;
		AsyncCallback_t3962456242 * L_16 = (AsyncCallback_t3962456242 *)il2cpp_codegen_object_new(AsyncCallback_t3962456242_il2cpp_TypeInfo_var);
		AsyncCallback__ctor_m530647953(L_16, __this, L_15, /*hidden argument*/NULL);
		NullCheck(L_14);
		HttpListener_BeginGetContext_m484775909(L_14, L_16, NULL, /*hidden argument*/NULL);
		RuntimeObject* L_17 = Server_HandleRequests_m1187942297(__this, /*hidden argument*/NULL);
		MonoBehaviour_StartCoroutine_m3411253000(__this, L_17, /*hidden argument*/NULL);
		return;
	}
}
// System.Void CUDLR.Server::RegisterRoutes()
extern "C" IL2CPP_METHOD_ATTR void Server_RegisterRoutes_m2940078606 (Server_t545360578 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Server_RegisterRoutes_m2940078606_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Type_t * V_0 = NULL;
	TypeU5BU5D_t3940880105* V_1 = NULL;
	int32_t V_2 = 0;
	MethodInfo_t * V_3 = NULL;
	MethodInfoU5BU5D_t2572182361* V_4 = NULL;
	int32_t V_5 = 0;
	RouteAttributeU5BU5D_t1966353741* V_6 = NULL;
	Callback_t1777011615 * V_7 = NULL;
	RouteAttribute_t574643108 * V_8 = NULL;
	RouteAttributeU5BU5D_t1966353741* V_9 = NULL;
	int32_t V_10 = 0;
	{
		List_1_t2046717850 * L_0 = (List_1_t2046717850 *)il2cpp_codegen_object_new(List_1_t2046717850_il2cpp_TypeInfo_var);
		List_1__ctor_m2948823990(L_0, /*hidden argument*/List_1__ctor_m2948823990_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(Server_t545360578_il2cpp_TypeInfo_var);
		((Server_t545360578_StaticFields*)il2cpp_codegen_static_fields_for(Server_t545360578_il2cpp_TypeInfo_var))->set_registeredRoutes_8(L_0);
		Assembly_t * L_1 = il2cpp_codegen_get_executing_assembly(Server_RegisterRoutes_m2940078606_RuntimeMethod_var);
		NullCheck(L_1);
		TypeU5BU5D_t3940880105* L_2 = VirtFuncInvoker0< TypeU5BU5D_t3940880105* >::Invoke(11 /* System.Type[] System.Reflection.Assembly::GetTypes() */, L_1);
		V_1 = L_2;
		V_2 = 0;
		goto IL_010d;
	}

IL_001c:
	{
		TypeU5BU5D_t3940880105* L_3 = V_1;
		int32_t L_4 = V_2;
		NullCheck(L_3);
		int32_t L_5 = L_4;
		Type_t * L_6 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		V_0 = L_6;
		Type_t * L_7 = V_0;
		NullCheck(L_7);
		MethodInfoU5BU5D_t2572182361* L_8 = VirtFuncInvoker1< MethodInfoU5BU5D_t2572182361*, int32_t >::Invoke(55 /* System.Reflection.MethodInfo[] System.Type::GetMethods(System.Reflection.BindingFlags) */, L_7, ((int32_t)24));
		V_4 = L_8;
		V_5 = 0;
		goto IL_00fe;
	}

IL_0032:
	{
		MethodInfoU5BU5D_t2572182361* L_9 = V_4;
		int32_t L_10 = V_5;
		NullCheck(L_9);
		int32_t L_11 = L_10;
		MethodInfo_t * L_12 = (L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_11));
		V_3 = L_12;
		MethodInfo_t * L_13 = V_3;
		RuntimeTypeHandle_t3027515415  L_14 = { reinterpret_cast<intptr_t> (RouteAttribute_t574643108_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_15 = Type_GetTypeFromHandle_m1620074514(NULL /*static, unused*/, L_14, /*hidden argument*/NULL);
		NullCheck(L_13);
		ObjectU5BU5D_t2843939325* L_16 = VirtFuncInvoker2< ObjectU5BU5D_t2843939325*, Type_t *, bool >::Invoke(13 /* System.Object[] System.Reflection.MemberInfo::GetCustomAttributes(System.Type,System.Boolean) */, L_13, L_15, (bool)1);
		V_6 = ((RouteAttributeU5BU5D_t1966353741*)IsInst((RuntimeObject*)L_16, RouteAttributeU5BU5D_t1966353741_il2cpp_TypeInfo_var));
		RouteAttributeU5BU5D_t1966353741* L_17 = V_6;
		NullCheck(L_17);
		if ((((int32_t)((int32_t)(((RuntimeArray *)L_17)->max_length)))))
		{
			goto IL_005e;
		}
	}
	{
		goto IL_00f8;
	}

IL_005e:
	{
		RuntimeTypeHandle_t3027515415  L_18 = { reinterpret_cast<intptr_t> (Callback_t1777011615_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_19 = Type_GetTypeFromHandle_m1620074514(NULL /*static, unused*/, L_18, /*hidden argument*/NULL);
		MethodInfo_t * L_20 = V_3;
		Delegate_t1188392813 * L_21 = Delegate_CreateDelegate_m1051651521(NULL /*static, unused*/, L_19, L_20, (bool)0, /*hidden argument*/NULL);
		V_7 = ((Callback_t1777011615 *)IsInstSealed((RuntimeObject*)L_21, Callback_t1777011615_il2cpp_TypeInfo_var));
		Callback_t1777011615 * L_22 = V_7;
		if (L_22)
		{
			goto IL_0098;
		}
	}
	{
		Type_t * L_23 = V_0;
		MethodInfo_t * L_24 = V_3;
		NullCheck(L_24);
		String_t* L_25 = VirtFuncInvoker0< String_t* >::Invoke(8 /* System.String System.Reflection.MemberInfo::get_Name() */, L_24);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_26 = String_Format_m2556382932(NULL /*static, unused*/, _stringLiteral3649928864, L_23, L_25, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_LogError_m2850623458(NULL /*static, unused*/, L_26, /*hidden argument*/NULL);
		goto IL_00f8;
	}

IL_0098:
	{
		RouteAttributeU5BU5D_t1966353741* L_27 = V_6;
		V_9 = L_27;
		V_10 = 0;
		goto IL_00ed;
	}

IL_00a4:
	{
		RouteAttributeU5BU5D_t1966353741* L_28 = V_9;
		int32_t L_29 = V_10;
		NullCheck(L_28);
		int32_t L_30 = L_29;
		RouteAttribute_t574643108 * L_31 = (L_28)->GetAt(static_cast<il2cpp_array_size_t>(L_30));
		V_8 = L_31;
		RouteAttribute_t574643108 * L_32 = V_8;
		NullCheck(L_32);
		Regex_t3657309853 * L_33 = L_32->get_m_route_0();
		if (L_33)
		{
			goto IL_00d2;
		}
	}
	{
		Type_t * L_34 = V_0;
		MethodInfo_t * L_35 = V_3;
		NullCheck(L_35);
		String_t* L_36 = VirtFuncInvoker0< String_t* >::Invoke(8 /* System.String System.Reflection.MemberInfo::get_Name() */, L_35);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_37 = String_Format_m2556382932(NULL /*static, unused*/, _stringLiteral2372627905, L_34, L_36, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_LogError_m2850623458(NULL /*static, unused*/, L_37, /*hidden argument*/NULL);
		goto IL_00e7;
	}

IL_00d2:
	{
		RouteAttribute_t574643108 * L_38 = V_8;
		Callback_t1777011615 * L_39 = V_7;
		NullCheck(L_38);
		L_38->set_m_callback_3(L_39);
		IL2CPP_RUNTIME_CLASS_INIT(Server_t545360578_il2cpp_TypeInfo_var);
		List_1_t2046717850 * L_40 = ((Server_t545360578_StaticFields*)il2cpp_codegen_static_fields_for(Server_t545360578_il2cpp_TypeInfo_var))->get_registeredRoutes_8();
		RouteAttribute_t574643108 * L_41 = V_8;
		NullCheck(L_40);
		List_1_Add_m3083894502(L_40, L_41, /*hidden argument*/List_1_Add_m3083894502_RuntimeMethod_var);
	}

IL_00e7:
	{
		int32_t L_42 = V_10;
		V_10 = ((int32_t)il2cpp_codegen_add((int32_t)L_42, (int32_t)1));
	}

IL_00ed:
	{
		int32_t L_43 = V_10;
		RouteAttributeU5BU5D_t1966353741* L_44 = V_9;
		NullCheck(L_44);
		if ((((int32_t)L_43) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_44)->max_length)))))))
		{
			goto IL_00a4;
		}
	}

IL_00f8:
	{
		int32_t L_45 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add((int32_t)L_45, (int32_t)1));
	}

IL_00fe:
	{
		int32_t L_46 = V_5;
		MethodInfoU5BU5D_t2572182361* L_47 = V_4;
		NullCheck(L_47);
		if ((((int32_t)L_46) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_47)->max_length)))))))
		{
			goto IL_0032;
		}
	}
	{
		int32_t L_48 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_48, (int32_t)1));
	}

IL_010d:
	{
		int32_t L_49 = V_2;
		TypeU5BU5D_t3940880105* L_50 = V_1;
		NullCheck(L_50);
		if ((((int32_t)L_49) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_50)->max_length)))))))
		{
			goto IL_001c;
		}
	}
	{
		return;
	}
}
// System.Void CUDLR.Server::FindFileType(CUDLR.RequestContext,System.Boolean,System.String&,System.String&)
extern "C" IL2CPP_METHOD_ATTR void Server_FindFileType_m1180339088 (RuntimeObject * __this /* static, unused */, RequestContext_t3602631757 * ___context0, bool ___download1, String_t** ___path2, String_t** ___type3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Server_FindFileType_m1180339088_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		String_t** L_0 = ___path2;
		IL2CPP_RUNTIME_CLASS_INIT(Server_t545360578_il2cpp_TypeInfo_var);
		String_t* L_1 = ((Server_t545360578_StaticFields*)il2cpp_codegen_static_fields_for(Server_t545360578_il2cpp_TypeInfo_var))->get_fileRoot_6();
		RequestContext_t3602631757 * L_2 = ___context0;
		NullCheck(L_2);
		Match_t3408321083 * L_3 = L_2->get_match_1();
		NullCheck(L_3);
		GroupCollection_t69770484 * L_4 = VirtFuncInvoker0< GroupCollection_t69770484 * >::Invoke(4 /* System.Text.RegularExpressions.GroupCollection System.Text.RegularExpressions.Match::get_Groups() */, L_3);
		NullCheck(L_4);
		Group_t2468205786 * L_5 = GroupCollection_get_Item_m2465789076(L_4, 1, /*hidden argument*/NULL);
		NullCheck(L_5);
		String_t* L_6 = Capture_get_Value_m538076933(L_5, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Path_t1605229823_il2cpp_TypeInfo_var);
		String_t* L_7 = Path_Combine_m3389272516(NULL /*static, unused*/, L_1, L_6, /*hidden argument*/NULL);
		*((RuntimeObject **)(L_0)) = (RuntimeObject *)L_7;
		Il2CppCodeGenWriteBarrier((RuntimeObject **)(L_0), (RuntimeObject *)L_7);
		String_t** L_8 = ___path2;
		String_t* L_9 = *((String_t**)L_8);
		String_t* L_10 = Path_GetExtension_m1021339115(NULL /*static, unused*/, L_9, /*hidden argument*/NULL);
		NullCheck(L_10);
		String_t* L_11 = String_ToLower_m2029374922(L_10, /*hidden argument*/NULL);
		CharU5BU5D_t3528271667* L_12 = (CharU5BU5D_t3528271667*)SZArrayNew(CharU5BU5D_t3528271667_il2cpp_TypeInfo_var, (uint32_t)1);
		CharU5BU5D_t3528271667* L_13 = L_12;
		NullCheck(L_13);
		(L_13)->SetAt(static_cast<il2cpp_array_size_t>(0), (Il2CppChar)((int32_t)46));
		NullCheck(L_11);
		String_t* L_14 = String_TrimStart_m1431283012(L_11, L_13, /*hidden argument*/NULL);
		V_0 = L_14;
		bool L_15 = ___download1;
		if (L_15)
		{
			goto IL_0056;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Server_t545360578_il2cpp_TypeInfo_var);
		Dictionary_2_t1632706988 * L_16 = ((Server_t545360578_StaticFields*)il2cpp_codegen_static_fields_for(Server_t545360578_il2cpp_TypeInfo_var))->get_fileTypes_10();
		String_t* L_17 = V_0;
		String_t** L_18 = ___type3;
		NullCheck(L_16);
		bool L_19 = Dictionary_2_TryGetValue_m1185325717(L_16, L_17, (String_t**)L_18, /*hidden argument*/Dictionary_2_TryGetValue_m1185325717_RuntimeMethod_var);
		if (L_19)
		{
			goto IL_005d;
		}
	}

IL_0056:
	{
		String_t** L_20 = ___type3;
		*((RuntimeObject **)(L_20)) = (RuntimeObject *)_stringLiteral1612324208;
		Il2CppCodeGenWriteBarrier((RuntimeObject **)(L_20), (RuntimeObject *)_stringLiteral1612324208);
	}

IL_005d:
	{
		return;
	}
}
// System.Void CUDLR.Server::WWWFileHandler(CUDLR.RequestContext,System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void Server_WWWFileHandler_m3697405713 (RuntimeObject * __this /* static, unused */, RequestContext_t3602631757 * ___context0, bool ___download1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Server_WWWFileHandler_m3697405713_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	String_t* V_1 = NULL;
	WWW_t3688466362 * V_2 = NULL;
	{
		RequestContext_t3602631757 * L_0 = ___context0;
		bool L_1 = ___download1;
		IL2CPP_RUNTIME_CLASS_INIT(Server_t545360578_il2cpp_TypeInfo_var);
		Server_FindFileType_m1180339088(NULL /*static, unused*/, L_0, L_1, (String_t**)(&V_0), (String_t**)(&V_1), /*hidden argument*/NULL);
		String_t* L_2 = V_0;
		WWW_t3688466362 * L_3 = (WWW_t3688466362 *)il2cpp_codegen_object_new(WWW_t3688466362_il2cpp_TypeInfo_var);
		WWW__ctor_m2915079343(L_3, L_2, /*hidden argument*/NULL);
		V_2 = L_3;
		goto IL_001d;
	}

IL_0017:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Thread_t2300836069_il2cpp_TypeInfo_var);
		Thread_Sleep_m483098292(NULL /*static, unused*/, 0, /*hidden argument*/NULL);
	}

IL_001d:
	{
		WWW_t3688466362 * L_4 = V_2;
		NullCheck(L_4);
		bool L_5 = WWW_get_isDone_m3426350689(L_4, /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_0017;
		}
	}
	{
		WWW_t3688466362 * L_6 = V_2;
		NullCheck(L_6);
		String_t* L_7 = WWW_get_error_m3055313367(L_6, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_8 = String_IsNullOrEmpty_m2969720369(NULL /*static, unused*/, L_7, /*hidden argument*/NULL);
		if (!L_8)
		{
			goto IL_007c;
		}
	}
	{
		RequestContext_t3602631757 * L_9 = ___context0;
		NullCheck(L_9);
		HttpListenerResponse_t3502667045 * L_10 = RequestContext_get_Response_m1933452700(L_9, /*hidden argument*/NULL);
		String_t* L_11 = V_1;
		NullCheck(L_10);
		HttpListenerResponse_set_ContentType_m4030363041(L_10, L_11, /*hidden argument*/NULL);
		bool L_12 = ___download1;
		if (!L_12)
		{
			goto IL_006a;
		}
	}
	{
		RequestContext_t3602631757 * L_13 = ___context0;
		NullCheck(L_13);
		HttpListenerResponse_t3502667045 * L_14 = RequestContext_get_Response_m1933452700(L_13, /*hidden argument*/NULL);
		String_t* L_15 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Path_t1605229823_il2cpp_TypeInfo_var);
		String_t* L_16 = Path_GetFileName_m1354558116(NULL /*static, unused*/, L_15, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_17 = String_Format_m2844511972(NULL /*static, unused*/, _stringLiteral88737304, L_16, /*hidden argument*/NULL);
		NullCheck(L_14);
		HttpListenerResponse_AddHeader_m536198768(L_14, _stringLiteral2424900053, L_17, /*hidden argument*/NULL);
	}

IL_006a:
	{
		RequestContext_t3602631757 * L_18 = ___context0;
		NullCheck(L_18);
		HttpListenerResponse_t3502667045 * L_19 = RequestContext_get_Response_m1933452700(L_18, /*hidden argument*/NULL);
		WWW_t3688466362 * L_20 = V_2;
		NullCheck(L_20);
		ByteU5BU5D_t4116647657* L_21 = WWW_get_bytes_m3061182897(L_20, /*hidden argument*/NULL);
		ResponseExtension_WriteBytes_m1603091416(NULL /*static, unused*/, L_19, L_21, /*hidden argument*/NULL);
		return;
	}

IL_007c:
	{
		WWW_t3688466362 * L_22 = V_2;
		NullCheck(L_22);
		String_t* L_23 = WWW_get_error_m3055313367(L_22, /*hidden argument*/NULL);
		NullCheck(L_23);
		bool L_24 = String_StartsWith_m1759067526(L_23, _stringLiteral3842627524, /*hidden argument*/NULL);
		if (!L_24)
		{
			goto IL_009d;
		}
	}
	{
		RequestContext_t3602631757 * L_25 = ___context0;
		NullCheck(L_25);
		L_25->set_pass_2((bool)1);
		goto IL_00c8;
	}

IL_009d:
	{
		RequestContext_t3602631757 * L_26 = ___context0;
		NullCheck(L_26);
		HttpListenerResponse_t3502667045 * L_27 = RequestContext_get_Response_m1933452700(L_26, /*hidden argument*/NULL);
		NullCheck(L_27);
		HttpListenerResponse_set_StatusCode_m2769870340(L_27, ((int32_t)500), /*hidden argument*/NULL);
		RequestContext_t3602631757 * L_28 = ___context0;
		NullCheck(L_28);
		HttpListenerResponse_t3502667045 * L_29 = RequestContext_get_Response_m1933452700(L_28, /*hidden argument*/NULL);
		WWW_t3688466362 * L_30 = V_2;
		NullCheck(L_30);
		String_t* L_31 = WWW_get_error_m3055313367(L_30, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_32 = String_Format_m2844511972(NULL /*static, unused*/, _stringLiteral3088513532, L_31, /*hidden argument*/NULL);
		NullCheck(L_29);
		HttpListenerResponse_set_StatusDescription_m2635984301(L_29, L_32, /*hidden argument*/NULL);
	}

IL_00c8:
	{
		return;
	}
}
// System.Void CUDLR.Server::FileHandler(CUDLR.RequestContext,System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void Server_FileHandler_m953556668 (RuntimeObject * __this /* static, unused */, RequestContext_t3602631757 * ___context0, bool ___download1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Server_FileHandler_m953556668_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	String_t* V_1 = NULL;
	{
		RequestContext_t3602631757 * L_0 = ___context0;
		bool L_1 = ___download1;
		IL2CPP_RUNTIME_CLASS_INIT(Server_t545360578_il2cpp_TypeInfo_var);
		Server_FindFileType_m1180339088(NULL /*static, unused*/, L_0, L_1, (String_t**)(&V_0), (String_t**)(&V_1), /*hidden argument*/NULL);
		String_t* L_2 = V_0;
		bool L_3 = File_Exists_m3943585060(NULL /*static, unused*/, L_2, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_0029;
		}
	}
	{
		RequestContext_t3602631757 * L_4 = ___context0;
		NullCheck(L_4);
		HttpListenerResponse_t3502667045 * L_5 = RequestContext_get_Response_m1933452700(L_4, /*hidden argument*/NULL);
		String_t* L_6 = V_0;
		String_t* L_7 = V_1;
		bool L_8 = ___download1;
		ResponseExtension_WriteFile_m2406796800(NULL /*static, unused*/, L_5, L_6, L_7, L_8, /*hidden argument*/NULL);
		goto IL_0030;
	}

IL_0029:
	{
		RequestContext_t3602631757 * L_9 = ___context0;
		NullCheck(L_9);
		L_9->set_pass_2((bool)1);
	}

IL_0030:
	{
		return;
	}
}
// System.Void CUDLR.Server::RegisterFileHandlers()
extern "C" IL2CPP_METHOD_ATTR void Server_RegisterFileHandlers_m3848080522 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Server_RegisterFileHandlers_m3848080522_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	U3CRegisterFileHandlersU3Ec__AnonStorey1_t3770007581 * V_0 = NULL;
	String_t* V_1 = NULL;
	RouteAttribute_t574643108 * V_2 = NULL;
	RouteAttribute_t574643108 * V_3 = NULL;
	bool V_4 = false;
	Dictionary_2_t1632706988 * G_B2_0 = NULL;
	String_t* G_B2_1 = NULL;
	String_t* G_B2_2 = NULL;
	Dictionary_2_t1632706988 * G_B1_0 = NULL;
	String_t* G_B1_1 = NULL;
	String_t* G_B1_2 = NULL;
	U3CRegisterFileHandlersU3Ec__AnonStorey1_t3770007581 * G_B4_0 = NULL;
	U3CRegisterFileHandlersU3Ec__AnonStorey1_t3770007581 * G_B3_0 = NULL;
	U3CRegisterFileHandlersU3Ec__AnonStorey1_t3770007581 * G_B7_0 = NULL;
	U3CRegisterFileHandlersU3Ec__AnonStorey1_t3770007581 * G_B6_0 = NULL;
	{
		U3CRegisterFileHandlersU3Ec__AnonStorey1_t3770007581 * L_0 = (U3CRegisterFileHandlersU3Ec__AnonStorey1_t3770007581 *)il2cpp_codegen_object_new(U3CRegisterFileHandlersU3Ec__AnonStorey1_t3770007581_il2cpp_TypeInfo_var);
		U3CRegisterFileHandlersU3Ec__AnonStorey1__ctor_m529639330(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		IL2CPP_RUNTIME_CLASS_INIT(Server_t545360578_il2cpp_TypeInfo_var);
		Dictionary_2_t1632706988 * L_1 = ((Server_t545360578_StaticFields*)il2cpp_codegen_static_fields_for(Server_t545360578_il2cpp_TypeInfo_var))->get_fileTypes_10();
		Func_2_t3001800792 * L_2 = ((Server_t545360578_StaticFields*)il2cpp_codegen_static_fields_for(Server_t545360578_il2cpp_TypeInfo_var))->get_U3CU3Ef__amU24cache0_13();
		G_B1_0 = L_1;
		G_B1_1 = _stringLiteral3452614612;
		G_B1_2 = _stringLiteral943589599;
		if (L_2)
		{
			G_B2_0 = L_1;
			G_B2_1 = _stringLiteral3452614612;
			G_B2_2 = _stringLiteral943589599;
			goto IL_002d;
		}
	}
	{
		intptr_t L_3 = (intptr_t)Server_U3CRegisterFileHandlersU3Em__0_m1318319089_RuntimeMethod_var;
		Func_2_t3001800792 * L_4 = (Func_2_t3001800792 *)il2cpp_codegen_object_new(Func_2_t3001800792_il2cpp_TypeInfo_var);
		Func_2__ctor_m3780063840(L_4, NULL, L_3, /*hidden argument*/Func_2__ctor_m3780063840_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(Server_t545360578_il2cpp_TypeInfo_var);
		((Server_t545360578_StaticFields*)il2cpp_codegen_static_fields_for(Server_t545360578_il2cpp_TypeInfo_var))->set_U3CU3Ef__amU24cache0_13(L_4);
		G_B2_0 = G_B1_0;
		G_B2_1 = G_B1_1;
		G_B2_2 = G_B1_2;
	}

IL_002d:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Server_t545360578_il2cpp_TypeInfo_var);
		Func_2_t3001800792 * L_5 = ((Server_t545360578_StaticFields*)il2cpp_codegen_static_fields_for(Server_t545360578_il2cpp_TypeInfo_var))->get_U3CU3Ef__amU24cache0_13();
		RuntimeObject* L_6 = Enumerable_Select_TisKeyValuePair_2_t4030379155_TisString_t_m3591192767(NULL /*static, unused*/, G_B2_0, L_5, /*hidden argument*/Enumerable_Select_TisKeyValuePair_2_t4030379155_TisString_t_m3591192767_RuntimeMethod_var);
		StringU5BU5D_t1281789340* L_7 = Enumerable_ToArray_TisString_t_m4208096419(NULL /*static, unused*/, L_6, /*hidden argument*/Enumerable_ToArray_TisString_t_m4208096419_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_8 = String_Join_m2050845953(NULL /*static, unused*/, G_B2_1, L_7, /*hidden argument*/NULL);
		String_t* L_9 = String_Format_m2844511972(NULL /*static, unused*/, G_B2_2, L_8, /*hidden argument*/NULL);
		V_1 = L_9;
		String_t* L_10 = V_1;
		String_t* L_11 = String_Format_m2844511972(NULL /*static, unused*/, _stringLiteral1819970986, L_10, /*hidden argument*/NULL);
		RouteAttribute_t574643108 * L_12 = (RouteAttribute_t574643108 *)il2cpp_codegen_object_new(RouteAttribute_t574643108_il2cpp_TypeInfo_var);
		RouteAttribute__ctor_m1948716522(L_12, L_11, _stringLiteral783935412, (bool)1, /*hidden argument*/NULL);
		V_2 = L_12;
		String_t* L_13 = V_1;
		String_t* L_14 = String_Format_m2844511972(NULL /*static, unused*/, _stringLiteral2252386871, L_13, /*hidden argument*/NULL);
		RouteAttribute_t574643108 * L_15 = (RouteAttribute_t574643108 *)il2cpp_codegen_object_new(RouteAttribute_t574643108_il2cpp_TypeInfo_var);
		RouteAttribute__ctor_m1948716522(L_15, L_14, _stringLiteral783935412, (bool)1, /*hidden argument*/NULL);
		V_3 = L_15;
		String_t* L_16 = ((Server_t545360578_StaticFields*)il2cpp_codegen_static_fields_for(Server_t545360578_il2cpp_TypeInfo_var))->get_fileRoot_6();
		NullCheck(L_16);
		bool L_17 = String_Contains_m1147431944(L_16, _stringLiteral1057238085, /*hidden argument*/NULL);
		V_4 = L_17;
		RouteAttribute_t574643108 * L_18 = V_2;
		bool L_19 = V_4;
		NullCheck(L_18);
		L_18->set_m_runOnMainThread_2(L_19);
		RouteAttribute_t574643108 * L_20 = V_3;
		bool L_21 = V_4;
		NullCheck(L_20);
		L_20->set_m_runOnMainThread_2(L_21);
		U3CRegisterFileHandlersU3Ec__AnonStorey1_t3770007581 * L_22 = V_0;
		FileHandlerDelegate_t13458300 * L_23 = ((Server_t545360578_StaticFields*)il2cpp_codegen_static_fields_for(Server_t545360578_il2cpp_TypeInfo_var))->get_U3CU3Ef__mgU24cache0_11();
		G_B3_0 = L_22;
		if (L_23)
		{
			G_B4_0 = L_22;
			goto IL_00af;
		}
	}
	{
		intptr_t L_24 = (intptr_t)Server_FileHandler_m953556668_RuntimeMethod_var;
		FileHandlerDelegate_t13458300 * L_25 = (FileHandlerDelegate_t13458300 *)il2cpp_codegen_object_new(FileHandlerDelegate_t13458300_il2cpp_TypeInfo_var);
		FileHandlerDelegate__ctor_m3475249825(L_25, NULL, L_24, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Server_t545360578_il2cpp_TypeInfo_var);
		((Server_t545360578_StaticFields*)il2cpp_codegen_static_fields_for(Server_t545360578_il2cpp_TypeInfo_var))->set_U3CU3Ef__mgU24cache0_11(L_25);
		G_B4_0 = G_B3_0;
	}

IL_00af:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Server_t545360578_il2cpp_TypeInfo_var);
		FileHandlerDelegate_t13458300 * L_26 = ((Server_t545360578_StaticFields*)il2cpp_codegen_static_fields_for(Server_t545360578_il2cpp_TypeInfo_var))->get_U3CU3Ef__mgU24cache0_11();
		NullCheck(G_B4_0);
		G_B4_0->set_callback_0(L_26);
		bool L_27 = V_4;
		if (!L_27)
		{
			goto IL_00e3;
		}
	}
	{
		U3CRegisterFileHandlersU3Ec__AnonStorey1_t3770007581 * L_28 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Server_t545360578_il2cpp_TypeInfo_var);
		FileHandlerDelegate_t13458300 * L_29 = ((Server_t545360578_StaticFields*)il2cpp_codegen_static_fields_for(Server_t545360578_il2cpp_TypeInfo_var))->get_U3CU3Ef__mgU24cache1_12();
		G_B6_0 = L_28;
		if (L_29)
		{
			G_B7_0 = L_28;
			goto IL_00d9;
		}
	}
	{
		intptr_t L_30 = (intptr_t)Server_WWWFileHandler_m3697405713_RuntimeMethod_var;
		FileHandlerDelegate_t13458300 * L_31 = (FileHandlerDelegate_t13458300 *)il2cpp_codegen_object_new(FileHandlerDelegate_t13458300_il2cpp_TypeInfo_var);
		FileHandlerDelegate__ctor_m3475249825(L_31, NULL, L_30, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Server_t545360578_il2cpp_TypeInfo_var);
		((Server_t545360578_StaticFields*)il2cpp_codegen_static_fields_for(Server_t545360578_il2cpp_TypeInfo_var))->set_U3CU3Ef__mgU24cache1_12(L_31);
		G_B7_0 = G_B6_0;
	}

IL_00d9:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Server_t545360578_il2cpp_TypeInfo_var);
		FileHandlerDelegate_t13458300 * L_32 = ((Server_t545360578_StaticFields*)il2cpp_codegen_static_fields_for(Server_t545360578_il2cpp_TypeInfo_var))->get_U3CU3Ef__mgU24cache1_12();
		NullCheck(G_B7_0);
		G_B7_0->set_callback_0(L_32);
	}

IL_00e3:
	{
		RouteAttribute_t574643108 * L_33 = V_2;
		U3CRegisterFileHandlersU3Ec__AnonStorey1_t3770007581 * L_34 = V_0;
		intptr_t L_35 = (intptr_t)U3CRegisterFileHandlersU3Ec__AnonStorey1_U3CU3Em__0_m1890339817_RuntimeMethod_var;
		Callback_t1777011615 * L_36 = (Callback_t1777011615 *)il2cpp_codegen_object_new(Callback_t1777011615_il2cpp_TypeInfo_var);
		Callback__ctor_m2226827237(L_36, L_34, L_35, /*hidden argument*/NULL);
		NullCheck(L_33);
		L_33->set_m_callback_3(L_36);
		RouteAttribute_t574643108 * L_37 = V_3;
		U3CRegisterFileHandlersU3Ec__AnonStorey1_t3770007581 * L_38 = V_0;
		intptr_t L_39 = (intptr_t)U3CRegisterFileHandlersU3Ec__AnonStorey1_U3CU3Em__1_m1177063264_RuntimeMethod_var;
		Callback_t1777011615 * L_40 = (Callback_t1777011615 *)il2cpp_codegen_object_new(Callback_t1777011615_il2cpp_TypeInfo_var);
		Callback__ctor_m2226827237(L_40, L_38, L_39, /*hidden argument*/NULL);
		NullCheck(L_37);
		L_37->set_m_callback_3(L_40);
		IL2CPP_RUNTIME_CLASS_INIT(Server_t545360578_il2cpp_TypeInfo_var);
		List_1_t2046717850 * L_41 = ((Server_t545360578_StaticFields*)il2cpp_codegen_static_fields_for(Server_t545360578_il2cpp_TypeInfo_var))->get_registeredRoutes_8();
		RouteAttribute_t574643108 * L_42 = V_2;
		NullCheck(L_41);
		List_1_Add_m3083894502(L_41, L_42, /*hidden argument*/List_1_Add_m3083894502_RuntimeMethod_var);
		List_1_t2046717850 * L_43 = ((Server_t545360578_StaticFields*)il2cpp_codegen_static_fields_for(Server_t545360578_il2cpp_TypeInfo_var))->get_registeredRoutes_8();
		RouteAttribute_t574643108 * L_44 = V_3;
		NullCheck(L_43);
		List_1_Add_m3083894502(L_43, L_44, /*hidden argument*/List_1_Add_m3083894502_RuntimeMethod_var);
		return;
	}
}
// System.Void CUDLR.Server::OnEnable()
extern "C" IL2CPP_METHOD_ATTR void Server_OnEnable_m4110643306 (Server_t545360578 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Server_OnEnable_m4110643306_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Server_t545360578_il2cpp_TypeInfo_var);
		LogCallback_t3588208630 * L_0 = ((Server_t545360578_StaticFields*)il2cpp_codegen_static_fields_for(Server_t545360578_il2cpp_TypeInfo_var))->get_U3CU3Ef__mgU24cache2_14();
		if (L_0)
		{
			goto IL_0018;
		}
	}
	{
		intptr_t L_1 = (intptr_t)Console_LogCallback_m3679510954_RuntimeMethod_var;
		LogCallback_t3588208630 * L_2 = (LogCallback_t3588208630 *)il2cpp_codegen_object_new(LogCallback_t3588208630_il2cpp_TypeInfo_var);
		LogCallback__ctor_m144650965(L_2, NULL, L_1, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Server_t545360578_il2cpp_TypeInfo_var);
		((Server_t545360578_StaticFields*)il2cpp_codegen_static_fields_for(Server_t545360578_il2cpp_TypeInfo_var))->set_U3CU3Ef__mgU24cache2_14(L_2);
	}

IL_0018:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Server_t545360578_il2cpp_TypeInfo_var);
		LogCallback_t3588208630 * L_3 = ((Server_t545360578_StaticFields*)il2cpp_codegen_static_fields_for(Server_t545360578_il2cpp_TypeInfo_var))->get_U3CU3Ef__mgU24cache2_14();
		Application_RegisterLogCallback_m484975236(NULL /*static, unused*/, L_3, /*hidden argument*/NULL);
		return;
	}
}
// System.Void CUDLR.Server::OnDisable()
extern "C" IL2CPP_METHOD_ATTR void Server_OnDisable_m3211943009 (Server_t545360578 * __this, const RuntimeMethod* method)
{
	{
		Application_RegisterLogCallback_m484975236(NULL /*static, unused*/, (LogCallback_t3588208630 *)NULL, /*hidden argument*/NULL);
		return;
	}
}
// System.Void CUDLR.Server::Update()
extern "C" IL2CPP_METHOD_ATTR void Server_Update_m448540007 (Server_t545360578 * __this, const RuntimeMethod* method)
{
	{
		Console_Update_m2794781264(NULL /*static, unused*/, /*hidden argument*/NULL);
		return;
	}
}
// System.Void CUDLR.Server::ListenerCallback(System.IAsyncResult)
extern "C" IL2CPP_METHOD_ATTR void Server_ListenerCallback_m1101166877 (Server_t545360578 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Server_ListenerCallback_m1101166877_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RequestContext_t3602631757 * V_0 = NULL;
	{
		IL2CPP_RUNTIME_CLASS_INIT(Server_t545360578_il2cpp_TypeInfo_var);
		HttpListener_t988452056 * L_0 = ((Server_t545360578_StaticFields*)il2cpp_codegen_static_fields_for(Server_t545360578_il2cpp_TypeInfo_var))->get_listener_7();
		RuntimeObject* L_1 = ___result0;
		NullCheck(L_0);
		HttpListenerContext_t424880822 * L_2 = HttpListener_EndGetContext_m990137025(L_0, L_1, /*hidden argument*/NULL);
		RequestContext_t3602631757 * L_3 = (RequestContext_t3602631757 *)il2cpp_codegen_object_new(RequestContext_t3602631757_il2cpp_TypeInfo_var);
		RequestContext__ctor_m925727424(L_3, L_2, /*hidden argument*/NULL);
		V_0 = L_3;
		RequestContext_t3602631757 * L_4 = V_0;
		Server_HandleRequest_m2125684724(__this, L_4, /*hidden argument*/NULL);
		HttpListener_t988452056 * L_5 = ((Server_t545360578_StaticFields*)il2cpp_codegen_static_fields_for(Server_t545360578_il2cpp_TypeInfo_var))->get_listener_7();
		intptr_t L_6 = (intptr_t)Server_ListenerCallback_m1101166877_RuntimeMethod_var;
		AsyncCallback_t3962456242 * L_7 = (AsyncCallback_t3962456242 *)il2cpp_codegen_object_new(AsyncCallback_t3962456242_il2cpp_TypeInfo_var);
		AsyncCallback__ctor_m530647953(L_7, __this, L_6, /*hidden argument*/NULL);
		NullCheck(L_5);
		HttpListener_BeginGetContext_m484775909(L_5, L_7, NULL, /*hidden argument*/NULL);
		return;
	}
}
// System.Void CUDLR.Server::HandleRequest(CUDLR.RequestContext)
extern "C" IL2CPP_METHOD_ATTR void Server_HandleRequest_m2125684724 (Server_t545360578 * __this, RequestContext_t3602631757 * ___context0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Server_HandleRequest_m2125684724_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	RouteAttribute_t574643108 * V_1 = NULL;
	Match_t3408321083 * V_2 = NULL;
	RuntimeObject * V_3 = NULL;
	Exception_t * V_4 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = -1;
	NO_UNUSED_WARNING (__leave_target);

IL_0000:
	try
	{ // begin try (depth: 1)
		{
			V_0 = (bool)0;
			goto IL_00d2;
		}

IL_0007:
		{
			IL2CPP_RUNTIME_CLASS_INIT(Server_t545360578_il2cpp_TypeInfo_var);
			List_1_t2046717850 * L_0 = ((Server_t545360578_StaticFields*)il2cpp_codegen_static_fields_for(Server_t545360578_il2cpp_TypeInfo_var))->get_registeredRoutes_8();
			RequestContext_t3602631757 * L_1 = ___context0;
			NullCheck(L_1);
			int32_t L_2 = L_1->get_currentRoute_4();
			NullCheck(L_0);
			RouteAttribute_t574643108 * L_3 = List_1_get_Item_m1432922716(L_0, L_2, /*hidden argument*/List_1_get_Item_m1432922716_RuntimeMethod_var);
			V_1 = L_3;
			RouteAttribute_t574643108 * L_4 = V_1;
			NullCheck(L_4);
			Regex_t3657309853 * L_5 = L_4->get_m_route_0();
			RequestContext_t3602631757 * L_6 = ___context0;
			NullCheck(L_6);
			String_t* L_7 = L_6->get_path_3();
			NullCheck(L_5);
			Match_t3408321083 * L_8 = Regex_Match_m2255756165(L_5, L_7, /*hidden argument*/NULL);
			V_2 = L_8;
			Match_t3408321083 * L_9 = V_2;
			NullCheck(L_9);
			bool L_10 = Group_get_Success_m1492300455(L_9, /*hidden argument*/NULL);
			if (L_10)
			{
				goto IL_003a;
			}
		}

IL_0035:
		{
			goto IL_00c4;
		}

IL_003a:
		{
			RouteAttribute_t574643108 * L_11 = V_1;
			NullCheck(L_11);
			Regex_t3657309853 * L_12 = L_11->get_m_methods_1();
			RequestContext_t3602631757 * L_13 = ___context0;
			NullCheck(L_13);
			HttpListenerRequest_t630699488 * L_14 = RequestContext_get_Request_m4257748949(L_13, /*hidden argument*/NULL);
			NullCheck(L_14);
			String_t* L_15 = HttpListenerRequest_get_HttpMethod_m1222760753(L_14, /*hidden argument*/NULL);
			NullCheck(L_12);
			bool L_16 = Regex_IsMatch_m4067478295(L_12, L_15, /*hidden argument*/NULL);
			if (L_16)
			{
				goto IL_005a;
			}
		}

IL_0055:
		{
			goto IL_00c4;
		}

IL_005a:
		{
			RouteAttribute_t574643108 * L_17 = V_1;
			NullCheck(L_17);
			bool L_18 = L_17->get_m_runOnMainThread_2();
			if (!L_18)
			{
				goto IL_009c;
			}
		}

IL_0065:
		{
			IL2CPP_RUNTIME_CLASS_INIT(Thread_t2300836069_il2cpp_TypeInfo_var);
			Thread_t2300836069 * L_19 = Thread_get_CurrentThread_m4142136012(NULL /*static, unused*/, /*hidden argument*/NULL);
			IL2CPP_RUNTIME_CLASS_INIT(Server_t545360578_il2cpp_TypeInfo_var);
			Thread_t2300836069 * L_20 = ((Server_t545360578_StaticFields*)il2cpp_codegen_static_fields_for(Server_t545360578_il2cpp_TypeInfo_var))->get_mainThread_5();
			if ((((RuntimeObject*)(Thread_t2300836069 *)L_19) == ((RuntimeObject*)(Thread_t2300836069 *)L_20)))
			{
				goto IL_009c;
			}
		}

IL_0074:
		{
			IL2CPP_RUNTIME_CLASS_INIT(Server_t545360578_il2cpp_TypeInfo_var);
			Queue_1_t3448891251 * L_21 = ((Server_t545360578_StaticFields*)il2cpp_codegen_static_fields_for(Server_t545360578_il2cpp_TypeInfo_var))->get_mainRequests_9();
			V_3 = L_21;
			RuntimeObject * L_22 = V_3;
			Monitor_Enter_m2249409497(NULL /*static, unused*/, L_22, /*hidden argument*/NULL);
		}

IL_0080:
		try
		{ // begin try (depth: 2)
			IL2CPP_RUNTIME_CLASS_INIT(Server_t545360578_il2cpp_TypeInfo_var);
			Queue_1_t3448891251 * L_23 = ((Server_t545360578_StaticFields*)il2cpp_codegen_static_fields_for(Server_t545360578_il2cpp_TypeInfo_var))->get_mainRequests_9();
			RequestContext_t3602631757 * L_24 = ___context0;
			NullCheck(L_23);
			Queue_1_Enqueue_m39812848(L_23, L_24, /*hidden argument*/Queue_1_Enqueue_m39812848_RuntimeMethod_var);
			IL2CPP_LEAVE(0x97, FINALLY_0090);
		} // end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			__last_unhandled_exception = (Exception_t *)e.ex;
			goto FINALLY_0090;
		}

FINALLY_0090:
		{ // begin finally (depth: 2)
			RuntimeObject * L_25 = V_3;
			Monitor_Exit_m3585316909(NULL /*static, unused*/, L_25, /*hidden argument*/NULL);
			IL2CPP_END_FINALLY(144)
		} // end finally (depth: 2)
		IL2CPP_CLEANUP(144)
		{
			IL2CPP_JUMP_TBL(0x97, IL_0097)
			IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		}

IL_0097:
		{
			goto IL_0157;
		}

IL_009c:
		{
			RequestContext_t3602631757 * L_26 = ___context0;
			Match_t3408321083 * L_27 = V_2;
			NullCheck(L_26);
			L_26->set_match_1(L_27);
			RouteAttribute_t574643108 * L_28 = V_1;
			NullCheck(L_28);
			Callback_t1777011615 * L_29 = L_28->get_m_callback_3();
			RequestContext_t3602631757 * L_30 = ___context0;
			NullCheck(L_29);
			Callback_Invoke_m1735851838(L_29, L_30, /*hidden argument*/NULL);
			RequestContext_t3602631757 * L_31 = ___context0;
			NullCheck(L_31);
			bool L_32 = L_31->get_pass_2();
			V_0 = (bool)((((int32_t)L_32) == ((int32_t)0))? 1 : 0);
			bool L_33 = V_0;
			if (!L_33)
			{
				goto IL_00c4;
			}
		}

IL_00bf:
		{
			goto IL_00e7;
		}

IL_00c4:
		{
			RequestContext_t3602631757 * L_34 = ___context0;
			RequestContext_t3602631757 * L_35 = L_34;
			NullCheck(L_35);
			int32_t L_36 = L_35->get_currentRoute_4();
			NullCheck(L_35);
			L_35->set_currentRoute_4(((int32_t)il2cpp_codegen_add((int32_t)L_36, (int32_t)1)));
		}

IL_00d2:
		{
			RequestContext_t3602631757 * L_37 = ___context0;
			NullCheck(L_37);
			int32_t L_38 = L_37->get_currentRoute_4();
			IL2CPP_RUNTIME_CLASS_INIT(Server_t545360578_il2cpp_TypeInfo_var);
			List_1_t2046717850 * L_39 = ((Server_t545360578_StaticFields*)il2cpp_codegen_static_fields_for(Server_t545360578_il2cpp_TypeInfo_var))->get_registeredRoutes_8();
			NullCheck(L_39);
			int32_t L_40 = List_1_get_Count_m4178165277(L_39, /*hidden argument*/List_1_get_Count_m4178165277_RuntimeMethod_var);
			if ((((int32_t)L_38) < ((int32_t)L_40)))
			{
				goto IL_0007;
			}
		}

IL_00e7:
		{
			bool L_41 = V_0;
			if (L_41)
			{
				goto IL_010d;
			}
		}

IL_00ed:
		{
			RequestContext_t3602631757 * L_42 = ___context0;
			NullCheck(L_42);
			HttpListenerResponse_t3502667045 * L_43 = RequestContext_get_Response_m1933452700(L_42, /*hidden argument*/NULL);
			NullCheck(L_43);
			HttpListenerResponse_set_StatusCode_m2769870340(L_43, ((int32_t)404), /*hidden argument*/NULL);
			RequestContext_t3602631757 * L_44 = ___context0;
			NullCheck(L_44);
			HttpListenerResponse_t3502667045 * L_45 = RequestContext_get_Response_m1933452700(L_44, /*hidden argument*/NULL);
			NullCheck(L_45);
			HttpListenerResponse_set_StatusDescription_m2635984301(L_45, _stringLiteral2178748878, /*hidden argument*/NULL);
		}

IL_010d:
		{
			goto IL_0147;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (Exception_t_il2cpp_TypeInfo_var, il2cpp_codegen_object_class(e.ex)))
			goto CATCH_0112;
		throw e;
	}

CATCH_0112:
	{ // begin catch(System.Exception)
		V_4 = ((Exception_t *)__exception_local);
		RequestContext_t3602631757 * L_46 = ___context0;
		NullCheck(L_46);
		HttpListenerResponse_t3502667045 * L_47 = RequestContext_get_Response_m1933452700(L_46, /*hidden argument*/NULL);
		NullCheck(L_47);
		HttpListenerResponse_set_StatusCode_m2769870340(L_47, ((int32_t)500), /*hidden argument*/NULL);
		RequestContext_t3602631757 * L_48 = ___context0;
		NullCheck(L_48);
		HttpListenerResponse_t3502667045 * L_49 = RequestContext_get_Response_m1933452700(L_48, /*hidden argument*/NULL);
		Exception_t * L_50 = V_4;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_51 = String_Format_m2844511972(NULL /*static, unused*/, _stringLiteral3088513532, L_50, /*hidden argument*/NULL);
		NullCheck(L_49);
		HttpListenerResponse_set_StatusDescription_m2635984301(L_49, L_51, /*hidden argument*/NULL);
		Exception_t * L_52 = V_4;
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_LogException_m2207318968(NULL /*static, unused*/, L_52, /*hidden argument*/NULL);
		goto IL_0147;
	} // end catch (depth: 1)

IL_0147:
	{
		RequestContext_t3602631757 * L_53 = ___context0;
		NullCheck(L_53);
		HttpListenerResponse_t3502667045 * L_54 = RequestContext_get_Response_m1933452700(L_53, /*hidden argument*/NULL);
		NullCheck(L_54);
		Stream_t1273022909 * L_55 = HttpListenerResponse_get_OutputStream_m1739985205(L_54, /*hidden argument*/NULL);
		NullCheck(L_55);
		VirtActionInvoker0::Invoke(12 /* System.Void System.IO.Stream::Close() */, L_55);
	}

IL_0157:
	{
		return;
	}
}
// System.Collections.IEnumerator CUDLR.Server::HandleRequests()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* Server_HandleRequests_m1187942297 (Server_t545360578 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Server_HandleRequests_m1187942297_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	U3CHandleRequestsU3Ec__Iterator0_t4068759609 * V_0 = NULL;
	{
		U3CHandleRequestsU3Ec__Iterator0_t4068759609 * L_0 = (U3CHandleRequestsU3Ec__Iterator0_t4068759609 *)il2cpp_codegen_object_new(U3CHandleRequestsU3Ec__Iterator0_t4068759609_il2cpp_TypeInfo_var);
		U3CHandleRequestsU3Ec__Iterator0__ctor_m2736900648(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CHandleRequestsU3Ec__Iterator0_t4068759609 * L_1 = V_0;
		NullCheck(L_1);
		L_1->set_U24this_2(__this);
		U3CHandleRequestsU3Ec__Iterator0_t4068759609 * L_2 = V_0;
		return L_2;
	}
}
// System.Void CUDLR.Server::.cctor()
extern "C" IL2CPP_METHOD_ATTR void Server__cctor_m2228102022 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Server__cctor_m2228102022_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Dictionary_2_t1632706988 * V_0 = NULL;
	{
		HttpListener_t988452056 * L_0 = (HttpListener_t988452056 *)il2cpp_codegen_object_new(HttpListener_t988452056_il2cpp_TypeInfo_var);
		HttpListener__ctor_m2603387468(L_0, /*hidden argument*/NULL);
		((Server_t545360578_StaticFields*)il2cpp_codegen_static_fields_for(Server_t545360578_il2cpp_TypeInfo_var))->set_listener_7(L_0);
		Queue_1_t3448891251 * L_1 = (Queue_1_t3448891251 *)il2cpp_codegen_object_new(Queue_1_t3448891251_il2cpp_TypeInfo_var);
		Queue_1__ctor_m3997517759(L_1, /*hidden argument*/Queue_1__ctor_m3997517759_RuntimeMethod_var);
		((Server_t545360578_StaticFields*)il2cpp_codegen_static_fields_for(Server_t545360578_il2cpp_TypeInfo_var))->set_mainRequests_9(L_1);
		Dictionary_2_t1632706988 * L_2 = (Dictionary_2_t1632706988 *)il2cpp_codegen_object_new(Dictionary_2_t1632706988_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m2842384104(L_2, /*hidden argument*/Dictionary_2__ctor_m2842384104_RuntimeMethod_var);
		V_0 = L_2;
		Dictionary_2_t1632706988 * L_3 = V_0;
		NullCheck(L_3);
		Dictionary_2_Add_m2799738156(L_3, _stringLiteral3455563718, _stringLiteral1592333791, /*hidden argument*/Dictionary_2_Add_m2799738156_RuntimeMethod_var);
		Dictionary_2_t1632706988 * L_4 = V_0;
		NullCheck(L_4);
		Dictionary_2_Add_m2799738156(L_4, _stringLiteral417138101, _stringLiteral1946891126, /*hidden argument*/Dictionary_2_Add_m2799738156_RuntimeMethod_var);
		Dictionary_2_t1632706988 * L_5 = V_0;
		NullCheck(L_5);
		Dictionary_2_Add_m2799738156(L_5, _stringLiteral2863770253, _stringLiteral1377815833, /*hidden argument*/Dictionary_2_Add_m2799738156_RuntimeMethod_var);
		Dictionary_2_t1632706988 * L_6 = V_0;
		NullCheck(L_6);
		Dictionary_2_Add_m2799738156(L_6, _stringLiteral37732695, _stringLiteral1377815833, /*hidden argument*/Dictionary_2_Add_m2799738156_RuntimeMethod_var);
		Dictionary_2_t1632706988 * L_7 = V_0;
		NullCheck(L_7);
		Dictionary_2_Add_m2799738156(L_7, _stringLiteral134297061, _stringLiteral2869855759, /*hidden argument*/Dictionary_2_Add_m2799738156_RuntimeMethod_var);
		Dictionary_2_t1632706988 * L_8 = V_0;
		NullCheck(L_8);
		Dictionary_2_Add_m2799738156(L_8, _stringLiteral2862852759, _stringLiteral2045074213, /*hidden argument*/Dictionary_2_Add_m2799738156_RuntimeMethod_var);
		Dictionary_2_t1632706988 * L_9 = V_0;
		NullCheck(L_9);
		Dictionary_2_Add_m2799738156(L_9, _stringLiteral4120481384, _stringLiteral4026193188, /*hidden argument*/Dictionary_2_Add_m2799738156_RuntimeMethod_var);
		Dictionary_2_t1632706988 * L_10 = V_0;
		NullCheck(L_10);
		Dictionary_2_Add_m2799738156(L_10, _stringLiteral1344478337, _stringLiteral508239076, /*hidden argument*/Dictionary_2_Add_m2799738156_RuntimeMethod_var);
		Dictionary_2_t1632706988 * L_11 = V_0;
		NullCheck(L_11);
		Dictionary_2_Add_m2799738156(L_11, _stringLiteral3931577473, _stringLiteral508239076, /*hidden argument*/Dictionary_2_Add_m2799738156_RuntimeMethod_var);
		Dictionary_2_t1632706988 * L_12 = V_0;
		NullCheck(L_12);
		Dictionary_2_Add_m2799738156(L_12, _stringLiteral2506294710, _stringLiteral1235476637, /*hidden argument*/Dictionary_2_Add_m2799738156_RuntimeMethod_var);
		Dictionary_2_t1632706988 * L_13 = V_0;
		((Server_t545360578_StaticFields*)il2cpp_codegen_static_fields_for(Server_t545360578_il2cpp_TypeInfo_var))->set_fileTypes_10(L_13);
		return;
	}
}
// System.String CUDLR.Server::<RegisterFileHandlers>m__0(System.Collections.Generic.KeyValuePair`2<System.String,System.String>)
extern "C" IL2CPP_METHOD_ATTR String_t* Server_U3CRegisterFileHandlersU3Em__0_m1318319089 (RuntimeObject * __this /* static, unused */, KeyValuePair_2_t4030379155  ___x0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Server_U3CRegisterFileHandlersU3Em__0_m1318319089_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = KeyValuePair_2_get_Key_m1970167909((KeyValuePair_2_t4030379155 *)(&___x0), /*hidden argument*/KeyValuePair_2_get_Key_m1970167909_RuntimeMethod_var);
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
// System.Void CUDLR.Server/<HandleRequests>c__Iterator0::.ctor()
extern "C" IL2CPP_METHOD_ATTR void U3CHandleRequestsU3Ec__Iterator0__ctor_m2736900648 (U3CHandleRequestsU3Ec__Iterator0_t4068759609 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean CUDLR.Server/<HandleRequests>c__Iterator0::MoveNext()
extern "C" IL2CPP_METHOD_ATTR bool U3CHandleRequestsU3Ec__Iterator0_MoveNext_m2744576948 (U3CHandleRequestsU3Ec__Iterator0_t4068759609 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CHandleRequestsU3Ec__Iterator0_MoveNext_m2744576948_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	uint32_t V_0 = 0;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = -1;
	NO_UNUSED_WARNING (__leave_target);
	{
		int32_t L_0 = __this->get_U24PC_5();
		V_0 = L_0;
		__this->set_U24PC_5((-1));
		uint32_t L_1 = V_0;
		switch (L_1)
		{
			case 0:
			{
				goto IL_0021;
			}
			case 1:
			{
				goto IL_0045;
			}
		}
	}
	{
		goto IL_00af;
	}

IL_0021:
	{
		goto IL_0045;
	}

IL_0026:
	{
		WaitForEndOfFrame_t1314943911 * L_2 = (WaitForEndOfFrame_t1314943911 *)il2cpp_codegen_object_new(WaitForEndOfFrame_t1314943911_il2cpp_TypeInfo_var);
		WaitForEndOfFrame__ctor_m1381314187(L_2, /*hidden argument*/NULL);
		__this->set_U24current_3(L_2);
		bool L_3 = __this->get_U24disposing_4();
		if (L_3)
		{
			goto IL_0040;
		}
	}
	{
		__this->set_U24PC_5(1);
	}

IL_0040:
	{
		goto IL_00b1;
	}

IL_0045:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Server_t545360578_il2cpp_TypeInfo_var);
		Queue_1_t3448891251 * L_4 = ((Server_t545360578_StaticFields*)il2cpp_codegen_static_fields_for(Server_t545360578_il2cpp_TypeInfo_var))->get_mainRequests_9();
		NullCheck(L_4);
		int32_t L_5 = Queue_1_get_Count_m3459060730(L_4, /*hidden argument*/Queue_1_get_Count_m3459060730_RuntimeMethod_var);
		if (!L_5)
		{
			goto IL_0026;
		}
	}
	{
		__this->set_U3CcontextU3E__1_0((RequestContext_t3602631757 *)NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Server_t545360578_il2cpp_TypeInfo_var);
		Queue_1_t3448891251 * L_6 = ((Server_t545360578_StaticFields*)il2cpp_codegen_static_fields_for(Server_t545360578_il2cpp_TypeInfo_var))->get_mainRequests_9();
		__this->set_U24locvar0_1(L_6);
		RuntimeObject * L_7 = __this->get_U24locvar0_1();
		Monitor_Enter_m2249409497(NULL /*static, unused*/, L_7, /*hidden argument*/NULL);
	}

IL_0071:
	try
	{ // begin try (depth: 1)
		IL2CPP_RUNTIME_CLASS_INIT(Server_t545360578_il2cpp_TypeInfo_var);
		Queue_1_t3448891251 * L_8 = ((Server_t545360578_StaticFields*)il2cpp_codegen_static_fields_for(Server_t545360578_il2cpp_TypeInfo_var))->get_mainRequests_9();
		NullCheck(L_8);
		RequestContext_t3602631757 * L_9 = Queue_1_Dequeue_m992750647(L_8, /*hidden argument*/Queue_1_Dequeue_m992750647_RuntimeMethod_var);
		__this->set_U3CcontextU3E__1_0(L_9);
		IL2CPP_LEAVE(0x92, FINALLY_0086);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0086;
	}

FINALLY_0086:
	{ // begin finally (depth: 1)
		RuntimeObject * L_10 = __this->get_U24locvar0_1();
		Monitor_Exit_m3585316909(NULL /*static, unused*/, L_10, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(134)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(134)
	{
		IL2CPP_JUMP_TBL(0x92, IL_0092)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_0092:
	{
		Server_t545360578 * L_11 = __this->get_U24this_2();
		RequestContext_t3602631757 * L_12 = __this->get_U3CcontextU3E__1_0();
		NullCheck(L_11);
		Server_HandleRequest_m2125684724(L_11, L_12, /*hidden argument*/NULL);
		goto IL_0021;
	}
	// Dead block : IL_00a8: ldarg.0

IL_00af:
	{
		return (bool)0;
	}

IL_00b1:
	{
		return (bool)1;
	}
}
// System.Object CUDLR.Server/<HandleRequests>c__Iterator0::System.Collections.Generic.IEnumerator<object>.get_Current()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * U3CHandleRequestsU3Ec__Iterator0_System_Collections_Generic_IEnumeratorU3CobjectU3E_get_Current_m1399723092 (U3CHandleRequestsU3Ec__Iterator0_t4068759609 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U24current_3();
		return L_0;
	}
}
// System.Object CUDLR.Server/<HandleRequests>c__Iterator0::System.Collections.IEnumerator.get_Current()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * U3CHandleRequestsU3Ec__Iterator0_System_Collections_IEnumerator_get_Current_m3687379263 (U3CHandleRequestsU3Ec__Iterator0_t4068759609 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U24current_3();
		return L_0;
	}
}
// System.Void CUDLR.Server/<HandleRequests>c__Iterator0::Dispose()
extern "C" IL2CPP_METHOD_ATTR void U3CHandleRequestsU3Ec__Iterator0_Dispose_m2439766172 (U3CHandleRequestsU3Ec__Iterator0_t4068759609 * __this, const RuntimeMethod* method)
{
	{
		__this->set_U24disposing_4((bool)1);
		__this->set_U24PC_5((-1));
		return;
	}
}
// System.Void CUDLR.Server/<HandleRequests>c__Iterator0::Reset()
extern "C" IL2CPP_METHOD_ATTR void U3CHandleRequestsU3Ec__Iterator0_Reset_m520621552 (U3CHandleRequestsU3Ec__Iterator0_t4068759609 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CHandleRequestsU3Ec__Iterator0_Reset_m520621552_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		NotSupportedException_t1314879016 * L_0 = (NotSupportedException_t1314879016 *)il2cpp_codegen_object_new(NotSupportedException_t1314879016_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m2730133172(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, NULL, U3CHandleRequestsU3Ec__Iterator0_Reset_m520621552_RuntimeMethod_var);
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
// System.Void CUDLR.Server/<RegisterFileHandlers>c__AnonStorey1::.ctor()
extern "C" IL2CPP_METHOD_ATTR void U3CRegisterFileHandlersU3Ec__AnonStorey1__ctor_m529639330 (U3CRegisterFileHandlersU3Ec__AnonStorey1_t3770007581 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void CUDLR.Server/<RegisterFileHandlers>c__AnonStorey1::<>m__0(CUDLR.RequestContext)
extern "C" IL2CPP_METHOD_ATTR void U3CRegisterFileHandlersU3Ec__AnonStorey1_U3CU3Em__0_m1890339817 (U3CRegisterFileHandlersU3Ec__AnonStorey1_t3770007581 * __this, RequestContext_t3602631757 * ___context0, const RuntimeMethod* method)
{
	{
		FileHandlerDelegate_t13458300 * L_0 = __this->get_callback_0();
		RequestContext_t3602631757 * L_1 = ___context0;
		NullCheck(L_0);
		FileHandlerDelegate_Invoke_m2709275937(L_0, L_1, (bool)1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void CUDLR.Server/<RegisterFileHandlers>c__AnonStorey1::<>m__1(CUDLR.RequestContext)
extern "C" IL2CPP_METHOD_ATTR void U3CRegisterFileHandlersU3Ec__AnonStorey1_U3CU3Em__1_m1177063264 (U3CRegisterFileHandlersU3Ec__AnonStorey1_t3770007581 * __this, RequestContext_t3602631757 * ___context0, const RuntimeMethod* method)
{
	{
		FileHandlerDelegate_t13458300 * L_0 = __this->get_callback_0();
		RequestContext_t3602631757 * L_1 = ___context0;
		NullCheck(L_0);
		FileHandlerDelegate_Invoke_m2709275937(L_0, L_1, (bool)0, /*hidden argument*/NULL);
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
// System.Void CUDLR.Server/FileHandlerDelegate::.ctor(System.Object,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void FileHandlerDelegate__ctor_m3475249825 (FileHandlerDelegate_t13458300 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void CUDLR.Server/FileHandlerDelegate::Invoke(CUDLR.RequestContext,System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void FileHandlerDelegate_Invoke_m2709275937 (FileHandlerDelegate_t13458300 * __this, RequestContext_t3602631757 * ___context0, bool ___download1, const RuntimeMethod* method)
{
	if(__this->get_prev_9() != NULL)
	{
		FileHandlerDelegate_Invoke_m2709275937((FileHandlerDelegate_t13458300 *)__this->get_prev_9(), ___context0, ___download1, method);
	}
	Il2CppMethodPointer targetMethodPointer = __this->get_method_ptr_0();
	RuntimeMethod* targetMethod = (RuntimeMethod*)(__this->get_method_3());
	RuntimeObject* targetThis = __this->get_m_target_2();
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
	bool ___methodIsStatic = MethodIsStatic(targetMethod);
	if (___methodIsStatic)
	{
		if (il2cpp_codegen_method_parameter_count(targetMethod) == 2)
		{
			// open
			{
				typedef void (*FunctionPointerType) (RuntimeObject *, RequestContext_t3602631757 *, bool, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(NULL, ___context0, ___download1, targetMethod);
			}
		}
		else
		{
			// closed
			{
				typedef void (*FunctionPointerType) (RuntimeObject *, void*, RequestContext_t3602631757 *, bool, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(NULL, targetThis, ___context0, ___download1, targetMethod);
			}
		}
	}
	else
	{
		if (il2cpp_codegen_method_parameter_count(targetMethod) == 2)
		{
			// closed
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker2< RequestContext_t3602631757 *, bool >::Invoke(targetMethod, targetThis, ___context0, ___download1);
					else
						GenericVirtActionInvoker2< RequestContext_t3602631757 *, bool >::Invoke(targetMethod, targetThis, ___context0, ___download1);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker2< RequestContext_t3602631757 *, bool >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___context0, ___download1);
					else
						VirtActionInvoker2< RequestContext_t3602631757 *, bool >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___context0, ___download1);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (void*, RequestContext_t3602631757 *, bool, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___context0, ___download1, targetMethod);
			}
		}
		else
		{
			// open
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker1< bool >::Invoke(targetMethod, ___context0, ___download1);
					else
						GenericVirtActionInvoker1< bool >::Invoke(targetMethod, ___context0, ___download1);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker1< bool >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___context0, ___download1);
					else
						VirtActionInvoker1< bool >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___context0, ___download1);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (RequestContext_t3602631757 *, bool, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___context0, ___download1, targetMethod);
			}
		}
	}
}
// System.IAsyncResult CUDLR.Server/FileHandlerDelegate::BeginInvoke(CUDLR.RequestContext,System.Boolean,System.AsyncCallback,System.Object)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* FileHandlerDelegate_BeginInvoke_m4160211010 (FileHandlerDelegate_t13458300 * __this, RequestContext_t3602631757 * ___context0, bool ___download1, AsyncCallback_t3962456242 * ___callback2, RuntimeObject * ___object3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (FileHandlerDelegate_BeginInvoke_m4160211010_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[3] = {0};
	__d_args[0] = ___context0;
	__d_args[1] = Box(Boolean_t97287965_il2cpp_TypeInfo_var, &___download1);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback2, (RuntimeObject*)___object3);
}
// System.Void CUDLR.Server/FileHandlerDelegate::EndInvoke(System.IAsyncResult)
extern "C" IL2CPP_METHOD_ATTR void FileHandlerDelegate_EndInvoke_m773674318 (FileHandlerDelegate_t13458300 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void CharacterGPSCopmassController::.ctor()
extern "C" IL2CPP_METHOD_ATTR void CharacterGPSCopmassController__ctor_m204209478 (CharacterGPSCopmassController_t3516088559 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void CharacterGPSCopmassController::Start()
extern "C" IL2CPP_METHOD_ATTR void CharacterGPSCopmassController_Start_m2899718310 (CharacterGPSCopmassController_t3516088559 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (CharacterGPSCopmassController_Start_m2899718310_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Input_t1431474628_il2cpp_TypeInfo_var);
		Compass_t3092386685 * L_0 = Input_get_compass_m4226377434(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_0);
		Compass_set_enabled_m3413005128(L_0, (bool)1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void CharacterGPSCopmassController::Update()
extern "C" IL2CPP_METHOD_ATTR void CharacterGPSCopmassController_Update_m1158290140 (CharacterGPSCopmassController_t3516088559 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (CharacterGPSCopmassController_Update_m1158290140_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	Quaternion_t2301928331  V_1;
	memset(&V_1, 0, sizeof(V_1));
	{
		IL2CPP_RUNTIME_CLASS_INIT(Input_t1431474628_il2cpp_TypeInfo_var);
		Compass_t3092386685 * L_0 = Input_get_compass_m4226377434(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_0);
		float L_1 = Compass_get_magneticHeading_m3730814099(L_0, /*hidden argument*/NULL);
		V_0 = ((float)il2cpp_codegen_add((float)(180.0f), (float)L_1));
		float L_2 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_t3722313464_il2cpp_TypeInfo_var);
		Vector3_t3722313464  L_3 = Vector3_get_up_m3584168373(NULL /*static, unused*/, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Quaternion_t2301928331_il2cpp_TypeInfo_var);
		Quaternion_t2301928331  L_4 = Quaternion_AngleAxis_m1767165696(NULL /*static, unused*/, L_2, L_3, /*hidden argument*/NULL);
		V_1 = L_4;
		Transform_t3600365921 * L_5 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		Transform_t3600365921 * L_6 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		NullCheck(L_6);
		Quaternion_t2301928331  L_7 = Transform_get_rotation_m3502953881(L_6, /*hidden argument*/NULL);
		Quaternion_t2301928331  L_8 = V_1;
		float L_9 = Time_get_fixedTime_m908791845(NULL /*static, unused*/, /*hidden argument*/NULL);
		Quaternion_t2301928331  L_10 = Quaternion_Slerp_m1234055455(NULL /*static, unused*/, L_7, L_8, ((float)il2cpp_codegen_multiply((float)L_9, (float)(0.001f))), /*hidden argument*/NULL);
		NullCheck(L_5);
		Transform_set_rotation_m3524318132(L_5, L_10, /*hidden argument*/NULL);
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
// System.Void GameObjectCommands::ListGameObjects()
extern "C" IL2CPP_METHOD_ATTR void GameObjectCommands_ListGameObjects_m1038345753 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GameObjectCommands_ListGameObjects_m1038345753_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	ObjectU5BU5D_t1417781964* V_0 = NULL;
	Object_t631007953 * V_1 = NULL;
	ObjectU5BU5D_t1417781964* V_2 = NULL;
	int32_t V_3 = 0;
	{
		RuntimeTypeHandle_t3027515415  L_0 = { reinterpret_cast<intptr_t> (GameObject_t1113636619_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_1 = Type_GetTypeFromHandle_m1620074514(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		ObjectU5BU5D_t1417781964* L_2 = Object_FindObjectsOfType_m2295101757(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		ObjectU5BU5D_t1417781964* L_3 = V_0;
		V_2 = L_3;
		V_3 = 0;
		goto IL_002c;
	}

IL_0019:
	{
		ObjectU5BU5D_t1417781964* L_4 = V_2;
		int32_t L_5 = V_3;
		NullCheck(L_4);
		int32_t L_6 = L_5;
		Object_t631007953 * L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		V_1 = L_7;
		Object_t631007953 * L_8 = V_1;
		NullCheck(L_8);
		String_t* L_9 = Object_get_name_m4211327027(L_8, /*hidden argument*/NULL);
		Console_Log_m4248649498(NULL /*static, unused*/, L_9, /*hidden argument*/NULL);
		int32_t L_10 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_10, (int32_t)1));
	}

IL_002c:
	{
		int32_t L_11 = V_3;
		ObjectU5BU5D_t1417781964* L_12 = V_2;
		NullCheck(L_12);
		if ((((int32_t)L_11) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_12)->max_length)))))))
		{
			goto IL_0019;
		}
	}
	{
		return;
	}
}
// System.Void GameObjectCommands::PrintGameObject(System.String[])
extern "C" IL2CPP_METHOD_ATTR void GameObjectCommands_PrintGameObject_m564798494 (RuntimeObject * __this /* static, unused */, StringU5BU5D_t1281789340* ___args0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GameObjectCommands_PrintGameObject_m564798494_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	GameObject_t1113636619 * V_0 = NULL;
	Component_t1923634451 * V_1 = NULL;
	ComponentU5BU5D_t3294940482* V_2 = NULL;
	int32_t V_3 = 0;
	FieldInfo_t * V_4 = NULL;
	FieldInfoU5BU5D_t846150980* V_5 = NULL;
	int32_t V_6 = 0;
	{
		StringU5BU5D_t1281789340* L_0 = ___args0;
		NullCheck(L_0);
		if ((((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_0)->max_length))))) >= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		Console_Log_m4248649498(NULL /*static, unused*/, _stringLiteral3735457576, /*hidden argument*/NULL);
		return;
	}

IL_0014:
	{
		StringU5BU5D_t1281789340* L_1 = ___args0;
		NullCheck(L_1);
		int32_t L_2 = 0;
		String_t* L_3 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		GameObject_t1113636619 * L_4 = GameObject_Find_m2032535176(NULL /*static, unused*/, L_3, /*hidden argument*/NULL);
		V_0 = L_4;
		GameObject_t1113636619 * L_5 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_6 = Object_op_Equality_m1810815630(NULL /*static, unused*/, L_5, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
		if (!L_6)
		{
			goto IL_0040;
		}
	}
	{
		StringU5BU5D_t1281789340* L_7 = ___args0;
		NullCheck(L_7);
		int32_t L_8 = 0;
		String_t* L_9 = (L_7)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_10 = String_Concat_m3937257545(NULL /*static, unused*/, _stringLiteral1178283393, L_9, /*hidden argument*/NULL);
		Console_Log_m4248649498(NULL /*static, unused*/, L_10, /*hidden argument*/NULL);
		goto IL_00f5;
	}

IL_0040:
	{
		GameObject_t1113636619 * L_11 = V_0;
		NullCheck(L_11);
		String_t* L_12 = Object_get_name_m4211327027(L_11, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_13 = String_Concat_m3937257545(NULL /*static, unused*/, _stringLiteral2299194300, L_12, /*hidden argument*/NULL);
		Console_Log_m4248649498(NULL /*static, unused*/, L_13, /*hidden argument*/NULL);
		GameObject_t1113636619 * L_14 = V_0;
		RuntimeTypeHandle_t3027515415  L_15 = { reinterpret_cast<intptr_t> (Component_t1923634451_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_16 = Type_GetTypeFromHandle_m1620074514(NULL /*static, unused*/, L_15, /*hidden argument*/NULL);
		NullCheck(L_14);
		ComponentU5BU5D_t3294940482* L_17 = GameObject_GetComponents_m1158098240(L_14, L_16, /*hidden argument*/NULL);
		V_2 = L_17;
		V_3 = 0;
		goto IL_00ec;
	}

IL_006d:
	{
		ComponentU5BU5D_t3294940482* L_18 = V_2;
		int32_t L_19 = V_3;
		NullCheck(L_18);
		int32_t L_20 = L_19;
		Component_t1923634451 * L_21 = (L_18)->GetAt(static_cast<il2cpp_array_size_t>(L_20));
		V_1 = L_21;
		Component_t1923634451 * L_22 = V_1;
		NullCheck(L_22);
		Type_t * L_23 = Object_GetType_m88164663(L_22, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_24 = String_Concat_m904156431(NULL /*static, unused*/, _stringLiteral573045877, L_23, /*hidden argument*/NULL);
		Console_Log_m4248649498(NULL /*static, unused*/, L_24, /*hidden argument*/NULL);
		Component_t1923634451 * L_25 = V_1;
		NullCheck(L_25);
		Type_t * L_26 = Object_GetType_m88164663(L_25, /*hidden argument*/NULL);
		NullCheck(L_26);
		FieldInfoU5BU5D_t846150980* L_27 = Type_GetFields_m3709891696(L_26, /*hidden argument*/NULL);
		V_5 = L_27;
		V_6 = 0;
		goto IL_00dd;
	}

IL_009b:
	{
		FieldInfoU5BU5D_t846150980* L_28 = V_5;
		int32_t L_29 = V_6;
		NullCheck(L_28);
		int32_t L_30 = L_29;
		FieldInfo_t * L_31 = (L_28)->GetAt(static_cast<il2cpp_array_size_t>(L_30));
		V_4 = L_31;
		ObjectU5BU5D_t2843939325* L_32 = (ObjectU5BU5D_t2843939325*)SZArrayNew(ObjectU5BU5D_t2843939325_il2cpp_TypeInfo_var, (uint32_t)4);
		ObjectU5BU5D_t2843939325* L_33 = L_32;
		NullCheck(L_33);
		ArrayElementTypeCheck (L_33, _stringLiteral1963630794);
		(L_33)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)_stringLiteral1963630794);
		ObjectU5BU5D_t2843939325* L_34 = L_33;
		FieldInfo_t * L_35 = V_4;
		NullCheck(L_35);
		String_t* L_36 = VirtFuncInvoker0< String_t* >::Invoke(8 /* System.String System.Reflection.MemberInfo::get_Name() */, L_35);
		NullCheck(L_34);
		ArrayElementTypeCheck (L_34, L_36);
		(L_34)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_36);
		ObjectU5BU5D_t2843939325* L_37 = L_34;
		NullCheck(L_37);
		ArrayElementTypeCheck (L_37, _stringLiteral3787497674);
		(L_37)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject *)_stringLiteral3787497674);
		ObjectU5BU5D_t2843939325* L_38 = L_37;
		FieldInfo_t * L_39 = V_4;
		Component_t1923634451 * L_40 = V_1;
		NullCheck(L_39);
		RuntimeObject * L_41 = VirtFuncInvoker1< RuntimeObject *, RuntimeObject * >::Invoke(17 /* System.Object System.Reflection.FieldInfo::GetValue(System.Object) */, L_39, L_40);
		NullCheck(L_38);
		ArrayElementTypeCheck (L_38, L_41);
		(L_38)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject *)L_41);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_42 = String_Concat_m2971454694(NULL /*static, unused*/, L_38, /*hidden argument*/NULL);
		Console_Log_m4248649498(NULL /*static, unused*/, L_42, /*hidden argument*/NULL);
		int32_t L_43 = V_6;
		V_6 = ((int32_t)il2cpp_codegen_add((int32_t)L_43, (int32_t)1));
	}

IL_00dd:
	{
		int32_t L_44 = V_6;
		FieldInfoU5BU5D_t846150980* L_45 = V_5;
		NullCheck(L_45);
		if ((((int32_t)L_44) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_45)->max_length)))))))
		{
			goto IL_009b;
		}
	}
	{
		int32_t L_46 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_46, (int32_t)1));
	}

IL_00ec:
	{
		int32_t L_47 = V_3;
		ComponentU5BU5D_t3294940482* L_48 = V_2;
		NullCheck(L_48);
		if ((((int32_t)L_47) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_48)->max_length)))))))
		{
			goto IL_006d;
		}
	}

IL_00f5:
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
// System.Void GameObjectRoutes::ListGameObjects(CUDLR.RequestContext)
extern "C" IL2CPP_METHOD_ATTR void GameObjectRoutes_ListGameObjects_m2760496307 (RuntimeObject * __this /* static, unused */, RequestContext_t3602631757 * ___context0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GameObjectRoutes_ListGameObjects_m2760496307_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	ObjectU5BU5D_t1417781964* V_1 = NULL;
	Object_t631007953 * V_2 = NULL;
	ObjectU5BU5D_t1417781964* V_3 = NULL;
	int32_t V_4 = 0;
	{
		V_0 = _stringLiteral3452614645;
		RuntimeTypeHandle_t3027515415  L_0 = { reinterpret_cast<intptr_t> (GameObject_t1113636619_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_1 = Type_GetTypeFromHandle_m1620074514(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		ObjectU5BU5D_t1417781964* L_2 = Object_FindObjectsOfType_m2295101757(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
		V_1 = L_2;
		ObjectU5BU5D_t1417781964* L_3 = V_1;
		V_3 = L_3;
		V_4 = 0;
		goto IL_0042;
	}

IL_0020:
	{
		ObjectU5BU5D_t1417781964* L_4 = V_3;
		int32_t L_5 = V_4;
		NullCheck(L_4);
		int32_t L_6 = L_5;
		Object_t631007953 * L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		V_2 = L_7;
		String_t* L_8 = V_0;
		Object_t631007953 * L_9 = V_2;
		NullCheck(L_9);
		String_t* L_10 = Object_get_name_m4211327027(L_9, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_11 = String_Format_m2844511972(NULL /*static, unused*/, _stringLiteral3237436314, L_10, /*hidden argument*/NULL);
		String_t* L_12 = String_Concat_m3937257545(NULL /*static, unused*/, L_8, L_11, /*hidden argument*/NULL);
		V_0 = L_12;
		int32_t L_13 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add((int32_t)L_13, (int32_t)1));
	}

IL_0042:
	{
		int32_t L_14 = V_4;
		ObjectU5BU5D_t1417781964* L_15 = V_3;
		NullCheck(L_15);
		if ((((int32_t)L_14) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_15)->max_length)))))))
		{
			goto IL_0020;
		}
	}
	{
		String_t* L_16 = V_0;
		CharU5BU5D_t3528271667* L_17 = (CharU5BU5D_t3528271667*)SZArrayNew(CharU5BU5D_t3528271667_il2cpp_TypeInfo_var, (uint32_t)2);
		CharU5BU5D_t3528271667* L_18 = L_17;
		NullCheck(L_18);
		(L_18)->SetAt(static_cast<il2cpp_array_size_t>(0), (Il2CppChar)((int32_t)44));
		CharU5BU5D_t3528271667* L_19 = L_18;
		NullCheck(L_19);
		(L_19)->SetAt(static_cast<il2cpp_array_size_t>(1), (Il2CppChar)((int32_t)32));
		NullCheck(L_16);
		String_t* L_20 = String_TrimEnd_m3824727301(L_16, L_19, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_21 = String_Concat_m3937257545(NULL /*static, unused*/, L_20, _stringLiteral3452614643, /*hidden argument*/NULL);
		V_0 = L_21;
		RequestContext_t3602631757 * L_22 = ___context0;
		NullCheck(L_22);
		HttpListenerResponse_t3502667045 * L_23 = RequestContext_get_Response_m1933452700(L_22, /*hidden argument*/NULL);
		String_t* L_24 = V_0;
		ResponseExtension_WriteString_m1918185232(NULL /*static, unused*/, L_23, L_24, _stringLiteral1946891126, /*hidden argument*/NULL);
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
// System.Void ResponseExtension::WriteString(System.Net.HttpListenerResponse,System.String,System.String)
extern "C" IL2CPP_METHOD_ATTR void ResponseExtension_WriteString_m1918185232 (RuntimeObject * __this /* static, unused */, HttpListenerResponse_t3502667045 * ___response0, String_t* ___input1, String_t* ___type2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ResponseExtension_WriteString_m1918185232_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_t4116647657* V_0 = NULL;
	{
		HttpListenerResponse_t3502667045 * L_0 = ___response0;
		NullCheck(L_0);
		HttpListenerResponse_set_StatusCode_m2769870340(L_0, ((int32_t)200), /*hidden argument*/NULL);
		HttpListenerResponse_t3502667045 * L_1 = ___response0;
		NullCheck(L_1);
		HttpListenerResponse_set_StatusDescription_m2635984301(L_1, _stringLiteral3457136609, /*hidden argument*/NULL);
		String_t* L_2 = ___input1;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_3 = String_IsNullOrEmpty_m2969720369(NULL /*static, unused*/, L_2, /*hidden argument*/NULL);
		if (L_3)
		{
			goto IL_004e;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Encoding_t1523322056_il2cpp_TypeInfo_var);
		Encoding_t1523322056 * L_4 = Encoding_get_UTF8_m1008486739(NULL /*static, unused*/, /*hidden argument*/NULL);
		String_t* L_5 = ___input1;
		NullCheck(L_4);
		ByteU5BU5D_t4116647657* L_6 = VirtFuncInvoker1< ByteU5BU5D_t4116647657*, String_t* >::Invoke(10 /* System.Byte[] System.Text.Encoding::GetBytes(System.String) */, L_4, L_5);
		V_0 = L_6;
		HttpListenerResponse_t3502667045 * L_7 = ___response0;
		ByteU5BU5D_t4116647657* L_8 = V_0;
		NullCheck(L_8);
		NullCheck(L_7);
		HttpListenerResponse_set_ContentLength64_m3790368474(L_7, (((int64_t)((int64_t)(((int32_t)((int32_t)(((RuntimeArray *)L_8)->max_length))))))), /*hidden argument*/NULL);
		HttpListenerResponse_t3502667045 * L_9 = ___response0;
		String_t* L_10 = ___type2;
		NullCheck(L_9);
		HttpListenerResponse_set_ContentType_m4030363041(L_9, L_10, /*hidden argument*/NULL);
		HttpListenerResponse_t3502667045 * L_11 = ___response0;
		NullCheck(L_11);
		Stream_t1273022909 * L_12 = HttpListenerResponse_get_OutputStream_m1739985205(L_11, /*hidden argument*/NULL);
		ByteU5BU5D_t4116647657* L_13 = V_0;
		ByteU5BU5D_t4116647657* L_14 = V_0;
		NullCheck(L_14);
		NullCheck(L_12);
		VirtActionInvoker3< ByteU5BU5D_t4116647657*, int32_t, int32_t >::Invoke(18 /* System.Void System.IO.Stream::Write(System.Byte[],System.Int32,System.Int32) */, L_12, L_13, 0, (((int32_t)((int32_t)(((RuntimeArray *)L_14)->max_length)))));
	}

IL_004e:
	{
		return;
	}
}
// System.Void ResponseExtension::WriteBytes(System.Net.HttpListenerResponse,System.Byte[])
extern "C" IL2CPP_METHOD_ATTR void ResponseExtension_WriteBytes_m1603091416 (RuntimeObject * __this /* static, unused */, HttpListenerResponse_t3502667045 * ___response0, ByteU5BU5D_t4116647657* ___bytes1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ResponseExtension_WriteBytes_m1603091416_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		HttpListenerResponse_t3502667045 * L_0 = ___response0;
		NullCheck(L_0);
		HttpListenerResponse_set_StatusCode_m2769870340(L_0, ((int32_t)200), /*hidden argument*/NULL);
		HttpListenerResponse_t3502667045 * L_1 = ___response0;
		NullCheck(L_1);
		HttpListenerResponse_set_StatusDescription_m2635984301(L_1, _stringLiteral3457136609, /*hidden argument*/NULL);
		HttpListenerResponse_t3502667045 * L_2 = ___response0;
		ByteU5BU5D_t4116647657* L_3 = ___bytes1;
		NullCheck(L_3);
		NullCheck(L_2);
		HttpListenerResponse_set_ContentLength64_m3790368474(L_2, (((int64_t)((int64_t)(((int32_t)((int32_t)(((RuntimeArray *)L_3)->max_length))))))), /*hidden argument*/NULL);
		HttpListenerResponse_t3502667045 * L_4 = ___response0;
		NullCheck(L_4);
		Stream_t1273022909 * L_5 = HttpListenerResponse_get_OutputStream_m1739985205(L_4, /*hidden argument*/NULL);
		ByteU5BU5D_t4116647657* L_6 = ___bytes1;
		ByteU5BU5D_t4116647657* L_7 = ___bytes1;
		NullCheck(L_7);
		NullCheck(L_5);
		VirtActionInvoker3< ByteU5BU5D_t4116647657*, int32_t, int32_t >::Invoke(18 /* System.Void System.IO.Stream::Write(System.Byte[],System.Int32,System.Int32) */, L_5, L_6, 0, (((int32_t)((int32_t)(((RuntimeArray *)L_7)->max_length)))));
		return;
	}
}
// System.Void ResponseExtension::WriteFile(System.Net.HttpListenerResponse,System.String,System.String,System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void ResponseExtension_WriteFile_m2406796800 (RuntimeObject * __this /* static, unused */, HttpListenerResponse_t3502667045 * ___response0, String_t* ___path1, String_t* ___type2, bool ___download3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ResponseExtension_WriteFile_m2406796800_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	FileStream_t4292183065 * V_0 = NULL;
	ByteU5BU5D_t4116647657* V_1 = NULL;
	int32_t V_2 = 0;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = -1;
	NO_UNUSED_WARNING (__leave_target);
	{
		String_t* L_0 = ___path1;
		FileStream_t4292183065 * L_1 = File_OpenRead_m2936789020(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		V_0 = L_1;
	}

IL_0007:
	try
	{ // begin try (depth: 1)
		{
			HttpListenerResponse_t3502667045 * L_2 = ___response0;
			NullCheck(L_2);
			HttpListenerResponse_set_StatusCode_m2769870340(L_2, ((int32_t)200), /*hidden argument*/NULL);
			HttpListenerResponse_t3502667045 * L_3 = ___response0;
			NullCheck(L_3);
			HttpListenerResponse_set_StatusDescription_m2635984301(L_3, _stringLiteral3457136609, /*hidden argument*/NULL);
			HttpListenerResponse_t3502667045 * L_4 = ___response0;
			FileStream_t4292183065 * L_5 = V_0;
			NullCheck(L_5);
			int64_t L_6 = VirtFuncInvoker0< int64_t >::Invoke(8 /* System.Int64 System.IO.Stream::get_Length() */, L_5);
			NullCheck(L_4);
			HttpListenerResponse_set_ContentLength64_m3790368474(L_4, L_6, /*hidden argument*/NULL);
			HttpListenerResponse_t3502667045 * L_7 = ___response0;
			String_t* L_8 = ___type2;
			NullCheck(L_7);
			HttpListenerResponse_set_ContentType_m4030363041(L_7, L_8, /*hidden argument*/NULL);
			bool L_9 = ___download3;
			if (!L_9)
			{
				goto IL_0051;
			}
		}

IL_0036:
		{
			HttpListenerResponse_t3502667045 * L_10 = ___response0;
			String_t* L_11 = ___path1;
			IL2CPP_RUNTIME_CLASS_INIT(Path_t1605229823_il2cpp_TypeInfo_var);
			String_t* L_12 = Path_GetFileName_m1354558116(NULL /*static, unused*/, L_11, /*hidden argument*/NULL);
			IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
			String_t* L_13 = String_Format_m2844511972(NULL /*static, unused*/, _stringLiteral88737304, L_12, /*hidden argument*/NULL);
			NullCheck(L_10);
			HttpListenerResponse_AddHeader_m536198768(L_10, _stringLiteral2424900053, L_13, /*hidden argument*/NULL);
		}

IL_0051:
		{
			ByteU5BU5D_t4116647657* L_14 = (ByteU5BU5D_t4116647657*)SZArrayNew(ByteU5BU5D_t4116647657_il2cpp_TypeInfo_var, (uint32_t)((int32_t)65536));
			V_1 = L_14;
			goto IL_0075;
		}

IL_0061:
		{
			IL2CPP_RUNTIME_CLASS_INIT(Thread_t2300836069_il2cpp_TypeInfo_var);
			Thread_Sleep_m483098292(NULL /*static, unused*/, 0, /*hidden argument*/NULL);
			HttpListenerResponse_t3502667045 * L_15 = ___response0;
			NullCheck(L_15);
			Stream_t1273022909 * L_16 = HttpListenerResponse_get_OutputStream_m1739985205(L_15, /*hidden argument*/NULL);
			ByteU5BU5D_t4116647657* L_17 = V_1;
			int32_t L_18 = V_2;
			NullCheck(L_16);
			VirtActionInvoker3< ByteU5BU5D_t4116647657*, int32_t, int32_t >::Invoke(18 /* System.Void System.IO.Stream::Write(System.Byte[],System.Int32,System.Int32) */, L_16, L_17, 0, L_18);
		}

IL_0075:
		{
			FileStream_t4292183065 * L_19 = V_0;
			ByteU5BU5D_t4116647657* L_20 = V_1;
			ByteU5BU5D_t4116647657* L_21 = V_1;
			NullCheck(L_21);
			NullCheck(L_19);
			int32_t L_22 = VirtFuncInvoker3< int32_t, ByteU5BU5D_t4116647657*, int32_t, int32_t >::Invoke(14 /* System.Int32 System.IO.Stream::Read(System.Byte[],System.Int32,System.Int32) */, L_19, L_20, 0, (((int32_t)((int32_t)(((RuntimeArray *)L_21)->max_length)))));
			int32_t L_23 = L_22;
			V_2 = L_23;
			if ((((int32_t)L_23) > ((int32_t)0)))
			{
				goto IL_0061;
			}
		}

IL_0088:
		{
			IL2CPP_LEAVE(0x9A, FINALLY_008d);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_008d;
	}

FINALLY_008d:
	{ // begin finally (depth: 1)
		{
			FileStream_t4292183065 * L_24 = V_0;
			if (!L_24)
			{
				goto IL_0099;
			}
		}

IL_0093:
		{
			FileStream_t4292183065 * L_25 = V_0;
			NullCheck(L_25);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t3640265483_il2cpp_TypeInfo_var, L_25);
		}

IL_0099:
		{
			IL2CPP_END_FINALLY(141)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(141)
	{
		IL2CPP_JUMP_TBL(0x9A, IL_009a)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_009a:
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
// System.Void packt.FoodyGO.Mapping.GoogleMapTile::.ctor()
extern "C" IL2CPP_METHOD_ATTR void GoogleMapTile__ctor_m4139139377 (GoogleMapTile_t1047440669 * __this, const RuntimeMethod* method)
{
	{
		__this->set_zoomLevel_5(1);
		__this->set_size_7(((int32_t)640));
		__this->set_doubleResolution_8((bool)1);
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void packt.FoodyGO.Mapping.GoogleMapTile::Start()
extern "C" IL2CPP_METHOD_ATTR void GoogleMapTile_Start_m168528105 (GoogleMapTile_t1047440669 * __this, const RuntimeMethod* method)
{
	{
		GoogleMapTile_RefreshMapTile_m3307423562(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void packt.FoodyGO.Mapping.GoogleMapTile::Update()
extern "C" IL2CPP_METHOD_ATTR void GoogleMapTile_Update_m3580814247 (GoogleMapTile_t1047440669 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GoogleMapTile_Update_m3580814247_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		GPSLocationService_t2374085698 * L_0 = __this->get_gpsLocationService_9();
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Inequality_m4071470834(NULL /*static, unused*/, L_0, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0084;
		}
	}
	{
		GPSLocationService_t2374085698 * L_2 = __this->get_gpsLocationService_9();
		NullCheck(L_2);
		bool L_3 = L_2->get_IsServiceStarted_4();
		if (!L_3)
		{
			goto IL_0084;
		}
	}
	{
		double L_4 = __this->get_lastGPSUpdate_15();
		GPSLocationService_t2374085698 * L_5 = __this->get_gpsLocationService_9();
		NullCheck(L_5);
		double L_6 = L_5->get_Timestamp_9();
		if ((!(((double)L_4) < ((double)L_6))))
		{
			goto IL_0084;
		}
	}
	{
		GPSLocationService_t2374085698 * L_7 = __this->get_gpsLocationService_9();
		NullCheck(L_7);
		double L_8 = L_7->get_Timestamp_9();
		__this->set_lastGPSUpdate_15(L_8);
		MapLocation_t547849766 * L_9 = __this->get_worldCenterLocation_10();
		GPSLocationService_t2374085698 * L_10 = __this->get_gpsLocationService_9();
		NullCheck(L_10);
		float L_11 = L_10->get_Latitude_5();
		NullCheck(L_9);
		L_9->set_Latitude_0(L_11);
		MapLocation_t547849766 * L_12 = __this->get_worldCenterLocation_10();
		GPSLocationService_t2374085698 * L_13 = __this->get_gpsLocationService_9();
		NullCheck(L_13);
		float L_14 = L_13->get_Longitude_6();
		NullCheck(L_12);
		L_12->set_Longitude_1(L_14);
		MonoBehaviour_print_m330341231(NULL /*static, unused*/, _stringLiteral3748635091, /*hidden argument*/NULL);
		GoogleMapTile_RefreshMapTile_m3307423562(__this, /*hidden argument*/NULL);
	}

IL_0084:
	{
		return;
	}
}
// System.Void packt.FoodyGO.Mapping.GoogleMapTile::RefreshMapTile()
extern "C" IL2CPP_METHOD_ATTR void GoogleMapTile_RefreshMapTile_m3307423562 (GoogleMapTile_t1047440669 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = GoogleMapTile__RefreshMapTile_m2584278457(__this, /*hidden argument*/NULL);
		MonoBehaviour_StartCoroutine_m3411253000(__this, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Collections.IEnumerator packt.FoodyGO.Mapping.GoogleMapTile::_RefreshMapTile()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* GoogleMapTile__RefreshMapTile_m2584278457 (GoogleMapTile_t1047440669 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GoogleMapTile__RefreshMapTile_m2584278457_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	U3C_RefreshMapTileU3Ec__Iterator0_t2254000978 * V_0 = NULL;
	{
		U3C_RefreshMapTileU3Ec__Iterator0_t2254000978 * L_0 = (U3C_RefreshMapTileU3Ec__Iterator0_t2254000978 *)il2cpp_codegen_object_new(U3C_RefreshMapTileU3Ec__Iterator0_t2254000978_il2cpp_TypeInfo_var);
		U3C_RefreshMapTileU3Ec__Iterator0__ctor_m3279329334(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3C_RefreshMapTileU3Ec__Iterator0_t2254000978 * L_1 = V_0;
		NullCheck(L_1);
		L_1->set_U24this_4(__this);
		U3C_RefreshMapTileU3Ec__Iterator0_t2254000978 * L_2 = V_0;
		return L_2;
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
// System.Void packt.FoodyGO.Mapping.GoogleMapTile/<_RefreshMapTile>c__Iterator0::.ctor()
extern "C" IL2CPP_METHOD_ATTR void U3C_RefreshMapTileU3Ec__Iterator0__ctor_m3279329334 (U3C_RefreshMapTileU3Ec__Iterator0_t2254000978 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean packt.FoodyGO.Mapping.GoogleMapTile/<_RefreshMapTile>c__Iterator0::MoveNext()
extern "C" IL2CPP_METHOD_ATTR bool U3C_RefreshMapTileU3Ec__Iterator0_MoveNext_m2810802210 (U3C_RefreshMapTileU3Ec__Iterator0_t2254000978 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3C_RefreshMapTileU3Ec__Iterator0_MoveNext_m2810802210_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	uint32_t V_0 = 0;
	String_t* G_B4_0 = NULL;
	String_t* G_B4_1 = NULL;
	U3C_RefreshMapTileU3Ec__Iterator0_t2254000978 * G_B4_2 = NULL;
	String_t* G_B3_0 = NULL;
	String_t* G_B3_1 = NULL;
	U3C_RefreshMapTileU3Ec__Iterator0_t2254000978 * G_B3_2 = NULL;
	String_t* G_B5_0 = NULL;
	String_t* G_B5_1 = NULL;
	String_t* G_B5_2 = NULL;
	U3C_RefreshMapTileU3Ec__Iterator0_t2254000978 * G_B5_3 = NULL;
	U3C_RefreshMapTileU3Ec__Iterator0_t2254000978 * G_B7_0 = NULL;
	U3C_RefreshMapTileU3Ec__Iterator0_t2254000978 * G_B6_0 = NULL;
	int32_t G_B8_0 = 0;
	U3C_RefreshMapTileU3Ec__Iterator0_t2254000978 * G_B8_1 = NULL;
	String_t* G_B10_0 = NULL;
	String_t* G_B10_1 = NULL;
	U3C_RefreshMapTileU3Ec__Iterator0_t2254000978 * G_B10_2 = NULL;
	String_t* G_B9_0 = NULL;
	String_t* G_B9_1 = NULL;
	U3C_RefreshMapTileU3Ec__Iterator0_t2254000978 * G_B9_2 = NULL;
	String_t* G_B11_0 = NULL;
	String_t* G_B11_1 = NULL;
	String_t* G_B11_2 = NULL;
	U3C_RefreshMapTileU3Ec__Iterator0_t2254000978 * G_B11_3 = NULL;
	{
		int32_t L_0 = __this->get_U24PC_7();
		V_0 = L_0;
		__this->set_U24PC_7((-1));
		uint32_t L_1 = V_0;
		switch (L_1)
		{
			case 0:
			{
				goto IL_0021;
			}
			case 1:
			{
				goto IL_0426;
			}
		}
	}
	{
		goto IL_04a0;
	}

IL_0021:
	{
		GoogleMapTile_t1047440669 * L_2 = __this->get_U24this_4();
		NullCheck(L_2);
		MapLocation_t547849766 * L_3 = L_2->get_tileCenterLocation_11();
		GoogleMapTile_t1047440669 * L_4 = __this->get_U24this_4();
		NullCheck(L_4);
		MapLocation_t547849766 * L_5 = L_4->get_worldCenterLocation_10();
		NullCheck(L_5);
		float L_6 = L_5->get_Latitude_0();
		GoogleMapTile_t1047440669 * L_7 = __this->get_U24this_4();
		NullCheck(L_7);
		int32_t L_8 = L_7->get_size_7();
		GoogleMapTile_t1047440669 * L_9 = __this->get_U24this_4();
		NullCheck(L_9);
		Vector2_t2156229523 * L_10 = L_9->get_address_of_TileOffset_12();
		float L_11 = L_10->get_y_1();
		GoogleMapTile_t1047440669 * L_12 = __this->get_U24this_4();
		NullCheck(L_12);
		int32_t L_13 = L_12->get_zoomLevel_5();
		IL2CPP_RUNTIME_CLASS_INIT(GoogleMapUtils_t2374289053_il2cpp_TypeInfo_var);
		float L_14 = GoogleMapUtils_adjustLatByPixels_m912186372(NULL /*static, unused*/, L_6, (((int32_t)((int32_t)((float)il2cpp_codegen_multiply((float)(((float)((float)L_8))), (float)L_11))))), L_13, /*hidden argument*/NULL);
		NullCheck(L_3);
		L_3->set_Latitude_0(L_14);
		GoogleMapTile_t1047440669 * L_15 = __this->get_U24this_4();
		NullCheck(L_15);
		MapLocation_t547849766 * L_16 = L_15->get_tileCenterLocation_11();
		GoogleMapTile_t1047440669 * L_17 = __this->get_U24this_4();
		NullCheck(L_17);
		MapLocation_t547849766 * L_18 = L_17->get_worldCenterLocation_10();
		NullCheck(L_18);
		float L_19 = L_18->get_Longitude_1();
		GoogleMapTile_t1047440669 * L_20 = __this->get_U24this_4();
		NullCheck(L_20);
		int32_t L_21 = L_20->get_size_7();
		GoogleMapTile_t1047440669 * L_22 = __this->get_U24this_4();
		NullCheck(L_22);
		Vector2_t2156229523 * L_23 = L_22->get_address_of_TileOffset_12();
		float L_24 = L_23->get_x_0();
		GoogleMapTile_t1047440669 * L_25 = __this->get_U24this_4();
		NullCheck(L_25);
		int32_t L_26 = L_25->get_zoomLevel_5();
		float L_27 = GoogleMapUtils_adjustLonByPixels_m308880460(NULL /*static, unused*/, L_19, (((int32_t)((int32_t)((float)il2cpp_codegen_multiply((float)(((float)((float)L_21))), (float)L_24))))), L_26, /*hidden argument*/NULL);
		NullCheck(L_16);
		L_16->set_Longitude_1(L_27);
		__this->set_U3CurlU3E__0_0(_stringLiteral3708647247);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_28 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_2();
		__this->set_U3CqueryStringU3E__0_1(L_28);
		String_t* L_29 = __this->get_U3CqueryStringU3E__0_1();
		GoogleMapTile_t1047440669 * L_30 = __this->get_U24this_4();
		NullCheck(L_30);
		MapLocation_t547849766 * L_31 = L_30->get_tileCenterLocation_11();
		NullCheck(L_31);
		float L_32 = L_31->get_Latitude_0();
		float L_33 = L_32;
		RuntimeObject * L_34 = Box(Single_t1397266774_il2cpp_TypeInfo_var, &L_33);
		GoogleMapTile_t1047440669 * L_35 = __this->get_U24this_4();
		NullCheck(L_35);
		MapLocation_t547849766 * L_36 = L_35->get_tileCenterLocation_11();
		NullCheck(L_36);
		float L_37 = L_36->get_Longitude_1();
		float L_38 = L_37;
		RuntimeObject * L_39 = Box(Single_t1397266774_il2cpp_TypeInfo_var, &L_38);
		String_t* L_40 = String_Format_m2556382932(NULL /*static, unused*/, _stringLiteral4140064810, L_34, L_39, /*hidden argument*/NULL);
		String_t* L_41 = WWW_UnEscapeURL_m2827350915(NULL /*static, unused*/, L_40, /*hidden argument*/NULL);
		String_t* L_42 = String_Concat_m3755062657(NULL /*static, unused*/, L_29, _stringLiteral1571677065, L_41, /*hidden argument*/NULL);
		__this->set_U3CqueryStringU3E__0_1(L_42);
		String_t* L_43 = __this->get_U3CqueryStringU3E__0_1();
		GoogleMapTile_t1047440669 * L_44 = __this->get_U24this_4();
		NullCheck(L_44);
		int32_t* L_45 = L_44->get_address_of_zoomLevel_5();
		String_t* L_46 = Int32_ToString_m141394615((int32_t*)L_45, /*hidden argument*/NULL);
		String_t* L_47 = String_Concat_m3755062657(NULL /*static, unused*/, L_43, _stringLiteral1229764066, L_46, /*hidden argument*/NULL);
		__this->set_U3CqueryStringU3E__0_1(L_47);
		String_t* L_48 = __this->get_U3CqueryStringU3E__0_1();
		GoogleMapTile_t1047440669 * L_49 = __this->get_U24this_4();
		NullCheck(L_49);
		int32_t L_50 = L_49->get_size_7();
		int32_t L_51 = L_50;
		RuntimeObject * L_52 = Box(Int32_t2950945753_il2cpp_TypeInfo_var, &L_51);
		String_t* L_53 = String_Format_m2844511972(NULL /*static, unused*/, _stringLiteral1483169834, L_52, /*hidden argument*/NULL);
		String_t* L_54 = WWW_UnEscapeURL_m2827350915(NULL /*static, unused*/, L_53, /*hidden argument*/NULL);
		String_t* L_55 = String_Concat_m3755062657(NULL /*static, unused*/, L_48, _stringLiteral3881171512, L_54, /*hidden argument*/NULL);
		__this->set_U3CqueryStringU3E__0_1(L_55);
		String_t* L_56 = __this->get_U3CqueryStringU3E__0_1();
		GoogleMapTile_t1047440669 * L_57 = __this->get_U24this_4();
		NullCheck(L_57);
		bool L_58 = L_57->get_doubleResolution_8();
		G_B3_0 = _stringLiteral3964705726;
		G_B3_1 = L_56;
		G_B3_2 = __this;
		if (!L_58)
		{
			G_B4_0 = _stringLiteral3964705726;
			G_B4_1 = L_56;
			G_B4_2 = __this;
			goto IL_01a9;
		}
	}
	{
		G_B5_0 = _stringLiteral3452614542;
		G_B5_1 = G_B3_0;
		G_B5_2 = G_B3_1;
		G_B5_3 = G_B3_2;
		goto IL_01ae;
	}

IL_01a9:
	{
		G_B5_0 = _stringLiteral3452614543;
		G_B5_1 = G_B4_0;
		G_B5_2 = G_B4_1;
		G_B5_3 = G_B4_2;
	}

IL_01ae:
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_59 = String_Concat_m3755062657(NULL /*static, unused*/, G_B5_2, G_B5_1, G_B5_0, /*hidden argument*/NULL);
		NullCheck(G_B5_3);
		G_B5_3->set_U3CqueryStringU3E__0_1(L_59);
		String_t* L_60 = __this->get_U3CqueryStringU3E__0_1();
		GoogleMapTile_t1047440669 * L_61 = __this->get_U24this_4();
		NullCheck(L_61);
		int32_t* L_62 = L_61->get_address_of_mapType_6();
		RuntimeObject * L_63 = Box(MapType_t3185662864_il2cpp_TypeInfo_var, L_62);
		NullCheck(L_63);
		String_t* L_64 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_63);
		*L_62 = *(int32_t*)UnBox(L_63);
		NullCheck(L_64);
		String_t* L_65 = String_ToLower_m2029374922(L_64, /*hidden argument*/NULL);
		String_t* L_66 = String_Concat_m3755062657(NULL /*static, unused*/, L_60, _stringLiteral317198633, L_65, /*hidden argument*/NULL);
		__this->set_U3CqueryStringU3E__0_1(L_66);
		String_t* L_67 = __this->get_U3CqueryStringU3E__0_1();
		String_t* L_68 = String_Concat_m3937257545(NULL /*static, unused*/, L_67, _stringLiteral2714022994, /*hidden argument*/NULL);
		__this->set_U3CqueryStringU3E__0_1(L_68);
		String_t* L_69 = __this->get_U3CqueryStringU3E__0_1();
		String_t* L_70 = String_Concat_m3937257545(NULL /*static, unused*/, L_69, _stringLiteral768485155, /*hidden argument*/NULL);
		__this->set_U3CqueryStringU3E__0_1(L_70);
		String_t* L_71 = __this->get_U3CqueryStringU3E__0_1();
		String_t* L_72 = String_Concat_m3937257545(NULL /*static, unused*/, L_71, _stringLiteral3841741313, /*hidden argument*/NULL);
		__this->set_U3CqueryStringU3E__0_1(L_72);
		__this->set_U3CusingSensorU3E__0_2((bool)0);
		IL2CPP_RUNTIME_CLASS_INIT(Input_t1431474628_il2cpp_TypeInfo_var);
		LocationService_t2839639379 * L_73 = Input_get_location_m1744795999(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_73);
		bool L_74 = LocationService_get_isEnabledByUser_m3325769302(L_73, /*hidden argument*/NULL);
		G_B6_0 = __this;
		if (!L_74)
		{
			G_B7_0 = __this;
			goto IL_0251;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Input_t1431474628_il2cpp_TypeInfo_var);
		LocationService_t2839639379 * L_75 = Input_get_location_m1744795999(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_75);
		int32_t L_76 = LocationService_get_status_m1450164038(L_75, /*hidden argument*/NULL);
		G_B8_0 = ((((int32_t)L_76) == ((int32_t)2))? 1 : 0);
		G_B8_1 = G_B6_0;
		goto IL_0252;
	}

IL_0251:
	{
		G_B8_0 = 0;
		G_B8_1 = G_B7_0;
	}

IL_0252:
	{
		NullCheck(G_B8_1);
		G_B8_1->set_U3CusingSensorU3E__0_2((bool)G_B8_0);
		String_t* L_77 = __this->get_U3CqueryStringU3E__0_1();
		bool L_78 = __this->get_U3CusingSensorU3E__0_2();
		G_B9_0 = _stringLiteral1999276886;
		G_B9_1 = L_77;
		G_B9_2 = __this;
		if (!L_78)
		{
			G_B10_0 = _stringLiteral1999276886;
			G_B10_1 = L_77;
			G_B10_2 = __this;
			goto IL_0278;
		}
	}
	{
		G_B11_0 = _stringLiteral4002445229;
		G_B11_1 = G_B9_0;
		G_B11_2 = G_B9_1;
		G_B11_3 = G_B9_2;
		goto IL_027d;
	}

IL_0278:
	{
		G_B11_0 = _stringLiteral3875954633;
		G_B11_1 = G_B10_0;
		G_B11_2 = G_B10_1;
		G_B11_3 = G_B10_2;
	}

IL_027d:
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_79 = String_Concat_m3755062657(NULL /*static, unused*/, G_B11_2, G_B11_1, G_B11_0, /*hidden argument*/NULL);
		NullCheck(G_B11_3);
		G_B11_3->set_U3CqueryStringU3E__0_1(L_79);
		String_t* L_80 = __this->get_U3CqueryStringU3E__0_1();
		String_t* L_81 = String_Concat_m3937257545(NULL /*static, unused*/, L_80, _stringLiteral247314066, /*hidden argument*/NULL);
		__this->set_U3CqueryStringU3E__0_1(L_81);
		GoogleMapTile_t1047440669 * L_82 = __this->get_U24this_4();
		NullCheck(L_82);
		Vector2_t2156229523 * L_83 = L_82->get_address_of_TopLeftCorner_13();
		GoogleMapTile_t1047440669 * L_84 = __this->get_U24this_4();
		NullCheck(L_84);
		MapLocation_t547849766 * L_85 = L_84->get_tileCenterLocation_11();
		NullCheck(L_85);
		float L_86 = L_85->get_Longitude_1();
		GoogleMapTile_t1047440669 * L_87 = __this->get_U24this_4();
		NullCheck(L_87);
		int32_t L_88 = L_87->get_size_7();
		GoogleMapTile_t1047440669 * L_89 = __this->get_U24this_4();
		NullCheck(L_89);
		int32_t L_90 = L_89->get_zoomLevel_5();
		IL2CPP_RUNTIME_CLASS_INIT(GoogleMapUtils_t2374289053_il2cpp_TypeInfo_var);
		float L_91 = GoogleMapUtils_adjustLonByPixels_m308880460(NULL /*static, unused*/, L_86, ((-L_88)), L_90, /*hidden argument*/NULL);
		L_83->set_x_0(L_91);
		GoogleMapTile_t1047440669 * L_92 = __this->get_U24this_4();
		NullCheck(L_92);
		Vector2_t2156229523 * L_93 = L_92->get_address_of_TopLeftCorner_13();
		GoogleMapTile_t1047440669 * L_94 = __this->get_U24this_4();
		NullCheck(L_94);
		MapLocation_t547849766 * L_95 = L_94->get_tileCenterLocation_11();
		NullCheck(L_95);
		float L_96 = L_95->get_Latitude_0();
		GoogleMapTile_t1047440669 * L_97 = __this->get_U24this_4();
		NullCheck(L_97);
		int32_t L_98 = L_97->get_size_7();
		GoogleMapTile_t1047440669 * L_99 = __this->get_U24this_4();
		NullCheck(L_99);
		int32_t L_100 = L_99->get_zoomLevel_5();
		float L_101 = GoogleMapUtils_adjustLatByPixels_m912186372(NULL /*static, unused*/, L_96, L_98, L_100, /*hidden argument*/NULL);
		L_93->set_y_1(L_101);
		GoogleMapTile_t1047440669 * L_102 = __this->get_U24this_4();
		NullCheck(L_102);
		Vector2_t2156229523 * L_103 = L_102->get_address_of_BottomRightCorner_14();
		GoogleMapTile_t1047440669 * L_104 = __this->get_U24this_4();
		NullCheck(L_104);
		MapLocation_t547849766 * L_105 = L_104->get_tileCenterLocation_11();
		NullCheck(L_105);
		float L_106 = L_105->get_Longitude_1();
		GoogleMapTile_t1047440669 * L_107 = __this->get_U24this_4();
		NullCheck(L_107);
		int32_t L_108 = L_107->get_size_7();
		GoogleMapTile_t1047440669 * L_109 = __this->get_U24this_4();
		NullCheck(L_109);
		int32_t L_110 = L_109->get_zoomLevel_5();
		float L_111 = GoogleMapUtils_adjustLonByPixels_m308880460(NULL /*static, unused*/, L_106, L_108, L_110, /*hidden argument*/NULL);
		L_103->set_x_0(L_111);
		GoogleMapTile_t1047440669 * L_112 = __this->get_U24this_4();
		NullCheck(L_112);
		Vector2_t2156229523 * L_113 = L_112->get_address_of_BottomRightCorner_14();
		GoogleMapTile_t1047440669 * L_114 = __this->get_U24this_4();
		NullCheck(L_114);
		MapLocation_t547849766 * L_115 = L_114->get_tileCenterLocation_11();
		NullCheck(L_115);
		float L_116 = L_115->get_Latitude_0();
		GoogleMapTile_t1047440669 * L_117 = __this->get_U24this_4();
		NullCheck(L_117);
		int32_t L_118 = L_117->get_size_7();
		GoogleMapTile_t1047440669 * L_119 = __this->get_U24this_4();
		NullCheck(L_119);
		int32_t L_120 = L_119->get_zoomLevel_5();
		float L_121 = GoogleMapUtils_adjustLatByPixels_m912186372(NULL /*static, unused*/, L_116, ((-L_118)), L_120, /*hidden argument*/NULL);
		L_113->set_y_1(L_121);
		GoogleMapTile_t1047440669 * L_122 = __this->get_U24this_4();
		NullCheck(L_122);
		Vector2_t2156229523 * L_123 = L_122->get_address_of_TileOffset_12();
		float L_124 = L_123->get_x_0();
		float L_125 = L_124;
		RuntimeObject * L_126 = Box(Single_t1397266774_il2cpp_TypeInfo_var, &L_125);
		GoogleMapTile_t1047440669 * L_127 = __this->get_U24this_4();
		NullCheck(L_127);
		Vector2_t2156229523 * L_128 = L_127->get_address_of_TileOffset_12();
		float L_129 = L_128->get_y_1();
		float L_130 = L_129;
		RuntimeObject * L_131 = Box(Single_t1397266774_il2cpp_TypeInfo_var, &L_130);
		String_t* L_132 = __this->get_U3CqueryStringU3E__0_1();
		String_t* L_133 = String_Format_m3339413201(NULL /*static, unused*/, _stringLiteral1064848892, L_126, L_131, L_132, /*hidden argument*/NULL);
		MonoBehaviour_print_m330341231(NULL /*static, unused*/, L_133, /*hidden argument*/NULL);
		String_t* L_134 = __this->get_U3CurlU3E__0_0();
		String_t* L_135 = __this->get_U3CqueryStringU3E__0_1();
		String_t* L_136 = String_Concat_m3755062657(NULL /*static, unused*/, L_134, _stringLiteral3452614545, L_135, /*hidden argument*/NULL);
		MonoBehaviour_print_m330341231(NULL /*static, unused*/, L_136, /*hidden argument*/NULL);
		String_t* L_137 = __this->get_U3CurlU3E__0_0();
		String_t* L_138 = __this->get_U3CqueryStringU3E__0_1();
		String_t* L_139 = String_Concat_m3755062657(NULL /*static, unused*/, L_137, _stringLiteral3452614545, L_138, /*hidden argument*/NULL);
		WWW_t3688466362 * L_140 = (WWW_t3688466362 *)il2cpp_codegen_object_new(WWW_t3688466362_il2cpp_TypeInfo_var);
		WWW__ctor_m2915079343(L_140, L_139, /*hidden argument*/NULL);
		__this->set_U3CreqU3E__0_3(L_140);
		WWW_t3688466362 * L_141 = __this->get_U3CreqU3E__0_3();
		__this->set_U24current_5(L_141);
		bool L_142 = __this->get_U24disposing_6();
		if (L_142)
		{
			goto IL_0421;
		}
	}
	{
		__this->set_U24PC_7(1);
	}

IL_0421:
	{
		goto IL_04a2;
	}

IL_0426:
	{
		GoogleMapTile_t1047440669 * L_143 = __this->get_U24this_4();
		NullCheck(L_143);
		Renderer_t2627027031 * L_144 = Component_GetComponent_TisRenderer_t2627027031_m2651633905(L_143, /*hidden argument*/Component_GetComponent_TisRenderer_t2627027031_m2651633905_RuntimeMethod_var);
		NullCheck(L_144);
		Material_t340375123 * L_145 = Renderer_get_material_m4171603682(L_144, /*hidden argument*/NULL);
		NullCheck(L_145);
		Texture_t3661962703 * L_146 = Material_get_mainTexture_m692510677(L_145, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		Object_Destroy_m565254235(NULL /*static, unused*/, L_146, /*hidden argument*/NULL);
		GoogleMapTile_t1047440669 * L_147 = __this->get_U24this_4();
		NullCheck(L_147);
		Renderer_t2627027031 * L_148 = Component_GetComponent_TisRenderer_t2627027031_m2651633905(L_147, /*hidden argument*/Component_GetComponent_TisRenderer_t2627027031_m2651633905_RuntimeMethod_var);
		NullCheck(L_148);
		Material_t340375123 * L_149 = Renderer_get_material_m4171603682(L_148, /*hidden argument*/NULL);
		WWW_t3688466362 * L_150 = __this->get_U3CreqU3E__0_3();
		NullCheck(L_150);
		Texture2D_t3840446185 * L_151 = WWW_get_texture_m3513075325(L_150, /*hidden argument*/NULL);
		NullCheck(L_149);
		Material_set_mainTexture_m544811714(L_149, L_151, /*hidden argument*/NULL);
		GoogleMapTile_t1047440669 * L_152 = __this->get_U24this_4();
		NullCheck(L_152);
		Vector2_t2156229523 * L_153 = L_152->get_address_of_TileOffset_12();
		float L_154 = L_153->get_x_0();
		float L_155 = L_154;
		RuntimeObject * L_156 = Box(Single_t1397266774_il2cpp_TypeInfo_var, &L_155);
		GoogleMapTile_t1047440669 * L_157 = __this->get_U24this_4();
		NullCheck(L_157);
		Vector2_t2156229523 * L_158 = L_157->get_address_of_TileOffset_12();
		float L_159 = L_158->get_y_1();
		float L_160 = L_159;
		RuntimeObject * L_161 = Box(Single_t1397266774_il2cpp_TypeInfo_var, &L_160);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_162 = String_Format_m2556382932(NULL /*static, unused*/, _stringLiteral3004335085, L_156, L_161, /*hidden argument*/NULL);
		MonoBehaviour_print_m330341231(NULL /*static, unused*/, L_162, /*hidden argument*/NULL);
		__this->set_U24PC_7((-1));
	}

IL_04a0:
	{
		return (bool)0;
	}

IL_04a2:
	{
		return (bool)1;
	}
}
// System.Object packt.FoodyGO.Mapping.GoogleMapTile/<_RefreshMapTile>c__Iterator0::System.Collections.Generic.IEnumerator<object>.get_Current()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * U3C_RefreshMapTileU3Ec__Iterator0_System_Collections_Generic_IEnumeratorU3CobjectU3E_get_Current_m333248145 (U3C_RefreshMapTileU3Ec__Iterator0_t2254000978 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U24current_5();
		return L_0;
	}
}
// System.Object packt.FoodyGO.Mapping.GoogleMapTile/<_RefreshMapTile>c__Iterator0::System.Collections.IEnumerator.get_Current()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * U3C_RefreshMapTileU3Ec__Iterator0_System_Collections_IEnumerator_get_Current_m3685553384 (U3C_RefreshMapTileU3Ec__Iterator0_t2254000978 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U24current_5();
		return L_0;
	}
}
// System.Void packt.FoodyGO.Mapping.GoogleMapTile/<_RefreshMapTile>c__Iterator0::Dispose()
extern "C" IL2CPP_METHOD_ATTR void U3C_RefreshMapTileU3Ec__Iterator0_Dispose_m4074367331 (U3C_RefreshMapTileU3Ec__Iterator0_t2254000978 * __this, const RuntimeMethod* method)
{
	{
		__this->set_U24disposing_6((bool)1);
		__this->set_U24PC_7((-1));
		return;
	}
}
// System.Void packt.FoodyGO.Mapping.GoogleMapTile/<_RefreshMapTile>c__Iterator0::Reset()
extern "C" IL2CPP_METHOD_ATTR void U3C_RefreshMapTileU3Ec__Iterator0_Reset_m334814570 (U3C_RefreshMapTileU3Ec__Iterator0_t2254000978 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3C_RefreshMapTileU3Ec__Iterator0_Reset_m334814570_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		NotSupportedException_t1314879016 * L_0 = (NotSupportedException_t1314879016 *)il2cpp_codegen_object_new(NotSupportedException_t1314879016_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m2730133172(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, NULL, U3C_RefreshMapTileU3Ec__Iterator0_Reset_m334814570_RuntimeMethod_var);
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
// System.Void packt.FoodyGO.Mapping.GoogleMapUtils::.ctor()
extern "C" IL2CPP_METHOD_ATTR void GoogleMapUtils__ctor_m446395416 (GoogleMapUtils_t2374289053 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Int32 packt.FoodyGO.Mapping.GoogleMapUtils::LonToX(System.Single)
extern "C" IL2CPP_METHOD_ATTR int32_t GoogleMapUtils_LonToX_m1415447982 (RuntimeObject * __this /* static, unused */, float ___lon0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GoogleMapUtils_LonToX_m1415447982_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(GoogleMapUtils_t2374289053_il2cpp_TypeInfo_var);
		float L_0 = ((GoogleMapUtils_t2374289053_StaticFields*)il2cpp_codegen_static_fields_for(GoogleMapUtils_t2374289053_il2cpp_TypeInfo_var))->get_GOOGLE_OFFSET_0();
		float L_1 = ((GoogleMapUtils_t2374289053_StaticFields*)il2cpp_codegen_static_fields_for(GoogleMapUtils_t2374289053_il2cpp_TypeInfo_var))->get_preLonToX1_3();
		float L_2 = ___lon0;
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t3464937446_il2cpp_TypeInfo_var);
		float L_3 = bankers_roundf(((float)il2cpp_codegen_add((float)L_0, (float)((float)il2cpp_codegen_multiply((float)L_1, (float)L_2)))));
		return (((int32_t)((int32_t)L_3)));
	}
}
// System.Int32 packt.FoodyGO.Mapping.GoogleMapUtils::LatToY(System.Single)
extern "C" IL2CPP_METHOD_ATTR int32_t GoogleMapUtils_LatToY_m801633232 (RuntimeObject * __this /* static, unused */, float ___lat0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GoogleMapUtils_LatToY_m801633232_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(GoogleMapUtils_t2374289053_il2cpp_TypeInfo_var);
		float L_0 = ((GoogleMapUtils_t2374289053_StaticFields*)il2cpp_codegen_static_fields_for(GoogleMapUtils_t2374289053_il2cpp_TypeInfo_var))->get_GOOGLE_OFFSET_0();
		float L_1 = ((GoogleMapUtils_t2374289053_StaticFields*)il2cpp_codegen_static_fields_for(GoogleMapUtils_t2374289053_il2cpp_TypeInfo_var))->get_GOOGLE_OFFSET_RADIUS_1();
		float L_2 = ___lat0;
		float L_3 = ((GoogleMapUtils_t2374289053_StaticFields*)il2cpp_codegen_static_fields_for(GoogleMapUtils_t2374289053_il2cpp_TypeInfo_var))->get_MATHPI_180_2();
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t3464937446_il2cpp_TypeInfo_var);
		float L_4 = sinf(((float)il2cpp_codegen_multiply((float)L_2, (float)L_3)));
		float L_5 = ___lat0;
		float L_6 = ((GoogleMapUtils_t2374289053_StaticFields*)il2cpp_codegen_static_fields_for(GoogleMapUtils_t2374289053_il2cpp_TypeInfo_var))->get_MATHPI_180_2();
		float L_7 = sinf(((float)il2cpp_codegen_multiply((float)L_5, (float)L_6)));
		float L_8 = logf(((float)((float)((float)il2cpp_codegen_add((float)(1.0f), (float)L_4))/(float)((float)il2cpp_codegen_subtract((float)(1.0f), (float)L_7)))));
		float L_9 = bankers_roundf(((float)il2cpp_codegen_subtract((float)L_0, (float)((float)((float)((float)il2cpp_codegen_multiply((float)L_1, (float)L_8))/(float)(2.0f))))));
		return (((int32_t)((int32_t)L_9)));
	}
}
// System.Single packt.FoodyGO.Mapping.GoogleMapUtils::XToLon(System.Single)
extern "C" IL2CPP_METHOD_ATTR float GoogleMapUtils_XToLon_m1418710473 (RuntimeObject * __this /* static, unused */, float ___x0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GoogleMapUtils_XToLon_m1418710473_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		float L_0 = ___x0;
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t3464937446_il2cpp_TypeInfo_var);
		float L_1 = bankers_roundf(L_0);
		IL2CPP_RUNTIME_CLASS_INIT(GoogleMapUtils_t2374289053_il2cpp_TypeInfo_var);
		float L_2 = ((GoogleMapUtils_t2374289053_StaticFields*)il2cpp_codegen_static_fields_for(GoogleMapUtils_t2374289053_il2cpp_TypeInfo_var))->get_GOOGLE_OFFSET_0();
		float L_3 = ((GoogleMapUtils_t2374289053_StaticFields*)il2cpp_codegen_static_fields_for(GoogleMapUtils_t2374289053_il2cpp_TypeInfo_var))->get_GOOGLE_OFFSET_RADIUS_1();
		return ((float)((float)((float)il2cpp_codegen_multiply((float)((float)((float)((float)il2cpp_codegen_subtract((float)L_1, (float)L_2))/(float)L_3)), (float)(180.0f)))/(float)(3.14159274f)));
	}
}
// System.Single packt.FoodyGO.Mapping.GoogleMapUtils::YToLat(System.Single)
extern "C" IL2CPP_METHOD_ATTR float GoogleMapUtils_YToLat_m2128429579 (RuntimeObject * __this /* static, unused */, float ___y0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GoogleMapUtils_YToLat_m2128429579_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		float L_0 = ___y0;
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t3464937446_il2cpp_TypeInfo_var);
		float L_1 = bankers_roundf(L_0);
		IL2CPP_RUNTIME_CLASS_INIT(GoogleMapUtils_t2374289053_il2cpp_TypeInfo_var);
		float L_2 = ((GoogleMapUtils_t2374289053_StaticFields*)il2cpp_codegen_static_fields_for(GoogleMapUtils_t2374289053_il2cpp_TypeInfo_var))->get_GOOGLE_OFFSET_0();
		float L_3 = ((GoogleMapUtils_t2374289053_StaticFields*)il2cpp_codegen_static_fields_for(GoogleMapUtils_t2374289053_il2cpp_TypeInfo_var))->get_GOOGLE_OFFSET_RADIUS_1();
		float L_4 = expf(((float)((float)((float)il2cpp_codegen_subtract((float)L_1, (float)L_2))/(float)L_3)));
		float L_5 = atanf(L_4);
		return ((float)((float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)(1.57079637f), (float)((float)il2cpp_codegen_multiply((float)(2.0f), (float)L_5)))), (float)(180.0f)))/(float)(3.14159274f)));
	}
}
// System.Single packt.FoodyGO.Mapping.GoogleMapUtils::adjustLonByPixels(System.Single,System.Int32,System.Int32)
extern "C" IL2CPP_METHOD_ATTR float GoogleMapUtils_adjustLonByPixels_m308880460 (RuntimeObject * __this /* static, unused */, float ___lon0, int32_t ___delta1, int32_t ___zoom2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GoogleMapUtils_adjustLonByPixels_m308880460_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		float L_0 = ___lon0;
		IL2CPP_RUNTIME_CLASS_INIT(GoogleMapUtils_t2374289053_il2cpp_TypeInfo_var);
		int32_t L_1 = GoogleMapUtils_LonToX_m1415447982(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		int32_t L_2 = ___delta1;
		int32_t L_3 = ___zoom2;
		float L_4 = GoogleMapUtils_XToLon_m1418710473(NULL /*static, unused*/, (((float)((float)((int32_t)il2cpp_codegen_add((int32_t)L_1, (int32_t)((int32_t)((int32_t)L_2<<(int32_t)((int32_t)((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)((int32_t)21), (int32_t)L_3))&(int32_t)((int32_t)31)))))))))), /*hidden argument*/NULL);
		return L_4;
	}
}
// System.Single packt.FoodyGO.Mapping.GoogleMapUtils::adjustLatByPixels(System.Single,System.Int32,System.Int32)
extern "C" IL2CPP_METHOD_ATTR float GoogleMapUtils_adjustLatByPixels_m912186372 (RuntimeObject * __this /* static, unused */, float ___lat0, int32_t ___delta1, int32_t ___zoom2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GoogleMapUtils_adjustLatByPixels_m912186372_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		float L_0 = ___lat0;
		IL2CPP_RUNTIME_CLASS_INIT(GoogleMapUtils_t2374289053_il2cpp_TypeInfo_var);
		int32_t L_1 = GoogleMapUtils_LatToY_m801633232(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		int32_t L_2 = ___delta1;
		int32_t L_3 = ___zoom2;
		float L_4 = GoogleMapUtils_YToLat_m2128429579(NULL /*static, unused*/, (((float)((float)((int32_t)il2cpp_codegen_add((int32_t)L_1, (int32_t)((int32_t)((int32_t)L_2<<(int32_t)((int32_t)((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)((int32_t)21), (int32_t)L_3))&(int32_t)((int32_t)31)))))))))), /*hidden argument*/NULL);
		return L_4;
	}
}
// System.Void packt.FoodyGO.Mapping.GoogleMapUtils::.cctor()
extern "C" IL2CPP_METHOD_ATTR void GoogleMapUtils__cctor_m4211902755 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GoogleMapUtils__cctor_m4211902755_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		((GoogleMapUtils_t2374289053_StaticFields*)il2cpp_codegen_static_fields_for(GoogleMapUtils_t2374289053_il2cpp_TypeInfo_var))->set_GOOGLE_OFFSET_0((268435456.0f));
		((GoogleMapUtils_t2374289053_StaticFields*)il2cpp_codegen_static_fields_for(GoogleMapUtils_t2374289053_il2cpp_TypeInfo_var))->set_GOOGLE_OFFSET_RADIUS_1((85445656.0f));
		((GoogleMapUtils_t2374289053_StaticFields*)il2cpp_codegen_static_fields_for(GoogleMapUtils_t2374289053_il2cpp_TypeInfo_var))->set_MATHPI_180_2((0.0174532924f));
		float L_0 = ((GoogleMapUtils_t2374289053_StaticFields*)il2cpp_codegen_static_fields_for(GoogleMapUtils_t2374289053_il2cpp_TypeInfo_var))->get_GOOGLE_OFFSET_RADIUS_1();
		((GoogleMapUtils_t2374289053_StaticFields*)il2cpp_codegen_static_fields_for(GoogleMapUtils_t2374289053_il2cpp_TypeInfo_var))->set_preLonToX1_3(((float)il2cpp_codegen_multiply((float)L_0, (float)(0.0174532924f))));
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
// System.Void packt.FoodyGo.Mapping.MapLocation::.ctor()
extern "C" IL2CPP_METHOD_ATTR void MapLocation__ctor_m322374348 (MapLocation_t547849766 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
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
// System.Void packt.FoodyGo.Services.GPSLocationService::.ctor()
extern "C" IL2CPP_METHOD_ATTR void GPSLocationService__ctor_m4092403510 (GPSLocationService_t2374085698 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void packt.FoodyGo.Services.GPSLocationService::Start()
extern "C" IL2CPP_METHOD_ATTR void GPSLocationService_Start_m3720374754 (GPSLocationService_t2374085698 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GPSLocationService_Start_m3720374754_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		MonoBehaviour_print_m330341231(NULL /*static, unused*/, _stringLiteral2822064570, /*hidden argument*/NULL);
		RuntimeObject* L_0 = GPSLocationService_StartService_m3512225000(__this, /*hidden argument*/NULL);
		MonoBehaviour_StartCoroutine_m3411253000(__this, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Collections.IEnumerator packt.FoodyGo.Services.GPSLocationService::StartService()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* GPSLocationService_StartService_m3512225000 (GPSLocationService_t2374085698 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GPSLocationService_StartService_m3512225000_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	U3CStartServiceU3Ec__Iterator0_t711529095 * V_0 = NULL;
	{
		U3CStartServiceU3Ec__Iterator0_t711529095 * L_0 = (U3CStartServiceU3Ec__Iterator0_t711529095 *)il2cpp_codegen_object_new(U3CStartServiceU3Ec__Iterator0_t711529095_il2cpp_TypeInfo_var);
		U3CStartServiceU3Ec__Iterator0__ctor_m1434179243(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CStartServiceU3Ec__Iterator0_t711529095 * L_1 = V_0;
		NullCheck(L_1);
		L_1->set_U24this_1(__this);
		U3CStartServiceU3Ec__Iterator0_t711529095 * L_2 = V_0;
		return L_2;
	}
}
// System.Void packt.FoodyGo.Services.GPSLocationService::Update()
extern "C" IL2CPP_METHOD_ATTR void GPSLocationService_Update_m1265827905 (GPSLocationService_t2374085698 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GPSLocationService_Update_m1265827905_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	LocationInfo_t1192161013  V_0;
	memset(&V_0, 0, sizeof(V_0));
	LocationInfo_t1192161013  V_1;
	memset(&V_1, 0, sizeof(V_1));
	LocationInfo_t1192161013  V_2;
	memset(&V_2, 0, sizeof(V_2));
	LocationInfo_t1192161013  V_3;
	memset(&V_3, 0, sizeof(V_3));
	LocationInfo_t1192161013  V_4;
	memset(&V_4, 0, sizeof(V_4));
	{
		IL2CPP_RUNTIME_CLASS_INIT(Input_t1431474628_il2cpp_TypeInfo_var);
		LocationService_t2839639379 * L_0 = Input_get_location_m1744795999(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_0);
		int32_t L_1 = LocationService_get_status_m1450164038(L_0, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_1) == ((uint32_t)2))))
		{
			goto IL_0089;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Input_t1431474628_il2cpp_TypeInfo_var);
		LocationService_t2839639379 * L_2 = Input_get_location_m1744795999(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_2);
		LocationInfo_t1192161013  L_3 = LocationService_get_lastData_m1985729390(L_2, /*hidden argument*/NULL);
		V_0 = L_3;
		float L_4 = LocationInfo_get_latitude_m341869276((LocationInfo_t1192161013 *)(&V_0), /*hidden argument*/NULL);
		__this->set_Latitude_5(L_4);
		LocationService_t2839639379 * L_5 = Input_get_location_m1744795999(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_5);
		LocationInfo_t1192161013  L_6 = LocationService_get_lastData_m1985729390(L_5, /*hidden argument*/NULL);
		V_1 = L_6;
		float L_7 = LocationInfo_get_longitude_m1454980142((LocationInfo_t1192161013 *)(&V_1), /*hidden argument*/NULL);
		__this->set_Longitude_6(L_7);
		LocationService_t2839639379 * L_8 = Input_get_location_m1744795999(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_8);
		LocationInfo_t1192161013  L_9 = LocationService_get_lastData_m1985729390(L_8, /*hidden argument*/NULL);
		V_2 = L_9;
		float L_10 = LocationInfo_get_altitude_m2556363964((LocationInfo_t1192161013 *)(&V_2), /*hidden argument*/NULL);
		__this->set_Altitude_7(L_10);
		LocationService_t2839639379 * L_11 = Input_get_location_m1744795999(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_11);
		LocationInfo_t1192161013  L_12 = LocationService_get_lastData_m1985729390(L_11, /*hidden argument*/NULL);
		V_3 = L_12;
		float L_13 = LocationInfo_get_horizontalAccuracy_m1238049393((LocationInfo_t1192161013 *)(&V_3), /*hidden argument*/NULL);
		__this->set_Accuracy_8(L_13);
		LocationService_t2839639379 * L_14 = Input_get_location_m1744795999(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_14);
		LocationInfo_t1192161013  L_15 = LocationService_get_lastData_m1985729390(L_14, /*hidden argument*/NULL);
		V_4 = L_15;
		double L_16 = LocationInfo_get_timestamp_m3431861872((LocationInfo_t1192161013 *)(&V_4), /*hidden argument*/NULL);
		__this->set_Timestamp_9(L_16);
	}

IL_0089:
	{
		return;
	}
}
// System.Void packt.FoodyGo.Services.GPSLocationService::Dispose()
extern "C" IL2CPP_METHOD_ATTR void GPSLocationService_Dispose_m472640684 (GPSLocationService_t2374085698 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GPSLocationService_Dispose_m472640684_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		bool L_0 = __this->get_IsServiceStarted_4();
		if (!L_0)
		{
			goto IL_0015;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Input_t1431474628_il2cpp_TypeInfo_var);
		LocationService_t2839639379 * L_1 = Input_get_location_m1744795999(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_1);
		LocationService_Stop_m2430709999(L_1, /*hidden argument*/NULL);
	}

IL_0015:
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
// System.Void packt.FoodyGo.Services.GPSLocationService/<StartService>c__Iterator0::.ctor()
extern "C" IL2CPP_METHOD_ATTR void U3CStartServiceU3Ec__Iterator0__ctor_m1434179243 (U3CStartServiceU3Ec__Iterator0_t711529095 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean packt.FoodyGo.Services.GPSLocationService/<StartService>c__Iterator0::MoveNext()
extern "C" IL2CPP_METHOD_ATTR bool U3CStartServiceU3Ec__Iterator0_MoveNext_m152436735 (U3CStartServiceU3Ec__Iterator0_t711529095 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CStartServiceU3Ec__Iterator0_MoveNext_m152436735_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	uint32_t V_0 = 0;
	LocationInfo_t1192161013  V_1;
	memset(&V_1, 0, sizeof(V_1));
	LocationInfo_t1192161013  V_2;
	memset(&V_2, 0, sizeof(V_2));
	LocationInfo_t1192161013  V_3;
	memset(&V_3, 0, sizeof(V_3));
	LocationInfo_t1192161013  V_4;
	memset(&V_4, 0, sizeof(V_4));
	LocationInfo_t1192161013  V_5;
	memset(&V_5, 0, sizeof(V_5));
	{
		int32_t L_0 = __this->get_U24PC_4();
		V_0 = L_0;
		__this->set_U24PC_4((-1));
		uint32_t L_1 = V_0;
		switch (L_1)
		{
			case 0:
			{
				goto IL_0021;
			}
			case 1:
			{
				goto IL_007a;
			}
		}
	}
	{
		goto IL_01b9;
	}

IL_0021:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Input_t1431474628_il2cpp_TypeInfo_var);
		LocationService_t2839639379 * L_2 = Input_get_location_m1744795999(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_2);
		bool L_3 = LocationService_get_isEnabledByUser_m3325769302(L_2, /*hidden argument*/NULL);
		if (L_3)
		{
			goto IL_003f;
		}
	}
	{
		MonoBehaviour_print_m330341231(NULL /*static, unused*/, _stringLiteral2054671126, /*hidden argument*/NULL);
		goto IL_01b9;
	}

IL_003f:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Input_t1431474628_il2cpp_TypeInfo_var);
		LocationService_t2839639379 * L_4 = Input_get_location_m1744795999(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_4);
		LocationService_Start_m399575407(L_4, /*hidden argument*/NULL);
		__this->set_U3CmaxWaitU3E__0_0(((int32_t)20));
		goto IL_0088;
	}

IL_0056:
	{
		WaitForSeconds_t1699091251 * L_5 = (WaitForSeconds_t1699091251 *)il2cpp_codegen_object_new(WaitForSeconds_t1699091251_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_m2199082655(L_5, (1.0f), /*hidden argument*/NULL);
		__this->set_U24current_2(L_5);
		bool L_6 = __this->get_U24disposing_3();
		if (L_6)
		{
			goto IL_0075;
		}
	}
	{
		__this->set_U24PC_4(1);
	}

IL_0075:
	{
		goto IL_01bb;
	}

IL_007a:
	{
		int32_t L_7 = __this->get_U3CmaxWaitU3E__0_0();
		__this->set_U3CmaxWaitU3E__0_0(((int32_t)il2cpp_codegen_subtract((int32_t)L_7, (int32_t)1)));
	}

IL_0088:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Input_t1431474628_il2cpp_TypeInfo_var);
		LocationService_t2839639379 * L_8 = Input_get_location_m1744795999(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_8);
		int32_t L_9 = LocationService_get_status_m1450164038(L_8, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_9) == ((uint32_t)1))))
		{
			goto IL_00a4;
		}
	}
	{
		int32_t L_10 = __this->get_U3CmaxWaitU3E__0_0();
		if ((((int32_t)L_10) > ((int32_t)0)))
		{
			goto IL_0056;
		}
	}

IL_00a4:
	{
		int32_t L_11 = __this->get_U3CmaxWaitU3E__0_0();
		if ((((int32_t)L_11) >= ((int32_t)1)))
		{
			goto IL_00bf;
		}
	}
	{
		MonoBehaviour_print_m330341231(NULL /*static, unused*/, _stringLiteral1923429753, /*hidden argument*/NULL);
		goto IL_01b9;
	}

IL_00bf:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Input_t1431474628_il2cpp_TypeInfo_var);
		LocationService_t2839639379 * L_12 = Input_get_location_m1744795999(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_12);
		int32_t L_13 = LocationService_get_status_m1450164038(L_12, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_13) == ((uint32_t)3))))
		{
			goto IL_00de;
		}
	}
	{
		MonoBehaviour_print_m330341231(NULL /*static, unused*/, _stringLiteral353906979, /*hidden argument*/NULL);
		goto IL_01b9;
	}

IL_00de:
	{
		MonoBehaviour_print_m330341231(NULL /*static, unused*/, _stringLiteral3324379924, /*hidden argument*/NULL);
		GPSLocationService_t2374085698 * L_14 = __this->get_U24this_1();
		NullCheck(L_14);
		L_14->set_IsServiceStarted_4((bool)1);
		ObjectU5BU5D_t2843939325* L_15 = (ObjectU5BU5D_t2843939325*)SZArrayNew(ObjectU5BU5D_t2843939325_il2cpp_TypeInfo_var, (uint32_t)((int32_t)10));
		ObjectU5BU5D_t2843939325* L_16 = L_15;
		NullCheck(L_16);
		ArrayElementTypeCheck (L_16, _stringLiteral567578815);
		(L_16)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)_stringLiteral567578815);
		ObjectU5BU5D_t2843939325* L_17 = L_16;
		IL2CPP_RUNTIME_CLASS_INIT(Input_t1431474628_il2cpp_TypeInfo_var);
		LocationService_t2839639379 * L_18 = Input_get_location_m1744795999(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_18);
		LocationInfo_t1192161013  L_19 = LocationService_get_lastData_m1985729390(L_18, /*hidden argument*/NULL);
		V_1 = L_19;
		float L_20 = LocationInfo_get_latitude_m341869276((LocationInfo_t1192161013 *)(&V_1), /*hidden argument*/NULL);
		float L_21 = L_20;
		RuntimeObject * L_22 = Box(Single_t1397266774_il2cpp_TypeInfo_var, &L_21);
		NullCheck(L_17);
		ArrayElementTypeCheck (L_17, L_22);
		(L_17)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_22);
		ObjectU5BU5D_t2843939325* L_23 = L_17;
		NullCheck(L_23);
		ArrayElementTypeCheck (L_23, _stringLiteral3452614528);
		(L_23)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject *)_stringLiteral3452614528);
		ObjectU5BU5D_t2843939325* L_24 = L_23;
		LocationService_t2839639379 * L_25 = Input_get_location_m1744795999(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_25);
		LocationInfo_t1192161013  L_26 = LocationService_get_lastData_m1985729390(L_25, /*hidden argument*/NULL);
		V_2 = L_26;
		float L_27 = LocationInfo_get_longitude_m1454980142((LocationInfo_t1192161013 *)(&V_2), /*hidden argument*/NULL);
		float L_28 = L_27;
		RuntimeObject * L_29 = Box(Single_t1397266774_il2cpp_TypeInfo_var, &L_28);
		NullCheck(L_24);
		ArrayElementTypeCheck (L_24, L_29);
		(L_24)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject *)L_29);
		ObjectU5BU5D_t2843939325* L_30 = L_24;
		NullCheck(L_30);
		ArrayElementTypeCheck (L_30, _stringLiteral3452614528);
		(L_30)->SetAt(static_cast<il2cpp_array_size_t>(4), (RuntimeObject *)_stringLiteral3452614528);
		ObjectU5BU5D_t2843939325* L_31 = L_30;
		LocationService_t2839639379 * L_32 = Input_get_location_m1744795999(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_32);
		LocationInfo_t1192161013  L_33 = LocationService_get_lastData_m1985729390(L_32, /*hidden argument*/NULL);
		V_3 = L_33;
		float L_34 = LocationInfo_get_altitude_m2556363964((LocationInfo_t1192161013 *)(&V_3), /*hidden argument*/NULL);
		float L_35 = L_34;
		RuntimeObject * L_36 = Box(Single_t1397266774_il2cpp_TypeInfo_var, &L_35);
		NullCheck(L_31);
		ArrayElementTypeCheck (L_31, L_36);
		(L_31)->SetAt(static_cast<il2cpp_array_size_t>(5), (RuntimeObject *)L_36);
		ObjectU5BU5D_t2843939325* L_37 = L_31;
		NullCheck(L_37);
		ArrayElementTypeCheck (L_37, _stringLiteral3452614528);
		(L_37)->SetAt(static_cast<il2cpp_array_size_t>(6), (RuntimeObject *)_stringLiteral3452614528);
		ObjectU5BU5D_t2843939325* L_38 = L_37;
		LocationService_t2839639379 * L_39 = Input_get_location_m1744795999(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_39);
		LocationInfo_t1192161013  L_40 = LocationService_get_lastData_m1985729390(L_39, /*hidden argument*/NULL);
		V_4 = L_40;
		float L_41 = LocationInfo_get_horizontalAccuracy_m1238049393((LocationInfo_t1192161013 *)(&V_4), /*hidden argument*/NULL);
		float L_42 = L_41;
		RuntimeObject * L_43 = Box(Single_t1397266774_il2cpp_TypeInfo_var, &L_42);
		NullCheck(L_38);
		ArrayElementTypeCheck (L_38, L_43);
		(L_38)->SetAt(static_cast<il2cpp_array_size_t>(7), (RuntimeObject *)L_43);
		ObjectU5BU5D_t2843939325* L_44 = L_38;
		NullCheck(L_44);
		ArrayElementTypeCheck (L_44, _stringLiteral3452614528);
		(L_44)->SetAt(static_cast<il2cpp_array_size_t>(8), (RuntimeObject *)_stringLiteral3452614528);
		ObjectU5BU5D_t2843939325* L_45 = L_44;
		LocationService_t2839639379 * L_46 = Input_get_location_m1744795999(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_46);
		LocationInfo_t1192161013  L_47 = LocationService_get_lastData_m1985729390(L_46, /*hidden argument*/NULL);
		V_5 = L_47;
		double L_48 = LocationInfo_get_timestamp_m3431861872((LocationInfo_t1192161013 *)(&V_5), /*hidden argument*/NULL);
		double L_49 = L_48;
		RuntimeObject * L_50 = Box(Double_t594665363_il2cpp_TypeInfo_var, &L_49);
		NullCheck(L_45);
		ArrayElementTypeCheck (L_45, L_50);
		(L_45)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)9)), (RuntimeObject *)L_50);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_51 = String_Concat_m2971454694(NULL /*static, unused*/, L_45, /*hidden argument*/NULL);
		MonoBehaviour_print_m330341231(NULL /*static, unused*/, L_51, /*hidden argument*/NULL);
		__this->set_U24PC_4((-1));
	}

IL_01b9:
	{
		return (bool)0;
	}

IL_01bb:
	{
		return (bool)1;
	}
}
// System.Object packt.FoodyGo.Services.GPSLocationService/<StartService>c__Iterator0::System.Collections.Generic.IEnumerator<object>.get_Current()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * U3CStartServiceU3Ec__Iterator0_System_Collections_Generic_IEnumeratorU3CobjectU3E_get_Current_m1427611822 (U3CStartServiceU3Ec__Iterator0_t711529095 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U24current_2();
		return L_0;
	}
}
// System.Object packt.FoodyGo.Services.GPSLocationService/<StartService>c__Iterator0::System.Collections.IEnumerator.get_Current()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * U3CStartServiceU3Ec__Iterator0_System_Collections_IEnumerator_get_Current_m1884297147 (U3CStartServiceU3Ec__Iterator0_t711529095 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U24current_2();
		return L_0;
	}
}
// System.Void packt.FoodyGo.Services.GPSLocationService/<StartService>c__Iterator0::Dispose()
extern "C" IL2CPP_METHOD_ATTR void U3CStartServiceU3Ec__Iterator0_Dispose_m876284747 (U3CStartServiceU3Ec__Iterator0_t711529095 * __this, const RuntimeMethod* method)
{
	{
		__this->set_U24disposing_3((bool)1);
		__this->set_U24PC_4((-1));
		return;
	}
}
// System.Void packt.FoodyGo.Services.GPSLocationService/<StartService>c__Iterator0::Reset()
extern "C" IL2CPP_METHOD_ATTR void U3CStartServiceU3Ec__Iterator0_Reset_m1058868414 (U3CStartServiceU3Ec__Iterator0_t711529095 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CStartServiceU3Ec__Iterator0_Reset_m1058868414_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		NotSupportedException_t1314879016 * L_0 = (NotSupportedException_t1314879016 *)il2cpp_codegen_object_new(NotSupportedException_t1314879016_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m2730133172(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, NULL, U3CStartServiceU3Ec__Iterator0_Reset_m1058868414_RuntimeMethod_var);
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
