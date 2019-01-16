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


// Mono.Security.X509.X520/AttributeTypeAndValue
struct AttributeTypeAndValue_t3245693428;
// Mono.Security.X509.X520/Surname
struct Surname_t4221813936;
// Mono.Security.X509.X520/Title
struct Title_t2026585634;
// Mono.Security.X509.X520/UserId
struct UserId_t70549454;
// System.Char[]
struct CharU5BU5D_t3528271667;
// System.String
struct String_t;

extern String_t* _stringLiteral1929716066;
extern String_t* _stringLiteral3018670731;
extern String_t* _stringLiteral3583877212;
extern const uint32_t Surname__ctor_m4076845856_MetadataUsageId;
extern const uint32_t Title__ctor_m3468619135_MetadataUsageId;
extern const uint32_t UserId__ctor_m730120360_MetadataUsageId;



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
#ifndef ATTRIBUTETYPEANDVALUE_T3245693428_H
#define ATTRIBUTETYPEANDVALUE_T3245693428_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.X509.X520/AttributeTypeAndValue
struct  AttributeTypeAndValue_t3245693428  : public RuntimeObject
{
public:
	// System.String Mono.Security.X509.X520/AttributeTypeAndValue::oid
	String_t* ___oid_0;
	// System.String Mono.Security.X509.X520/AttributeTypeAndValue::attrValue
	String_t* ___attrValue_1;
	// System.Int32 Mono.Security.X509.X520/AttributeTypeAndValue::upperBound
	int32_t ___upperBound_2;
	// System.Byte Mono.Security.X509.X520/AttributeTypeAndValue::encoding
	uint8_t ___encoding_3;

public:
	inline static int32_t get_offset_of_oid_0() { return static_cast<int32_t>(offsetof(AttributeTypeAndValue_t3245693428, ___oid_0)); }
	inline String_t* get_oid_0() const { return ___oid_0; }
	inline String_t** get_address_of_oid_0() { return &___oid_0; }
	inline void set_oid_0(String_t* value)
	{
		___oid_0 = value;
		Il2CppCodeGenWriteBarrier((&___oid_0), value);
	}

	inline static int32_t get_offset_of_attrValue_1() { return static_cast<int32_t>(offsetof(AttributeTypeAndValue_t3245693428, ___attrValue_1)); }
	inline String_t* get_attrValue_1() const { return ___attrValue_1; }
	inline String_t** get_address_of_attrValue_1() { return &___attrValue_1; }
	inline void set_attrValue_1(String_t* value)
	{
		___attrValue_1 = value;
		Il2CppCodeGenWriteBarrier((&___attrValue_1), value);
	}

	inline static int32_t get_offset_of_upperBound_2() { return static_cast<int32_t>(offsetof(AttributeTypeAndValue_t3245693428, ___upperBound_2)); }
	inline int32_t get_upperBound_2() const { return ___upperBound_2; }
	inline int32_t* get_address_of_upperBound_2() { return &___upperBound_2; }
	inline void set_upperBound_2(int32_t value)
	{
		___upperBound_2 = value;
	}

	inline static int32_t get_offset_of_encoding_3() { return static_cast<int32_t>(offsetof(AttributeTypeAndValue_t3245693428, ___encoding_3)); }
	inline uint8_t get_encoding_3() const { return ___encoding_3; }
	inline uint8_t* get_address_of_encoding_3() { return &___encoding_3; }
	inline void set_encoding_3(uint8_t value)
	{
		___encoding_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ATTRIBUTETYPEANDVALUE_T3245693428_H
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
#ifndef SURNAME_T4221813936_H
#define SURNAME_T4221813936_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.X509.X520/Surname
struct  Surname_t4221813936  : public AttributeTypeAndValue_t3245693428
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SURNAME_T4221813936_H
#ifndef TITLE_T2026585634_H
#define TITLE_T2026585634_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.X509.X520/Title
struct  Title_t2026585634  : public AttributeTypeAndValue_t3245693428
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TITLE_T2026585634_H
#ifndef USERID_T70549454_H
#define USERID_T70549454_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.X509.X520/UserId
struct  UserId_t70549454  : public AttributeTypeAndValue_t3245693428
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // USERID_T70549454_H
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



// System.Void Mono.Security.X509.X520/AttributeTypeAndValue::.ctor(System.String,System.Int32)
extern "C" IL2CPP_METHOD_ATTR void AttributeTypeAndValue__ctor_m682681796 (AttributeTypeAndValue_t3245693428 * __this, String_t* ___oid0, int32_t ___upperBound1, const RuntimeMethod* method);
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Mono.Security.X509.X520/Surname::.ctor()
extern "C" IL2CPP_METHOD_ATTR void Surname__ctor_m4076845856 (Surname_t4221813936 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Surname__ctor_m4076845856_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		AttributeTypeAndValue__ctor_m682681796(__this, _stringLiteral3018670731, ((int32_t)32768), /*hidden argument*/NULL);
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
// System.Void Mono.Security.X509.X520/Title::.ctor()
extern "C" IL2CPP_METHOD_ATTR void Title__ctor_m3468619135 (Title_t2026585634 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Title__ctor_m3468619135_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		AttributeTypeAndValue__ctor_m682681796(__this, _stringLiteral3583877212, ((int32_t)64), /*hidden argument*/NULL);
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
// System.Void Mono.Security.X509.X520/UserId::.ctor()
extern "C" IL2CPP_METHOD_ATTR void UserId__ctor_m730120360 (UserId_t70549454 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UserId__ctor_m730120360_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		AttributeTypeAndValue__ctor_m682681796(__this, _stringLiteral1929716066, ((int32_t)256), /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
