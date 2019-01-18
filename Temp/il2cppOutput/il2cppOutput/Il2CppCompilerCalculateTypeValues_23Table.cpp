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


// CUDLR.CommandAttribute
struct CommandAttribute_t3967200570;
// CUDLR.CommandAttribute/CallbackSimple
struct CallbackSimple_t200441164;
// CUDLR.RequestContext
struct RequestContext_t3602631757;
// CUDLR.Server
struct Server_t545360578;
// CUDLR.Server/FileHandlerDelegate
struct FileHandlerDelegate_t13458300;
// System.AsyncCallback
struct AsyncCallback_t3962456242;
// System.Char[]
struct CharU5BU5D_t3528271667;
// System.Collections.Generic.Dictionary`2<System.String,CUDLR.CommandTree>
struct Dictionary_2_t2517652782;
// System.Collections.Generic.Dictionary`2<System.String,System.String>
struct Dictionary_2_t1632706988;
// System.Collections.Generic.List`1<CUDLR.RouteAttribute>
struct List_1_t2046717850;
// System.Collections.Generic.List`1<packt.FoodyGO.Database.Monster>
struct List_1_t3245415856;
// System.Collections.Generic.Queue`1<CUDLR.RequestContext>
struct Queue_1_t3448891251;
// System.DelegateData
struct DelegateData_t1677132599;
// System.Func`2<System.Collections.Generic.KeyValuePair`2<System.String,System.String>,System.String>
struct Func_2_t3001800792;
// System.IAsyncResult
struct IAsyncResult_t767004451;
// System.Net.HttpListener
struct HttpListener_t988452056;
// System.Net.HttpListenerContext
struct HttpListenerContext_t424880822;
// System.Object[]
struct ObjectU5BU5D_t2843939325;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.String
struct String_t;
// System.String[]
struct StringU5BU5D_t1281789340;
// System.Text.RegularExpressions.Match
struct Match_t3408321083;
// System.Threading.Thread
struct Thread_t2300836069;
// System.Void
struct Void_t1185182177;
// UnityEngine.Animation
struct Animation_t3648466861;
// UnityEngine.Application/LogCallback
struct LogCallback_t3588208630;
// UnityEngine.Events.InvokableCallList
struct InvokableCallList_t2498835369;
// UnityEngine.Events.PersistentCallGroup
struct PersistentCallGroup_t3050769227;
// UnityEngine.GameObject
struct GameObject_t1113636619;
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_t3328599146;
// UnityEngine.Rigidbody
struct Rigidbody_t3916780224;
// UnityEngine.Texture
struct Texture_t3661962703;
// UnityEngine.Transform
struct Transform_t3600365921;
// UnityEngine.UI.AspectRatioFitter
struct AspectRatioFitter_t3312407083;
// UnityEngine.UI.Image
struct Image_t2670269651;
// UnityEngine.UI.RawImage
struct RawImage_t3182918964;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_t1457185986;
// UnityEngine.WWW
struct WWW_t3688466362;
// UnityEngine.WebCamTexture
struct WebCamTexture_t1514609158;
// UnityStandardAssets.Characters.ThirdPerson.ThirdPersonCharacter
struct ThirdPersonCharacter_t1711070432;
// UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualAxis
struct VirtualAxis_t4087348596;
// packt.FoodyGO.Controllers.MonsterController
struct MonsterController_t3352166224;
// packt.FoodyGO.Database.Monster
struct Monster_t1773341114;
// packt.FoodyGO.Database.Monster[]
struct MonsterU5BU5D_t2415199775;
// packt.FoodyGO.Managers.GameManager
struct GameManager_t3352243792;
// packt.FoodyGO.Mapping.GoogleMapTile
struct GoogleMapTile_t1047440669;
// packt.FoodyGO.Mapping.MapEnvelope
struct MapEnvelope_t3509470862;
// packt.FoodyGO.Mapping.MapLocation
struct MapLocation_t4058015206;
// packt.FoodyGO.PhysicsExt.CollisionEvent
struct CollisionEvent_t2787779977;
// packt.FoodyGO.PhysicsExt.CollisionReaction[]
struct CollisionReactionU5BU5D_t2532295519;
// packt.FoodyGO.Services.GPSLocationService
struct GPSLocationService_t3603565903;
// packt.FoodyGO.Services.GPSLocationService/OnRedrawEvent
struct OnRedrawEvent_t4144385014;
// packt.FoodyGO.Services.MonsterService
struct MonsterService_t815911722;




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
#ifndef UNITYEVENTBASE_T3960448221_H
#define UNITYEVENTBASE_T3960448221_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Events.UnityEventBase
struct  UnityEventBase_t3960448221  : public RuntimeObject
{
public:
	// UnityEngine.Events.InvokableCallList UnityEngine.Events.UnityEventBase::m_Calls
	InvokableCallList_t2498835369 * ___m_Calls_0;
	// UnityEngine.Events.PersistentCallGroup UnityEngine.Events.UnityEventBase::m_PersistentCalls
	PersistentCallGroup_t3050769227 * ___m_PersistentCalls_1;
	// System.String UnityEngine.Events.UnityEventBase::m_TypeName
	String_t* ___m_TypeName_2;
	// System.Boolean UnityEngine.Events.UnityEventBase::m_CallsDirty
	bool ___m_CallsDirty_3;

public:
	inline static int32_t get_offset_of_m_Calls_0() { return static_cast<int32_t>(offsetof(UnityEventBase_t3960448221, ___m_Calls_0)); }
	inline InvokableCallList_t2498835369 * get_m_Calls_0() const { return ___m_Calls_0; }
	inline InvokableCallList_t2498835369 ** get_address_of_m_Calls_0() { return &___m_Calls_0; }
	inline void set_m_Calls_0(InvokableCallList_t2498835369 * value)
	{
		___m_Calls_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_Calls_0), value);
	}

	inline static int32_t get_offset_of_m_PersistentCalls_1() { return static_cast<int32_t>(offsetof(UnityEventBase_t3960448221, ___m_PersistentCalls_1)); }
	inline PersistentCallGroup_t3050769227 * get_m_PersistentCalls_1() const { return ___m_PersistentCalls_1; }
	inline PersistentCallGroup_t3050769227 ** get_address_of_m_PersistentCalls_1() { return &___m_PersistentCalls_1; }
	inline void set_m_PersistentCalls_1(PersistentCallGroup_t3050769227 * value)
	{
		___m_PersistentCalls_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_PersistentCalls_1), value);
	}

	inline static int32_t get_offset_of_m_TypeName_2() { return static_cast<int32_t>(offsetof(UnityEventBase_t3960448221, ___m_TypeName_2)); }
	inline String_t* get_m_TypeName_2() const { return ___m_TypeName_2; }
	inline String_t** get_address_of_m_TypeName_2() { return &___m_TypeName_2; }
	inline void set_m_TypeName_2(String_t* value)
	{
		___m_TypeName_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_TypeName_2), value);
	}

	inline static int32_t get_offset_of_m_CallsDirty_3() { return static_cast<int32_t>(offsetof(UnityEventBase_t3960448221, ___m_CallsDirty_3)); }
	inline bool get_m_CallsDirty_3() const { return ___m_CallsDirty_3; }
	inline bool* get_address_of_m_CallsDirty_3() { return &___m_CallsDirty_3; }
	inline void set_m_CallsDirty_3(bool value)
	{
		___m_CallsDirty_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNITYEVENTBASE_T3960448221_H
#ifndef U3CDISPLAYSPLASHSCENEU3EC__ITERATOR0_T1774276246_H
#define U3CDISPLAYSPLASHSCENEU3EC__ITERATOR0_T1774276246_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// packt.FoodyGO.Managers.GameManager/<DisplaySplashScene>c__Iterator0
struct  U3CDisplaySplashSceneU3Ec__Iterator0_t1774276246  : public RuntimeObject
{
public:
	// packt.FoodyGO.Managers.GameManager packt.FoodyGO.Managers.GameManager/<DisplaySplashScene>c__Iterator0::$this
	GameManager_t3352243792 * ___U24this_0;
	// System.Object packt.FoodyGO.Managers.GameManager/<DisplaySplashScene>c__Iterator0::$current
	RuntimeObject * ___U24current_1;
	// System.Boolean packt.FoodyGO.Managers.GameManager/<DisplaySplashScene>c__Iterator0::$disposing
	bool ___U24disposing_2;
	// System.Int32 packt.FoodyGO.Managers.GameManager/<DisplaySplashScene>c__Iterator0::$PC
	int32_t ___U24PC_3;

public:
	inline static int32_t get_offset_of_U24this_0() { return static_cast<int32_t>(offsetof(U3CDisplaySplashSceneU3Ec__Iterator0_t1774276246, ___U24this_0)); }
	inline GameManager_t3352243792 * get_U24this_0() const { return ___U24this_0; }
	inline GameManager_t3352243792 ** get_address_of_U24this_0() { return &___U24this_0; }
	inline void set_U24this_0(GameManager_t3352243792 * value)
	{
		___U24this_0 = value;
		Il2CppCodeGenWriteBarrier((&___U24this_0), value);
	}

	inline static int32_t get_offset_of_U24current_1() { return static_cast<int32_t>(offsetof(U3CDisplaySplashSceneU3Ec__Iterator0_t1774276246, ___U24current_1)); }
	inline RuntimeObject * get_U24current_1() const { return ___U24current_1; }
	inline RuntimeObject ** get_address_of_U24current_1() { return &___U24current_1; }
	inline void set_U24current_1(RuntimeObject * value)
	{
		___U24current_1 = value;
		Il2CppCodeGenWriteBarrier((&___U24current_1), value);
	}

	inline static int32_t get_offset_of_U24disposing_2() { return static_cast<int32_t>(offsetof(U3CDisplaySplashSceneU3Ec__Iterator0_t1774276246, ___U24disposing_2)); }
	inline bool get_U24disposing_2() const { return ___U24disposing_2; }
	inline bool* get_address_of_U24disposing_2() { return &___U24disposing_2; }
	inline void set_U24disposing_2(bool value)
	{
		___U24disposing_2 = value;
	}

	inline static int32_t get_offset_of_U24PC_3() { return static_cast<int32_t>(offsetof(U3CDisplaySplashSceneU3Ec__Iterator0_t1774276246, ___U24PC_3)); }
	inline int32_t get_U24PC_3() const { return ___U24PC_3; }
	inline int32_t* get_address_of_U24PC_3() { return &___U24PC_3; }
	inline void set_U24PC_3(int32_t value)
	{
		___U24PC_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CDISPLAYSPLASHSCENEU3EC__ITERATOR0_T1774276246_H
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
	// System.String packt.FoodyGO.Mapping.GoogleMapTile/<_RefreshMapTile>c__Iterator0::<queryString>__0
	String_t* ___U3CqueryStringU3E__0_0;
	// System.Boolean packt.FoodyGO.Mapping.GoogleMapTile/<_RefreshMapTile>c__Iterator0::<usingSensor>__0
	bool ___U3CusingSensorU3E__0_1;
	// UnityEngine.WWW packt.FoodyGO.Mapping.GoogleMapTile/<_RefreshMapTile>c__Iterator0::<req>__0
	WWW_t3688466362 * ___U3CreqU3E__0_2;
	// packt.FoodyGO.Mapping.GoogleMapTile packt.FoodyGO.Mapping.GoogleMapTile/<_RefreshMapTile>c__Iterator0::$this
	GoogleMapTile_t1047440669 * ___U24this_3;
	// System.Object packt.FoodyGO.Mapping.GoogleMapTile/<_RefreshMapTile>c__Iterator0::$current
	RuntimeObject * ___U24current_4;
	// System.Boolean packt.FoodyGO.Mapping.GoogleMapTile/<_RefreshMapTile>c__Iterator0::$disposing
	bool ___U24disposing_5;
	// System.Int32 packt.FoodyGO.Mapping.GoogleMapTile/<_RefreshMapTile>c__Iterator0::$PC
	int32_t ___U24PC_6;

public:
	inline static int32_t get_offset_of_U3CqueryStringU3E__0_0() { return static_cast<int32_t>(offsetof(U3C_RefreshMapTileU3Ec__Iterator0_t2254000978, ___U3CqueryStringU3E__0_0)); }
	inline String_t* get_U3CqueryStringU3E__0_0() const { return ___U3CqueryStringU3E__0_0; }
	inline String_t** get_address_of_U3CqueryStringU3E__0_0() { return &___U3CqueryStringU3E__0_0; }
	inline void set_U3CqueryStringU3E__0_0(String_t* value)
	{
		___U3CqueryStringU3E__0_0 = value;
		Il2CppCodeGenWriteBarrier((&___U3CqueryStringU3E__0_0), value);
	}

	inline static int32_t get_offset_of_U3CusingSensorU3E__0_1() { return static_cast<int32_t>(offsetof(U3C_RefreshMapTileU3Ec__Iterator0_t2254000978, ___U3CusingSensorU3E__0_1)); }
	inline bool get_U3CusingSensorU3E__0_1() const { return ___U3CusingSensorU3E__0_1; }
	inline bool* get_address_of_U3CusingSensorU3E__0_1() { return &___U3CusingSensorU3E__0_1; }
	inline void set_U3CusingSensorU3E__0_1(bool value)
	{
		___U3CusingSensorU3E__0_1 = value;
	}

	inline static int32_t get_offset_of_U3CreqU3E__0_2() { return static_cast<int32_t>(offsetof(U3C_RefreshMapTileU3Ec__Iterator0_t2254000978, ___U3CreqU3E__0_2)); }
	inline WWW_t3688466362 * get_U3CreqU3E__0_2() const { return ___U3CreqU3E__0_2; }
	inline WWW_t3688466362 ** get_address_of_U3CreqU3E__0_2() { return &___U3CreqU3E__0_2; }
	inline void set_U3CreqU3E__0_2(WWW_t3688466362 * value)
	{
		___U3CreqU3E__0_2 = value;
		Il2CppCodeGenWriteBarrier((&___U3CreqU3E__0_2), value);
	}

	inline static int32_t get_offset_of_U24this_3() { return static_cast<int32_t>(offsetof(U3C_RefreshMapTileU3Ec__Iterator0_t2254000978, ___U24this_3)); }
	inline GoogleMapTile_t1047440669 * get_U24this_3() const { return ___U24this_3; }
	inline GoogleMapTile_t1047440669 ** get_address_of_U24this_3() { return &___U24this_3; }
	inline void set_U24this_3(GoogleMapTile_t1047440669 * value)
	{
		___U24this_3 = value;
		Il2CppCodeGenWriteBarrier((&___U24this_3), value);
	}

	inline static int32_t get_offset_of_U24current_4() { return static_cast<int32_t>(offsetof(U3C_RefreshMapTileU3Ec__Iterator0_t2254000978, ___U24current_4)); }
	inline RuntimeObject * get_U24current_4() const { return ___U24current_4; }
	inline RuntimeObject ** get_address_of_U24current_4() { return &___U24current_4; }
	inline void set_U24current_4(RuntimeObject * value)
	{
		___U24current_4 = value;
		Il2CppCodeGenWriteBarrier((&___U24current_4), value);
	}

	inline static int32_t get_offset_of_U24disposing_5() { return static_cast<int32_t>(offsetof(U3C_RefreshMapTileU3Ec__Iterator0_t2254000978, ___U24disposing_5)); }
	inline bool get_U24disposing_5() const { return ___U24disposing_5; }
	inline bool* get_address_of_U24disposing_5() { return &___U24disposing_5; }
	inline void set_U24disposing_5(bool value)
	{
		___U24disposing_5 = value;
	}

	inline static int32_t get_offset_of_U24PC_6() { return static_cast<int32_t>(offsetof(U3C_RefreshMapTileU3Ec__Iterator0_t2254000978, ___U24PC_6)); }
	inline int32_t get_U24PC_6() const { return ___U24PC_6; }
	inline int32_t* get_address_of_U24PC_6() { return &___U24PC_6; }
	inline void set_U24PC_6(int32_t value)
	{
		___U24PC_6 = value;
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
#ifndef MAPENVELOPE_T3509470862_H
#define MAPENVELOPE_T3509470862_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// packt.FoodyGO.Mapping.MapEnvelope
struct  MapEnvelope_t3509470862  : public RuntimeObject
{
public:
	// System.Single packt.FoodyGO.Mapping.MapEnvelope::lon1
	float ___lon1_0;
	// System.Single packt.FoodyGO.Mapping.MapEnvelope::lon2
	float ___lon2_1;
	// System.Single packt.FoodyGO.Mapping.MapEnvelope::lat1
	float ___lat1_2;
	// System.Single packt.FoodyGO.Mapping.MapEnvelope::lat2
	float ___lat2_3;

public:
	inline static int32_t get_offset_of_lon1_0() { return static_cast<int32_t>(offsetof(MapEnvelope_t3509470862, ___lon1_0)); }
	inline float get_lon1_0() const { return ___lon1_0; }
	inline float* get_address_of_lon1_0() { return &___lon1_0; }
	inline void set_lon1_0(float value)
	{
		___lon1_0 = value;
	}

	inline static int32_t get_offset_of_lon2_1() { return static_cast<int32_t>(offsetof(MapEnvelope_t3509470862, ___lon2_1)); }
	inline float get_lon2_1() const { return ___lon2_1; }
	inline float* get_address_of_lon2_1() { return &___lon2_1; }
	inline void set_lon2_1(float value)
	{
		___lon2_1 = value;
	}

	inline static int32_t get_offset_of_lat1_2() { return static_cast<int32_t>(offsetof(MapEnvelope_t3509470862, ___lat1_2)); }
	inline float get_lat1_2() const { return ___lat1_2; }
	inline float* get_address_of_lat1_2() { return &___lat1_2; }
	inline void set_lat1_2(float value)
	{
		___lat1_2 = value;
	}

	inline static int32_t get_offset_of_lat2_3() { return static_cast<int32_t>(offsetof(MapEnvelope_t3509470862, ___lat2_3)); }
	inline float get_lat2_3() const { return ___lat2_3; }
	inline float* get_address_of_lat2_3() { return &___lat2_3; }
	inline void set_lat2_3(float value)
	{
		___lat2_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MAPENVELOPE_T3509470862_H
#ifndef MAPLOCATION_T4058015206_H
#define MAPLOCATION_T4058015206_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// packt.FoodyGO.Mapping.MapLocation
struct  MapLocation_t4058015206  : public RuntimeObject
{
public:
	// System.Single packt.FoodyGO.Mapping.MapLocation::Latitude
	float ___Latitude_0;
	// System.Single packt.FoodyGO.Mapping.MapLocation::Longitude
	float ___Longitude_1;

public:
	inline static int32_t get_offset_of_Latitude_0() { return static_cast<int32_t>(offsetof(MapLocation_t4058015206, ___Latitude_0)); }
	inline float get_Latitude_0() const { return ___Latitude_0; }
	inline float* get_address_of_Latitude_0() { return &___Latitude_0; }
	inline void set_Latitude_0(float value)
	{
		___Latitude_0 = value;
	}

	inline static int32_t get_offset_of_Longitude_1() { return static_cast<int32_t>(offsetof(MapLocation_t4058015206, ___Longitude_1)); }
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
#endif // MAPLOCATION_T4058015206_H
#ifndef MATHG_T4249049613_H
#define MATHG_T4249049613_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// packt.FoodyGO.Mapping.MathG
struct  MathG_t4249049613  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MATHG_T4249049613_H
#ifndef U3CSTARTSERVICEU3EC__ITERATOR1_T581170624_H
#define U3CSTARTSERVICEU3EC__ITERATOR1_T581170624_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// packt.FoodyGO.Services.GPSLocationService/<StartService>c__Iterator1
struct  U3CStartServiceU3Ec__Iterator1_t581170624  : public RuntimeObject
{
public:
	// System.Int32 packt.FoodyGO.Services.GPSLocationService/<StartService>c__Iterator1::<maxWait>__0
	int32_t ___U3CmaxWaitU3E__0_0;
	// packt.FoodyGO.Services.GPSLocationService packt.FoodyGO.Services.GPSLocationService/<StartService>c__Iterator1::$this
	GPSLocationService_t3603565903 * ___U24this_1;
	// System.Object packt.FoodyGO.Services.GPSLocationService/<StartService>c__Iterator1::$current
	RuntimeObject * ___U24current_2;
	// System.Boolean packt.FoodyGO.Services.GPSLocationService/<StartService>c__Iterator1::$disposing
	bool ___U24disposing_3;
	// System.Int32 packt.FoodyGO.Services.GPSLocationService/<StartService>c__Iterator1::$PC
	int32_t ___U24PC_4;

public:
	inline static int32_t get_offset_of_U3CmaxWaitU3E__0_0() { return static_cast<int32_t>(offsetof(U3CStartServiceU3Ec__Iterator1_t581170624, ___U3CmaxWaitU3E__0_0)); }
	inline int32_t get_U3CmaxWaitU3E__0_0() const { return ___U3CmaxWaitU3E__0_0; }
	inline int32_t* get_address_of_U3CmaxWaitU3E__0_0() { return &___U3CmaxWaitU3E__0_0; }
	inline void set_U3CmaxWaitU3E__0_0(int32_t value)
	{
		___U3CmaxWaitU3E__0_0 = value;
	}

	inline static int32_t get_offset_of_U24this_1() { return static_cast<int32_t>(offsetof(U3CStartServiceU3Ec__Iterator1_t581170624, ___U24this_1)); }
	inline GPSLocationService_t3603565903 * get_U24this_1() const { return ___U24this_1; }
	inline GPSLocationService_t3603565903 ** get_address_of_U24this_1() { return &___U24this_1; }
	inline void set_U24this_1(GPSLocationService_t3603565903 * value)
	{
		___U24this_1 = value;
		Il2CppCodeGenWriteBarrier((&___U24this_1), value);
	}

	inline static int32_t get_offset_of_U24current_2() { return static_cast<int32_t>(offsetof(U3CStartServiceU3Ec__Iterator1_t581170624, ___U24current_2)); }
	inline RuntimeObject * get_U24current_2() const { return ___U24current_2; }
	inline RuntimeObject ** get_address_of_U24current_2() { return &___U24current_2; }
	inline void set_U24current_2(RuntimeObject * value)
	{
		___U24current_2 = value;
		Il2CppCodeGenWriteBarrier((&___U24current_2), value);
	}

	inline static int32_t get_offset_of_U24disposing_3() { return static_cast<int32_t>(offsetof(U3CStartServiceU3Ec__Iterator1_t581170624, ___U24disposing_3)); }
	inline bool get_U24disposing_3() const { return ___U24disposing_3; }
	inline bool* get_address_of_U24disposing_3() { return &___U24disposing_3; }
	inline void set_U24disposing_3(bool value)
	{
		___U24disposing_3 = value;
	}

	inline static int32_t get_offset_of_U24PC_4() { return static_cast<int32_t>(offsetof(U3CStartServiceU3Ec__Iterator1_t581170624, ___U24PC_4)); }
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
#endif // U3CSTARTSERVICEU3EC__ITERATOR1_T581170624_H
#ifndef U3CSTARTSIMULATIONSERVICEU3EC__ITERATOR0_T30558242_H
#define U3CSTARTSIMULATIONSERVICEU3EC__ITERATOR0_T30558242_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// packt.FoodyGO.Services.GPSLocationService/<StartSimulationService>c__Iterator0
struct  U3CStartSimulationServiceU3Ec__Iterator0_t30558242  : public RuntimeObject
{
public:
	// packt.FoodyGO.Services.GPSLocationService packt.FoodyGO.Services.GPSLocationService/<StartSimulationService>c__Iterator0::$this
	GPSLocationService_t3603565903 * ___U24this_0;
	// System.Object packt.FoodyGO.Services.GPSLocationService/<StartSimulationService>c__Iterator0::$current
	RuntimeObject * ___U24current_1;
	// System.Boolean packt.FoodyGO.Services.GPSLocationService/<StartSimulationService>c__Iterator0::$disposing
	bool ___U24disposing_2;
	// System.Int32 packt.FoodyGO.Services.GPSLocationService/<StartSimulationService>c__Iterator0::$PC
	int32_t ___U24PC_3;

public:
	inline static int32_t get_offset_of_U24this_0() { return static_cast<int32_t>(offsetof(U3CStartSimulationServiceU3Ec__Iterator0_t30558242, ___U24this_0)); }
	inline GPSLocationService_t3603565903 * get_U24this_0() const { return ___U24this_0; }
	inline GPSLocationService_t3603565903 ** get_address_of_U24this_0() { return &___U24this_0; }
	inline void set_U24this_0(GPSLocationService_t3603565903 * value)
	{
		___U24this_0 = value;
		Il2CppCodeGenWriteBarrier((&___U24this_0), value);
	}

	inline static int32_t get_offset_of_U24current_1() { return static_cast<int32_t>(offsetof(U3CStartSimulationServiceU3Ec__Iterator0_t30558242, ___U24current_1)); }
	inline RuntimeObject * get_U24current_1() const { return ___U24current_1; }
	inline RuntimeObject ** get_address_of_U24current_1() { return &___U24current_1; }
	inline void set_U24current_1(RuntimeObject * value)
	{
		___U24current_1 = value;
		Il2CppCodeGenWriteBarrier((&___U24current_1), value);
	}

	inline static int32_t get_offset_of_U24disposing_2() { return static_cast<int32_t>(offsetof(U3CStartSimulationServiceU3Ec__Iterator0_t30558242, ___U24disposing_2)); }
	inline bool get_U24disposing_2() const { return ___U24disposing_2; }
	inline bool* get_address_of_U24disposing_2() { return &___U24disposing_2; }
	inline void set_U24disposing_2(bool value)
	{
		___U24disposing_2 = value;
	}

	inline static int32_t get_offset_of_U24PC_3() { return static_cast<int32_t>(offsetof(U3CStartSimulationServiceU3Ec__Iterator0_t30558242, ___U24PC_3)); }
	inline int32_t get_U24PC_3() const { return ___U24PC_3; }
	inline int32_t* get_address_of_U24PC_3() { return &___U24PC_3; }
	inline void set_U24PC_3(int32_t value)
	{
		___U24PC_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CSTARTSIMULATIONSERVICEU3EC__ITERATOR0_T30558242_H
#ifndef U3CCLEANUPMONSTERSU3EC__ITERATOR0_T1226081092_H
#define U3CCLEANUPMONSTERSU3EC__ITERATOR0_T1226081092_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// packt.FoodyGO.Services.MonsterService/<CleanupMonsters>c__Iterator0
struct  U3CCleanupMonstersU3Ec__Iterator0_t1226081092  : public RuntimeObject
{
public:
	// System.Double packt.FoodyGO.Services.MonsterService/<CleanupMonsters>c__Iterator0::<now>__1
	double ___U3CnowU3E__1_0;
	// packt.FoodyGO.Database.Monster[] packt.FoodyGO.Services.MonsterService/<CleanupMonsters>c__Iterator0::<list>__1
	MonsterU5BU5D_t2415199775* ___U3ClistU3E__1_1;
	// packt.FoodyGO.Services.MonsterService packt.FoodyGO.Services.MonsterService/<CleanupMonsters>c__Iterator0::$this
	MonsterService_t815911722 * ___U24this_2;
	// System.Object packt.FoodyGO.Services.MonsterService/<CleanupMonsters>c__Iterator0::$current
	RuntimeObject * ___U24current_3;
	// System.Boolean packt.FoodyGO.Services.MonsterService/<CleanupMonsters>c__Iterator0::$disposing
	bool ___U24disposing_4;
	// System.Int32 packt.FoodyGO.Services.MonsterService/<CleanupMonsters>c__Iterator0::$PC
	int32_t ___U24PC_5;

public:
	inline static int32_t get_offset_of_U3CnowU3E__1_0() { return static_cast<int32_t>(offsetof(U3CCleanupMonstersU3Ec__Iterator0_t1226081092, ___U3CnowU3E__1_0)); }
	inline double get_U3CnowU3E__1_0() const { return ___U3CnowU3E__1_0; }
	inline double* get_address_of_U3CnowU3E__1_0() { return &___U3CnowU3E__1_0; }
	inline void set_U3CnowU3E__1_0(double value)
	{
		___U3CnowU3E__1_0 = value;
	}

	inline static int32_t get_offset_of_U3ClistU3E__1_1() { return static_cast<int32_t>(offsetof(U3CCleanupMonstersU3Ec__Iterator0_t1226081092, ___U3ClistU3E__1_1)); }
	inline MonsterU5BU5D_t2415199775* get_U3ClistU3E__1_1() const { return ___U3ClistU3E__1_1; }
	inline MonsterU5BU5D_t2415199775** get_address_of_U3ClistU3E__1_1() { return &___U3ClistU3E__1_1; }
	inline void set_U3ClistU3E__1_1(MonsterU5BU5D_t2415199775* value)
	{
		___U3ClistU3E__1_1 = value;
		Il2CppCodeGenWriteBarrier((&___U3ClistU3E__1_1), value);
	}

	inline static int32_t get_offset_of_U24this_2() { return static_cast<int32_t>(offsetof(U3CCleanupMonstersU3Ec__Iterator0_t1226081092, ___U24this_2)); }
	inline MonsterService_t815911722 * get_U24this_2() const { return ___U24this_2; }
	inline MonsterService_t815911722 ** get_address_of_U24this_2() { return &___U24this_2; }
	inline void set_U24this_2(MonsterService_t815911722 * value)
	{
		___U24this_2 = value;
		Il2CppCodeGenWriteBarrier((&___U24this_2), value);
	}

	inline static int32_t get_offset_of_U24current_3() { return static_cast<int32_t>(offsetof(U3CCleanupMonstersU3Ec__Iterator0_t1226081092, ___U24current_3)); }
	inline RuntimeObject * get_U24current_3() const { return ___U24current_3; }
	inline RuntimeObject ** get_address_of_U24current_3() { return &___U24current_3; }
	inline void set_U24current_3(RuntimeObject * value)
	{
		___U24current_3 = value;
		Il2CppCodeGenWriteBarrier((&___U24current_3), value);
	}

	inline static int32_t get_offset_of_U24disposing_4() { return static_cast<int32_t>(offsetof(U3CCleanupMonstersU3Ec__Iterator0_t1226081092, ___U24disposing_4)); }
	inline bool get_U24disposing_4() const { return ___U24disposing_4; }
	inline bool* get_address_of_U24disposing_4() { return &___U24disposing_4; }
	inline void set_U24disposing_4(bool value)
	{
		___U24disposing_4 = value;
	}

	inline static int32_t get_offset_of_U24PC_5() { return static_cast<int32_t>(offsetof(U3CCleanupMonstersU3Ec__Iterator0_t1226081092, ___U24PC_5)); }
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
#endif // U3CCLEANUPMONSTERSU3EC__ITERATOR0_T1226081092_H
#ifndef EPOCH_T1110390331_H
#define EPOCH_T1110390331_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// packt.FoodyGo.Utils.Epoch
struct  Epoch_t1110390331  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EPOCH_T1110390331_H
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
#ifndef UNITYEVENT_2_T2280902504_H
#define UNITYEVENT_2_T2280902504_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Events.UnityEvent`2<UnityEngine.GameObject,UnityEngine.Collision>
struct  UnityEvent_2_t2280902504  : public UnityEventBase_t3960448221
{
public:
	// System.Object[] UnityEngine.Events.UnityEvent`2::m_InvokeArray
	ObjectU5BU5D_t2843939325* ___m_InvokeArray_4;

public:
	inline static int32_t get_offset_of_m_InvokeArray_4() { return static_cast<int32_t>(offsetof(UnityEvent_2_t2280902504, ___m_InvokeArray_4)); }
	inline ObjectU5BU5D_t2843939325* get_m_InvokeArray_4() const { return ___m_InvokeArray_4; }
	inline ObjectU5BU5D_t2843939325** get_address_of_m_InvokeArray_4() { return &___m_InvokeArray_4; }
	inline void set_m_InvokeArray_4(ObjectU5BU5D_t2843939325* value)
	{
		___m_InvokeArray_4 = value;
		Il2CppCodeGenWriteBarrier((&___m_InvokeArray_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNITYEVENT_2_T2280902504_H
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
#ifndef SCENE_T2348375561_H
#define SCENE_T2348375561_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.SceneManagement.Scene
struct  Scene_t2348375561 
{
public:
	// System.Int32 UnityEngine.SceneManagement.Scene::m_Handle
	int32_t ___m_Handle_0;

public:
	inline static int32_t get_offset_of_m_Handle_0() { return static_cast<int32_t>(offsetof(Scene_t2348375561, ___m_Handle_0)); }
	inline int32_t get_m_Handle_0() const { return ___m_Handle_0; }
	inline int32_t* get_address_of_m_Handle_0() { return &___m_Handle_0; }
	inline void set_m_Handle_0(int32_t value)
	{
		___m_Handle_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SCENE_T2348375561_H
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
#ifndef MONSTER_T1773341114_H
#define MONSTER_T1773341114_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// packt.FoodyGO.Database.Monster
struct  Monster_t1773341114  : public RuntimeObject
{
public:
	// packt.FoodyGO.Mapping.MapLocation packt.FoodyGO.Database.Monster::location
	MapLocation_t4058015206 * ___location_0;
	// UnityEngine.Vector3 packt.FoodyGO.Database.Monster::position
	Vector3_t3722313464  ___position_1;
	// System.Double packt.FoodyGO.Database.Monster::spawnTimestamp
	double ___spawnTimestamp_2;
	// System.Double packt.FoodyGO.Database.Monster::lastHeardTimestamp
	double ___lastHeardTimestamp_3;
	// System.Double packt.FoodyGO.Database.Monster::lastSeenTimestamp
	double ___lastSeenTimestamp_4;
	// UnityEngine.GameObject packt.FoodyGO.Database.Monster::gameObject
	GameObject_t1113636619 * ___gameObject_5;
	// System.Int32 packt.FoodyGO.Database.Monster::footstepRange
	int32_t ___footstepRange_6;

public:
	inline static int32_t get_offset_of_location_0() { return static_cast<int32_t>(offsetof(Monster_t1773341114, ___location_0)); }
	inline MapLocation_t4058015206 * get_location_0() const { return ___location_0; }
	inline MapLocation_t4058015206 ** get_address_of_location_0() { return &___location_0; }
	inline void set_location_0(MapLocation_t4058015206 * value)
	{
		___location_0 = value;
		Il2CppCodeGenWriteBarrier((&___location_0), value);
	}

	inline static int32_t get_offset_of_position_1() { return static_cast<int32_t>(offsetof(Monster_t1773341114, ___position_1)); }
	inline Vector3_t3722313464  get_position_1() const { return ___position_1; }
	inline Vector3_t3722313464 * get_address_of_position_1() { return &___position_1; }
	inline void set_position_1(Vector3_t3722313464  value)
	{
		___position_1 = value;
	}

	inline static int32_t get_offset_of_spawnTimestamp_2() { return static_cast<int32_t>(offsetof(Monster_t1773341114, ___spawnTimestamp_2)); }
	inline double get_spawnTimestamp_2() const { return ___spawnTimestamp_2; }
	inline double* get_address_of_spawnTimestamp_2() { return &___spawnTimestamp_2; }
	inline void set_spawnTimestamp_2(double value)
	{
		___spawnTimestamp_2 = value;
	}

	inline static int32_t get_offset_of_lastHeardTimestamp_3() { return static_cast<int32_t>(offsetof(Monster_t1773341114, ___lastHeardTimestamp_3)); }
	inline double get_lastHeardTimestamp_3() const { return ___lastHeardTimestamp_3; }
	inline double* get_address_of_lastHeardTimestamp_3() { return &___lastHeardTimestamp_3; }
	inline void set_lastHeardTimestamp_3(double value)
	{
		___lastHeardTimestamp_3 = value;
	}

	inline static int32_t get_offset_of_lastSeenTimestamp_4() { return static_cast<int32_t>(offsetof(Monster_t1773341114, ___lastSeenTimestamp_4)); }
	inline double get_lastSeenTimestamp_4() const { return ___lastSeenTimestamp_4; }
	inline double* get_address_of_lastSeenTimestamp_4() { return &___lastSeenTimestamp_4; }
	inline void set_lastSeenTimestamp_4(double value)
	{
		___lastSeenTimestamp_4 = value;
	}

	inline static int32_t get_offset_of_gameObject_5() { return static_cast<int32_t>(offsetof(Monster_t1773341114, ___gameObject_5)); }
	inline GameObject_t1113636619 * get_gameObject_5() const { return ___gameObject_5; }
	inline GameObject_t1113636619 ** get_address_of_gameObject_5() { return &___gameObject_5; }
	inline void set_gameObject_5(GameObject_t1113636619 * value)
	{
		___gameObject_5 = value;
		Il2CppCodeGenWriteBarrier((&___gameObject_5), value);
	}

	inline static int32_t get_offset_of_footstepRange_6() { return static_cast<int32_t>(offsetof(Monster_t1773341114, ___footstepRange_6)); }
	inline int32_t get_footstepRange_6() const { return ___footstepRange_6; }
	inline int32_t* get_address_of_footstepRange_6() { return &___footstepRange_6; }
	inline void set_footstepRange_6(int32_t value)
	{
		___footstepRange_6 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MONSTER_T1773341114_H
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
#ifndef COLLISIONEVENT_T2787779977_H
#define COLLISIONEVENT_T2787779977_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// packt.FoodyGO.PhysicsExt.CollisionEvent
struct  CollisionEvent_t2787779977  : public UnityEvent_2_t2280902504
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COLLISIONEVENT_T2787779977_H
#ifndef AXISOPTION_T3737451056_H
#define AXISOPTION_T3737451056_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// packt.FoodyGO.TouchInput.CustomTouchPad/AxisOption
struct  AxisOption_t3737451056 
{
public:
	// System.Int32 packt.FoodyGO.TouchInput.CustomTouchPad/AxisOption::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(AxisOption_t3737451056, ___value___1)); }
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
#endif // AXISOPTION_T3737451056_H
#ifndef CONTROLSTYLE_T3966684686_H
#define CONTROLSTYLE_T3966684686_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// packt.FoodyGO.TouchInput.CustomTouchPad/ControlStyle
struct  ControlStyle_t3966684686 
{
public:
	// System.Int32 packt.FoodyGO.TouchInput.CustomTouchPad/ControlStyle::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(ControlStyle_t3966684686, ___value___1)); }
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
#endif // CONTROLSTYLE_T3966684686_H
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
#ifndef ONREDRAWEVENT_T4144385014_H
#define ONREDRAWEVENT_T4144385014_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// packt.FoodyGO.Services.GPSLocationService/OnRedrawEvent
struct  OnRedrawEvent_t4144385014  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ONREDRAWEVENT_T4144385014_H
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
#ifndef CATCHSCENECONTROLLER_T4077466895_H
#define CATCHSCENECONTROLLER_T4077466895_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// packt.FoodyGO.Controllers.CatchSceneController
struct  CatchSceneController_t4077466895  : public MonoBehaviour_t3962482529
{
public:
	// UnityEngine.Transform packt.FoodyGO.Controllers.CatchSceneController::frozenParticlePrefab
	Transform_t3600365921 * ___frozenParticlePrefab_4;
	// packt.FoodyGO.Controllers.MonsterController packt.FoodyGO.Controllers.CatchSceneController::monster
	MonsterController_t3352166224 * ___monster_5;
	// UnityEngine.GameObject[] packt.FoodyGO.Controllers.CatchSceneController::frozenDisableList
	GameObjectU5BU5D_t3328599146* ___frozenDisableList_6;
	// UnityEngine.GameObject[] packt.FoodyGO.Controllers.CatchSceneController::frozenEnableList
	GameObjectU5BU5D_t3328599146* ___frozenEnableList_7;

public:
	inline static int32_t get_offset_of_frozenParticlePrefab_4() { return static_cast<int32_t>(offsetof(CatchSceneController_t4077466895, ___frozenParticlePrefab_4)); }
	inline Transform_t3600365921 * get_frozenParticlePrefab_4() const { return ___frozenParticlePrefab_4; }
	inline Transform_t3600365921 ** get_address_of_frozenParticlePrefab_4() { return &___frozenParticlePrefab_4; }
	inline void set_frozenParticlePrefab_4(Transform_t3600365921 * value)
	{
		___frozenParticlePrefab_4 = value;
		Il2CppCodeGenWriteBarrier((&___frozenParticlePrefab_4), value);
	}

	inline static int32_t get_offset_of_monster_5() { return static_cast<int32_t>(offsetof(CatchSceneController_t4077466895, ___monster_5)); }
	inline MonsterController_t3352166224 * get_monster_5() const { return ___monster_5; }
	inline MonsterController_t3352166224 ** get_address_of_monster_5() { return &___monster_5; }
	inline void set_monster_5(MonsterController_t3352166224 * value)
	{
		___monster_5 = value;
		Il2CppCodeGenWriteBarrier((&___monster_5), value);
	}

	inline static int32_t get_offset_of_frozenDisableList_6() { return static_cast<int32_t>(offsetof(CatchSceneController_t4077466895, ___frozenDisableList_6)); }
	inline GameObjectU5BU5D_t3328599146* get_frozenDisableList_6() const { return ___frozenDisableList_6; }
	inline GameObjectU5BU5D_t3328599146** get_address_of_frozenDisableList_6() { return &___frozenDisableList_6; }
	inline void set_frozenDisableList_6(GameObjectU5BU5D_t3328599146* value)
	{
		___frozenDisableList_6 = value;
		Il2CppCodeGenWriteBarrier((&___frozenDisableList_6), value);
	}

	inline static int32_t get_offset_of_frozenEnableList_7() { return static_cast<int32_t>(offsetof(CatchSceneController_t4077466895, ___frozenEnableList_7)); }
	inline GameObjectU5BU5D_t3328599146* get_frozenEnableList_7() const { return ___frozenEnableList_7; }
	inline GameObjectU5BU5D_t3328599146** get_address_of_frozenEnableList_7() { return &___frozenEnableList_7; }
	inline void set_frozenEnableList_7(GameObjectU5BU5D_t3328599146* value)
	{
		___frozenEnableList_7 = value;
		Il2CppCodeGenWriteBarrier((&___frozenEnableList_7), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CATCHSCENECONTROLLER_T4077466895_H
#ifndef CHARACTERGPSCOMPASSCONTROLLER_T2402541944_H
#define CHARACTERGPSCOMPASSCONTROLLER_T2402541944_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// packt.FoodyGO.Controllers.CharacterGPSCompassController
struct  CharacterGPSCompassController_t2402541944  : public MonoBehaviour_t3962482529
{
public:
	// packt.FoodyGO.Services.GPSLocationService packt.FoodyGO.Controllers.CharacterGPSCompassController::gpsLocationService
	GPSLocationService_t3603565903 * ___gpsLocationService_4;
	// System.Double packt.FoodyGO.Controllers.CharacterGPSCompassController::lastTimestamp
	double ___lastTimestamp_5;
	// UnityStandardAssets.Characters.ThirdPerson.ThirdPersonCharacter packt.FoodyGO.Controllers.CharacterGPSCompassController::thirdPersonCharacter
	ThirdPersonCharacter_t1711070432 * ___thirdPersonCharacter_6;
	// UnityEngine.Vector3 packt.FoodyGO.Controllers.CharacterGPSCompassController::target
	Vector3_t3722313464  ___target_7;

public:
	inline static int32_t get_offset_of_gpsLocationService_4() { return static_cast<int32_t>(offsetof(CharacterGPSCompassController_t2402541944, ___gpsLocationService_4)); }
	inline GPSLocationService_t3603565903 * get_gpsLocationService_4() const { return ___gpsLocationService_4; }
	inline GPSLocationService_t3603565903 ** get_address_of_gpsLocationService_4() { return &___gpsLocationService_4; }
	inline void set_gpsLocationService_4(GPSLocationService_t3603565903 * value)
	{
		___gpsLocationService_4 = value;
		Il2CppCodeGenWriteBarrier((&___gpsLocationService_4), value);
	}

	inline static int32_t get_offset_of_lastTimestamp_5() { return static_cast<int32_t>(offsetof(CharacterGPSCompassController_t2402541944, ___lastTimestamp_5)); }
	inline double get_lastTimestamp_5() const { return ___lastTimestamp_5; }
	inline double* get_address_of_lastTimestamp_5() { return &___lastTimestamp_5; }
	inline void set_lastTimestamp_5(double value)
	{
		___lastTimestamp_5 = value;
	}

	inline static int32_t get_offset_of_thirdPersonCharacter_6() { return static_cast<int32_t>(offsetof(CharacterGPSCompassController_t2402541944, ___thirdPersonCharacter_6)); }
	inline ThirdPersonCharacter_t1711070432 * get_thirdPersonCharacter_6() const { return ___thirdPersonCharacter_6; }
	inline ThirdPersonCharacter_t1711070432 ** get_address_of_thirdPersonCharacter_6() { return &___thirdPersonCharacter_6; }
	inline void set_thirdPersonCharacter_6(ThirdPersonCharacter_t1711070432 * value)
	{
		___thirdPersonCharacter_6 = value;
		Il2CppCodeGenWriteBarrier((&___thirdPersonCharacter_6), value);
	}

	inline static int32_t get_offset_of_target_7() { return static_cast<int32_t>(offsetof(CharacterGPSCompassController_t2402541944, ___target_7)); }
	inline Vector3_t3722313464  get_target_7() const { return ___target_7; }
	inline Vector3_t3722313464 * get_address_of_target_7() { return &___target_7; }
	inline void set_target_7(Vector3_t3722313464  value)
	{
		___target_7 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CHARACTERGPSCOMPASSCONTROLLER_T2402541944_H
#ifndef MONSTERCONTROLLER_T3352166224_H
#define MONSTERCONTROLLER_T3352166224_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// packt.FoodyGO.Controllers.MonsterController
struct  MonsterController_t3352166224  : public MonoBehaviour_t3962482529
{
public:
	// packt.FoodyGO.Mapping.MapLocation packt.FoodyGO.Controllers.MonsterController::location
	MapLocation_t4058015206 * ___location_4;
	// packt.FoodyGO.Services.MonsterService packt.FoodyGO.Controllers.MonsterController::monsterService
	MonsterService_t815911722 * ___monsterService_5;
	// packt.FoodyGO.Database.Monster packt.FoodyGO.Controllers.MonsterController::monsterDataObject
	Monster_t1773341114 * ___monsterDataObject_6;
	// UnityEngine.Animation packt.FoodyGO.Controllers.MonsterController::anim
	Animation_t3648466861 * ___anim_7;
	// System.Single packt.FoodyGO.Controllers.MonsterController::animationSpeed
	float ___animationSpeed_8;
	// System.Single packt.FoodyGO.Controllers.MonsterController::monsterWarmRate
	float ___monsterWarmRate_9;

public:
	inline static int32_t get_offset_of_location_4() { return static_cast<int32_t>(offsetof(MonsterController_t3352166224, ___location_4)); }
	inline MapLocation_t4058015206 * get_location_4() const { return ___location_4; }
	inline MapLocation_t4058015206 ** get_address_of_location_4() { return &___location_4; }
	inline void set_location_4(MapLocation_t4058015206 * value)
	{
		___location_4 = value;
		Il2CppCodeGenWriteBarrier((&___location_4), value);
	}

	inline static int32_t get_offset_of_monsterService_5() { return static_cast<int32_t>(offsetof(MonsterController_t3352166224, ___monsterService_5)); }
	inline MonsterService_t815911722 * get_monsterService_5() const { return ___monsterService_5; }
	inline MonsterService_t815911722 ** get_address_of_monsterService_5() { return &___monsterService_5; }
	inline void set_monsterService_5(MonsterService_t815911722 * value)
	{
		___monsterService_5 = value;
		Il2CppCodeGenWriteBarrier((&___monsterService_5), value);
	}

	inline static int32_t get_offset_of_monsterDataObject_6() { return static_cast<int32_t>(offsetof(MonsterController_t3352166224, ___monsterDataObject_6)); }
	inline Monster_t1773341114 * get_monsterDataObject_6() const { return ___monsterDataObject_6; }
	inline Monster_t1773341114 ** get_address_of_monsterDataObject_6() { return &___monsterDataObject_6; }
	inline void set_monsterDataObject_6(Monster_t1773341114 * value)
	{
		___monsterDataObject_6 = value;
		Il2CppCodeGenWriteBarrier((&___monsterDataObject_6), value);
	}

	inline static int32_t get_offset_of_anim_7() { return static_cast<int32_t>(offsetof(MonsterController_t3352166224, ___anim_7)); }
	inline Animation_t3648466861 * get_anim_7() const { return ___anim_7; }
	inline Animation_t3648466861 ** get_address_of_anim_7() { return &___anim_7; }
	inline void set_anim_7(Animation_t3648466861 * value)
	{
		___anim_7 = value;
		Il2CppCodeGenWriteBarrier((&___anim_7), value);
	}

	inline static int32_t get_offset_of_animationSpeed_8() { return static_cast<int32_t>(offsetof(MonsterController_t3352166224, ___animationSpeed_8)); }
	inline float get_animationSpeed_8() const { return ___animationSpeed_8; }
	inline float* get_address_of_animationSpeed_8() { return &___animationSpeed_8; }
	inline void set_animationSpeed_8(float value)
	{
		___animationSpeed_8 = value;
	}

	inline static int32_t get_offset_of_monsterWarmRate_9() { return static_cast<int32_t>(offsetof(MonsterController_t3352166224, ___monsterWarmRate_9)); }
	inline float get_monsterWarmRate_9() const { return ___monsterWarmRate_9; }
	inline float* get_address_of_monsterWarmRate_9() { return &___monsterWarmRate_9; }
	inline void set_monsterWarmRate_9(float value)
	{
		___monsterWarmRate_9 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MONSTERCONTROLLER_T3352166224_H
#ifndef SINGLETON_1_T2869849822_H
#define SINGLETON_1_T2869849822_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// packt.FoodyGO.Managers.Singleton`1<packt.FoodyGO.Managers.GameManager>
struct  Singleton_1_t2869849822  : public MonoBehaviour_t3962482529
{
public:

public:
};

struct Singleton_1_t2869849822_StaticFields
{
public:
	// T packt.FoodyGO.Managers.Singleton`1::_instance
	GameManager_t3352243792 * ____instance_4;

public:
	inline static int32_t get_offset_of__instance_4() { return static_cast<int32_t>(offsetof(Singleton_1_t2869849822_StaticFields, ____instance_4)); }
	inline GameManager_t3352243792 * get__instance_4() const { return ____instance_4; }
	inline GameManager_t3352243792 ** get_address_of__instance_4() { return &____instance_4; }
	inline void set__instance_4(GameManager_t3352243792 * value)
	{
		____instance_4 = value;
		Il2CppCodeGenWriteBarrier((&____instance_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SINGLETON_1_T2869849822_H
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
	// packt.FoodyGO.Mapping.MapLocation packt.FoodyGO.Mapping.GoogleMapTile::worldCenterLocation
	MapLocation_t4058015206 * ___worldCenterLocation_9;
	// UnityEngine.Vector2 packt.FoodyGO.Mapping.GoogleMapTile::TileOffset
	Vector2_t2156229523  ___TileOffset_10;
	// packt.FoodyGO.Mapping.MapLocation packt.FoodyGO.Mapping.GoogleMapTile::tileCenterLocation
	MapLocation_t4058015206 * ___tileCenterLocation_11;
	// UnityEngine.Vector2 packt.FoodyGO.Mapping.GoogleMapTile::TopLeftCorner
	Vector2_t2156229523  ___TopLeftCorner_12;
	// UnityEngine.Vector2 packt.FoodyGO.Mapping.GoogleMapTile::BottomRightCorner
	Vector2_t2156229523  ___BottomRightCorner_13;
	// packt.FoodyGO.Services.GPSLocationService packt.FoodyGO.Mapping.GoogleMapTile::gpsLocationService
	GPSLocationService_t3603565903 * ___gpsLocationService_14;
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

	inline static int32_t get_offset_of_worldCenterLocation_9() { return static_cast<int32_t>(offsetof(GoogleMapTile_t1047440669, ___worldCenterLocation_9)); }
	inline MapLocation_t4058015206 * get_worldCenterLocation_9() const { return ___worldCenterLocation_9; }
	inline MapLocation_t4058015206 ** get_address_of_worldCenterLocation_9() { return &___worldCenterLocation_9; }
	inline void set_worldCenterLocation_9(MapLocation_t4058015206 * value)
	{
		___worldCenterLocation_9 = value;
		Il2CppCodeGenWriteBarrier((&___worldCenterLocation_9), value);
	}

	inline static int32_t get_offset_of_TileOffset_10() { return static_cast<int32_t>(offsetof(GoogleMapTile_t1047440669, ___TileOffset_10)); }
	inline Vector2_t2156229523  get_TileOffset_10() const { return ___TileOffset_10; }
	inline Vector2_t2156229523 * get_address_of_TileOffset_10() { return &___TileOffset_10; }
	inline void set_TileOffset_10(Vector2_t2156229523  value)
	{
		___TileOffset_10 = value;
	}

	inline static int32_t get_offset_of_tileCenterLocation_11() { return static_cast<int32_t>(offsetof(GoogleMapTile_t1047440669, ___tileCenterLocation_11)); }
	inline MapLocation_t4058015206 * get_tileCenterLocation_11() const { return ___tileCenterLocation_11; }
	inline MapLocation_t4058015206 ** get_address_of_tileCenterLocation_11() { return &___tileCenterLocation_11; }
	inline void set_tileCenterLocation_11(MapLocation_t4058015206 * value)
	{
		___tileCenterLocation_11 = value;
		Il2CppCodeGenWriteBarrier((&___tileCenterLocation_11), value);
	}

	inline static int32_t get_offset_of_TopLeftCorner_12() { return static_cast<int32_t>(offsetof(GoogleMapTile_t1047440669, ___TopLeftCorner_12)); }
	inline Vector2_t2156229523  get_TopLeftCorner_12() const { return ___TopLeftCorner_12; }
	inline Vector2_t2156229523 * get_address_of_TopLeftCorner_12() { return &___TopLeftCorner_12; }
	inline void set_TopLeftCorner_12(Vector2_t2156229523  value)
	{
		___TopLeftCorner_12 = value;
	}

	inline static int32_t get_offset_of_BottomRightCorner_13() { return static_cast<int32_t>(offsetof(GoogleMapTile_t1047440669, ___BottomRightCorner_13)); }
	inline Vector2_t2156229523  get_BottomRightCorner_13() const { return ___BottomRightCorner_13; }
	inline Vector2_t2156229523 * get_address_of_BottomRightCorner_13() { return &___BottomRightCorner_13; }
	inline void set_BottomRightCorner_13(Vector2_t2156229523  value)
	{
		___BottomRightCorner_13 = value;
	}

	inline static int32_t get_offset_of_gpsLocationService_14() { return static_cast<int32_t>(offsetof(GoogleMapTile_t1047440669, ___gpsLocationService_14)); }
	inline GPSLocationService_t3603565903 * get_gpsLocationService_14() const { return ___gpsLocationService_14; }
	inline GPSLocationService_t3603565903 ** get_address_of_gpsLocationService_14() { return &___gpsLocationService_14; }
	inline void set_gpsLocationService_14(GPSLocationService_t3603565903 * value)
	{
		___gpsLocationService_14 = value;
		Il2CppCodeGenWriteBarrier((&___gpsLocationService_14), value);
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
#ifndef COLLISIONACTION_T3868143941_H
#define COLLISIONACTION_T3868143941_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// packt.FoodyGO.PhysicsExt.CollisionAction
struct  CollisionAction_t3868143941  : public MonoBehaviour_t3962482529
{
public:
	// packt.FoodyGO.PhysicsExt.CollisionReaction[] packt.FoodyGO.PhysicsExt.CollisionAction::reactions
	CollisionReactionU5BU5D_t2532295519* ___reactions_4;
	// System.Boolean packt.FoodyGO.PhysicsExt.CollisionAction::disarmed
	bool ___disarmed_5;

public:
	inline static int32_t get_offset_of_reactions_4() { return static_cast<int32_t>(offsetof(CollisionAction_t3868143941, ___reactions_4)); }
	inline CollisionReactionU5BU5D_t2532295519* get_reactions_4() const { return ___reactions_4; }
	inline CollisionReactionU5BU5D_t2532295519** get_address_of_reactions_4() { return &___reactions_4; }
	inline void set_reactions_4(CollisionReactionU5BU5D_t2532295519* value)
	{
		___reactions_4 = value;
		Il2CppCodeGenWriteBarrier((&___reactions_4), value);
	}

	inline static int32_t get_offset_of_disarmed_5() { return static_cast<int32_t>(offsetof(CollisionAction_t3868143941, ___disarmed_5)); }
	inline bool get_disarmed_5() const { return ___disarmed_5; }
	inline bool* get_address_of_disarmed_5() { return &___disarmed_5; }
	inline void set_disarmed_5(bool value)
	{
		___disarmed_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COLLISIONACTION_T3868143941_H
#ifndef COLLISIONREACTION_T3737494906_H
#define COLLISIONREACTION_T3737494906_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// packt.FoodyGO.PhysicsExt.CollisionReaction
struct  CollisionReaction_t3737494906  : public MonoBehaviour_t3962482529
{
public:
	// System.String packt.FoodyGO.PhysicsExt.CollisionReaction::collisionObjectName
	String_t* ___collisionObjectName_4;
	// packt.FoodyGO.PhysicsExt.CollisionEvent packt.FoodyGO.PhysicsExt.CollisionReaction::collisionEvent
	CollisionEvent_t2787779977 * ___collisionEvent_5;
	// UnityEngine.Transform packt.FoodyGO.PhysicsExt.CollisionReaction::particlePrefab
	Transform_t3600365921 * ___particlePrefab_6;
	// System.Single packt.FoodyGO.PhysicsExt.CollisionReaction::destroyParticleDelaySeconds
	float ___destroyParticleDelaySeconds_7;
	// System.Boolean packt.FoodyGO.PhysicsExt.CollisionReaction::destroyObject
	bool ___destroyObject_8;
	// System.Single packt.FoodyGO.PhysicsExt.CollisionReaction::destroyObjectDelaySeconds
	float ___destroyObjectDelaySeconds_9;

public:
	inline static int32_t get_offset_of_collisionObjectName_4() { return static_cast<int32_t>(offsetof(CollisionReaction_t3737494906, ___collisionObjectName_4)); }
	inline String_t* get_collisionObjectName_4() const { return ___collisionObjectName_4; }
	inline String_t** get_address_of_collisionObjectName_4() { return &___collisionObjectName_4; }
	inline void set_collisionObjectName_4(String_t* value)
	{
		___collisionObjectName_4 = value;
		Il2CppCodeGenWriteBarrier((&___collisionObjectName_4), value);
	}

	inline static int32_t get_offset_of_collisionEvent_5() { return static_cast<int32_t>(offsetof(CollisionReaction_t3737494906, ___collisionEvent_5)); }
	inline CollisionEvent_t2787779977 * get_collisionEvent_5() const { return ___collisionEvent_5; }
	inline CollisionEvent_t2787779977 ** get_address_of_collisionEvent_5() { return &___collisionEvent_5; }
	inline void set_collisionEvent_5(CollisionEvent_t2787779977 * value)
	{
		___collisionEvent_5 = value;
		Il2CppCodeGenWriteBarrier((&___collisionEvent_5), value);
	}

	inline static int32_t get_offset_of_particlePrefab_6() { return static_cast<int32_t>(offsetof(CollisionReaction_t3737494906, ___particlePrefab_6)); }
	inline Transform_t3600365921 * get_particlePrefab_6() const { return ___particlePrefab_6; }
	inline Transform_t3600365921 ** get_address_of_particlePrefab_6() { return &___particlePrefab_6; }
	inline void set_particlePrefab_6(Transform_t3600365921 * value)
	{
		___particlePrefab_6 = value;
		Il2CppCodeGenWriteBarrier((&___particlePrefab_6), value);
	}

	inline static int32_t get_offset_of_destroyParticleDelaySeconds_7() { return static_cast<int32_t>(offsetof(CollisionReaction_t3737494906, ___destroyParticleDelaySeconds_7)); }
	inline float get_destroyParticleDelaySeconds_7() const { return ___destroyParticleDelaySeconds_7; }
	inline float* get_address_of_destroyParticleDelaySeconds_7() { return &___destroyParticleDelaySeconds_7; }
	inline void set_destroyParticleDelaySeconds_7(float value)
	{
		___destroyParticleDelaySeconds_7 = value;
	}

	inline static int32_t get_offset_of_destroyObject_8() { return static_cast<int32_t>(offsetof(CollisionReaction_t3737494906, ___destroyObject_8)); }
	inline bool get_destroyObject_8() const { return ___destroyObject_8; }
	inline bool* get_address_of_destroyObject_8() { return &___destroyObject_8; }
	inline void set_destroyObject_8(bool value)
	{
		___destroyObject_8 = value;
	}

	inline static int32_t get_offset_of_destroyObjectDelaySeconds_9() { return static_cast<int32_t>(offsetof(CollisionReaction_t3737494906, ___destroyObjectDelaySeconds_9)); }
	inline float get_destroyObjectDelaySeconds_9() const { return ___destroyObjectDelaySeconds_9; }
	inline float* get_address_of_destroyObjectDelaySeconds_9() { return &___destroyObjectDelaySeconds_9; }
	inline void set_destroyObjectDelaySeconds_9(float value)
	{
		___destroyObjectDelaySeconds_9 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COLLISIONREACTION_T3737494906_H
#ifndef GPSLOCATIONSERVICE_T3603565903_H
#define GPSLOCATIONSERVICE_T3603565903_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// packt.FoodyGO.Services.GPSLocationService
struct  GPSLocationService_t3603565903  : public MonoBehaviour_t3962482529
{
public:
	// packt.FoodyGO.Services.GPSLocationService/OnRedrawEvent packt.FoodyGO.Services.GPSLocationService::OnMapRedraw
	OnRedrawEvent_t4144385014 * ___OnMapRedraw_4;
	// System.Single packt.FoodyGO.Services.GPSLocationService::DesiredAccuracyInMeters
	float ___DesiredAccuracyInMeters_5;
	// System.Single packt.FoodyGO.Services.GPSLocationService::UpdateAccuracyInMeters
	float ___UpdateAccuracyInMeters_6;
	// System.Int32 packt.FoodyGO.Services.GPSLocationService::MapTileScale
	int32_t ___MapTileScale_7;
	// System.Int32 packt.FoodyGO.Services.GPSLocationService::MapTileSizePixels
	int32_t ___MapTileSizePixels_8;
	// System.Int32 packt.FoodyGO.Services.GPSLocationService::MapTileZoomLevel
	int32_t ___MapTileZoomLevel_9;
	// System.Boolean packt.FoodyGO.Services.GPSLocationService::Simulating
	bool ___Simulating_10;
	// packt.FoodyGO.Mapping.MapLocation packt.FoodyGO.Services.GPSLocationService::StartCoordinates
	MapLocation_t4058015206 * ___StartCoordinates_11;
	// System.Single packt.FoodyGO.Services.GPSLocationService::Rate
	float ___Rate_12;
	// UnityEngine.Vector2[] packt.FoodyGO.Services.GPSLocationService::SimulationOffsets
	Vector2U5BU5D_t1457185986* ___SimulationOffsets_13;
	// System.Int32 packt.FoodyGO.Services.GPSLocationService::simulationIndex
	int32_t ___simulationIndex_14;
	// System.Boolean packt.FoodyGO.Services.GPSLocationService::IsServiceStarted
	bool ___IsServiceStarted_15;
	// System.Single packt.FoodyGO.Services.GPSLocationService::Latitude
	float ___Latitude_16;
	// System.Single packt.FoodyGO.Services.GPSLocationService::Longitude
	float ___Longitude_17;
	// System.Single packt.FoodyGO.Services.GPSLocationService::Altitude
	float ___Altitude_18;
	// System.Single packt.FoodyGO.Services.GPSLocationService::Accuracy
	float ___Accuracy_19;
	// System.Double packt.FoodyGO.Services.GPSLocationService::Timestamp
	double ___Timestamp_20;
	// System.Double packt.FoodyGO.Services.GPSLocationService::PlayerTimestamp
	double ___PlayerTimestamp_21;
	// packt.FoodyGO.Mapping.MapLocation packt.FoodyGO.Services.GPSLocationService::mapCenter
	MapLocation_t4058015206 * ___mapCenter_22;
	// packt.FoodyGO.Mapping.MapEnvelope packt.FoodyGO.Services.GPSLocationService::mapEnvelope
	MapEnvelope_t3509470862 * ___mapEnvelope_23;
	// UnityEngine.Vector3 packt.FoodyGO.Services.GPSLocationService::mapWorldCenter
	Vector3_t3722313464  ___mapWorldCenter_24;
	// UnityEngine.Vector2 packt.FoodyGO.Services.GPSLocationService::mapScale
	Vector2_t2156229523  ___mapScale_25;

public:
	inline static int32_t get_offset_of_OnMapRedraw_4() { return static_cast<int32_t>(offsetof(GPSLocationService_t3603565903, ___OnMapRedraw_4)); }
	inline OnRedrawEvent_t4144385014 * get_OnMapRedraw_4() const { return ___OnMapRedraw_4; }
	inline OnRedrawEvent_t4144385014 ** get_address_of_OnMapRedraw_4() { return &___OnMapRedraw_4; }
	inline void set_OnMapRedraw_4(OnRedrawEvent_t4144385014 * value)
	{
		___OnMapRedraw_4 = value;
		Il2CppCodeGenWriteBarrier((&___OnMapRedraw_4), value);
	}

	inline static int32_t get_offset_of_DesiredAccuracyInMeters_5() { return static_cast<int32_t>(offsetof(GPSLocationService_t3603565903, ___DesiredAccuracyInMeters_5)); }
	inline float get_DesiredAccuracyInMeters_5() const { return ___DesiredAccuracyInMeters_5; }
	inline float* get_address_of_DesiredAccuracyInMeters_5() { return &___DesiredAccuracyInMeters_5; }
	inline void set_DesiredAccuracyInMeters_5(float value)
	{
		___DesiredAccuracyInMeters_5 = value;
	}

	inline static int32_t get_offset_of_UpdateAccuracyInMeters_6() { return static_cast<int32_t>(offsetof(GPSLocationService_t3603565903, ___UpdateAccuracyInMeters_6)); }
	inline float get_UpdateAccuracyInMeters_6() const { return ___UpdateAccuracyInMeters_6; }
	inline float* get_address_of_UpdateAccuracyInMeters_6() { return &___UpdateAccuracyInMeters_6; }
	inline void set_UpdateAccuracyInMeters_6(float value)
	{
		___UpdateAccuracyInMeters_6 = value;
	}

	inline static int32_t get_offset_of_MapTileScale_7() { return static_cast<int32_t>(offsetof(GPSLocationService_t3603565903, ___MapTileScale_7)); }
	inline int32_t get_MapTileScale_7() const { return ___MapTileScale_7; }
	inline int32_t* get_address_of_MapTileScale_7() { return &___MapTileScale_7; }
	inline void set_MapTileScale_7(int32_t value)
	{
		___MapTileScale_7 = value;
	}

	inline static int32_t get_offset_of_MapTileSizePixels_8() { return static_cast<int32_t>(offsetof(GPSLocationService_t3603565903, ___MapTileSizePixels_8)); }
	inline int32_t get_MapTileSizePixels_8() const { return ___MapTileSizePixels_8; }
	inline int32_t* get_address_of_MapTileSizePixels_8() { return &___MapTileSizePixels_8; }
	inline void set_MapTileSizePixels_8(int32_t value)
	{
		___MapTileSizePixels_8 = value;
	}

	inline static int32_t get_offset_of_MapTileZoomLevel_9() { return static_cast<int32_t>(offsetof(GPSLocationService_t3603565903, ___MapTileZoomLevel_9)); }
	inline int32_t get_MapTileZoomLevel_9() const { return ___MapTileZoomLevel_9; }
	inline int32_t* get_address_of_MapTileZoomLevel_9() { return &___MapTileZoomLevel_9; }
	inline void set_MapTileZoomLevel_9(int32_t value)
	{
		___MapTileZoomLevel_9 = value;
	}

	inline static int32_t get_offset_of_Simulating_10() { return static_cast<int32_t>(offsetof(GPSLocationService_t3603565903, ___Simulating_10)); }
	inline bool get_Simulating_10() const { return ___Simulating_10; }
	inline bool* get_address_of_Simulating_10() { return &___Simulating_10; }
	inline void set_Simulating_10(bool value)
	{
		___Simulating_10 = value;
	}

	inline static int32_t get_offset_of_StartCoordinates_11() { return static_cast<int32_t>(offsetof(GPSLocationService_t3603565903, ___StartCoordinates_11)); }
	inline MapLocation_t4058015206 * get_StartCoordinates_11() const { return ___StartCoordinates_11; }
	inline MapLocation_t4058015206 ** get_address_of_StartCoordinates_11() { return &___StartCoordinates_11; }
	inline void set_StartCoordinates_11(MapLocation_t4058015206 * value)
	{
		___StartCoordinates_11 = value;
		Il2CppCodeGenWriteBarrier((&___StartCoordinates_11), value);
	}

	inline static int32_t get_offset_of_Rate_12() { return static_cast<int32_t>(offsetof(GPSLocationService_t3603565903, ___Rate_12)); }
	inline float get_Rate_12() const { return ___Rate_12; }
	inline float* get_address_of_Rate_12() { return &___Rate_12; }
	inline void set_Rate_12(float value)
	{
		___Rate_12 = value;
	}

	inline static int32_t get_offset_of_SimulationOffsets_13() { return static_cast<int32_t>(offsetof(GPSLocationService_t3603565903, ___SimulationOffsets_13)); }
	inline Vector2U5BU5D_t1457185986* get_SimulationOffsets_13() const { return ___SimulationOffsets_13; }
	inline Vector2U5BU5D_t1457185986** get_address_of_SimulationOffsets_13() { return &___SimulationOffsets_13; }
	inline void set_SimulationOffsets_13(Vector2U5BU5D_t1457185986* value)
	{
		___SimulationOffsets_13 = value;
		Il2CppCodeGenWriteBarrier((&___SimulationOffsets_13), value);
	}

	inline static int32_t get_offset_of_simulationIndex_14() { return static_cast<int32_t>(offsetof(GPSLocationService_t3603565903, ___simulationIndex_14)); }
	inline int32_t get_simulationIndex_14() const { return ___simulationIndex_14; }
	inline int32_t* get_address_of_simulationIndex_14() { return &___simulationIndex_14; }
	inline void set_simulationIndex_14(int32_t value)
	{
		___simulationIndex_14 = value;
	}

	inline static int32_t get_offset_of_IsServiceStarted_15() { return static_cast<int32_t>(offsetof(GPSLocationService_t3603565903, ___IsServiceStarted_15)); }
	inline bool get_IsServiceStarted_15() const { return ___IsServiceStarted_15; }
	inline bool* get_address_of_IsServiceStarted_15() { return &___IsServiceStarted_15; }
	inline void set_IsServiceStarted_15(bool value)
	{
		___IsServiceStarted_15 = value;
	}

	inline static int32_t get_offset_of_Latitude_16() { return static_cast<int32_t>(offsetof(GPSLocationService_t3603565903, ___Latitude_16)); }
	inline float get_Latitude_16() const { return ___Latitude_16; }
	inline float* get_address_of_Latitude_16() { return &___Latitude_16; }
	inline void set_Latitude_16(float value)
	{
		___Latitude_16 = value;
	}

	inline static int32_t get_offset_of_Longitude_17() { return static_cast<int32_t>(offsetof(GPSLocationService_t3603565903, ___Longitude_17)); }
	inline float get_Longitude_17() const { return ___Longitude_17; }
	inline float* get_address_of_Longitude_17() { return &___Longitude_17; }
	inline void set_Longitude_17(float value)
	{
		___Longitude_17 = value;
	}

	inline static int32_t get_offset_of_Altitude_18() { return static_cast<int32_t>(offsetof(GPSLocationService_t3603565903, ___Altitude_18)); }
	inline float get_Altitude_18() const { return ___Altitude_18; }
	inline float* get_address_of_Altitude_18() { return &___Altitude_18; }
	inline void set_Altitude_18(float value)
	{
		___Altitude_18 = value;
	}

	inline static int32_t get_offset_of_Accuracy_19() { return static_cast<int32_t>(offsetof(GPSLocationService_t3603565903, ___Accuracy_19)); }
	inline float get_Accuracy_19() const { return ___Accuracy_19; }
	inline float* get_address_of_Accuracy_19() { return &___Accuracy_19; }
	inline void set_Accuracy_19(float value)
	{
		___Accuracy_19 = value;
	}

	inline static int32_t get_offset_of_Timestamp_20() { return static_cast<int32_t>(offsetof(GPSLocationService_t3603565903, ___Timestamp_20)); }
	inline double get_Timestamp_20() const { return ___Timestamp_20; }
	inline double* get_address_of_Timestamp_20() { return &___Timestamp_20; }
	inline void set_Timestamp_20(double value)
	{
		___Timestamp_20 = value;
	}

	inline static int32_t get_offset_of_PlayerTimestamp_21() { return static_cast<int32_t>(offsetof(GPSLocationService_t3603565903, ___PlayerTimestamp_21)); }
	inline double get_PlayerTimestamp_21() const { return ___PlayerTimestamp_21; }
	inline double* get_address_of_PlayerTimestamp_21() { return &___PlayerTimestamp_21; }
	inline void set_PlayerTimestamp_21(double value)
	{
		___PlayerTimestamp_21 = value;
	}

	inline static int32_t get_offset_of_mapCenter_22() { return static_cast<int32_t>(offsetof(GPSLocationService_t3603565903, ___mapCenter_22)); }
	inline MapLocation_t4058015206 * get_mapCenter_22() const { return ___mapCenter_22; }
	inline MapLocation_t4058015206 ** get_address_of_mapCenter_22() { return &___mapCenter_22; }
	inline void set_mapCenter_22(MapLocation_t4058015206 * value)
	{
		___mapCenter_22 = value;
		Il2CppCodeGenWriteBarrier((&___mapCenter_22), value);
	}

	inline static int32_t get_offset_of_mapEnvelope_23() { return static_cast<int32_t>(offsetof(GPSLocationService_t3603565903, ___mapEnvelope_23)); }
	inline MapEnvelope_t3509470862 * get_mapEnvelope_23() const { return ___mapEnvelope_23; }
	inline MapEnvelope_t3509470862 ** get_address_of_mapEnvelope_23() { return &___mapEnvelope_23; }
	inline void set_mapEnvelope_23(MapEnvelope_t3509470862 * value)
	{
		___mapEnvelope_23 = value;
		Il2CppCodeGenWriteBarrier((&___mapEnvelope_23), value);
	}

	inline static int32_t get_offset_of_mapWorldCenter_24() { return static_cast<int32_t>(offsetof(GPSLocationService_t3603565903, ___mapWorldCenter_24)); }
	inline Vector3_t3722313464  get_mapWorldCenter_24() const { return ___mapWorldCenter_24; }
	inline Vector3_t3722313464 * get_address_of_mapWorldCenter_24() { return &___mapWorldCenter_24; }
	inline void set_mapWorldCenter_24(Vector3_t3722313464  value)
	{
		___mapWorldCenter_24 = value;
	}

	inline static int32_t get_offset_of_mapScale_25() { return static_cast<int32_t>(offsetof(GPSLocationService_t3603565903, ___mapScale_25)); }
	inline Vector2_t2156229523  get_mapScale_25() const { return ___mapScale_25; }
	inline Vector2_t2156229523 * get_address_of_mapScale_25() { return &___mapScale_25; }
	inline void set_mapScale_25(Vector2_t2156229523  value)
	{
		___mapScale_25 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GPSLOCATIONSERVICE_T3603565903_H
#ifndef MONSTERSERVICE_T815911722_H
#define MONSTERSERVICE_T815911722_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// packt.FoodyGO.Services.MonsterService
struct  MonsterService_t815911722  : public MonoBehaviour_t3962482529
{
public:
	// packt.FoodyGO.Services.GPSLocationService packt.FoodyGO.Services.MonsterService::gpsLocationService
	GPSLocationService_t3603565903 * ___gpsLocationService_4;
	// UnityEngine.GameObject packt.FoodyGO.Services.MonsterService::monsterPrefab
	GameObject_t1113636619 * ___monsterPrefab_5;
	// System.Double packt.FoodyGO.Services.MonsterService::lastTimestamp
	double ___lastTimestamp_6;
	// System.Single packt.FoodyGO.Services.MonsterService::monsterSpawnRate
	float ___monsterSpawnRate_7;
	// System.Single packt.FoodyGO.Services.MonsterService::latitudeSpawnOffset
	float ___latitudeSpawnOffset_8;
	// System.Single packt.FoodyGO.Services.MonsterService::longitudeSpawnOffset
	float ___longitudeSpawnOffset_9;
	// System.Single packt.FoodyGO.Services.MonsterService::monsterHearDistance
	float ___monsterHearDistance_10;
	// System.Single packt.FoodyGO.Services.MonsterService::monsterSeeDistance
	float ___monsterSeeDistance_11;
	// System.Single packt.FoodyGO.Services.MonsterService::monsterLifetimeSeconds
	float ___monsterLifetimeSeconds_12;
	// System.Single packt.FoodyGO.Services.MonsterService::oneStepRange
	float ___oneStepRange_13;
	// System.Single packt.FoodyGO.Services.MonsterService::twoStepRange
	float ___twoStepRange_14;
	// System.Single packt.FoodyGO.Services.MonsterService::threeStepRange
	float ___threeStepRange_15;
	// System.Collections.Generic.List`1<packt.FoodyGO.Database.Monster> packt.FoodyGO.Services.MonsterService::monsters
	List_1_t3245415856 * ___monsters_16;

public:
	inline static int32_t get_offset_of_gpsLocationService_4() { return static_cast<int32_t>(offsetof(MonsterService_t815911722, ___gpsLocationService_4)); }
	inline GPSLocationService_t3603565903 * get_gpsLocationService_4() const { return ___gpsLocationService_4; }
	inline GPSLocationService_t3603565903 ** get_address_of_gpsLocationService_4() { return &___gpsLocationService_4; }
	inline void set_gpsLocationService_4(GPSLocationService_t3603565903 * value)
	{
		___gpsLocationService_4 = value;
		Il2CppCodeGenWriteBarrier((&___gpsLocationService_4), value);
	}

	inline static int32_t get_offset_of_monsterPrefab_5() { return static_cast<int32_t>(offsetof(MonsterService_t815911722, ___monsterPrefab_5)); }
	inline GameObject_t1113636619 * get_monsterPrefab_5() const { return ___monsterPrefab_5; }
	inline GameObject_t1113636619 ** get_address_of_monsterPrefab_5() { return &___monsterPrefab_5; }
	inline void set_monsterPrefab_5(GameObject_t1113636619 * value)
	{
		___monsterPrefab_5 = value;
		Il2CppCodeGenWriteBarrier((&___monsterPrefab_5), value);
	}

	inline static int32_t get_offset_of_lastTimestamp_6() { return static_cast<int32_t>(offsetof(MonsterService_t815911722, ___lastTimestamp_6)); }
	inline double get_lastTimestamp_6() const { return ___lastTimestamp_6; }
	inline double* get_address_of_lastTimestamp_6() { return &___lastTimestamp_6; }
	inline void set_lastTimestamp_6(double value)
	{
		___lastTimestamp_6 = value;
	}

	inline static int32_t get_offset_of_monsterSpawnRate_7() { return static_cast<int32_t>(offsetof(MonsterService_t815911722, ___monsterSpawnRate_7)); }
	inline float get_monsterSpawnRate_7() const { return ___monsterSpawnRate_7; }
	inline float* get_address_of_monsterSpawnRate_7() { return &___monsterSpawnRate_7; }
	inline void set_monsterSpawnRate_7(float value)
	{
		___monsterSpawnRate_7 = value;
	}

	inline static int32_t get_offset_of_latitudeSpawnOffset_8() { return static_cast<int32_t>(offsetof(MonsterService_t815911722, ___latitudeSpawnOffset_8)); }
	inline float get_latitudeSpawnOffset_8() const { return ___latitudeSpawnOffset_8; }
	inline float* get_address_of_latitudeSpawnOffset_8() { return &___latitudeSpawnOffset_8; }
	inline void set_latitudeSpawnOffset_8(float value)
	{
		___latitudeSpawnOffset_8 = value;
	}

	inline static int32_t get_offset_of_longitudeSpawnOffset_9() { return static_cast<int32_t>(offsetof(MonsterService_t815911722, ___longitudeSpawnOffset_9)); }
	inline float get_longitudeSpawnOffset_9() const { return ___longitudeSpawnOffset_9; }
	inline float* get_address_of_longitudeSpawnOffset_9() { return &___longitudeSpawnOffset_9; }
	inline void set_longitudeSpawnOffset_9(float value)
	{
		___longitudeSpawnOffset_9 = value;
	}

	inline static int32_t get_offset_of_monsterHearDistance_10() { return static_cast<int32_t>(offsetof(MonsterService_t815911722, ___monsterHearDistance_10)); }
	inline float get_monsterHearDistance_10() const { return ___monsterHearDistance_10; }
	inline float* get_address_of_monsterHearDistance_10() { return &___monsterHearDistance_10; }
	inline void set_monsterHearDistance_10(float value)
	{
		___monsterHearDistance_10 = value;
	}

	inline static int32_t get_offset_of_monsterSeeDistance_11() { return static_cast<int32_t>(offsetof(MonsterService_t815911722, ___monsterSeeDistance_11)); }
	inline float get_monsterSeeDistance_11() const { return ___monsterSeeDistance_11; }
	inline float* get_address_of_monsterSeeDistance_11() { return &___monsterSeeDistance_11; }
	inline void set_monsterSeeDistance_11(float value)
	{
		___monsterSeeDistance_11 = value;
	}

	inline static int32_t get_offset_of_monsterLifetimeSeconds_12() { return static_cast<int32_t>(offsetof(MonsterService_t815911722, ___monsterLifetimeSeconds_12)); }
	inline float get_monsterLifetimeSeconds_12() const { return ___monsterLifetimeSeconds_12; }
	inline float* get_address_of_monsterLifetimeSeconds_12() { return &___monsterLifetimeSeconds_12; }
	inline void set_monsterLifetimeSeconds_12(float value)
	{
		___monsterLifetimeSeconds_12 = value;
	}

	inline static int32_t get_offset_of_oneStepRange_13() { return static_cast<int32_t>(offsetof(MonsterService_t815911722, ___oneStepRange_13)); }
	inline float get_oneStepRange_13() const { return ___oneStepRange_13; }
	inline float* get_address_of_oneStepRange_13() { return &___oneStepRange_13; }
	inline void set_oneStepRange_13(float value)
	{
		___oneStepRange_13 = value;
	}

	inline static int32_t get_offset_of_twoStepRange_14() { return static_cast<int32_t>(offsetof(MonsterService_t815911722, ___twoStepRange_14)); }
	inline float get_twoStepRange_14() const { return ___twoStepRange_14; }
	inline float* get_address_of_twoStepRange_14() { return &___twoStepRange_14; }
	inline void set_twoStepRange_14(float value)
	{
		___twoStepRange_14 = value;
	}

	inline static int32_t get_offset_of_threeStepRange_15() { return static_cast<int32_t>(offsetof(MonsterService_t815911722, ___threeStepRange_15)); }
	inline float get_threeStepRange_15() const { return ___threeStepRange_15; }
	inline float* get_address_of_threeStepRange_15() { return &___threeStepRange_15; }
	inline void set_threeStepRange_15(float value)
	{
		___threeStepRange_15 = value;
	}

	inline static int32_t get_offset_of_monsters_16() { return static_cast<int32_t>(offsetof(MonsterService_t815911722, ___monsters_16)); }
	inline List_1_t3245415856 * get_monsters_16() const { return ___monsters_16; }
	inline List_1_t3245415856 ** get_address_of_monsters_16() { return &___monsters_16; }
	inline void set_monsters_16(List_1_t3245415856 * value)
	{
		___monsters_16 = value;
		Il2CppCodeGenWriteBarrier((&___monsters_16), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MONSTERSERVICE_T815911722_H
#ifndef CUSTOMTOUCHPAD_T1107529228_H
#define CUSTOMTOUCHPAD_T1107529228_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// packt.FoodyGO.TouchInput.CustomTouchPad
struct  CustomTouchPad_t1107529228  : public MonoBehaviour_t3962482529
{
public:
	// packt.FoodyGO.TouchInput.CustomTouchPad/AxisOption packt.FoodyGO.TouchInput.CustomTouchPad::axesToUse
	int32_t ___axesToUse_4;
	// packt.FoodyGO.TouchInput.CustomTouchPad/ControlStyle packt.FoodyGO.TouchInput.CustomTouchPad::controlStyle
	int32_t ___controlStyle_5;
	// System.String packt.FoodyGO.TouchInput.CustomTouchPad::horizontalAxisName
	String_t* ___horizontalAxisName_6;
	// System.String packt.FoodyGO.TouchInput.CustomTouchPad::verticalAxisName
	String_t* ___verticalAxisName_7;
	// System.Single packt.FoodyGO.TouchInput.CustomTouchPad::Xsensitivity
	float ___Xsensitivity_8;
	// System.Single packt.FoodyGO.TouchInput.CustomTouchPad::Ysensitivity
	float ___Ysensitivity_9;
	// UnityEngine.Vector3 packt.FoodyGO.TouchInput.CustomTouchPad::m_StartPos
	Vector3_t3722313464  ___m_StartPos_10;
	// UnityEngine.Vector2 packt.FoodyGO.TouchInput.CustomTouchPad::m_PreviousDelta
	Vector2_t2156229523  ___m_PreviousDelta_11;
	// UnityEngine.Vector3 packt.FoodyGO.TouchInput.CustomTouchPad::m_JoytickOutput
	Vector3_t3722313464  ___m_JoytickOutput_12;
	// System.Boolean packt.FoodyGO.TouchInput.CustomTouchPad::m_UseX
	bool ___m_UseX_13;
	// System.Boolean packt.FoodyGO.TouchInput.CustomTouchPad::m_UseY
	bool ___m_UseY_14;
	// UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualAxis packt.FoodyGO.TouchInput.CustomTouchPad::m_HorizontalVirtualAxis
	VirtualAxis_t4087348596 * ___m_HorizontalVirtualAxis_15;
	// UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualAxis packt.FoodyGO.TouchInput.CustomTouchPad::m_VerticalVirtualAxis
	VirtualAxis_t4087348596 * ___m_VerticalVirtualAxis_16;
	// System.Boolean packt.FoodyGO.TouchInput.CustomTouchPad::m_Dragging
	bool ___m_Dragging_17;
	// System.Int32 packt.FoodyGO.TouchInput.CustomTouchPad::m_Id
	int32_t ___m_Id_18;
	// UnityEngine.Vector2 packt.FoodyGO.TouchInput.CustomTouchPad::m_PreviousTouchPos
	Vector2_t2156229523  ___m_PreviousTouchPos_19;
	// UnityEngine.Vector3 packt.FoodyGO.TouchInput.CustomTouchPad::m_Center
	Vector3_t3722313464  ___m_Center_20;
	// UnityEngine.UI.Image packt.FoodyGO.TouchInput.CustomTouchPad::m_Image
	Image_t2670269651 * ___m_Image_21;

public:
	inline static int32_t get_offset_of_axesToUse_4() { return static_cast<int32_t>(offsetof(CustomTouchPad_t1107529228, ___axesToUse_4)); }
	inline int32_t get_axesToUse_4() const { return ___axesToUse_4; }
	inline int32_t* get_address_of_axesToUse_4() { return &___axesToUse_4; }
	inline void set_axesToUse_4(int32_t value)
	{
		___axesToUse_4 = value;
	}

	inline static int32_t get_offset_of_controlStyle_5() { return static_cast<int32_t>(offsetof(CustomTouchPad_t1107529228, ___controlStyle_5)); }
	inline int32_t get_controlStyle_5() const { return ___controlStyle_5; }
	inline int32_t* get_address_of_controlStyle_5() { return &___controlStyle_5; }
	inline void set_controlStyle_5(int32_t value)
	{
		___controlStyle_5 = value;
	}

	inline static int32_t get_offset_of_horizontalAxisName_6() { return static_cast<int32_t>(offsetof(CustomTouchPad_t1107529228, ___horizontalAxisName_6)); }
	inline String_t* get_horizontalAxisName_6() const { return ___horizontalAxisName_6; }
	inline String_t** get_address_of_horizontalAxisName_6() { return &___horizontalAxisName_6; }
	inline void set_horizontalAxisName_6(String_t* value)
	{
		___horizontalAxisName_6 = value;
		Il2CppCodeGenWriteBarrier((&___horizontalAxisName_6), value);
	}

	inline static int32_t get_offset_of_verticalAxisName_7() { return static_cast<int32_t>(offsetof(CustomTouchPad_t1107529228, ___verticalAxisName_7)); }
	inline String_t* get_verticalAxisName_7() const { return ___verticalAxisName_7; }
	inline String_t** get_address_of_verticalAxisName_7() { return &___verticalAxisName_7; }
	inline void set_verticalAxisName_7(String_t* value)
	{
		___verticalAxisName_7 = value;
		Il2CppCodeGenWriteBarrier((&___verticalAxisName_7), value);
	}

	inline static int32_t get_offset_of_Xsensitivity_8() { return static_cast<int32_t>(offsetof(CustomTouchPad_t1107529228, ___Xsensitivity_8)); }
	inline float get_Xsensitivity_8() const { return ___Xsensitivity_8; }
	inline float* get_address_of_Xsensitivity_8() { return &___Xsensitivity_8; }
	inline void set_Xsensitivity_8(float value)
	{
		___Xsensitivity_8 = value;
	}

	inline static int32_t get_offset_of_Ysensitivity_9() { return static_cast<int32_t>(offsetof(CustomTouchPad_t1107529228, ___Ysensitivity_9)); }
	inline float get_Ysensitivity_9() const { return ___Ysensitivity_9; }
	inline float* get_address_of_Ysensitivity_9() { return &___Ysensitivity_9; }
	inline void set_Ysensitivity_9(float value)
	{
		___Ysensitivity_9 = value;
	}

	inline static int32_t get_offset_of_m_StartPos_10() { return static_cast<int32_t>(offsetof(CustomTouchPad_t1107529228, ___m_StartPos_10)); }
	inline Vector3_t3722313464  get_m_StartPos_10() const { return ___m_StartPos_10; }
	inline Vector3_t3722313464 * get_address_of_m_StartPos_10() { return &___m_StartPos_10; }
	inline void set_m_StartPos_10(Vector3_t3722313464  value)
	{
		___m_StartPos_10 = value;
	}

	inline static int32_t get_offset_of_m_PreviousDelta_11() { return static_cast<int32_t>(offsetof(CustomTouchPad_t1107529228, ___m_PreviousDelta_11)); }
	inline Vector2_t2156229523  get_m_PreviousDelta_11() const { return ___m_PreviousDelta_11; }
	inline Vector2_t2156229523 * get_address_of_m_PreviousDelta_11() { return &___m_PreviousDelta_11; }
	inline void set_m_PreviousDelta_11(Vector2_t2156229523  value)
	{
		___m_PreviousDelta_11 = value;
	}

	inline static int32_t get_offset_of_m_JoytickOutput_12() { return static_cast<int32_t>(offsetof(CustomTouchPad_t1107529228, ___m_JoytickOutput_12)); }
	inline Vector3_t3722313464  get_m_JoytickOutput_12() const { return ___m_JoytickOutput_12; }
	inline Vector3_t3722313464 * get_address_of_m_JoytickOutput_12() { return &___m_JoytickOutput_12; }
	inline void set_m_JoytickOutput_12(Vector3_t3722313464  value)
	{
		___m_JoytickOutput_12 = value;
	}

	inline static int32_t get_offset_of_m_UseX_13() { return static_cast<int32_t>(offsetof(CustomTouchPad_t1107529228, ___m_UseX_13)); }
	inline bool get_m_UseX_13() const { return ___m_UseX_13; }
	inline bool* get_address_of_m_UseX_13() { return &___m_UseX_13; }
	inline void set_m_UseX_13(bool value)
	{
		___m_UseX_13 = value;
	}

	inline static int32_t get_offset_of_m_UseY_14() { return static_cast<int32_t>(offsetof(CustomTouchPad_t1107529228, ___m_UseY_14)); }
	inline bool get_m_UseY_14() const { return ___m_UseY_14; }
	inline bool* get_address_of_m_UseY_14() { return &___m_UseY_14; }
	inline void set_m_UseY_14(bool value)
	{
		___m_UseY_14 = value;
	}

	inline static int32_t get_offset_of_m_HorizontalVirtualAxis_15() { return static_cast<int32_t>(offsetof(CustomTouchPad_t1107529228, ___m_HorizontalVirtualAxis_15)); }
	inline VirtualAxis_t4087348596 * get_m_HorizontalVirtualAxis_15() const { return ___m_HorizontalVirtualAxis_15; }
	inline VirtualAxis_t4087348596 ** get_address_of_m_HorizontalVirtualAxis_15() { return &___m_HorizontalVirtualAxis_15; }
	inline void set_m_HorizontalVirtualAxis_15(VirtualAxis_t4087348596 * value)
	{
		___m_HorizontalVirtualAxis_15 = value;
		Il2CppCodeGenWriteBarrier((&___m_HorizontalVirtualAxis_15), value);
	}

	inline static int32_t get_offset_of_m_VerticalVirtualAxis_16() { return static_cast<int32_t>(offsetof(CustomTouchPad_t1107529228, ___m_VerticalVirtualAxis_16)); }
	inline VirtualAxis_t4087348596 * get_m_VerticalVirtualAxis_16() const { return ___m_VerticalVirtualAxis_16; }
	inline VirtualAxis_t4087348596 ** get_address_of_m_VerticalVirtualAxis_16() { return &___m_VerticalVirtualAxis_16; }
	inline void set_m_VerticalVirtualAxis_16(VirtualAxis_t4087348596 * value)
	{
		___m_VerticalVirtualAxis_16 = value;
		Il2CppCodeGenWriteBarrier((&___m_VerticalVirtualAxis_16), value);
	}

	inline static int32_t get_offset_of_m_Dragging_17() { return static_cast<int32_t>(offsetof(CustomTouchPad_t1107529228, ___m_Dragging_17)); }
	inline bool get_m_Dragging_17() const { return ___m_Dragging_17; }
	inline bool* get_address_of_m_Dragging_17() { return &___m_Dragging_17; }
	inline void set_m_Dragging_17(bool value)
	{
		___m_Dragging_17 = value;
	}

	inline static int32_t get_offset_of_m_Id_18() { return static_cast<int32_t>(offsetof(CustomTouchPad_t1107529228, ___m_Id_18)); }
	inline int32_t get_m_Id_18() const { return ___m_Id_18; }
	inline int32_t* get_address_of_m_Id_18() { return &___m_Id_18; }
	inline void set_m_Id_18(int32_t value)
	{
		___m_Id_18 = value;
	}

	inline static int32_t get_offset_of_m_PreviousTouchPos_19() { return static_cast<int32_t>(offsetof(CustomTouchPad_t1107529228, ___m_PreviousTouchPos_19)); }
	inline Vector2_t2156229523  get_m_PreviousTouchPos_19() const { return ___m_PreviousTouchPos_19; }
	inline Vector2_t2156229523 * get_address_of_m_PreviousTouchPos_19() { return &___m_PreviousTouchPos_19; }
	inline void set_m_PreviousTouchPos_19(Vector2_t2156229523  value)
	{
		___m_PreviousTouchPos_19 = value;
	}

	inline static int32_t get_offset_of_m_Center_20() { return static_cast<int32_t>(offsetof(CustomTouchPad_t1107529228, ___m_Center_20)); }
	inline Vector3_t3722313464  get_m_Center_20() const { return ___m_Center_20; }
	inline Vector3_t3722313464 * get_address_of_m_Center_20() { return &___m_Center_20; }
	inline void set_m_Center_20(Vector3_t3722313464  value)
	{
		___m_Center_20 = value;
	}

	inline static int32_t get_offset_of_m_Image_21() { return static_cast<int32_t>(offsetof(CustomTouchPad_t1107529228, ___m_Image_21)); }
	inline Image_t2670269651 * get_m_Image_21() const { return ___m_Image_21; }
	inline Image_t2670269651 ** get_address_of_m_Image_21() { return &___m_Image_21; }
	inline void set_m_Image_21(Image_t2670269651 * value)
	{
		___m_Image_21 = value;
		Il2CppCodeGenWriteBarrier((&___m_Image_21), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CUSTOMTOUCHPAD_T1107529228_H
#ifndef THROWTOUCHPAD_T2858465420_H
#define THROWTOUCHPAD_T2858465420_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// packt.FoodyGO.TouchInput.ThrowTouchPad
struct  ThrowTouchPad_t2858465420  : public MonoBehaviour_t3962482529
{
public:
	// System.Single packt.FoodyGO.TouchInput.ThrowTouchPad::throwSpeed
	float ___throwSpeed_4;
	// UnityEngine.GameObject packt.FoodyGO.TouchInput.ThrowTouchPad::throwObject
	GameObject_t1113636619 * ___throwObject_5;
	// UnityEngine.GameObject packt.FoodyGO.TouchInput.ThrowTouchPad::target
	GameObject_t1113636619 * ___target_6;
	// System.Single packt.FoodyGO.TouchInput.ThrowTouchPad::speed
	float ___speed_7;
	// UnityEngine.Vector2 packt.FoodyGO.TouchInput.ThrowTouchPad::lastPos
	Vector2_t2156229523  ___lastPos_8;
	// UnityEngine.Vector3 packt.FoodyGO.TouchInput.ThrowTouchPad::screenPosition
	Vector3_t3722313464  ___screenPosition_9;
	// UnityEngine.Vector3 packt.FoodyGO.TouchInput.ThrowTouchPad::offset
	Vector3_t3722313464  ___offset_10;
	// System.Boolean packt.FoodyGO.TouchInput.ThrowTouchPad::thrown
	bool ___thrown_11;
	// UnityEngine.Rigidbody packt.FoodyGO.TouchInput.ThrowTouchPad::rb
	Rigidbody_t3916780224 * ___rb_12;
	// UnityEngine.Vector3 packt.FoodyGO.TouchInput.ThrowTouchPad::startPosition
	Vector3_t3722313464  ___startPosition_13;
	// UnityEngine.Quaternion packt.FoodyGO.TouchInput.ThrowTouchPad::startRotation
	Quaternion_t2301928331  ___startRotation_14;
	// System.Boolean packt.FoodyGO.TouchInput.ThrowTouchPad::m_Dragging
	bool ___m_Dragging_15;
	// System.Int32 packt.FoodyGO.TouchInput.ThrowTouchPad::m_Id
	int32_t ___m_Id_16;
	// UnityEngine.Vector3 packt.FoodyGO.TouchInput.ThrowTouchPad::m_Center
	Vector3_t3722313464  ___m_Center_17;
	// UnityEngine.UI.Image packt.FoodyGO.TouchInput.ThrowTouchPad::m_Image
	Image_t2670269651 * ___m_Image_18;

public:
	inline static int32_t get_offset_of_throwSpeed_4() { return static_cast<int32_t>(offsetof(ThrowTouchPad_t2858465420, ___throwSpeed_4)); }
	inline float get_throwSpeed_4() const { return ___throwSpeed_4; }
	inline float* get_address_of_throwSpeed_4() { return &___throwSpeed_4; }
	inline void set_throwSpeed_4(float value)
	{
		___throwSpeed_4 = value;
	}

	inline static int32_t get_offset_of_throwObject_5() { return static_cast<int32_t>(offsetof(ThrowTouchPad_t2858465420, ___throwObject_5)); }
	inline GameObject_t1113636619 * get_throwObject_5() const { return ___throwObject_5; }
	inline GameObject_t1113636619 ** get_address_of_throwObject_5() { return &___throwObject_5; }
	inline void set_throwObject_5(GameObject_t1113636619 * value)
	{
		___throwObject_5 = value;
		Il2CppCodeGenWriteBarrier((&___throwObject_5), value);
	}

	inline static int32_t get_offset_of_target_6() { return static_cast<int32_t>(offsetof(ThrowTouchPad_t2858465420, ___target_6)); }
	inline GameObject_t1113636619 * get_target_6() const { return ___target_6; }
	inline GameObject_t1113636619 ** get_address_of_target_6() { return &___target_6; }
	inline void set_target_6(GameObject_t1113636619 * value)
	{
		___target_6 = value;
		Il2CppCodeGenWriteBarrier((&___target_6), value);
	}

	inline static int32_t get_offset_of_speed_7() { return static_cast<int32_t>(offsetof(ThrowTouchPad_t2858465420, ___speed_7)); }
	inline float get_speed_7() const { return ___speed_7; }
	inline float* get_address_of_speed_7() { return &___speed_7; }
	inline void set_speed_7(float value)
	{
		___speed_7 = value;
	}

	inline static int32_t get_offset_of_lastPos_8() { return static_cast<int32_t>(offsetof(ThrowTouchPad_t2858465420, ___lastPos_8)); }
	inline Vector2_t2156229523  get_lastPos_8() const { return ___lastPos_8; }
	inline Vector2_t2156229523 * get_address_of_lastPos_8() { return &___lastPos_8; }
	inline void set_lastPos_8(Vector2_t2156229523  value)
	{
		___lastPos_8 = value;
	}

	inline static int32_t get_offset_of_screenPosition_9() { return static_cast<int32_t>(offsetof(ThrowTouchPad_t2858465420, ___screenPosition_9)); }
	inline Vector3_t3722313464  get_screenPosition_9() const { return ___screenPosition_9; }
	inline Vector3_t3722313464 * get_address_of_screenPosition_9() { return &___screenPosition_9; }
	inline void set_screenPosition_9(Vector3_t3722313464  value)
	{
		___screenPosition_9 = value;
	}

	inline static int32_t get_offset_of_offset_10() { return static_cast<int32_t>(offsetof(ThrowTouchPad_t2858465420, ___offset_10)); }
	inline Vector3_t3722313464  get_offset_10() const { return ___offset_10; }
	inline Vector3_t3722313464 * get_address_of_offset_10() { return &___offset_10; }
	inline void set_offset_10(Vector3_t3722313464  value)
	{
		___offset_10 = value;
	}

	inline static int32_t get_offset_of_thrown_11() { return static_cast<int32_t>(offsetof(ThrowTouchPad_t2858465420, ___thrown_11)); }
	inline bool get_thrown_11() const { return ___thrown_11; }
	inline bool* get_address_of_thrown_11() { return &___thrown_11; }
	inline void set_thrown_11(bool value)
	{
		___thrown_11 = value;
	}

	inline static int32_t get_offset_of_rb_12() { return static_cast<int32_t>(offsetof(ThrowTouchPad_t2858465420, ___rb_12)); }
	inline Rigidbody_t3916780224 * get_rb_12() const { return ___rb_12; }
	inline Rigidbody_t3916780224 ** get_address_of_rb_12() { return &___rb_12; }
	inline void set_rb_12(Rigidbody_t3916780224 * value)
	{
		___rb_12 = value;
		Il2CppCodeGenWriteBarrier((&___rb_12), value);
	}

	inline static int32_t get_offset_of_startPosition_13() { return static_cast<int32_t>(offsetof(ThrowTouchPad_t2858465420, ___startPosition_13)); }
	inline Vector3_t3722313464  get_startPosition_13() const { return ___startPosition_13; }
	inline Vector3_t3722313464 * get_address_of_startPosition_13() { return &___startPosition_13; }
	inline void set_startPosition_13(Vector3_t3722313464  value)
	{
		___startPosition_13 = value;
	}

	inline static int32_t get_offset_of_startRotation_14() { return static_cast<int32_t>(offsetof(ThrowTouchPad_t2858465420, ___startRotation_14)); }
	inline Quaternion_t2301928331  get_startRotation_14() const { return ___startRotation_14; }
	inline Quaternion_t2301928331 * get_address_of_startRotation_14() { return &___startRotation_14; }
	inline void set_startRotation_14(Quaternion_t2301928331  value)
	{
		___startRotation_14 = value;
	}

	inline static int32_t get_offset_of_m_Dragging_15() { return static_cast<int32_t>(offsetof(ThrowTouchPad_t2858465420, ___m_Dragging_15)); }
	inline bool get_m_Dragging_15() const { return ___m_Dragging_15; }
	inline bool* get_address_of_m_Dragging_15() { return &___m_Dragging_15; }
	inline void set_m_Dragging_15(bool value)
	{
		___m_Dragging_15 = value;
	}

	inline static int32_t get_offset_of_m_Id_16() { return static_cast<int32_t>(offsetof(ThrowTouchPad_t2858465420, ___m_Id_16)); }
	inline int32_t get_m_Id_16() const { return ___m_Id_16; }
	inline int32_t* get_address_of_m_Id_16() { return &___m_Id_16; }
	inline void set_m_Id_16(int32_t value)
	{
		___m_Id_16 = value;
	}

	inline static int32_t get_offset_of_m_Center_17() { return static_cast<int32_t>(offsetof(ThrowTouchPad_t2858465420, ___m_Center_17)); }
	inline Vector3_t3722313464  get_m_Center_17() const { return ___m_Center_17; }
	inline Vector3_t3722313464 * get_address_of_m_Center_17() { return &___m_Center_17; }
	inline void set_m_Center_17(Vector3_t3722313464  value)
	{
		___m_Center_17 = value;
	}

	inline static int32_t get_offset_of_m_Image_18() { return static_cast<int32_t>(offsetof(ThrowTouchPad_t2858465420, ___m_Image_18)); }
	inline Image_t2670269651 * get_m_Image_18() const { return ___m_Image_18; }
	inline Image_t2670269651 ** get_address_of_m_Image_18() { return &___m_Image_18; }
	inline void set_m_Image_18(Image_t2670269651 * value)
	{
		___m_Image_18 = value;
		Il2CppCodeGenWriteBarrier((&___m_Image_18), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // THROWTOUCHPAD_T2858465420_H
#ifndef CAMERATEXTUREONRAWIMAGE_T460887456_H
#define CAMERATEXTUREONRAWIMAGE_T460887456_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// packt.FoodyGO.UI.CameraTextureOnRawImage
struct  CameraTextureOnRawImage_t460887456  : public MonoBehaviour_t3962482529
{
public:
	// UnityEngine.UI.RawImage packt.FoodyGO.UI.CameraTextureOnRawImage::rawImage
	RawImage_t3182918964 * ___rawImage_4;
	// UnityEngine.WebCamTexture packt.FoodyGO.UI.CameraTextureOnRawImage::webcamTexture
	WebCamTexture_t1514609158 * ___webcamTexture_5;
	// UnityEngine.UI.AspectRatioFitter packt.FoodyGO.UI.CameraTextureOnRawImage::aspectFitter
	AspectRatioFitter_t3312407083 * ___aspectFitter_6;

public:
	inline static int32_t get_offset_of_rawImage_4() { return static_cast<int32_t>(offsetof(CameraTextureOnRawImage_t460887456, ___rawImage_4)); }
	inline RawImage_t3182918964 * get_rawImage_4() const { return ___rawImage_4; }
	inline RawImage_t3182918964 ** get_address_of_rawImage_4() { return &___rawImage_4; }
	inline void set_rawImage_4(RawImage_t3182918964 * value)
	{
		___rawImage_4 = value;
		Il2CppCodeGenWriteBarrier((&___rawImage_4), value);
	}

	inline static int32_t get_offset_of_webcamTexture_5() { return static_cast<int32_t>(offsetof(CameraTextureOnRawImage_t460887456, ___webcamTexture_5)); }
	inline WebCamTexture_t1514609158 * get_webcamTexture_5() const { return ___webcamTexture_5; }
	inline WebCamTexture_t1514609158 ** get_address_of_webcamTexture_5() { return &___webcamTexture_5; }
	inline void set_webcamTexture_5(WebCamTexture_t1514609158 * value)
	{
		___webcamTexture_5 = value;
		Il2CppCodeGenWriteBarrier((&___webcamTexture_5), value);
	}

	inline static int32_t get_offset_of_aspectFitter_6() { return static_cast<int32_t>(offsetof(CameraTextureOnRawImage_t460887456, ___aspectFitter_6)); }
	inline AspectRatioFitter_t3312407083 * get_aspectFitter_6() const { return ___aspectFitter_6; }
	inline AspectRatioFitter_t3312407083 ** get_address_of_aspectFitter_6() { return &___aspectFitter_6; }
	inline void set_aspectFitter_6(AspectRatioFitter_t3312407083 * value)
	{
		___aspectFitter_6 = value;
		Il2CppCodeGenWriteBarrier((&___aspectFitter_6), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CAMERATEXTUREONRAWIMAGE_T460887456_H
#ifndef FOOTSTEPTRACKER_T354739997_H
#define FOOTSTEPTRACKER_T354739997_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// packt.FoodyGO.UI.FootstepTracker
struct  FootstepTracker_t354739997  : public MonoBehaviour_t3962482529
{
public:
	// packt.FoodyGO.Services.MonsterService packt.FoodyGO.UI.FootstepTracker::monsterService
	MonsterService_t815911722 * ___monsterService_4;
	// UnityEngine.Texture packt.FoodyGO.UI.FootstepTracker::oneFootstep
	Texture_t3661962703 * ___oneFootstep_5;
	// UnityEngine.Texture packt.FoodyGO.UI.FootstepTracker::twoFootsteps
	Texture_t3661962703 * ___twoFootsteps_6;
	// UnityEngine.Texture packt.FoodyGO.UI.FootstepTracker::threeFootsteps
	Texture_t3661962703 * ___threeFootsteps_7;
	// UnityEngine.UI.RawImage packt.FoodyGO.UI.FootstepTracker::image
	RawImage_t3182918964 * ___image_8;

public:
	inline static int32_t get_offset_of_monsterService_4() { return static_cast<int32_t>(offsetof(FootstepTracker_t354739997, ___monsterService_4)); }
	inline MonsterService_t815911722 * get_monsterService_4() const { return ___monsterService_4; }
	inline MonsterService_t815911722 ** get_address_of_monsterService_4() { return &___monsterService_4; }
	inline void set_monsterService_4(MonsterService_t815911722 * value)
	{
		___monsterService_4 = value;
		Il2CppCodeGenWriteBarrier((&___monsterService_4), value);
	}

	inline static int32_t get_offset_of_oneFootstep_5() { return static_cast<int32_t>(offsetof(FootstepTracker_t354739997, ___oneFootstep_5)); }
	inline Texture_t3661962703 * get_oneFootstep_5() const { return ___oneFootstep_5; }
	inline Texture_t3661962703 ** get_address_of_oneFootstep_5() { return &___oneFootstep_5; }
	inline void set_oneFootstep_5(Texture_t3661962703 * value)
	{
		___oneFootstep_5 = value;
		Il2CppCodeGenWriteBarrier((&___oneFootstep_5), value);
	}

	inline static int32_t get_offset_of_twoFootsteps_6() { return static_cast<int32_t>(offsetof(FootstepTracker_t354739997, ___twoFootsteps_6)); }
	inline Texture_t3661962703 * get_twoFootsteps_6() const { return ___twoFootsteps_6; }
	inline Texture_t3661962703 ** get_address_of_twoFootsteps_6() { return &___twoFootsteps_6; }
	inline void set_twoFootsteps_6(Texture_t3661962703 * value)
	{
		___twoFootsteps_6 = value;
		Il2CppCodeGenWriteBarrier((&___twoFootsteps_6), value);
	}

	inline static int32_t get_offset_of_threeFootsteps_7() { return static_cast<int32_t>(offsetof(FootstepTracker_t354739997, ___threeFootsteps_7)); }
	inline Texture_t3661962703 * get_threeFootsteps_7() const { return ___threeFootsteps_7; }
	inline Texture_t3661962703 ** get_address_of_threeFootsteps_7() { return &___threeFootsteps_7; }
	inline void set_threeFootsteps_7(Texture_t3661962703 * value)
	{
		___threeFootsteps_7 = value;
		Il2CppCodeGenWriteBarrier((&___threeFootsteps_7), value);
	}

	inline static int32_t get_offset_of_image_8() { return static_cast<int32_t>(offsetof(FootstepTracker_t354739997, ___image_8)); }
	inline RawImage_t3182918964 * get_image_8() const { return ___image_8; }
	inline RawImage_t3182918964 ** get_address_of_image_8() { return &___image_8; }
	inline void set_image_8(RawImage_t3182918964 * value)
	{
		___image_8 = value;
		Il2CppCodeGenWriteBarrier((&___image_8), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FOOTSTEPTRACKER_T354739997_H
#ifndef GAMEMANAGER_T3352243792_H
#define GAMEMANAGER_T3352243792_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// packt.FoodyGO.Managers.GameManager
struct  GameManager_t3352243792  : public Singleton_1_t2869849822
{
public:
	// System.Boolean packt.FoodyGO.Managers.GameManager::ShowSplashScreen
	bool ___ShowSplashScreen_5;
	// System.String packt.FoodyGO.Managers.GameManager::SplashSceneName
	String_t* ___SplashSceneName_6;
	// System.String packt.FoodyGO.Managers.GameManager::MapSceneName
	String_t* ___MapSceneName_7;
	// System.String packt.FoodyGO.Managers.GameManager::MonsterLayerName
	String_t* ___MonsterLayerName_8;
	// UnityEngine.SceneManagement.Scene packt.FoodyGO.Managers.GameManager::SplashScene
	Scene_t2348375561  ___SplashScene_9;
	// UnityEngine.SceneManagement.Scene packt.FoodyGO.Managers.GameManager::MapScene
	Scene_t2348375561  ___MapScene_10;

public:
	inline static int32_t get_offset_of_ShowSplashScreen_5() { return static_cast<int32_t>(offsetof(GameManager_t3352243792, ___ShowSplashScreen_5)); }
	inline bool get_ShowSplashScreen_5() const { return ___ShowSplashScreen_5; }
	inline bool* get_address_of_ShowSplashScreen_5() { return &___ShowSplashScreen_5; }
	inline void set_ShowSplashScreen_5(bool value)
	{
		___ShowSplashScreen_5 = value;
	}

	inline static int32_t get_offset_of_SplashSceneName_6() { return static_cast<int32_t>(offsetof(GameManager_t3352243792, ___SplashSceneName_6)); }
	inline String_t* get_SplashSceneName_6() const { return ___SplashSceneName_6; }
	inline String_t** get_address_of_SplashSceneName_6() { return &___SplashSceneName_6; }
	inline void set_SplashSceneName_6(String_t* value)
	{
		___SplashSceneName_6 = value;
		Il2CppCodeGenWriteBarrier((&___SplashSceneName_6), value);
	}

	inline static int32_t get_offset_of_MapSceneName_7() { return static_cast<int32_t>(offsetof(GameManager_t3352243792, ___MapSceneName_7)); }
	inline String_t* get_MapSceneName_7() const { return ___MapSceneName_7; }
	inline String_t** get_address_of_MapSceneName_7() { return &___MapSceneName_7; }
	inline void set_MapSceneName_7(String_t* value)
	{
		___MapSceneName_7 = value;
		Il2CppCodeGenWriteBarrier((&___MapSceneName_7), value);
	}

	inline static int32_t get_offset_of_MonsterLayerName_8() { return static_cast<int32_t>(offsetof(GameManager_t3352243792, ___MonsterLayerName_8)); }
	inline String_t* get_MonsterLayerName_8() const { return ___MonsterLayerName_8; }
	inline String_t** get_address_of_MonsterLayerName_8() { return &___MonsterLayerName_8; }
	inline void set_MonsterLayerName_8(String_t* value)
	{
		___MonsterLayerName_8 = value;
		Il2CppCodeGenWriteBarrier((&___MonsterLayerName_8), value);
	}

	inline static int32_t get_offset_of_SplashScene_9() { return static_cast<int32_t>(offsetof(GameManager_t3352243792, ___SplashScene_9)); }
	inline Scene_t2348375561  get_SplashScene_9() const { return ___SplashScene_9; }
	inline Scene_t2348375561 * get_address_of_SplashScene_9() { return &___SplashScene_9; }
	inline void set_SplashScene_9(Scene_t2348375561  value)
	{
		___SplashScene_9 = value;
	}

	inline static int32_t get_offset_of_MapScene_10() { return static_cast<int32_t>(offsetof(GameManager_t3352243792, ___MapScene_10)); }
	inline Scene_t2348375561  get_MapScene_10() const { return ___MapScene_10; }
	inline Scene_t2348375561 * get_address_of_MapScene_10() { return &___MapScene_10; }
	inline void set_MapScene_10(Scene_t2348375561  value)
	{
		___MapScene_10 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GAMEMANAGER_T3352243792_H





#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2300 = { sizeof (U3CRegisterAttributesU3Ec__AnonStorey0_t2829874507), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2300[1] = 
{
	U3CRegisterAttributesU3Ec__AnonStorey0_t2829874507::get_offset_of_cbs_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2301 = { sizeof (CommandTree_t2732396483), -1, sizeof(CommandTree_t2732396483_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2301[3] = 
{
	CommandTree_t2732396483::get_offset_of_m_subcommands_0(),
	CommandTree_t2732396483::get_offset_of_m_command_1(),
	CommandTree_t2732396483_StaticFields::get_offset_of_emptyArgs_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2302 = { sizeof (ResponseExtension_t4265486427), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2303 = { sizeof (RequestContext_t3602631757), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2303[5] = 
{
	RequestContext_t3602631757::get_offset_of_context_0(),
	RequestContext_t3602631757::get_offset_of_match_1(),
	RequestContext_t3602631757::get_offset_of_pass_2(),
	RequestContext_t3602631757::get_offset_of_path_3(),
	RequestContext_t3602631757::get_offset_of_currentRoute_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2304 = { sizeof (Server_t545360578), -1, sizeof(Server_t545360578_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2304[11] = 
{
	Server_t545360578::get_offset_of_Port_4(),
	Server_t545360578_StaticFields::get_offset_of_mainThread_5(),
	Server_t545360578_StaticFields::get_offset_of_fileRoot_6(),
	Server_t545360578_StaticFields::get_offset_of_listener_7(),
	Server_t545360578_StaticFields::get_offset_of_registeredRoutes_8(),
	Server_t545360578_StaticFields::get_offset_of_mainRequests_9(),
	Server_t545360578_StaticFields::get_offset_of_fileTypes_10(),
	Server_t545360578_StaticFields::get_offset_of_U3CU3Ef__mgU24cache0_11(),
	Server_t545360578_StaticFields::get_offset_of_U3CU3Ef__mgU24cache1_12(),
	Server_t545360578_StaticFields::get_offset_of_U3CU3Ef__amU24cache0_13(),
	Server_t545360578_StaticFields::get_offset_of_U3CU3Ef__mgU24cache2_14(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2305 = { sizeof (FileHandlerDelegate_t13458300), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2306 = { sizeof (U3CRegisterFileHandlersU3Ec__AnonStorey1_t3770007581), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2306[1] = 
{
	U3CRegisterFileHandlersU3Ec__AnonStorey1_t3770007581::get_offset_of_callback_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2307 = { sizeof (U3CHandleRequestsU3Ec__Iterator0_t4068759609), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2307[6] = 
{
	U3CHandleRequestsU3Ec__Iterator0_t4068759609::get_offset_of_U3CcontextU3E__1_0(),
	U3CHandleRequestsU3Ec__Iterator0_t4068759609::get_offset_of_U24locvar0_1(),
	U3CHandleRequestsU3Ec__Iterator0_t4068759609::get_offset_of_U24this_2(),
	U3CHandleRequestsU3Ec__Iterator0_t4068759609::get_offset_of_U24current_3(),
	U3CHandleRequestsU3Ec__Iterator0_t4068759609::get_offset_of_U24disposing_4(),
	U3CHandleRequestsU3Ec__Iterator0_t4068759609::get_offset_of_U24PC_5(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2308 = { sizeof (CatchSceneController_t4077466895), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2308[4] = 
{
	CatchSceneController_t4077466895::get_offset_of_frozenParticlePrefab_4(),
	CatchSceneController_t4077466895::get_offset_of_monster_5(),
	CatchSceneController_t4077466895::get_offset_of_frozenDisableList_6(),
	CatchSceneController_t4077466895::get_offset_of_frozenEnableList_7(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2309 = { sizeof (CharacterGPSCompassController_t2402541944), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2309[4] = 
{
	CharacterGPSCompassController_t2402541944::get_offset_of_gpsLocationService_4(),
	CharacterGPSCompassController_t2402541944::get_offset_of_lastTimestamp_5(),
	CharacterGPSCompassController_t2402541944::get_offset_of_thirdPersonCharacter_6(),
	CharacterGPSCompassController_t2402541944::get_offset_of_target_7(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2310 = { sizeof (CharacterGPSCopmassController_t3516088559), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2311 = { sizeof (MonsterController_t3352166224), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2311[6] = 
{
	MonsterController_t3352166224::get_offset_of_location_4(),
	MonsterController_t3352166224::get_offset_of_monsterService_5(),
	MonsterController_t3352166224::get_offset_of_monsterDataObject_6(),
	MonsterController_t3352166224::get_offset_of_anim_7(),
	MonsterController_t3352166224::get_offset_of_animationSpeed_8(),
	MonsterController_t3352166224::get_offset_of_monsterWarmRate_9(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2312 = { sizeof (Monster_t1773341114), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2312[7] = 
{
	Monster_t1773341114::get_offset_of_location_0(),
	Monster_t1773341114::get_offset_of_position_1(),
	Monster_t1773341114::get_offset_of_spawnTimestamp_2(),
	Monster_t1773341114::get_offset_of_lastHeardTimestamp_3(),
	Monster_t1773341114::get_offset_of_lastSeenTimestamp_4(),
	Monster_t1773341114::get_offset_of_gameObject_5(),
	Monster_t1773341114::get_offset_of_footstepRange_6(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2313 = { sizeof (GameManager_t3352243792), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2313[6] = 
{
	GameManager_t3352243792::get_offset_of_ShowSplashScreen_5(),
	GameManager_t3352243792::get_offset_of_SplashSceneName_6(),
	GameManager_t3352243792::get_offset_of_MapSceneName_7(),
	GameManager_t3352243792::get_offset_of_MonsterLayerName_8(),
	GameManager_t3352243792::get_offset_of_SplashScene_9(),
	GameManager_t3352243792::get_offset_of_MapScene_10(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2314 = { sizeof (U3CDisplaySplashSceneU3Ec__Iterator0_t1774276246), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2314[4] = 
{
	U3CDisplaySplashSceneU3Ec__Iterator0_t1774276246::get_offset_of_U24this_0(),
	U3CDisplaySplashSceneU3Ec__Iterator0_t1774276246::get_offset_of_U24current_1(),
	U3CDisplaySplashSceneU3Ec__Iterator0_t1774276246::get_offset_of_U24disposing_2(),
	U3CDisplaySplashSceneU3Ec__Iterator0_t1774276246::get_offset_of_U24PC_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2315 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable2315[1] = 
{
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2316 = { sizeof (MapLocation_t4058015206), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2316[2] = 
{
	MapLocation_t4058015206::get_offset_of_Latitude_0(),
	MapLocation_t4058015206::get_offset_of_Longitude_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2317 = { sizeof (MapEnvelope_t3509470862), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2317[4] = 
{
	MapEnvelope_t3509470862::get_offset_of_lon1_0(),
	MapEnvelope_t3509470862::get_offset_of_lon2_1(),
	MapEnvelope_t3509470862::get_offset_of_lat1_2(),
	MapEnvelope_t3509470862::get_offset_of_lat2_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2318 = { sizeof (GoogleMapTile_t1047440669), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2318[12] = 
{
	0,
	GoogleMapTile_t1047440669::get_offset_of_zoomLevel_5(),
	GoogleMapTile_t1047440669::get_offset_of_mapType_6(),
	GoogleMapTile_t1047440669::get_offset_of_size_7(),
	GoogleMapTile_t1047440669::get_offset_of_doubleResolution_8(),
	GoogleMapTile_t1047440669::get_offset_of_worldCenterLocation_9(),
	GoogleMapTile_t1047440669::get_offset_of_TileOffset_10(),
	GoogleMapTile_t1047440669::get_offset_of_tileCenterLocation_11(),
	GoogleMapTile_t1047440669::get_offset_of_TopLeftCorner_12(),
	GoogleMapTile_t1047440669::get_offset_of_BottomRightCorner_13(),
	GoogleMapTile_t1047440669::get_offset_of_gpsLocationService_14(),
	GoogleMapTile_t1047440669::get_offset_of_lastGPSUpdate_15(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2319 = { sizeof (MapType_t3185662864)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable2319[5] = 
{
	MapType_t3185662864::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2320 = { sizeof (U3C_RefreshMapTileU3Ec__Iterator0_t2254000978), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2320[7] = 
{
	U3C_RefreshMapTileU3Ec__Iterator0_t2254000978::get_offset_of_U3CqueryStringU3E__0_0(),
	U3C_RefreshMapTileU3Ec__Iterator0_t2254000978::get_offset_of_U3CusingSensorU3E__0_1(),
	U3C_RefreshMapTileU3Ec__Iterator0_t2254000978::get_offset_of_U3CreqU3E__0_2(),
	U3C_RefreshMapTileU3Ec__Iterator0_t2254000978::get_offset_of_U24this_3(),
	U3C_RefreshMapTileU3Ec__Iterator0_t2254000978::get_offset_of_U24current_4(),
	U3C_RefreshMapTileU3Ec__Iterator0_t2254000978::get_offset_of_U24disposing_5(),
	U3C_RefreshMapTileU3Ec__Iterator0_t2254000978::get_offset_of_U24PC_6(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2321 = { sizeof (GoogleMapUtils_t2374289053), -1, sizeof(GoogleMapUtils_t2374289053_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2321[4] = 
{
	GoogleMapUtils_t2374289053_StaticFields::get_offset_of_GOOGLE_OFFSET_0(),
	GoogleMapUtils_t2374289053_StaticFields::get_offset_of_GOOGLE_OFFSET_RADIUS_1(),
	GoogleMapUtils_t2374289053_StaticFields::get_offset_of_MATHPI_180_2(),
	GoogleMapUtils_t2374289053_StaticFields::get_offset_of_preLonToX1_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2322 = { sizeof (MathG_t4249049613), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2323 = { sizeof (CollisionAction_t3868143941), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2323[2] = 
{
	CollisionAction_t3868143941::get_offset_of_reactions_4(),
	CollisionAction_t3868143941::get_offset_of_disarmed_5(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2324 = { sizeof (CollisionReaction_t3737494906), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2324[6] = 
{
	CollisionReaction_t3737494906::get_offset_of_collisionObjectName_4(),
	CollisionReaction_t3737494906::get_offset_of_collisionEvent_5(),
	CollisionReaction_t3737494906::get_offset_of_particlePrefab_6(),
	CollisionReaction_t3737494906::get_offset_of_destroyParticleDelaySeconds_7(),
	CollisionReaction_t3737494906::get_offset_of_destroyObject_8(),
	CollisionReaction_t3737494906::get_offset_of_destroyObjectDelaySeconds_9(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2325 = { sizeof (CollisionEvent_t2787779977), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2326 = { sizeof (GPSLocationService_t3603565903), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2326[22] = 
{
	GPSLocationService_t3603565903::get_offset_of_OnMapRedraw_4(),
	GPSLocationService_t3603565903::get_offset_of_DesiredAccuracyInMeters_5(),
	GPSLocationService_t3603565903::get_offset_of_UpdateAccuracyInMeters_6(),
	GPSLocationService_t3603565903::get_offset_of_MapTileScale_7(),
	GPSLocationService_t3603565903::get_offset_of_MapTileSizePixels_8(),
	GPSLocationService_t3603565903::get_offset_of_MapTileZoomLevel_9(),
	GPSLocationService_t3603565903::get_offset_of_Simulating_10(),
	GPSLocationService_t3603565903::get_offset_of_StartCoordinates_11(),
	GPSLocationService_t3603565903::get_offset_of_Rate_12(),
	GPSLocationService_t3603565903::get_offset_of_SimulationOffsets_13(),
	GPSLocationService_t3603565903::get_offset_of_simulationIndex_14(),
	GPSLocationService_t3603565903::get_offset_of_IsServiceStarted_15(),
	GPSLocationService_t3603565903::get_offset_of_Latitude_16(),
	GPSLocationService_t3603565903::get_offset_of_Longitude_17(),
	GPSLocationService_t3603565903::get_offset_of_Altitude_18(),
	GPSLocationService_t3603565903::get_offset_of_Accuracy_19(),
	GPSLocationService_t3603565903::get_offset_of_Timestamp_20(),
	GPSLocationService_t3603565903::get_offset_of_PlayerTimestamp_21(),
	GPSLocationService_t3603565903::get_offset_of_mapCenter_22(),
	GPSLocationService_t3603565903::get_offset_of_mapEnvelope_23(),
	GPSLocationService_t3603565903::get_offset_of_mapWorldCenter_24(),
	GPSLocationService_t3603565903::get_offset_of_mapScale_25(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2327 = { sizeof (OnRedrawEvent_t4144385014), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2328 = { sizeof (U3CStartSimulationServiceU3Ec__Iterator0_t30558242), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2328[4] = 
{
	U3CStartSimulationServiceU3Ec__Iterator0_t30558242::get_offset_of_U24this_0(),
	U3CStartSimulationServiceU3Ec__Iterator0_t30558242::get_offset_of_U24current_1(),
	U3CStartSimulationServiceU3Ec__Iterator0_t30558242::get_offset_of_U24disposing_2(),
	U3CStartSimulationServiceU3Ec__Iterator0_t30558242::get_offset_of_U24PC_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2329 = { sizeof (U3CStartServiceU3Ec__Iterator1_t581170624), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2329[5] = 
{
	U3CStartServiceU3Ec__Iterator1_t581170624::get_offset_of_U3CmaxWaitU3E__0_0(),
	U3CStartServiceU3Ec__Iterator1_t581170624::get_offset_of_U24this_1(),
	U3CStartServiceU3Ec__Iterator1_t581170624::get_offset_of_U24current_2(),
	U3CStartServiceU3Ec__Iterator1_t581170624::get_offset_of_U24disposing_3(),
	U3CStartServiceU3Ec__Iterator1_t581170624::get_offset_of_U24PC_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2330 = { sizeof (MonsterService_t815911722), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2330[13] = 
{
	MonsterService_t815911722::get_offset_of_gpsLocationService_4(),
	MonsterService_t815911722::get_offset_of_monsterPrefab_5(),
	MonsterService_t815911722::get_offset_of_lastTimestamp_6(),
	MonsterService_t815911722::get_offset_of_monsterSpawnRate_7(),
	MonsterService_t815911722::get_offset_of_latitudeSpawnOffset_8(),
	MonsterService_t815911722::get_offset_of_longitudeSpawnOffset_9(),
	MonsterService_t815911722::get_offset_of_monsterHearDistance_10(),
	MonsterService_t815911722::get_offset_of_monsterSeeDistance_11(),
	MonsterService_t815911722::get_offset_of_monsterLifetimeSeconds_12(),
	MonsterService_t815911722::get_offset_of_oneStepRange_13(),
	MonsterService_t815911722::get_offset_of_twoStepRange_14(),
	MonsterService_t815911722::get_offset_of_threeStepRange_15(),
	MonsterService_t815911722::get_offset_of_monsters_16(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2331 = { sizeof (U3CCleanupMonstersU3Ec__Iterator0_t1226081092), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2331[6] = 
{
	U3CCleanupMonstersU3Ec__Iterator0_t1226081092::get_offset_of_U3CnowU3E__1_0(),
	U3CCleanupMonstersU3Ec__Iterator0_t1226081092::get_offset_of_U3ClistU3E__1_1(),
	U3CCleanupMonstersU3Ec__Iterator0_t1226081092::get_offset_of_U24this_2(),
	U3CCleanupMonstersU3Ec__Iterator0_t1226081092::get_offset_of_U24current_3(),
	U3CCleanupMonstersU3Ec__Iterator0_t1226081092::get_offset_of_U24disposing_4(),
	U3CCleanupMonstersU3Ec__Iterator0_t1226081092::get_offset_of_U24PC_5(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2332 = { sizeof (CustomTouchPad_t1107529228), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2332[18] = 
{
	CustomTouchPad_t1107529228::get_offset_of_axesToUse_4(),
	CustomTouchPad_t1107529228::get_offset_of_controlStyle_5(),
	CustomTouchPad_t1107529228::get_offset_of_horizontalAxisName_6(),
	CustomTouchPad_t1107529228::get_offset_of_verticalAxisName_7(),
	CustomTouchPad_t1107529228::get_offset_of_Xsensitivity_8(),
	CustomTouchPad_t1107529228::get_offset_of_Ysensitivity_9(),
	CustomTouchPad_t1107529228::get_offset_of_m_StartPos_10(),
	CustomTouchPad_t1107529228::get_offset_of_m_PreviousDelta_11(),
	CustomTouchPad_t1107529228::get_offset_of_m_JoytickOutput_12(),
	CustomTouchPad_t1107529228::get_offset_of_m_UseX_13(),
	CustomTouchPad_t1107529228::get_offset_of_m_UseY_14(),
	CustomTouchPad_t1107529228::get_offset_of_m_HorizontalVirtualAxis_15(),
	CustomTouchPad_t1107529228::get_offset_of_m_VerticalVirtualAxis_16(),
	CustomTouchPad_t1107529228::get_offset_of_m_Dragging_17(),
	CustomTouchPad_t1107529228::get_offset_of_m_Id_18(),
	CustomTouchPad_t1107529228::get_offset_of_m_PreviousTouchPos_19(),
	CustomTouchPad_t1107529228::get_offset_of_m_Center_20(),
	CustomTouchPad_t1107529228::get_offset_of_m_Image_21(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2333 = { sizeof (AxisOption_t3737451056)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable2333[4] = 
{
	AxisOption_t3737451056::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2334 = { sizeof (ControlStyle_t3966684686)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable2334[4] = 
{
	ControlStyle_t3966684686::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2335 = { sizeof (ThrowTouchPad_t2858465420), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2335[15] = 
{
	ThrowTouchPad_t2858465420::get_offset_of_throwSpeed_4(),
	ThrowTouchPad_t2858465420::get_offset_of_throwObject_5(),
	ThrowTouchPad_t2858465420::get_offset_of_target_6(),
	ThrowTouchPad_t2858465420::get_offset_of_speed_7(),
	ThrowTouchPad_t2858465420::get_offset_of_lastPos_8(),
	ThrowTouchPad_t2858465420::get_offset_of_screenPosition_9(),
	ThrowTouchPad_t2858465420::get_offset_of_offset_10(),
	ThrowTouchPad_t2858465420::get_offset_of_thrown_11(),
	ThrowTouchPad_t2858465420::get_offset_of_rb_12(),
	ThrowTouchPad_t2858465420::get_offset_of_startPosition_13(),
	ThrowTouchPad_t2858465420::get_offset_of_startRotation_14(),
	ThrowTouchPad_t2858465420::get_offset_of_m_Dragging_15(),
	ThrowTouchPad_t2858465420::get_offset_of_m_Id_16(),
	ThrowTouchPad_t2858465420::get_offset_of_m_Center_17(),
	ThrowTouchPad_t2858465420::get_offset_of_m_Image_18(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2336 = { sizeof (CameraTextureOnRawImage_t460887456), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2336[3] = 
{
	CameraTextureOnRawImage_t460887456::get_offset_of_rawImage_4(),
	CameraTextureOnRawImage_t460887456::get_offset_of_webcamTexture_5(),
	CameraTextureOnRawImage_t460887456::get_offset_of_aspectFitter_6(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2337 = { sizeof (FootstepTracker_t354739997), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2337[5] = 
{
	FootstepTracker_t354739997::get_offset_of_monsterService_4(),
	FootstepTracker_t354739997::get_offset_of_oneFootstep_5(),
	FootstepTracker_t354739997::get_offset_of_twoFootsteps_6(),
	FootstepTracker_t354739997::get_offset_of_threeFootsteps_7(),
	FootstepTracker_t354739997::get_offset_of_image_8(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2338 = { sizeof (Epoch_t1110390331), -1, 0, 0 };
#ifdef __clang__
#pragma clang diagnostic pop
#endif
