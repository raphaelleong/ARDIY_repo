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

#include "class-internals.h"
#include "codegen/il2cpp-codegen.h"
#include "object-internals.h"

// System.Reflection.ConstructorInfo
struct ConstructorInfo_t4006886990;
// System.Collections.Generic.IList`1<System.Reflection.CustomAttributeTypedArgument>
struct IList_1_t80614508;
// System.Collections.Generic.IList`1<System.Reflection.CustomAttributeNamedArgument>
struct IList_1_t752447645;
// System.Resources.ResourceReader
struct ResourceReader_t1960966370;
// System.IO.BinaryReader
struct BinaryReader_t2193329889;
// System.Runtime.Serialization.IFormatter
struct IFormatter_t3481044358;
// System.String[]
struct StringU5BU5D_t3267915945;
// System.Int32[]
struct Int32U5BU5D_t947404415;
// System.Resources.ResourceReader/ResourceInfo[]
struct ResourceInfoU5BU5D_t3076838120;
// System.Resources.ResourceReader/ResourceCacheItem[]
struct ResourceCacheItemU5BU5D_t4143538902;
// System.Resources.IResourceReader
struct IResourceReader_t4070456451;
// System.Collections.Hashtable
struct Hashtable_t967422820;
// System.Byte[]
struct ByteU5BU5D_t998316899;
// System.String
struct String_t;
// System.IntPtr[]
struct IntPtrU5BU5D_t2927467004;
// System.Collections.IDictionary
struct IDictionary_t73763349;
// System.Type
struct Type_t;
// System.Void
struct Void_t2224711708;
// System.Reflection.Emit.ModuleBuilder
struct ModuleBuilder_t1155181340;
// System.Version
struct Version_t1720425036;
// System.Boolean[]
struct BooleanU5BU5D_t170153581;
// System.Reflection.EventInfo/AddEventAdapter
struct AddEventAdapter_t2464420954;
// System.Char[]
struct CharU5BU5D_t1858403069;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.DelegateData
struct DelegateData_t317953312;
// System.Reflection.Assembly/ResolveEventHolder
struct ResolveEventHolder_t1910797677;
// System.Security.Policy.Evidence
struct Evidence_t185089762;
// System.Security.PermissionSet
struct PermissionSet_t3334487276;
// System.Reflection.MemberInfo
struct MemberInfo_t;
// System.Reflection.MethodInfo[]
struct MethodInfoU5BU5D_t1775217668;
// System.Reflection.Emit.UnmanagedMarshal
struct UnmanagedMarshal_t1636591883;
// System.Globalization.CultureInfo
struct CultureInfo_t2168508297;
// System.Reflection.StrongNameKeyPair
struct StrongNameKeyPair_t1633660243;
// System.Reflection.TypeFilter
struct TypeFilter_t3787624935;
// System.Reflection.Assembly
struct Assembly_t1171681272;
// System.Type[]
struct TypeU5BU5D_t2352909122;
// System.Reflection.MemberFilter
struct MemberFilter_t3448069498;
// System.Delegate
struct Delegate_t1264583404;
// System.IAsyncResult
struct IAsyncResult_t4173269696;
// System.AsyncCallback
struct AsyncCallback_t3929371004;
// System.Reflection.MonoProperty/GetterAdapter
struct GetterAdapter_t1212170220;
// System.Reflection.Emit.MethodBuilder[]
struct MethodBuilderU5BU5D_t2768222055;
// System.Reflection.Emit.ConstructorBuilder[]
struct ConstructorBuilderU5BU5D_t2483286157;
// System.Reflection.Emit.FieldBuilder[]
struct FieldBuilderU5BU5D_t2338563367;
// System.Reflection.Emit.GenericTypeParameterBuilder[]
struct GenericTypeParameterBuilderU5BU5D_t2719777775;




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
#ifndef VALUETYPE_T3506676332_H
#define VALUETYPE_T3506676332_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ValueType
struct  ValueType_t3506676332  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t3506676332_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t3506676332_marshaled_com
{
};
#endif // VALUETYPE_T3506676332_H
#ifndef CUSTOMATTRIBUTEDATA_T3867098225_H
#define CUSTOMATTRIBUTEDATA_T3867098225_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.CustomAttributeData
struct  CustomAttributeData_t3867098225  : public RuntimeObject
{
public:
	// System.Reflection.ConstructorInfo System.Reflection.CustomAttributeData::ctorInfo
	ConstructorInfo_t4006886990 * ___ctorInfo_0;
	// System.Collections.Generic.IList`1<System.Reflection.CustomAttributeTypedArgument> System.Reflection.CustomAttributeData::ctorArgs
	RuntimeObject* ___ctorArgs_1;
	// System.Collections.Generic.IList`1<System.Reflection.CustomAttributeNamedArgument> System.Reflection.CustomAttributeData::namedArgs
	RuntimeObject* ___namedArgs_2;

public:
	inline static int32_t get_offset_of_ctorInfo_0() { return static_cast<int32_t>(offsetof(CustomAttributeData_t3867098225, ___ctorInfo_0)); }
	inline ConstructorInfo_t4006886990 * get_ctorInfo_0() const { return ___ctorInfo_0; }
	inline ConstructorInfo_t4006886990 ** get_address_of_ctorInfo_0() { return &___ctorInfo_0; }
	inline void set_ctorInfo_0(ConstructorInfo_t4006886990 * value)
	{
		___ctorInfo_0 = value;
		Il2CppCodeGenWriteBarrier((&___ctorInfo_0), value);
	}

	inline static int32_t get_offset_of_ctorArgs_1() { return static_cast<int32_t>(offsetof(CustomAttributeData_t3867098225, ___ctorArgs_1)); }
	inline RuntimeObject* get_ctorArgs_1() const { return ___ctorArgs_1; }
	inline RuntimeObject** get_address_of_ctorArgs_1() { return &___ctorArgs_1; }
	inline void set_ctorArgs_1(RuntimeObject* value)
	{
		___ctorArgs_1 = value;
		Il2CppCodeGenWriteBarrier((&___ctorArgs_1), value);
	}

	inline static int32_t get_offset_of_namedArgs_2() { return static_cast<int32_t>(offsetof(CustomAttributeData_t3867098225, ___namedArgs_2)); }
	inline RuntimeObject* get_namedArgs_2() const { return ___namedArgs_2; }
	inline RuntimeObject** get_address_of_namedArgs_2() { return &___namedArgs_2; }
	inline void set_namedArgs_2(RuntimeObject* value)
	{
		___namedArgs_2 = value;
		Il2CppCodeGenWriteBarrier((&___namedArgs_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CUSTOMATTRIBUTEDATA_T3867098225_H
#ifndef ACTIVATIONARGUMENTS_T4182384294_H
#define ACTIVATIONARGUMENTS_T4182384294_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Hosting.ActivationArguments
struct  ActivationArguments_t4182384294  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ACTIVATIONARGUMENTS_T4182384294_H
#ifndef BINDER_T3726367644_H
#define BINDER_T3726367644_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.Binder
struct  Binder_t3726367644  : public RuntimeObject
{
public:

public:
};

struct Binder_t3726367644_StaticFields
{
public:
	// System.Reflection.Binder System.Reflection.Binder::default_binder
	Binder_t3726367644 * ___default_binder_0;

public:
	inline static int32_t get_offset_of_default_binder_0() { return static_cast<int32_t>(offsetof(Binder_t3726367644_StaticFields, ___default_binder_0)); }
	inline Binder_t3726367644 * get_default_binder_0() const { return ___default_binder_0; }
	inline Binder_t3726367644 ** get_address_of_default_binder_0() { return &___default_binder_0; }
	inline void set_default_binder_0(Binder_t3726367644 * value)
	{
		___default_binder_0 = value;
		Il2CppCodeGenWriteBarrier((&___default_binder_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BINDER_T3726367644_H
#ifndef CRITICALFINALIZEROBJECT_T339194016_H
#define CRITICALFINALIZEROBJECT_T339194016_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.ConstrainedExecution.CriticalFinalizerObject
struct  CriticalFinalizerObject_t339194016  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CRITICALFINALIZEROBJECT_T339194016_H
#ifndef MISSING_T1084945390_H
#define MISSING_T1084945390_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.Missing
struct  Missing_t1084945390  : public RuntimeObject
{
public:

public:
};

struct Missing_t1084945390_StaticFields
{
public:
	// System.Reflection.Missing System.Reflection.Missing::Value
	Missing_t1084945390 * ___Value_0;

public:
	inline static int32_t get_offset_of_Value_0() { return static_cast<int32_t>(offsetof(Missing_t1084945390_StaticFields, ___Value_0)); }
	inline Missing_t1084945390 * get_Value_0() const { return ___Value_0; }
	inline Missing_t1084945390 ** get_address_of_Value_0() { return &___Value_0; }
	inline void set_Value_0(Missing_t1084945390 * value)
	{
		___Value_0 = value;
		Il2CppCodeGenWriteBarrier((&___Value_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MISSING_T1084945390_H
#ifndef ISVOLATILE_T1432184093_H
#define ISVOLATILE_T1432184093_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.CompilerServices.IsVolatile
struct  IsVolatile_t1432184093  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ISVOLATILE_T1432184093_H
#ifndef ATTRIBUTE_T2512812344_H
#define ATTRIBUTE_T2512812344_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Attribute
struct  Attribute_t2512812344  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ATTRIBUTE_T2512812344_H
#ifndef RESOURCEENUMERATOR_T7886450_H
#define RESOURCEENUMERATOR_T7886450_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Resources.ResourceReader/ResourceEnumerator
struct  ResourceEnumerator_t7886450  : public RuntimeObject
{
public:
	// System.Resources.ResourceReader System.Resources.ResourceReader/ResourceEnumerator::reader
	ResourceReader_t1960966370 * ___reader_0;
	// System.Int32 System.Resources.ResourceReader/ResourceEnumerator::index
	int32_t ___index_1;
	// System.Boolean System.Resources.ResourceReader/ResourceEnumerator::finished
	bool ___finished_2;

public:
	inline static int32_t get_offset_of_reader_0() { return static_cast<int32_t>(offsetof(ResourceEnumerator_t7886450, ___reader_0)); }
	inline ResourceReader_t1960966370 * get_reader_0() const { return ___reader_0; }
	inline ResourceReader_t1960966370 ** get_address_of_reader_0() { return &___reader_0; }
	inline void set_reader_0(ResourceReader_t1960966370 * value)
	{
		___reader_0 = value;
		Il2CppCodeGenWriteBarrier((&___reader_0), value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(ResourceEnumerator_t7886450, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_finished_2() { return static_cast<int32_t>(offsetof(ResourceEnumerator_t7886450, ___finished_2)); }
	inline bool get_finished_2() const { return ___finished_2; }
	inline bool* get_address_of_finished_2() { return &___finished_2; }
	inline void set_finished_2(bool value)
	{
		___finished_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RESOURCEENUMERATOR_T7886450_H
#ifndef RESOURCEREADER_T1960966370_H
#define RESOURCEREADER_T1960966370_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Resources.ResourceReader
struct  ResourceReader_t1960966370  : public RuntimeObject
{
public:
	// System.IO.BinaryReader System.Resources.ResourceReader::reader
	BinaryReader_t2193329889 * ___reader_0;
	// System.Object System.Resources.ResourceReader::readerLock
	RuntimeObject * ___readerLock_1;
	// System.Runtime.Serialization.IFormatter System.Resources.ResourceReader::formatter
	RuntimeObject* ___formatter_2;
	// System.Int32 System.Resources.ResourceReader::resourceCount
	int32_t ___resourceCount_3;
	// System.Int32 System.Resources.ResourceReader::typeCount
	int32_t ___typeCount_4;
	// System.String[] System.Resources.ResourceReader::typeNames
	StringU5BU5D_t3267915945* ___typeNames_5;
	// System.Int32[] System.Resources.ResourceReader::hashes
	Int32U5BU5D_t947404415* ___hashes_6;
	// System.Resources.ResourceReader/ResourceInfo[] System.Resources.ResourceReader::infos
	ResourceInfoU5BU5D_t3076838120* ___infos_7;
	// System.Int32 System.Resources.ResourceReader::dataSectionOffset
	int32_t ___dataSectionOffset_8;
	// System.Int64 System.Resources.ResourceReader::nameSectionOffset
	int64_t ___nameSectionOffset_9;
	// System.Int32 System.Resources.ResourceReader::resource_ver
	int32_t ___resource_ver_10;
	// System.Resources.ResourceReader/ResourceCacheItem[] System.Resources.ResourceReader::cache
	ResourceCacheItemU5BU5D_t4143538902* ___cache_11;
	// System.Object System.Resources.ResourceReader::cache_lock
	RuntimeObject * ___cache_lock_12;

public:
	inline static int32_t get_offset_of_reader_0() { return static_cast<int32_t>(offsetof(ResourceReader_t1960966370, ___reader_0)); }
	inline BinaryReader_t2193329889 * get_reader_0() const { return ___reader_0; }
	inline BinaryReader_t2193329889 ** get_address_of_reader_0() { return &___reader_0; }
	inline void set_reader_0(BinaryReader_t2193329889 * value)
	{
		___reader_0 = value;
		Il2CppCodeGenWriteBarrier((&___reader_0), value);
	}

	inline static int32_t get_offset_of_readerLock_1() { return static_cast<int32_t>(offsetof(ResourceReader_t1960966370, ___readerLock_1)); }
	inline RuntimeObject * get_readerLock_1() const { return ___readerLock_1; }
	inline RuntimeObject ** get_address_of_readerLock_1() { return &___readerLock_1; }
	inline void set_readerLock_1(RuntimeObject * value)
	{
		___readerLock_1 = value;
		Il2CppCodeGenWriteBarrier((&___readerLock_1), value);
	}

	inline static int32_t get_offset_of_formatter_2() { return static_cast<int32_t>(offsetof(ResourceReader_t1960966370, ___formatter_2)); }
	inline RuntimeObject* get_formatter_2() const { return ___formatter_2; }
	inline RuntimeObject** get_address_of_formatter_2() { return &___formatter_2; }
	inline void set_formatter_2(RuntimeObject* value)
	{
		___formatter_2 = value;
		Il2CppCodeGenWriteBarrier((&___formatter_2), value);
	}

	inline static int32_t get_offset_of_resourceCount_3() { return static_cast<int32_t>(offsetof(ResourceReader_t1960966370, ___resourceCount_3)); }
	inline int32_t get_resourceCount_3() const { return ___resourceCount_3; }
	inline int32_t* get_address_of_resourceCount_3() { return &___resourceCount_3; }
	inline void set_resourceCount_3(int32_t value)
	{
		___resourceCount_3 = value;
	}

	inline static int32_t get_offset_of_typeCount_4() { return static_cast<int32_t>(offsetof(ResourceReader_t1960966370, ___typeCount_4)); }
	inline int32_t get_typeCount_4() const { return ___typeCount_4; }
	inline int32_t* get_address_of_typeCount_4() { return &___typeCount_4; }
	inline void set_typeCount_4(int32_t value)
	{
		___typeCount_4 = value;
	}

	inline static int32_t get_offset_of_typeNames_5() { return static_cast<int32_t>(offsetof(ResourceReader_t1960966370, ___typeNames_5)); }
	inline StringU5BU5D_t3267915945* get_typeNames_5() const { return ___typeNames_5; }
	inline StringU5BU5D_t3267915945** get_address_of_typeNames_5() { return &___typeNames_5; }
	inline void set_typeNames_5(StringU5BU5D_t3267915945* value)
	{
		___typeNames_5 = value;
		Il2CppCodeGenWriteBarrier((&___typeNames_5), value);
	}

	inline static int32_t get_offset_of_hashes_6() { return static_cast<int32_t>(offsetof(ResourceReader_t1960966370, ___hashes_6)); }
	inline Int32U5BU5D_t947404415* get_hashes_6() const { return ___hashes_6; }
	inline Int32U5BU5D_t947404415** get_address_of_hashes_6() { return &___hashes_6; }
	inline void set_hashes_6(Int32U5BU5D_t947404415* value)
	{
		___hashes_6 = value;
		Il2CppCodeGenWriteBarrier((&___hashes_6), value);
	}

	inline static int32_t get_offset_of_infos_7() { return static_cast<int32_t>(offsetof(ResourceReader_t1960966370, ___infos_7)); }
	inline ResourceInfoU5BU5D_t3076838120* get_infos_7() const { return ___infos_7; }
	inline ResourceInfoU5BU5D_t3076838120** get_address_of_infos_7() { return &___infos_7; }
	inline void set_infos_7(ResourceInfoU5BU5D_t3076838120* value)
	{
		___infos_7 = value;
		Il2CppCodeGenWriteBarrier((&___infos_7), value);
	}

	inline static int32_t get_offset_of_dataSectionOffset_8() { return static_cast<int32_t>(offsetof(ResourceReader_t1960966370, ___dataSectionOffset_8)); }
	inline int32_t get_dataSectionOffset_8() const { return ___dataSectionOffset_8; }
	inline int32_t* get_address_of_dataSectionOffset_8() { return &___dataSectionOffset_8; }
	inline void set_dataSectionOffset_8(int32_t value)
	{
		___dataSectionOffset_8 = value;
	}

	inline static int32_t get_offset_of_nameSectionOffset_9() { return static_cast<int32_t>(offsetof(ResourceReader_t1960966370, ___nameSectionOffset_9)); }
	inline int64_t get_nameSectionOffset_9() const { return ___nameSectionOffset_9; }
	inline int64_t* get_address_of_nameSectionOffset_9() { return &___nameSectionOffset_9; }
	inline void set_nameSectionOffset_9(int64_t value)
	{
		___nameSectionOffset_9 = value;
	}

	inline static int32_t get_offset_of_resource_ver_10() { return static_cast<int32_t>(offsetof(ResourceReader_t1960966370, ___resource_ver_10)); }
	inline int32_t get_resource_ver_10() const { return ___resource_ver_10; }
	inline int32_t* get_address_of_resource_ver_10() { return &___resource_ver_10; }
	inline void set_resource_ver_10(int32_t value)
	{
		___resource_ver_10 = value;
	}

	inline static int32_t get_offset_of_cache_11() { return static_cast<int32_t>(offsetof(ResourceReader_t1960966370, ___cache_11)); }
	inline ResourceCacheItemU5BU5D_t4143538902* get_cache_11() const { return ___cache_11; }
	inline ResourceCacheItemU5BU5D_t4143538902** get_address_of_cache_11() { return &___cache_11; }
	inline void set_cache_11(ResourceCacheItemU5BU5D_t4143538902* value)
	{
		___cache_11 = value;
		Il2CppCodeGenWriteBarrier((&___cache_11), value);
	}

	inline static int32_t get_offset_of_cache_lock_12() { return static_cast<int32_t>(offsetof(ResourceReader_t1960966370, ___cache_lock_12)); }
	inline RuntimeObject * get_cache_lock_12() const { return ___cache_lock_12; }
	inline RuntimeObject ** get_address_of_cache_lock_12() { return &___cache_lock_12; }
	inline void set_cache_lock_12(RuntimeObject * value)
	{
		___cache_lock_12 = value;
		Il2CppCodeGenWriteBarrier((&___cache_lock_12), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RESOURCEREADER_T1960966370_H
#ifndef RESOURCESET_T3257676901_H
#define RESOURCESET_T3257676901_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Resources.ResourceSet
struct  ResourceSet_t3257676901  : public RuntimeObject
{
public:
	// System.Resources.IResourceReader System.Resources.ResourceSet::Reader
	RuntimeObject* ___Reader_0;
	// System.Collections.Hashtable System.Resources.ResourceSet::Table
	Hashtable_t967422820 * ___Table_1;
	// System.Boolean System.Resources.ResourceSet::resources_read
	bool ___resources_read_2;
	// System.Boolean System.Resources.ResourceSet::disposed
	bool ___disposed_3;

public:
	inline static int32_t get_offset_of_Reader_0() { return static_cast<int32_t>(offsetof(ResourceSet_t3257676901, ___Reader_0)); }
	inline RuntimeObject* get_Reader_0() const { return ___Reader_0; }
	inline RuntimeObject** get_address_of_Reader_0() { return &___Reader_0; }
	inline void set_Reader_0(RuntimeObject* value)
	{
		___Reader_0 = value;
		Il2CppCodeGenWriteBarrier((&___Reader_0), value);
	}

	inline static int32_t get_offset_of_Table_1() { return static_cast<int32_t>(offsetof(ResourceSet_t3257676901, ___Table_1)); }
	inline Hashtable_t967422820 * get_Table_1() const { return ___Table_1; }
	inline Hashtable_t967422820 ** get_address_of_Table_1() { return &___Table_1; }
	inline void set_Table_1(Hashtable_t967422820 * value)
	{
		___Table_1 = value;
		Il2CppCodeGenWriteBarrier((&___Table_1), value);
	}

	inline static int32_t get_offset_of_resources_read_2() { return static_cast<int32_t>(offsetof(ResourceSet_t3257676901, ___resources_read_2)); }
	inline bool get_resources_read_2() const { return ___resources_read_2; }
	inline bool* get_address_of_resources_read_2() { return &___resources_read_2; }
	inline void set_resources_read_2(bool value)
	{
		___resources_read_2 = value;
	}

	inline static int32_t get_offset_of_disposed_3() { return static_cast<int32_t>(offsetof(ResourceSet_t3257676901, ___disposed_3)); }
	inline bool get_disposed_3() const { return ___disposed_3; }
	inline bool* get_address_of_disposed_3() { return &___disposed_3; }
	inline void set_disposed_3(bool value)
	{
		___disposed_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RESOURCESET_T3257676901_H
#ifndef RESOLVEEVENTHOLDER_T1910797677_H
#define RESOLVEEVENTHOLDER_T1910797677_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.Assembly/ResolveEventHolder
struct  ResolveEventHolder_t1910797677  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RESOLVEEVENTHOLDER_T1910797677_H
#ifndef OPCODENAMES_T1676869817_H
#define OPCODENAMES_T1676869817_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.Emit.OpCodeNames
struct  OpCodeNames_t1676869817  : public RuntimeObject
{
public:

public:
};

struct OpCodeNames_t1676869817_StaticFields
{
public:
	// System.String[] System.Reflection.Emit.OpCodeNames::names
	StringU5BU5D_t3267915945* ___names_0;

public:
	inline static int32_t get_offset_of_names_0() { return static_cast<int32_t>(offsetof(OpCodeNames_t1676869817_StaticFields, ___names_0)); }
	inline StringU5BU5D_t3267915945* get_names_0() const { return ___names_0; }
	inline StringU5BU5D_t3267915945** get_address_of_names_0() { return &___names_0; }
	inline void set_names_0(StringU5BU5D_t3267915945* value)
	{
		___names_0 = value;
		Il2CppCodeGenWriteBarrier((&___names_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // OPCODENAMES_T1676869817_H
#ifndef STRONGNAMEKEYPAIR_T1633660243_H
#define STRONGNAMEKEYPAIR_T1633660243_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.StrongNameKeyPair
struct  StrongNameKeyPair_t1633660243  : public RuntimeObject
{
public:
	// System.Byte[] System.Reflection.StrongNameKeyPair::_publicKey
	ByteU5BU5D_t998316899* ____publicKey_0;
	// System.String System.Reflection.StrongNameKeyPair::_keyPairContainer
	String_t* ____keyPairContainer_1;
	// System.Boolean System.Reflection.StrongNameKeyPair::_keyPairExported
	bool ____keyPairExported_2;
	// System.Byte[] System.Reflection.StrongNameKeyPair::_keyPairArray
	ByteU5BU5D_t998316899* ____keyPairArray_3;

public:
	inline static int32_t get_offset_of__publicKey_0() { return static_cast<int32_t>(offsetof(StrongNameKeyPair_t1633660243, ____publicKey_0)); }
	inline ByteU5BU5D_t998316899* get__publicKey_0() const { return ____publicKey_0; }
	inline ByteU5BU5D_t998316899** get_address_of__publicKey_0() { return &____publicKey_0; }
	inline void set__publicKey_0(ByteU5BU5D_t998316899* value)
	{
		____publicKey_0 = value;
		Il2CppCodeGenWriteBarrier((&____publicKey_0), value);
	}

	inline static int32_t get_offset_of__keyPairContainer_1() { return static_cast<int32_t>(offsetof(StrongNameKeyPair_t1633660243, ____keyPairContainer_1)); }
	inline String_t* get__keyPairContainer_1() const { return ____keyPairContainer_1; }
	inline String_t** get_address_of__keyPairContainer_1() { return &____keyPairContainer_1; }
	inline void set__keyPairContainer_1(String_t* value)
	{
		____keyPairContainer_1 = value;
		Il2CppCodeGenWriteBarrier((&____keyPairContainer_1), value);
	}

	inline static int32_t get_offset_of__keyPairExported_2() { return static_cast<int32_t>(offsetof(StrongNameKeyPair_t1633660243, ____keyPairExported_2)); }
	inline bool get__keyPairExported_2() const { return ____keyPairExported_2; }
	inline bool* get_address_of__keyPairExported_2() { return &____keyPairExported_2; }
	inline void set__keyPairExported_2(bool value)
	{
		____keyPairExported_2 = value;
	}

	inline static int32_t get_offset_of__keyPairArray_3() { return static_cast<int32_t>(offsetof(StrongNameKeyPair_t1633660243, ____keyPairArray_3)); }
	inline ByteU5BU5D_t998316899* get__keyPairArray_3() const { return ____keyPairArray_3; }
	inline ByteU5BU5D_t998316899** get_address_of__keyPairArray_3() { return &____keyPairArray_3; }
	inline void set__keyPairArray_3(ByteU5BU5D_t998316899* value)
	{
		____keyPairArray_3 = value;
		Il2CppCodeGenWriteBarrier((&____keyPairArray_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STRONGNAMEKEYPAIR_T1633660243_H
#ifndef EXCEPTION_T546029469_H
#define EXCEPTION_T546029469_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Exception
struct  Exception_t546029469  : public RuntimeObject
{
public:
	// System.IntPtr[] System.Exception::trace_ips
	IntPtrU5BU5D_t2927467004* ___trace_ips_0;
	// System.Exception System.Exception::inner_exception
	Exception_t546029469 * ___inner_exception_1;
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
	inline static int32_t get_offset_of_trace_ips_0() { return static_cast<int32_t>(offsetof(Exception_t546029469, ___trace_ips_0)); }
	inline IntPtrU5BU5D_t2927467004* get_trace_ips_0() const { return ___trace_ips_0; }
	inline IntPtrU5BU5D_t2927467004** get_address_of_trace_ips_0() { return &___trace_ips_0; }
	inline void set_trace_ips_0(IntPtrU5BU5D_t2927467004* value)
	{
		___trace_ips_0 = value;
		Il2CppCodeGenWriteBarrier((&___trace_ips_0), value);
	}

	inline static int32_t get_offset_of_inner_exception_1() { return static_cast<int32_t>(offsetof(Exception_t546029469, ___inner_exception_1)); }
	inline Exception_t546029469 * get_inner_exception_1() const { return ___inner_exception_1; }
	inline Exception_t546029469 ** get_address_of_inner_exception_1() { return &___inner_exception_1; }
	inline void set_inner_exception_1(Exception_t546029469 * value)
	{
		___inner_exception_1 = value;
		Il2CppCodeGenWriteBarrier((&___inner_exception_1), value);
	}

	inline static int32_t get_offset_of_message_2() { return static_cast<int32_t>(offsetof(Exception_t546029469, ___message_2)); }
	inline String_t* get_message_2() const { return ___message_2; }
	inline String_t** get_address_of_message_2() { return &___message_2; }
	inline void set_message_2(String_t* value)
	{
		___message_2 = value;
		Il2CppCodeGenWriteBarrier((&___message_2), value);
	}

	inline static int32_t get_offset_of_help_link_3() { return static_cast<int32_t>(offsetof(Exception_t546029469, ___help_link_3)); }
	inline String_t* get_help_link_3() const { return ___help_link_3; }
	inline String_t** get_address_of_help_link_3() { return &___help_link_3; }
	inline void set_help_link_3(String_t* value)
	{
		___help_link_3 = value;
		Il2CppCodeGenWriteBarrier((&___help_link_3), value);
	}

	inline static int32_t get_offset_of_class_name_4() { return static_cast<int32_t>(offsetof(Exception_t546029469, ___class_name_4)); }
	inline String_t* get_class_name_4() const { return ___class_name_4; }
	inline String_t** get_address_of_class_name_4() { return &___class_name_4; }
	inline void set_class_name_4(String_t* value)
	{
		___class_name_4 = value;
		Il2CppCodeGenWriteBarrier((&___class_name_4), value);
	}

	inline static int32_t get_offset_of_stack_trace_5() { return static_cast<int32_t>(offsetof(Exception_t546029469, ___stack_trace_5)); }
	inline String_t* get_stack_trace_5() const { return ___stack_trace_5; }
	inline String_t** get_address_of_stack_trace_5() { return &___stack_trace_5; }
	inline void set_stack_trace_5(String_t* value)
	{
		___stack_trace_5 = value;
		Il2CppCodeGenWriteBarrier((&___stack_trace_5), value);
	}

	inline static int32_t get_offset_of__remoteStackTraceString_6() { return static_cast<int32_t>(offsetof(Exception_t546029469, ____remoteStackTraceString_6)); }
	inline String_t* get__remoteStackTraceString_6() const { return ____remoteStackTraceString_6; }
	inline String_t** get_address_of__remoteStackTraceString_6() { return &____remoteStackTraceString_6; }
	inline void set__remoteStackTraceString_6(String_t* value)
	{
		____remoteStackTraceString_6 = value;
		Il2CppCodeGenWriteBarrier((&____remoteStackTraceString_6), value);
	}

	inline static int32_t get_offset_of_remote_stack_index_7() { return static_cast<int32_t>(offsetof(Exception_t546029469, ___remote_stack_index_7)); }
	inline int32_t get_remote_stack_index_7() const { return ___remote_stack_index_7; }
	inline int32_t* get_address_of_remote_stack_index_7() { return &___remote_stack_index_7; }
	inline void set_remote_stack_index_7(int32_t value)
	{
		___remote_stack_index_7 = value;
	}

	inline static int32_t get_offset_of_hresult_8() { return static_cast<int32_t>(offsetof(Exception_t546029469, ___hresult_8)); }
	inline int32_t get_hresult_8() const { return ___hresult_8; }
	inline int32_t* get_address_of_hresult_8() { return &___hresult_8; }
	inline void set_hresult_8(int32_t value)
	{
		___hresult_8 = value;
	}

	inline static int32_t get_offset_of_source_9() { return static_cast<int32_t>(offsetof(Exception_t546029469, ___source_9)); }
	inline String_t* get_source_9() const { return ___source_9; }
	inline String_t** get_address_of_source_9() { return &___source_9; }
	inline void set_source_9(String_t* value)
	{
		___source_9 = value;
		Il2CppCodeGenWriteBarrier((&___source_9), value);
	}

	inline static int32_t get_offset_of__data_10() { return static_cast<int32_t>(offsetof(Exception_t546029469, ____data_10)); }
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
#endif // EXCEPTION_T546029469_H
#ifndef RESOURCEMANAGER_T2010066326_H
#define RESOURCEMANAGER_T2010066326_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Resources.ResourceManager
struct  ResourceManager_t2010066326  : public RuntimeObject
{
public:
	// System.Type System.Resources.ResourceManager::resourceSetType
	Type_t * ___resourceSetType_4;

public:
	inline static int32_t get_offset_of_resourceSetType_4() { return static_cast<int32_t>(offsetof(ResourceManager_t2010066326, ___resourceSetType_4)); }
	inline Type_t * get_resourceSetType_4() const { return ___resourceSetType_4; }
	inline Type_t ** get_address_of_resourceSetType_4() { return &___resourceSetType_4; }
	inline void set_resourceSetType_4(Type_t * value)
	{
		___resourceSetType_4 = value;
		Il2CppCodeGenWriteBarrier((&___resourceSetType_4), value);
	}
};

struct ResourceManager_t2010066326_StaticFields
{
public:
	// System.Collections.Hashtable System.Resources.ResourceManager::ResourceCache
	Hashtable_t967422820 * ___ResourceCache_0;
	// System.Collections.Hashtable System.Resources.ResourceManager::NonExistent
	Hashtable_t967422820 * ___NonExistent_1;
	// System.Int32 System.Resources.ResourceManager::HeaderVersionNumber
	int32_t ___HeaderVersionNumber_2;
	// System.Int32 System.Resources.ResourceManager::MagicNumber
	int32_t ___MagicNumber_3;

public:
	inline static int32_t get_offset_of_ResourceCache_0() { return static_cast<int32_t>(offsetof(ResourceManager_t2010066326_StaticFields, ___ResourceCache_0)); }
	inline Hashtable_t967422820 * get_ResourceCache_0() const { return ___ResourceCache_0; }
	inline Hashtable_t967422820 ** get_address_of_ResourceCache_0() { return &___ResourceCache_0; }
	inline void set_ResourceCache_0(Hashtable_t967422820 * value)
	{
		___ResourceCache_0 = value;
		Il2CppCodeGenWriteBarrier((&___ResourceCache_0), value);
	}

	inline static int32_t get_offset_of_NonExistent_1() { return static_cast<int32_t>(offsetof(ResourceManager_t2010066326_StaticFields, ___NonExistent_1)); }
	inline Hashtable_t967422820 * get_NonExistent_1() const { return ___NonExistent_1; }
	inline Hashtable_t967422820 ** get_address_of_NonExistent_1() { return &___NonExistent_1; }
	inline void set_NonExistent_1(Hashtable_t967422820 * value)
	{
		___NonExistent_1 = value;
		Il2CppCodeGenWriteBarrier((&___NonExistent_1), value);
	}

	inline static int32_t get_offset_of_HeaderVersionNumber_2() { return static_cast<int32_t>(offsetof(ResourceManager_t2010066326_StaticFields, ___HeaderVersionNumber_2)); }
	inline int32_t get_HeaderVersionNumber_2() const { return ___HeaderVersionNumber_2; }
	inline int32_t* get_address_of_HeaderVersionNumber_2() { return &___HeaderVersionNumber_2; }
	inline void set_HeaderVersionNumber_2(int32_t value)
	{
		___HeaderVersionNumber_2 = value;
	}

	inline static int32_t get_offset_of_MagicNumber_3() { return static_cast<int32_t>(offsetof(ResourceManager_t2010066326_StaticFields, ___MagicNumber_3)); }
	inline int32_t get_MagicNumber_3() const { return ___MagicNumber_3; }
	inline int32_t* get_address_of_MagicNumber_3() { return &___MagicNumber_3; }
	inline void set_MagicNumber_3(int32_t value)
	{
		___MagicNumber_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RESOURCEMANAGER_T2010066326_H
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
#ifndef POINTER_T3014290161_H
#define POINTER_T3014290161_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.Pointer
struct  Pointer_t3014290161  : public RuntimeObject
{
public:
	// System.Void* System.Reflection.Pointer::data
	void* ___data_0;
	// System.Type System.Reflection.Pointer::type
	Type_t * ___type_1;

public:
	inline static int32_t get_offset_of_data_0() { return static_cast<int32_t>(offsetof(Pointer_t3014290161, ___data_0)); }
	inline void* get_data_0() const { return ___data_0; }
	inline void** get_address_of_data_0() { return &___data_0; }
	inline void set_data_0(void* value)
	{
		___data_0 = value;
	}

	inline static int32_t get_offset_of_type_1() { return static_cast<int32_t>(offsetof(Pointer_t3014290161, ___type_1)); }
	inline Type_t * get_type_1() const { return ___type_1; }
	inline Type_t ** get_address_of_type_1() { return &___type_1; }
	inline void set_type_1(Type_t * value)
	{
		___type_1 = value;
		Il2CppCodeGenWriteBarrier((&___type_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // POINTER_T3014290161_H
#ifndef MODULEBUILDERTOKENGENERATOR_T8538338_H
#define MODULEBUILDERTOKENGENERATOR_T8538338_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.Emit.ModuleBuilderTokenGenerator
struct  ModuleBuilderTokenGenerator_t8538338  : public RuntimeObject
{
public:
	// System.Reflection.Emit.ModuleBuilder System.Reflection.Emit.ModuleBuilderTokenGenerator::mb
	ModuleBuilder_t1155181340 * ___mb_0;

public:
	inline static int32_t get_offset_of_mb_0() { return static_cast<int32_t>(offsetof(ModuleBuilderTokenGenerator_t8538338, ___mb_0)); }
	inline ModuleBuilder_t1155181340 * get_mb_0() const { return ___mb_0; }
	inline ModuleBuilder_t1155181340 ** get_address_of_mb_0() { return &___mb_0; }
	inline void set_mb_0(ModuleBuilder_t1155181340 * value)
	{
		___mb_0 = value;
		Il2CppCodeGenWriteBarrier((&___mb_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MODULEBUILDERTOKENGENERATOR_T8538338_H
#ifndef SATELLITECONTRACTVERSIONATTRIBUTE_T1427845223_H
#define SATELLITECONTRACTVERSIONATTRIBUTE_T1427845223_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Resources.SatelliteContractVersionAttribute
struct  SatelliteContractVersionAttribute_t1427845223  : public Attribute_t2512812344
{
public:
	// System.Version System.Resources.SatelliteContractVersionAttribute::ver
	Version_t1720425036 * ___ver_0;

public:
	inline static int32_t get_offset_of_ver_0() { return static_cast<int32_t>(offsetof(SatelliteContractVersionAttribute_t1427845223, ___ver_0)); }
	inline Version_t1720425036 * get_ver_0() const { return ___ver_0; }
	inline Version_t1720425036 ** get_address_of_ver_0() { return &___ver_0; }
	inline void set_ver_0(Version_t1720425036 * value)
	{
		___ver_0 = value;
		Il2CppCodeGenWriteBarrier((&___ver_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SATELLITECONTRACTVERSIONATTRIBUTE_T1427845223_H
#ifndef RUNTIMERESOURCESET_T2011574961_H
#define RUNTIMERESOURCESET_T2011574961_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Resources.RuntimeResourceSet
struct  RuntimeResourceSet_t2011574961  : public ResourceSet_t3257676901
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNTIMERESOURCESET_T2011574961_H
#ifndef TARGETINVOCATIONEXCEPTION_T4166835084_H
#define TARGETINVOCATIONEXCEPTION_T4166835084_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.TargetInvocationException
struct  TargetInvocationException_t4166835084  : public Exception_t546029469
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TARGETINVOCATIONEXCEPTION_T4166835084_H
#ifndef NEUTRALRESOURCESLANGUAGEATTRIBUTE_T3508866279_H
#define NEUTRALRESOURCESLANGUAGEATTRIBUTE_T3508866279_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Resources.NeutralResourcesLanguageAttribute
struct  NeutralResourcesLanguageAttribute_t3508866279  : public Attribute_t2512812344
{
public:
	// System.String System.Resources.NeutralResourcesLanguageAttribute::culture
	String_t* ___culture_0;

public:
	inline static int32_t get_offset_of_culture_0() { return static_cast<int32_t>(offsetof(NeutralResourcesLanguageAttribute_t3508866279, ___culture_0)); }
	inline String_t* get_culture_0() const { return ___culture_0; }
	inline String_t** get_address_of_culture_0() { return &___culture_0; }
	inline void set_culture_0(String_t* value)
	{
		___culture_0 = value;
		Il2CppCodeGenWriteBarrier((&___culture_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NEUTRALRESOURCESLANGUAGEATTRIBUTE_T3508866279_H
#ifndef PROPERTYINFO_T_H
#define PROPERTYINFO_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.PropertyInfo
struct  PropertyInfo_t  : public MemberInfo_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PROPERTYINFO_T_H
#ifndef PARAMETERMODIFIER_T1155932803_H
#define PARAMETERMODIFIER_T1155932803_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.ParameterModifier
struct  ParameterModifier_t1155932803 
{
public:
	// System.Boolean[] System.Reflection.ParameterModifier::_byref
	BooleanU5BU5D_t170153581* ____byref_0;

public:
	inline static int32_t get_offset_of__byref_0() { return static_cast<int32_t>(offsetof(ParameterModifier_t1155932803, ____byref_0)); }
	inline BooleanU5BU5D_t170153581* get__byref_0() const { return ____byref_0; }
	inline BooleanU5BU5D_t170153581** get_address_of__byref_0() { return &____byref_0; }
	inline void set__byref_0(BooleanU5BU5D_t170153581* value)
	{
		____byref_0 = value;
		Il2CppCodeGenWriteBarrier((&____byref_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Reflection.ParameterModifier
struct ParameterModifier_t1155932803_marshaled_pinvoke
{
	int32_t* ____byref_0;
};
// Native definition for COM marshalling of System.Reflection.ParameterModifier
struct ParameterModifier_t1155932803_marshaled_com
{
	int32_t* ____byref_0;
};
#endif // PARAMETERMODIFIER_T1155932803_H
#ifndef METHODBASE_T2510322194_H
#define METHODBASE_T2510322194_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.MethodBase
struct  MethodBase_t2510322194  : public MemberInfo_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // METHODBASE_T2510322194_H
#ifndef RESOURCECACHEITEM_T1485375503_H
#define RESOURCECACHEITEM_T1485375503_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Resources.ResourceReader/ResourceCacheItem
struct  ResourceCacheItem_t1485375503 
{
public:
	// System.String System.Resources.ResourceReader/ResourceCacheItem::ResourceName
	String_t* ___ResourceName_0;
	// System.Object System.Resources.ResourceReader/ResourceCacheItem::ResourceValue
	RuntimeObject * ___ResourceValue_1;

public:
	inline static int32_t get_offset_of_ResourceName_0() { return static_cast<int32_t>(offsetof(ResourceCacheItem_t1485375503, ___ResourceName_0)); }
	inline String_t* get_ResourceName_0() const { return ___ResourceName_0; }
	inline String_t** get_address_of_ResourceName_0() { return &___ResourceName_0; }
	inline void set_ResourceName_0(String_t* value)
	{
		___ResourceName_0 = value;
		Il2CppCodeGenWriteBarrier((&___ResourceName_0), value);
	}

	inline static int32_t get_offset_of_ResourceValue_1() { return static_cast<int32_t>(offsetof(ResourceCacheItem_t1485375503, ___ResourceValue_1)); }
	inline RuntimeObject * get_ResourceValue_1() const { return ___ResourceValue_1; }
	inline RuntimeObject ** get_address_of_ResourceValue_1() { return &___ResourceValue_1; }
	inline void set_ResourceValue_1(RuntimeObject * value)
	{
		___ResourceValue_1 = value;
		Il2CppCodeGenWriteBarrier((&___ResourceValue_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Resources.ResourceReader/ResourceCacheItem
struct ResourceCacheItem_t1485375503_marshaled_pinvoke
{
	char* ___ResourceName_0;
	Il2CppIUnknown* ___ResourceValue_1;
};
// Native definition for COM marshalling of System.Resources.ResourceReader/ResourceCacheItem
struct ResourceCacheItem_t1485375503_marshaled_com
{
	Il2CppChar* ___ResourceName_0;
	Il2CppIUnknown* ___ResourceValue_1;
};
#endif // RESOURCECACHEITEM_T1485375503_H
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
#ifndef COMDEFAULTINTERFACEATTRIBUTE_T990492726_H
#define COMDEFAULTINTERFACEATTRIBUTE_T990492726_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.InteropServices.ComDefaultInterfaceAttribute
struct  ComDefaultInterfaceAttribute_t990492726  : public Attribute_t2512812344
{
public:
	// System.Type System.Runtime.InteropServices.ComDefaultInterfaceAttribute::_type
	Type_t * ____type_0;

public:
	inline static int32_t get_offset_of__type_0() { return static_cast<int32_t>(offsetof(ComDefaultInterfaceAttribute_t990492726, ____type_0)); }
	inline Type_t * get__type_0() const { return ____type_0; }
	inline Type_t ** get_address_of__type_0() { return &____type_0; }
	inline void set__type_0(Type_t * value)
	{
		____type_0 = value;
		Il2CppCodeGenWriteBarrier((&____type_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COMDEFAULTINTERFACEATTRIBUTE_T990492726_H
#ifndef RESOURCEINFO_T2545680357_H
#define RESOURCEINFO_T2545680357_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Resources.ResourceReader/ResourceInfo
struct  ResourceInfo_t2545680357 
{
public:
	// System.Int64 System.Resources.ResourceReader/ResourceInfo::ValuePosition
	int64_t ___ValuePosition_0;
	// System.String System.Resources.ResourceReader/ResourceInfo::ResourceName
	String_t* ___ResourceName_1;
	// System.Int32 System.Resources.ResourceReader/ResourceInfo::TypeIndex
	int32_t ___TypeIndex_2;

public:
	inline static int32_t get_offset_of_ValuePosition_0() { return static_cast<int32_t>(offsetof(ResourceInfo_t2545680357, ___ValuePosition_0)); }
	inline int64_t get_ValuePosition_0() const { return ___ValuePosition_0; }
	inline int64_t* get_address_of_ValuePosition_0() { return &___ValuePosition_0; }
	inline void set_ValuePosition_0(int64_t value)
	{
		___ValuePosition_0 = value;
	}

	inline static int32_t get_offset_of_ResourceName_1() { return static_cast<int32_t>(offsetof(ResourceInfo_t2545680357, ___ResourceName_1)); }
	inline String_t* get_ResourceName_1() const { return ___ResourceName_1; }
	inline String_t** get_address_of_ResourceName_1() { return &___ResourceName_1; }
	inline void set_ResourceName_1(String_t* value)
	{
		___ResourceName_1 = value;
		Il2CppCodeGenWriteBarrier((&___ResourceName_1), value);
	}

	inline static int32_t get_offset_of_TypeIndex_2() { return static_cast<int32_t>(offsetof(ResourceInfo_t2545680357, ___TypeIndex_2)); }
	inline int32_t get_TypeIndex_2() const { return ___TypeIndex_2; }
	inline int32_t* get_address_of_TypeIndex_2() { return &___TypeIndex_2; }
	inline void set_TypeIndex_2(int32_t value)
	{
		___TypeIndex_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Resources.ResourceReader/ResourceInfo
struct ResourceInfo_t2545680357_marshaled_pinvoke
{
	int64_t ___ValuePosition_0;
	char* ___ResourceName_1;
	int32_t ___TypeIndex_2;
};
// Native definition for COM marshalling of System.Resources.ResourceReader/ResourceInfo
struct ResourceInfo_t2545680357_marshaled_com
{
	int64_t ___ValuePosition_0;
	Il2CppChar* ___ResourceName_1;
	int32_t ___TypeIndex_2;
};
#endif // RESOURCEINFO_T2545680357_H
#ifndef TARGETEXCEPTION_T4384542_H
#define TARGETEXCEPTION_T4384542_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.TargetException
struct  TargetException_t4384542  : public Exception_t546029469
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TARGETEXCEPTION_T4384542_H
#ifndef COMPILATIONRELAXATIONSATTRIBUTE_T3005882814_H
#define COMPILATIONRELAXATIONSATTRIBUTE_T3005882814_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.CompilerServices.CompilationRelaxationsAttribute
struct  CompilationRelaxationsAttribute_t3005882814  : public Attribute_t2512812344
{
public:
	// System.Int32 System.Runtime.CompilerServices.CompilationRelaxationsAttribute::relax
	int32_t ___relax_0;

public:
	inline static int32_t get_offset_of_relax_0() { return static_cast<int32_t>(offsetof(CompilationRelaxationsAttribute_t3005882814, ___relax_0)); }
	inline int32_t get_relax_0() const { return ___relax_0; }
	inline int32_t* get_address_of_relax_0() { return &___relax_0; }
	inline void set_relax_0(int32_t value)
	{
		___relax_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COMPILATIONRELAXATIONSATTRIBUTE_T3005882814_H
#ifndef STRINGFREEZINGATTRIBUTE_T511352540_H
#define STRINGFREEZINGATTRIBUTE_T511352540_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.CompilerServices.StringFreezingAttribute
struct  StringFreezingAttribute_t511352540  : public Attribute_t2512812344
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STRINGFREEZINGATTRIBUTE_T511352540_H
#ifndef EVENTINFO_T_H
#define EVENTINFO_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.EventInfo
struct  EventInfo_t  : public MemberInfo_t
{
public:
	// System.Reflection.EventInfo/AddEventAdapter System.Reflection.EventInfo::cached_add_event
	AddEventAdapter_t2464420954 * ___cached_add_event_0;

public:
	inline static int32_t get_offset_of_cached_add_event_0() { return static_cast<int32_t>(offsetof(EventInfo_t, ___cached_add_event_0)); }
	inline AddEventAdapter_t2464420954 * get_cached_add_event_0() const { return ___cached_add_event_0; }
	inline AddEventAdapter_t2464420954 ** get_address_of_cached_add_event_0() { return &___cached_add_event_0; }
	inline void set_cached_add_event_0(AddEventAdapter_t2464420954 * value)
	{
		___cached_add_event_0 = value;
		Il2CppCodeGenWriteBarrier((&___cached_add_event_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EVENTINFO_T_H
#ifndef ENUM_T748909222_H
#define ENUM_T748909222_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Enum
struct  Enum_t748909222  : public ValueType_t3506676332
{
public:

public:
};

struct Enum_t748909222_StaticFields
{
public:
	// System.Char[] System.Enum::split_char
	CharU5BU5D_t1858403069* ___split_char_0;

public:
	inline static int32_t get_offset_of_split_char_0() { return static_cast<int32_t>(offsetof(Enum_t748909222_StaticFields, ___split_char_0)); }
	inline CharU5BU5D_t1858403069* get_split_char_0() const { return ___split_char_0; }
	inline CharU5BU5D_t1858403069** get_address_of_split_char_0() { return &___split_char_0; }
	inline void set_split_char_0(CharU5BU5D_t1858403069* value)
	{
		___split_char_0 = value;
		Il2CppCodeGenWriteBarrier((&___split_char_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t748909222_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t748909222_marshaled_com
{
};
#endif // ENUM_T748909222_H
#ifndef OPCODE_T3879854364_H
#define OPCODE_T3879854364_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.Emit.OpCode
struct  OpCode_t3879854364 
{
public:
	// System.Byte System.Reflection.Emit.OpCode::op1
	uint8_t ___op1_0;
	// System.Byte System.Reflection.Emit.OpCode::op2
	uint8_t ___op2_1;
	// System.Byte System.Reflection.Emit.OpCode::push
	uint8_t ___push_2;
	// System.Byte System.Reflection.Emit.OpCode::pop
	uint8_t ___pop_3;
	// System.Byte System.Reflection.Emit.OpCode::size
	uint8_t ___size_4;
	// System.Byte System.Reflection.Emit.OpCode::type
	uint8_t ___type_5;
	// System.Byte System.Reflection.Emit.OpCode::args
	uint8_t ___args_6;
	// System.Byte System.Reflection.Emit.OpCode::flow
	uint8_t ___flow_7;

public:
	inline static int32_t get_offset_of_op1_0() { return static_cast<int32_t>(offsetof(OpCode_t3879854364, ___op1_0)); }
	inline uint8_t get_op1_0() const { return ___op1_0; }
	inline uint8_t* get_address_of_op1_0() { return &___op1_0; }
	inline void set_op1_0(uint8_t value)
	{
		___op1_0 = value;
	}

	inline static int32_t get_offset_of_op2_1() { return static_cast<int32_t>(offsetof(OpCode_t3879854364, ___op2_1)); }
	inline uint8_t get_op2_1() const { return ___op2_1; }
	inline uint8_t* get_address_of_op2_1() { return &___op2_1; }
	inline void set_op2_1(uint8_t value)
	{
		___op2_1 = value;
	}

	inline static int32_t get_offset_of_push_2() { return static_cast<int32_t>(offsetof(OpCode_t3879854364, ___push_2)); }
	inline uint8_t get_push_2() const { return ___push_2; }
	inline uint8_t* get_address_of_push_2() { return &___push_2; }
	inline void set_push_2(uint8_t value)
	{
		___push_2 = value;
	}

	inline static int32_t get_offset_of_pop_3() { return static_cast<int32_t>(offsetof(OpCode_t3879854364, ___pop_3)); }
	inline uint8_t get_pop_3() const { return ___pop_3; }
	inline uint8_t* get_address_of_pop_3() { return &___pop_3; }
	inline void set_pop_3(uint8_t value)
	{
		___pop_3 = value;
	}

	inline static int32_t get_offset_of_size_4() { return static_cast<int32_t>(offsetof(OpCode_t3879854364, ___size_4)); }
	inline uint8_t get_size_4() const { return ___size_4; }
	inline uint8_t* get_address_of_size_4() { return &___size_4; }
	inline void set_size_4(uint8_t value)
	{
		___size_4 = value;
	}

	inline static int32_t get_offset_of_type_5() { return static_cast<int32_t>(offsetof(OpCode_t3879854364, ___type_5)); }
	inline uint8_t get_type_5() const { return ___type_5; }
	inline uint8_t* get_address_of_type_5() { return &___type_5; }
	inline void set_type_5(uint8_t value)
	{
		___type_5 = value;
	}

	inline static int32_t get_offset_of_args_6() { return static_cast<int32_t>(offsetof(OpCode_t3879854364, ___args_6)); }
	inline uint8_t get_args_6() const { return ___args_6; }
	inline uint8_t* get_address_of_args_6() { return &___args_6; }
	inline void set_args_6(uint8_t value)
	{
		___args_6 = value;
	}

	inline static int32_t get_offset_of_flow_7() { return static_cast<int32_t>(offsetof(OpCode_t3879854364, ___flow_7)); }
	inline uint8_t get_flow_7() const { return ___flow_7; }
	inline uint8_t* get_address_of_flow_7() { return &___flow_7; }
	inline void set_flow_7(uint8_t value)
	{
		___flow_7 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // OPCODE_T3879854364_H
#ifndef VOID_T2224711708_H
#define VOID_T2224711708_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Void
struct  Void_t2224711708 
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VOID_T2224711708_H
#ifndef ASSEMBLYCOMPANYATTRIBUTE_T1934384631_H
#define ASSEMBLYCOMPANYATTRIBUTE_T1934384631_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.AssemblyCompanyAttribute
struct  AssemblyCompanyAttribute_t1934384631  : public Attribute_t2512812344
{
public:
	// System.String System.Reflection.AssemblyCompanyAttribute::name
	String_t* ___name_0;

public:
	inline static int32_t get_offset_of_name_0() { return static_cast<int32_t>(offsetof(AssemblyCompanyAttribute_t1934384631, ___name_0)); }
	inline String_t* get_name_0() const { return ___name_0; }
	inline String_t** get_address_of_name_0() { return &___name_0; }
	inline void set_name_0(String_t* value)
	{
		___name_0 = value;
		Il2CppCodeGenWriteBarrier((&___name_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ASSEMBLYCOMPANYATTRIBUTE_T1934384631_H
#ifndef ASSEMBLYCONFIGURATIONATTRIBUTE_T2036680737_H
#define ASSEMBLYCONFIGURATIONATTRIBUTE_T2036680737_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.AssemblyConfigurationAttribute
struct  AssemblyConfigurationAttribute_t2036680737  : public Attribute_t2512812344
{
public:
	// System.String System.Reflection.AssemblyConfigurationAttribute::name
	String_t* ___name_0;

public:
	inline static int32_t get_offset_of_name_0() { return static_cast<int32_t>(offsetof(AssemblyConfigurationAttribute_t2036680737, ___name_0)); }
	inline String_t* get_name_0() const { return ___name_0; }
	inline String_t** get_address_of_name_0() { return &___name_0; }
	inline void set_name_0(String_t* value)
	{
		___name_0 = value;
		Il2CppCodeGenWriteBarrier((&___name_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ASSEMBLYCONFIGURATIONATTRIBUTE_T2036680737_H
#ifndef ASSEMBLYCOPYRIGHTATTRIBUTE_T1802899732_H
#define ASSEMBLYCOPYRIGHTATTRIBUTE_T1802899732_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.AssemblyCopyrightAttribute
struct  AssemblyCopyrightAttribute_t1802899732  : public Attribute_t2512812344
{
public:
	// System.String System.Reflection.AssemblyCopyrightAttribute::name
	String_t* ___name_0;

public:
	inline static int32_t get_offset_of_name_0() { return static_cast<int32_t>(offsetof(AssemblyCopyrightAttribute_t1802899732, ___name_0)); }
	inline String_t* get_name_0() const { return ___name_0; }
	inline String_t** get_address_of_name_0() { return &___name_0; }
	inline void set_name_0(String_t* value)
	{
		___name_0 = value;
		Il2CppCodeGenWriteBarrier((&___name_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ASSEMBLYCOPYRIGHTATTRIBUTE_T1802899732_H
#ifndef ASSEMBLYDEFAULTALIASATTRIBUTE_T50285372_H
#define ASSEMBLYDEFAULTALIASATTRIBUTE_T50285372_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.AssemblyDefaultAliasAttribute
struct  AssemblyDefaultAliasAttribute_t50285372  : public Attribute_t2512812344
{
public:
	// System.String System.Reflection.AssemblyDefaultAliasAttribute::name
	String_t* ___name_0;

public:
	inline static int32_t get_offset_of_name_0() { return static_cast<int32_t>(offsetof(AssemblyDefaultAliasAttribute_t50285372, ___name_0)); }
	inline String_t* get_name_0() const { return ___name_0; }
	inline String_t** get_address_of_name_0() { return &___name_0; }
	inline void set_name_0(String_t* value)
	{
		___name_0 = value;
		Il2CppCodeGenWriteBarrier((&___name_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ASSEMBLYDEFAULTALIASATTRIBUTE_T50285372_H
#ifndef ASSEMBLYDELAYSIGNATTRIBUTE_T305434571_H
#define ASSEMBLYDELAYSIGNATTRIBUTE_T305434571_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.AssemblyDelaySignAttribute
struct  AssemblyDelaySignAttribute_t305434571  : public Attribute_t2512812344
{
public:
	// System.Boolean System.Reflection.AssemblyDelaySignAttribute::delay
	bool ___delay_0;

public:
	inline static int32_t get_offset_of_delay_0() { return static_cast<int32_t>(offsetof(AssemblyDelaySignAttribute_t305434571, ___delay_0)); }
	inline bool get_delay_0() const { return ___delay_0; }
	inline bool* get_address_of_delay_0() { return &___delay_0; }
	inline void set_delay_0(bool value)
	{
		___delay_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ASSEMBLYDELAYSIGNATTRIBUTE_T305434571_H
#ifndef ASSEMBLYDESCRIPTIONATTRIBUTE_T3258087278_H
#define ASSEMBLYDESCRIPTIONATTRIBUTE_T3258087278_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.AssemblyDescriptionAttribute
struct  AssemblyDescriptionAttribute_t3258087278  : public Attribute_t2512812344
{
public:
	// System.String System.Reflection.AssemblyDescriptionAttribute::name
	String_t* ___name_0;

public:
	inline static int32_t get_offset_of_name_0() { return static_cast<int32_t>(offsetof(AssemblyDescriptionAttribute_t3258087278, ___name_0)); }
	inline String_t* get_name_0() const { return ___name_0; }
	inline String_t** get_address_of_name_0() { return &___name_0; }
	inline void set_name_0(String_t* value)
	{
		___name_0 = value;
		Il2CppCodeGenWriteBarrier((&___name_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ASSEMBLYDESCRIPTIONATTRIBUTE_T3258087278_H
#ifndef ASSEMBLYFILEVERSIONATTRIBUTE_T3318548662_H
#define ASSEMBLYFILEVERSIONATTRIBUTE_T3318548662_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.AssemblyFileVersionAttribute
struct  AssemblyFileVersionAttribute_t3318548662  : public Attribute_t2512812344
{
public:
	// System.String System.Reflection.AssemblyFileVersionAttribute::name
	String_t* ___name_0;

public:
	inline static int32_t get_offset_of_name_0() { return static_cast<int32_t>(offsetof(AssemblyFileVersionAttribute_t3318548662, ___name_0)); }
	inline String_t* get_name_0() const { return ___name_0; }
	inline String_t** get_address_of_name_0() { return &___name_0; }
	inline void set_name_0(String_t* value)
	{
		___name_0 = value;
		Il2CppCodeGenWriteBarrier((&___name_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ASSEMBLYFILEVERSIONATTRIBUTE_T3318548662_H
#ifndef CUSTOMATTRIBUTETYPEDARGUMENT_T4183764089_H
#define CUSTOMATTRIBUTETYPEDARGUMENT_T4183764089_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.CustomAttributeTypedArgument
struct  CustomAttributeTypedArgument_t4183764089 
{
public:
	// System.Type System.Reflection.CustomAttributeTypedArgument::argumentType
	Type_t * ___argumentType_0;
	// System.Object System.Reflection.CustomAttributeTypedArgument::value
	RuntimeObject * ___value_1;

public:
	inline static int32_t get_offset_of_argumentType_0() { return static_cast<int32_t>(offsetof(CustomAttributeTypedArgument_t4183764089, ___argumentType_0)); }
	inline Type_t * get_argumentType_0() const { return ___argumentType_0; }
	inline Type_t ** get_address_of_argumentType_0() { return &___argumentType_0; }
	inline void set_argumentType_0(Type_t * value)
	{
		___argumentType_0 = value;
		Il2CppCodeGenWriteBarrier((&___argumentType_0), value);
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(CustomAttributeTypedArgument_t4183764089, ___value_1)); }
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
// Native definition for P/Invoke marshalling of System.Reflection.CustomAttributeTypedArgument
struct CustomAttributeTypedArgument_t4183764089_marshaled_pinvoke
{
	Type_t * ___argumentType_0;
	Il2CppIUnknown* ___value_1;
};
// Native definition for COM marshalling of System.Reflection.CustomAttributeTypedArgument
struct CustomAttributeTypedArgument_t4183764089_marshaled_com
{
	Type_t * ___argumentType_0;
	Il2CppIUnknown* ___value_1;
};
#endif // CUSTOMATTRIBUTETYPEDARGUMENT_T4183764089_H
#ifndef ASSEMBLYKEYFILEATTRIBUTE_T1029188607_H
#define ASSEMBLYKEYFILEATTRIBUTE_T1029188607_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.AssemblyKeyFileAttribute
struct  AssemblyKeyFileAttribute_t1029188607  : public Attribute_t2512812344
{
public:
	// System.String System.Reflection.AssemblyKeyFileAttribute::name
	String_t* ___name_0;

public:
	inline static int32_t get_offset_of_name_0() { return static_cast<int32_t>(offsetof(AssemblyKeyFileAttribute_t1029188607, ___name_0)); }
	inline String_t* get_name_0() const { return ___name_0; }
	inline String_t** get_address_of_name_0() { return &___name_0; }
	inline void set_name_0(String_t* value)
	{
		___name_0 = value;
		Il2CppCodeGenWriteBarrier((&___name_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ASSEMBLYKEYFILEATTRIBUTE_T1029188607_H
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
	IntPtr_t ___Zero_1;

public:
	inline static int32_t get_offset_of_Zero_1() { return static_cast<int32_t>(offsetof(IntPtr_t_StaticFields, ___Zero_1)); }
	inline IntPtr_t get_Zero_1() const { return ___Zero_1; }
	inline IntPtr_t* get_address_of_Zero_1() { return &___Zero_1; }
	inline void set_Zero_1(IntPtr_t value)
	{
		___Zero_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INTPTR_T_H
#ifndef ASSEMBLYINFORMATIONALVERSIONATTRIBUTE_T3026773960_H
#define ASSEMBLYINFORMATIONALVERSIONATTRIBUTE_T3026773960_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.AssemblyInformationalVersionAttribute
struct  AssemblyInformationalVersionAttribute_t3026773960  : public Attribute_t2512812344
{
public:
	// System.String System.Reflection.AssemblyInformationalVersionAttribute::name
	String_t* ___name_0;

public:
	inline static int32_t get_offset_of_name_0() { return static_cast<int32_t>(offsetof(AssemblyInformationalVersionAttribute_t3026773960, ___name_0)); }
	inline String_t* get_name_0() const { return ___name_0; }
	inline String_t** get_address_of_name_0() { return &___name_0; }
	inline void set_name_0(String_t* value)
	{
		___name_0 = value;
		Il2CppCodeGenWriteBarrier((&___name_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ASSEMBLYINFORMATIONALVERSIONATTRIBUTE_T3026773960_H
#ifndef ASSEMBLYPRODUCTATTRIBUTE_T1008180663_H
#define ASSEMBLYPRODUCTATTRIBUTE_T1008180663_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.AssemblyProductAttribute
struct  AssemblyProductAttribute_t1008180663  : public Attribute_t2512812344
{
public:
	// System.String System.Reflection.AssemblyProductAttribute::name
	String_t* ___name_0;

public:
	inline static int32_t get_offset_of_name_0() { return static_cast<int32_t>(offsetof(AssemblyProductAttribute_t1008180663, ___name_0)); }
	inline String_t* get_name_0() const { return ___name_0; }
	inline String_t** get_address_of_name_0() { return &___name_0; }
	inline void set_name_0(String_t* value)
	{
		___name_0 = value;
		Il2CppCodeGenWriteBarrier((&___name_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ASSEMBLYPRODUCTATTRIBUTE_T1008180663_H
#ifndef SYSTEMEXCEPTION_T3127155225_H
#define SYSTEMEXCEPTION_T3127155225_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.SystemException
struct  SystemException_t3127155225  : public Exception_t546029469
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SYSTEMEXCEPTION_T3127155225_H
#ifndef DEFAULT_T1995776279_H
#define DEFAULT_T1995776279_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.Binder/Default
struct  Default_t1995776279  : public Binder_t3726367644
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DEFAULT_T1995776279_H
#ifndef ASSEMBLYTRADEMARKATTRIBUTE_T2378224240_H
#define ASSEMBLYTRADEMARKATTRIBUTE_T2378224240_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.AssemblyTrademarkAttribute
struct  AssemblyTrademarkAttribute_t2378224240  : public Attribute_t2512812344
{
public:
	// System.String System.Reflection.AssemblyTrademarkAttribute::name
	String_t* ___name_0;

public:
	inline static int32_t get_offset_of_name_0() { return static_cast<int32_t>(offsetof(AssemblyTrademarkAttribute_t2378224240, ___name_0)); }
	inline String_t* get_name_0() const { return ___name_0; }
	inline String_t** get_address_of_name_0() { return &___name_0; }
	inline void set_name_0(String_t* value)
	{
		___name_0 = value;
		Il2CppCodeGenWriteBarrier((&___name_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ASSEMBLYTRADEMARKATTRIBUTE_T2378224240_H
#ifndef TARGETPARAMETERCOUNTEXCEPTION_T2278282655_H
#define TARGETPARAMETERCOUNTEXCEPTION_T2278282655_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.TargetParameterCountException
struct  TargetParameterCountException_t2278282655  : public Exception_t546029469
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TARGETPARAMETERCOUNTEXCEPTION_T2278282655_H
#ifndef ASSEMBLYTITLEATTRIBUTE_T932561627_H
#define ASSEMBLYTITLEATTRIBUTE_T932561627_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.AssemblyTitleAttribute
struct  AssemblyTitleAttribute_t932561627  : public Attribute_t2512812344
{
public:
	// System.String System.Reflection.AssemblyTitleAttribute::name
	String_t* ___name_0;

public:
	inline static int32_t get_offset_of_name_0() { return static_cast<int32_t>(offsetof(AssemblyTitleAttribute_t932561627, ___name_0)); }
	inline String_t* get_name_0() const { return ___name_0; }
	inline String_t** get_address_of_name_0() { return &___name_0; }
	inline void set_name_0(String_t* value)
	{
		___name_0 = value;
		Il2CppCodeGenWriteBarrier((&___name_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ASSEMBLYTITLEATTRIBUTE_T932561627_H
#ifndef CER_T3746393490_H
#define CER_T3746393490_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.ConstrainedExecution.Cer
struct  Cer_t3746393490 
{
public:
	// System.Int32 System.Runtime.ConstrainedExecution.Cer::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(Cer_t3746393490, ___value___1)); }
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
#endif // CER_T3746393490_H
#ifndef COMPILATIONRELAXATIONS_T3750021707_H
#define COMPILATIONRELAXATIONS_T3750021707_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.CompilerServices.CompilationRelaxations
struct  CompilationRelaxations_t3750021707 
{
public:
	// System.Int32 System.Runtime.CompilerServices.CompilationRelaxations::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(CompilationRelaxations_t3750021707, ___value___1)); }
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
#endif // COMPILATIONRELAXATIONS_T3750021707_H
#ifndef CALLINGCONVENTION_T2634007872_H
#define CALLINGCONVENTION_T2634007872_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.InteropServices.CallingConvention
struct  CallingConvention_t2634007872 
{
public:
	// System.Int32 System.Runtime.InteropServices.CallingConvention::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(CallingConvention_t2634007872, ___value___1)); }
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
#endif // CALLINGCONVENTION_T2634007872_H
#ifndef LOADHINT_T2935231416_H
#define LOADHINT_T2935231416_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.CompilerServices.LoadHint
struct  LoadHint_t2935231416 
{
public:
	// System.Int32 System.Runtime.CompilerServices.LoadHint::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(LoadHint_t2935231416, ___value___1)); }
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
#endif // LOADHINT_T2935231416_H
#ifndef CHARSET_T3790924677_H
#define CHARSET_T3790924677_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.InteropServices.CharSet
struct  CharSet_t3790924677 
{
public:
	// System.Int32 System.Runtime.InteropServices.CharSet::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(CharSet_t3790924677, ___value___1)); }
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
#endif // CHARSET_T3790924677_H
#ifndef ASSEMBLYHASHALGORITHM_T3551612628_H
#define ASSEMBLYHASHALGORITHM_T3551612628_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Configuration.Assemblies.AssemblyHashAlgorithm
struct  AssemblyHashAlgorithm_t3551612628 
{
public:
	// System.Int32 System.Configuration.Assemblies.AssemblyHashAlgorithm::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(AssemblyHashAlgorithm_t3551612628, ___value___1)); }
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
#endif // ASSEMBLYHASHALGORITHM_T3551612628_H
#ifndef ASSEMBLYVERSIONCOMPATIBILITY_T1593232525_H
#define ASSEMBLYVERSIONCOMPATIBILITY_T1593232525_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Configuration.Assemblies.AssemblyVersionCompatibility
struct  AssemblyVersionCompatibility_t1593232525 
{
public:
	// System.Int32 System.Configuration.Assemblies.AssemblyVersionCompatibility::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(AssemblyVersionCompatibility_t1593232525, ___value___1)); }
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
#endif // ASSEMBLYVERSIONCOMPATIBILITY_T1593232525_H
#ifndef UNMANAGEDTYPE_T2421847464_H
#define UNMANAGEDTYPE_T2421847464_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.InteropServices.UnmanagedType
struct  UnmanagedType_t2421847464 
{
public:
	// System.Int32 System.Runtime.InteropServices.UnmanagedType::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(UnmanagedType_t2421847464, ___value___1)); }
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
#endif // UNMANAGEDTYPE_T2421847464_H
#ifndef TYPEATTRIBUTES_T3214111652_H
#define TYPEATTRIBUTES_T3214111652_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.TypeAttributes
struct  TypeAttributes_t3214111652 
{
public:
	// System.Int32 System.Reflection.TypeAttributes::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(TypeAttributes_t3214111652, ___value___1)); }
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
#endif // TYPEATTRIBUTES_T3214111652_H
#ifndef RUNTIMEFIELDHANDLE_T97424371_H
#define RUNTIMEFIELDHANDLE_T97424371_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.RuntimeFieldHandle
struct  RuntimeFieldHandle_t97424371 
{
public:
	// System.IntPtr System.RuntimeFieldHandle::value
	IntPtr_t ___value_0;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(RuntimeFieldHandle_t97424371, ___value_0)); }
	inline IntPtr_t get_value_0() const { return ___value_0; }
	inline IntPtr_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(IntPtr_t value)
	{
		___value_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNTIMEFIELDHANDLE_T97424371_H
#ifndef EXTERNALEXCEPTION_T1793089662_H
#define EXTERNALEXCEPTION_T1793089662_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.InteropServices.ExternalException
struct  ExternalException_t1793089662  : public SystemException_t3127155225
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EXTERNALEXCEPTION_T1793089662_H
#ifndef CLASSINTERFACETYPE_T535385316_H
#define CLASSINTERFACETYPE_T535385316_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.InteropServices.ClassInterfaceType
struct  ClassInterfaceType_t535385316 
{
public:
	// System.Int32 System.Runtime.InteropServices.ClassInterfaceType::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(ClassInterfaceType_t535385316, ___value___1)); }
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
#endif // CLASSINTERFACETYPE_T535385316_H
#ifndef CONSISTENCY_T2999158753_H
#define CONSISTENCY_T2999158753_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.ConstrainedExecution.Consistency
struct  Consistency_t2999158753 
{
public:
	// System.Int32 System.Runtime.ConstrainedExecution.Consistency::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(Consistency_t2999158753, ___value___1)); }
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
#endif // CONSISTENCY_T2999158753_H
#ifndef PREDEFINEDRESOURCETYPE_T1445429601_H
#define PREDEFINEDRESOURCETYPE_T1445429601_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Resources.PredefinedResourceType
struct  PredefinedResourceType_t1445429601 
{
public:
	// System.Int32 System.Resources.PredefinedResourceType::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(PredefinedResourceType_t1445429601, ___value___1)); }
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
#endif // PREDEFINEDRESOURCETYPE_T1445429601_H
#ifndef DELEGATE_T1264583404_H
#define DELEGATE_T1264583404_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Delegate
struct  Delegate_t1264583404  : public RuntimeObject
{
public:
	// System.IntPtr System.Delegate::method_ptr
	Il2CppMethodPointer ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	IntPtr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject * ___m_target_2;
	// System.IntPtr System.Delegate::method
	IntPtr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	IntPtr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::method_code
	IntPtr_t ___method_code_5;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t * ___method_info_6;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t * ___original_method_info_7;
	// System.DelegateData System.Delegate::data
	DelegateData_t317953312 * ___data_8;

public:
	inline static int32_t get_offset_of_method_ptr_0() { return static_cast<int32_t>(offsetof(Delegate_t1264583404, ___method_ptr_0)); }
	inline Il2CppMethodPointer get_method_ptr_0() const { return ___method_ptr_0; }
	inline Il2CppMethodPointer* get_address_of_method_ptr_0() { return &___method_ptr_0; }
	inline void set_method_ptr_0(Il2CppMethodPointer value)
	{
		___method_ptr_0 = value;
	}

	inline static int32_t get_offset_of_invoke_impl_1() { return static_cast<int32_t>(offsetof(Delegate_t1264583404, ___invoke_impl_1)); }
	inline IntPtr_t get_invoke_impl_1() const { return ___invoke_impl_1; }
	inline IntPtr_t* get_address_of_invoke_impl_1() { return &___invoke_impl_1; }
	inline void set_invoke_impl_1(IntPtr_t value)
	{
		___invoke_impl_1 = value;
	}

	inline static int32_t get_offset_of_m_target_2() { return static_cast<int32_t>(offsetof(Delegate_t1264583404, ___m_target_2)); }
	inline RuntimeObject * get_m_target_2() const { return ___m_target_2; }
	inline RuntimeObject ** get_address_of_m_target_2() { return &___m_target_2; }
	inline void set_m_target_2(RuntimeObject * value)
	{
		___m_target_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_target_2), value);
	}

	inline static int32_t get_offset_of_method_3() { return static_cast<int32_t>(offsetof(Delegate_t1264583404, ___method_3)); }
	inline IntPtr_t get_method_3() const { return ___method_3; }
	inline IntPtr_t* get_address_of_method_3() { return &___method_3; }
	inline void set_method_3(IntPtr_t value)
	{
		___method_3 = value;
	}

	inline static int32_t get_offset_of_delegate_trampoline_4() { return static_cast<int32_t>(offsetof(Delegate_t1264583404, ___delegate_trampoline_4)); }
	inline IntPtr_t get_delegate_trampoline_4() const { return ___delegate_trampoline_4; }
	inline IntPtr_t* get_address_of_delegate_trampoline_4() { return &___delegate_trampoline_4; }
	inline void set_delegate_trampoline_4(IntPtr_t value)
	{
		___delegate_trampoline_4 = value;
	}

	inline static int32_t get_offset_of_method_code_5() { return static_cast<int32_t>(offsetof(Delegate_t1264583404, ___method_code_5)); }
	inline IntPtr_t get_method_code_5() const { return ___method_code_5; }
	inline IntPtr_t* get_address_of_method_code_5() { return &___method_code_5; }
	inline void set_method_code_5(IntPtr_t value)
	{
		___method_code_5 = value;
	}

	inline static int32_t get_offset_of_method_info_6() { return static_cast<int32_t>(offsetof(Delegate_t1264583404, ___method_info_6)); }
	inline MethodInfo_t * get_method_info_6() const { return ___method_info_6; }
	inline MethodInfo_t ** get_address_of_method_info_6() { return &___method_info_6; }
	inline void set_method_info_6(MethodInfo_t * value)
	{
		___method_info_6 = value;
		Il2CppCodeGenWriteBarrier((&___method_info_6), value);
	}

	inline static int32_t get_offset_of_original_method_info_7() { return static_cast<int32_t>(offsetof(Delegate_t1264583404, ___original_method_info_7)); }
	inline MethodInfo_t * get_original_method_info_7() const { return ___original_method_info_7; }
	inline MethodInfo_t ** get_address_of_original_method_info_7() { return &___original_method_info_7; }
	inline void set_original_method_info_7(MethodInfo_t * value)
	{
		___original_method_info_7 = value;
		Il2CppCodeGenWriteBarrier((&___original_method_info_7), value);
	}

	inline static int32_t get_offset_of_data_8() { return static_cast<int32_t>(offsetof(Delegate_t1264583404, ___data_8)); }
	inline DelegateData_t317953312 * get_data_8() const { return ___data_8; }
	inline DelegateData_t317953312 ** get_address_of_data_8() { return &___data_8; }
	inline void set_data_8(DelegateData_t317953312 * value)
	{
		___data_8 = value;
		Il2CppCodeGenWriteBarrier((&___data_8), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DELEGATE_T1264583404_H
#ifndef PROCESSORARCHITECTURE_T3223967941_H
#define PROCESSORARCHITECTURE_T3223967941_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.ProcessorArchitecture
struct  ProcessorArchitecture_t3223967941 
{
public:
	// System.Int32 System.Reflection.ProcessorArchitecture::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(ProcessorArchitecture_t3223967941, ___value___1)); }
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
#endif // PROCESSORARCHITECTURE_T3223967941_H
#ifndef OPCODES_T3193932334_H
#define OPCODES_T3193932334_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.Emit.OpCodes
struct  OpCodes_t3193932334  : public RuntimeObject
{
public:

public:
};

struct OpCodes_t3193932334_StaticFields
{
public:
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Nop
	OpCode_t3879854364  ___Nop_0;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Break
	OpCode_t3879854364  ___Break_1;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Ldarg_0
	OpCode_t3879854364  ___Ldarg_0_2;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Ldarg_1
	OpCode_t3879854364  ___Ldarg_1_3;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Ldarg_2
	OpCode_t3879854364  ___Ldarg_2_4;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Ldarg_3
	OpCode_t3879854364  ___Ldarg_3_5;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Ldloc_0
	OpCode_t3879854364  ___Ldloc_0_6;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Ldloc_1
	OpCode_t3879854364  ___Ldloc_1_7;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Ldloc_2
	OpCode_t3879854364  ___Ldloc_2_8;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Ldloc_3
	OpCode_t3879854364  ___Ldloc_3_9;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Stloc_0
	OpCode_t3879854364  ___Stloc_0_10;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Stloc_1
	OpCode_t3879854364  ___Stloc_1_11;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Stloc_2
	OpCode_t3879854364  ___Stloc_2_12;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Stloc_3
	OpCode_t3879854364  ___Stloc_3_13;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Ldarg_S
	OpCode_t3879854364  ___Ldarg_S_14;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Ldarga_S
	OpCode_t3879854364  ___Ldarga_S_15;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Starg_S
	OpCode_t3879854364  ___Starg_S_16;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Ldloc_S
	OpCode_t3879854364  ___Ldloc_S_17;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Ldloca_S
	OpCode_t3879854364  ___Ldloca_S_18;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Stloc_S
	OpCode_t3879854364  ___Stloc_S_19;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Ldnull
	OpCode_t3879854364  ___Ldnull_20;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Ldc_I4_M1
	OpCode_t3879854364  ___Ldc_I4_M1_21;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Ldc_I4_0
	OpCode_t3879854364  ___Ldc_I4_0_22;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Ldc_I4_1
	OpCode_t3879854364  ___Ldc_I4_1_23;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Ldc_I4_2
	OpCode_t3879854364  ___Ldc_I4_2_24;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Ldc_I4_3
	OpCode_t3879854364  ___Ldc_I4_3_25;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Ldc_I4_4
	OpCode_t3879854364  ___Ldc_I4_4_26;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Ldc_I4_5
	OpCode_t3879854364  ___Ldc_I4_5_27;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Ldc_I4_6
	OpCode_t3879854364  ___Ldc_I4_6_28;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Ldc_I4_7
	OpCode_t3879854364  ___Ldc_I4_7_29;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Ldc_I4_8
	OpCode_t3879854364  ___Ldc_I4_8_30;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Ldc_I4_S
	OpCode_t3879854364  ___Ldc_I4_S_31;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Ldc_I4
	OpCode_t3879854364  ___Ldc_I4_32;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Ldc_I8
	OpCode_t3879854364  ___Ldc_I8_33;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Ldc_R4
	OpCode_t3879854364  ___Ldc_R4_34;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Ldc_R8
	OpCode_t3879854364  ___Ldc_R8_35;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Dup
	OpCode_t3879854364  ___Dup_36;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Pop
	OpCode_t3879854364  ___Pop_37;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Jmp
	OpCode_t3879854364  ___Jmp_38;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Call
	OpCode_t3879854364  ___Call_39;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Calli
	OpCode_t3879854364  ___Calli_40;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Ret
	OpCode_t3879854364  ___Ret_41;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Br_S
	OpCode_t3879854364  ___Br_S_42;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Brfalse_S
	OpCode_t3879854364  ___Brfalse_S_43;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Brtrue_S
	OpCode_t3879854364  ___Brtrue_S_44;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Beq_S
	OpCode_t3879854364  ___Beq_S_45;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Bge_S
	OpCode_t3879854364  ___Bge_S_46;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Bgt_S
	OpCode_t3879854364  ___Bgt_S_47;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Ble_S
	OpCode_t3879854364  ___Ble_S_48;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Blt_S
	OpCode_t3879854364  ___Blt_S_49;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Bne_Un_S
	OpCode_t3879854364  ___Bne_Un_S_50;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Bge_Un_S
	OpCode_t3879854364  ___Bge_Un_S_51;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Bgt_Un_S
	OpCode_t3879854364  ___Bgt_Un_S_52;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Ble_Un_S
	OpCode_t3879854364  ___Ble_Un_S_53;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Blt_Un_S
	OpCode_t3879854364  ___Blt_Un_S_54;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Br
	OpCode_t3879854364  ___Br_55;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Brfalse
	OpCode_t3879854364  ___Brfalse_56;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Brtrue
	OpCode_t3879854364  ___Brtrue_57;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Beq
	OpCode_t3879854364  ___Beq_58;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Bge
	OpCode_t3879854364  ___Bge_59;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Bgt
	OpCode_t3879854364  ___Bgt_60;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Ble
	OpCode_t3879854364  ___Ble_61;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Blt
	OpCode_t3879854364  ___Blt_62;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Bne_Un
	OpCode_t3879854364  ___Bne_Un_63;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Bge_Un
	OpCode_t3879854364  ___Bge_Un_64;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Bgt_Un
	OpCode_t3879854364  ___Bgt_Un_65;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Ble_Un
	OpCode_t3879854364  ___Ble_Un_66;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Blt_Un
	OpCode_t3879854364  ___Blt_Un_67;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Switch
	OpCode_t3879854364  ___Switch_68;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Ldind_I1
	OpCode_t3879854364  ___Ldind_I1_69;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Ldind_U1
	OpCode_t3879854364  ___Ldind_U1_70;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Ldind_I2
	OpCode_t3879854364  ___Ldind_I2_71;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Ldind_U2
	OpCode_t3879854364  ___Ldind_U2_72;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Ldind_I4
	OpCode_t3879854364  ___Ldind_I4_73;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Ldind_U4
	OpCode_t3879854364  ___Ldind_U4_74;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Ldind_I8
	OpCode_t3879854364  ___Ldind_I8_75;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Ldind_I
	OpCode_t3879854364  ___Ldind_I_76;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Ldind_R4
	OpCode_t3879854364  ___Ldind_R4_77;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Ldind_R8
	OpCode_t3879854364  ___Ldind_R8_78;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Ldind_Ref
	OpCode_t3879854364  ___Ldind_Ref_79;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Stind_Ref
	OpCode_t3879854364  ___Stind_Ref_80;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Stind_I1
	OpCode_t3879854364  ___Stind_I1_81;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Stind_I2
	OpCode_t3879854364  ___Stind_I2_82;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Stind_I4
	OpCode_t3879854364  ___Stind_I4_83;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Stind_I8
	OpCode_t3879854364  ___Stind_I8_84;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Stind_R4
	OpCode_t3879854364  ___Stind_R4_85;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Stind_R8
	OpCode_t3879854364  ___Stind_R8_86;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Add
	OpCode_t3879854364  ___Add_87;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Sub
	OpCode_t3879854364  ___Sub_88;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Mul
	OpCode_t3879854364  ___Mul_89;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Div
	OpCode_t3879854364  ___Div_90;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Div_Un
	OpCode_t3879854364  ___Div_Un_91;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Rem
	OpCode_t3879854364  ___Rem_92;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Rem_Un
	OpCode_t3879854364  ___Rem_Un_93;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::And
	OpCode_t3879854364  ___And_94;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Or
	OpCode_t3879854364  ___Or_95;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Xor
	OpCode_t3879854364  ___Xor_96;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Shl
	OpCode_t3879854364  ___Shl_97;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Shr
	OpCode_t3879854364  ___Shr_98;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Shr_Un
	OpCode_t3879854364  ___Shr_Un_99;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Neg
	OpCode_t3879854364  ___Neg_100;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Not
	OpCode_t3879854364  ___Not_101;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Conv_I1
	OpCode_t3879854364  ___Conv_I1_102;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Conv_I2
	OpCode_t3879854364  ___Conv_I2_103;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Conv_I4
	OpCode_t3879854364  ___Conv_I4_104;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Conv_I8
	OpCode_t3879854364  ___Conv_I8_105;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Conv_R4
	OpCode_t3879854364  ___Conv_R4_106;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Conv_R8
	OpCode_t3879854364  ___Conv_R8_107;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Conv_U4
	OpCode_t3879854364  ___Conv_U4_108;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Conv_U8
	OpCode_t3879854364  ___Conv_U8_109;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Callvirt
	OpCode_t3879854364  ___Callvirt_110;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Cpobj
	OpCode_t3879854364  ___Cpobj_111;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Ldobj
	OpCode_t3879854364  ___Ldobj_112;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Ldstr
	OpCode_t3879854364  ___Ldstr_113;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Newobj
	OpCode_t3879854364  ___Newobj_114;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Castclass
	OpCode_t3879854364  ___Castclass_115;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Isinst
	OpCode_t3879854364  ___Isinst_116;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Conv_R_Un
	OpCode_t3879854364  ___Conv_R_Un_117;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Unbox
	OpCode_t3879854364  ___Unbox_118;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Throw
	OpCode_t3879854364  ___Throw_119;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Ldfld
	OpCode_t3879854364  ___Ldfld_120;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Ldflda
	OpCode_t3879854364  ___Ldflda_121;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Stfld
	OpCode_t3879854364  ___Stfld_122;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Ldsfld
	OpCode_t3879854364  ___Ldsfld_123;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Ldsflda
	OpCode_t3879854364  ___Ldsflda_124;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Stsfld
	OpCode_t3879854364  ___Stsfld_125;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Stobj
	OpCode_t3879854364  ___Stobj_126;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Conv_Ovf_I1_Un
	OpCode_t3879854364  ___Conv_Ovf_I1_Un_127;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Conv_Ovf_I2_Un
	OpCode_t3879854364  ___Conv_Ovf_I2_Un_128;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Conv_Ovf_I4_Un
	OpCode_t3879854364  ___Conv_Ovf_I4_Un_129;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Conv_Ovf_I8_Un
	OpCode_t3879854364  ___Conv_Ovf_I8_Un_130;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Conv_Ovf_U1_Un
	OpCode_t3879854364  ___Conv_Ovf_U1_Un_131;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Conv_Ovf_U2_Un
	OpCode_t3879854364  ___Conv_Ovf_U2_Un_132;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Conv_Ovf_U4_Un
	OpCode_t3879854364  ___Conv_Ovf_U4_Un_133;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Conv_Ovf_U8_Un
	OpCode_t3879854364  ___Conv_Ovf_U8_Un_134;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Conv_Ovf_I_Un
	OpCode_t3879854364  ___Conv_Ovf_I_Un_135;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Conv_Ovf_U_Un
	OpCode_t3879854364  ___Conv_Ovf_U_Un_136;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Box
	OpCode_t3879854364  ___Box_137;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Newarr
	OpCode_t3879854364  ___Newarr_138;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Ldlen
	OpCode_t3879854364  ___Ldlen_139;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Ldelema
	OpCode_t3879854364  ___Ldelema_140;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Ldelem_I1
	OpCode_t3879854364  ___Ldelem_I1_141;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Ldelem_U1
	OpCode_t3879854364  ___Ldelem_U1_142;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Ldelem_I2
	OpCode_t3879854364  ___Ldelem_I2_143;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Ldelem_U2
	OpCode_t3879854364  ___Ldelem_U2_144;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Ldelem_I4
	OpCode_t3879854364  ___Ldelem_I4_145;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Ldelem_U4
	OpCode_t3879854364  ___Ldelem_U4_146;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Ldelem_I8
	OpCode_t3879854364  ___Ldelem_I8_147;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Ldelem_I
	OpCode_t3879854364  ___Ldelem_I_148;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Ldelem_R4
	OpCode_t3879854364  ___Ldelem_R4_149;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Ldelem_R8
	OpCode_t3879854364  ___Ldelem_R8_150;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Ldelem_Ref
	OpCode_t3879854364  ___Ldelem_Ref_151;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Stelem_I
	OpCode_t3879854364  ___Stelem_I_152;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Stelem_I1
	OpCode_t3879854364  ___Stelem_I1_153;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Stelem_I2
	OpCode_t3879854364  ___Stelem_I2_154;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Stelem_I4
	OpCode_t3879854364  ___Stelem_I4_155;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Stelem_I8
	OpCode_t3879854364  ___Stelem_I8_156;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Stelem_R4
	OpCode_t3879854364  ___Stelem_R4_157;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Stelem_R8
	OpCode_t3879854364  ___Stelem_R8_158;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Stelem_Ref
	OpCode_t3879854364  ___Stelem_Ref_159;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Ldelem
	OpCode_t3879854364  ___Ldelem_160;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Stelem
	OpCode_t3879854364  ___Stelem_161;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Unbox_Any
	OpCode_t3879854364  ___Unbox_Any_162;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Conv_Ovf_I1
	OpCode_t3879854364  ___Conv_Ovf_I1_163;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Conv_Ovf_U1
	OpCode_t3879854364  ___Conv_Ovf_U1_164;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Conv_Ovf_I2
	OpCode_t3879854364  ___Conv_Ovf_I2_165;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Conv_Ovf_U2
	OpCode_t3879854364  ___Conv_Ovf_U2_166;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Conv_Ovf_I4
	OpCode_t3879854364  ___Conv_Ovf_I4_167;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Conv_Ovf_U4
	OpCode_t3879854364  ___Conv_Ovf_U4_168;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Conv_Ovf_I8
	OpCode_t3879854364  ___Conv_Ovf_I8_169;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Conv_Ovf_U8
	OpCode_t3879854364  ___Conv_Ovf_U8_170;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Refanyval
	OpCode_t3879854364  ___Refanyval_171;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Ckfinite
	OpCode_t3879854364  ___Ckfinite_172;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Mkrefany
	OpCode_t3879854364  ___Mkrefany_173;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Ldtoken
	OpCode_t3879854364  ___Ldtoken_174;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Conv_U2
	OpCode_t3879854364  ___Conv_U2_175;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Conv_U1
	OpCode_t3879854364  ___Conv_U1_176;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Conv_I
	OpCode_t3879854364  ___Conv_I_177;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Conv_Ovf_I
	OpCode_t3879854364  ___Conv_Ovf_I_178;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Conv_Ovf_U
	OpCode_t3879854364  ___Conv_Ovf_U_179;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Add_Ovf
	OpCode_t3879854364  ___Add_Ovf_180;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Add_Ovf_Un
	OpCode_t3879854364  ___Add_Ovf_Un_181;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Mul_Ovf
	OpCode_t3879854364  ___Mul_Ovf_182;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Mul_Ovf_Un
	OpCode_t3879854364  ___Mul_Ovf_Un_183;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Sub_Ovf
	OpCode_t3879854364  ___Sub_Ovf_184;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Sub_Ovf_Un
	OpCode_t3879854364  ___Sub_Ovf_Un_185;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Endfinally
	OpCode_t3879854364  ___Endfinally_186;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Leave
	OpCode_t3879854364  ___Leave_187;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Leave_S
	OpCode_t3879854364  ___Leave_S_188;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Stind_I
	OpCode_t3879854364  ___Stind_I_189;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Conv_U
	OpCode_t3879854364  ___Conv_U_190;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Prefix7
	OpCode_t3879854364  ___Prefix7_191;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Prefix6
	OpCode_t3879854364  ___Prefix6_192;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Prefix5
	OpCode_t3879854364  ___Prefix5_193;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Prefix4
	OpCode_t3879854364  ___Prefix4_194;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Prefix3
	OpCode_t3879854364  ___Prefix3_195;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Prefix2
	OpCode_t3879854364  ___Prefix2_196;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Prefix1
	OpCode_t3879854364  ___Prefix1_197;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Prefixref
	OpCode_t3879854364  ___Prefixref_198;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Arglist
	OpCode_t3879854364  ___Arglist_199;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Ceq
	OpCode_t3879854364  ___Ceq_200;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Cgt
	OpCode_t3879854364  ___Cgt_201;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Cgt_Un
	OpCode_t3879854364  ___Cgt_Un_202;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Clt
	OpCode_t3879854364  ___Clt_203;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Clt_Un
	OpCode_t3879854364  ___Clt_Un_204;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Ldftn
	OpCode_t3879854364  ___Ldftn_205;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Ldvirtftn
	OpCode_t3879854364  ___Ldvirtftn_206;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Ldarg
	OpCode_t3879854364  ___Ldarg_207;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Ldarga
	OpCode_t3879854364  ___Ldarga_208;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Starg
	OpCode_t3879854364  ___Starg_209;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Ldloc
	OpCode_t3879854364  ___Ldloc_210;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Ldloca
	OpCode_t3879854364  ___Ldloca_211;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Stloc
	OpCode_t3879854364  ___Stloc_212;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Localloc
	OpCode_t3879854364  ___Localloc_213;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Endfilter
	OpCode_t3879854364  ___Endfilter_214;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Unaligned
	OpCode_t3879854364  ___Unaligned_215;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Volatile
	OpCode_t3879854364  ___Volatile_216;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Tailcall
	OpCode_t3879854364  ___Tailcall_217;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Initobj
	OpCode_t3879854364  ___Initobj_218;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Constrained
	OpCode_t3879854364  ___Constrained_219;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Cpblk
	OpCode_t3879854364  ___Cpblk_220;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Initblk
	OpCode_t3879854364  ___Initblk_221;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Rethrow
	OpCode_t3879854364  ___Rethrow_222;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Sizeof
	OpCode_t3879854364  ___Sizeof_223;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Refanytype
	OpCode_t3879854364  ___Refanytype_224;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Readonly
	OpCode_t3879854364  ___Readonly_225;

public:
	inline static int32_t get_offset_of_Nop_0() { return static_cast<int32_t>(offsetof(OpCodes_t3193932334_StaticFields, ___Nop_0)); }
	inline OpCode_t3879854364  get_Nop_0() const { return ___Nop_0; }
	inline OpCode_t3879854364 * get_address_of_Nop_0() { return &___Nop_0; }
	inline void set_Nop_0(OpCode_t3879854364  value)
	{
		___Nop_0 = value;
	}

	inline static int32_t get_offset_of_Break_1() { return static_cast<int32_t>(offsetof(OpCodes_t3193932334_StaticFields, ___Break_1)); }
	inline OpCode_t3879854364  get_Break_1() const { return ___Break_1; }
	inline OpCode_t3879854364 * get_address_of_Break_1() { return &___Break_1; }
	inline void set_Break_1(OpCode_t3879854364  value)
	{
		___Break_1 = value;
	}

	inline static int32_t get_offset_of_Ldarg_0_2() { return static_cast<int32_t>(offsetof(OpCodes_t3193932334_StaticFields, ___Ldarg_0_2)); }
	inline OpCode_t3879854364  get_Ldarg_0_2() const { return ___Ldarg_0_2; }
	inline OpCode_t3879854364 * get_address_of_Ldarg_0_2() { return &___Ldarg_0_2; }
	inline void set_Ldarg_0_2(OpCode_t3879854364  value)
	{
		___Ldarg_0_2 = value;
	}

	inline static int32_t get_offset_of_Ldarg_1_3() { return static_cast<int32_t>(offsetof(OpCodes_t3193932334_StaticFields, ___Ldarg_1_3)); }
	inline OpCode_t3879854364  get_Ldarg_1_3() const { return ___Ldarg_1_3; }
	inline OpCode_t3879854364 * get_address_of_Ldarg_1_3() { return &___Ldarg_1_3; }
	inline void set_Ldarg_1_3(OpCode_t3879854364  value)
	{
		___Ldarg_1_3 = value;
	}

	inline static int32_t get_offset_of_Ldarg_2_4() { return static_cast<int32_t>(offsetof(OpCodes_t3193932334_StaticFields, ___Ldarg_2_4)); }
	inline OpCode_t3879854364  get_Ldarg_2_4() const { return ___Ldarg_2_4; }
	inline OpCode_t3879854364 * get_address_of_Ldarg_2_4() { return &___Ldarg_2_4; }
	inline void set_Ldarg_2_4(OpCode_t3879854364  value)
	{
		___Ldarg_2_4 = value;
	}

	inline static int32_t get_offset_of_Ldarg_3_5() { return static_cast<int32_t>(offsetof(OpCodes_t3193932334_StaticFields, ___Ldarg_3_5)); }
	inline OpCode_t3879854364  get_Ldarg_3_5() const { return ___Ldarg_3_5; }
	inline OpCode_t3879854364 * get_address_of_Ldarg_3_5() { return &___Ldarg_3_5; }
	inline void set_Ldarg_3_5(OpCode_t3879854364  value)
	{
		___Ldarg_3_5 = value;
	}

	inline static int32_t get_offset_of_Ldloc_0_6() { return static_cast<int32_t>(offsetof(OpCodes_t3193932334_StaticFields, ___Ldloc_0_6)); }
	inline OpCode_t3879854364  get_Ldloc_0_6() const { return ___Ldloc_0_6; }
	inline OpCode_t3879854364 * get_address_of_Ldloc_0_6() { return &___Ldloc_0_6; }
	inline void set_Ldloc_0_6(OpCode_t3879854364  value)
	{
		___Ldloc_0_6 = value;
	}

	inline static int32_t get_offset_of_Ldloc_1_7() { return static_cast<int32_t>(offsetof(OpCodes_t3193932334_StaticFields, ___Ldloc_1_7)); }
	inline OpCode_t3879854364  get_Ldloc_1_7() const { return ___Ldloc_1_7; }
	inline OpCode_t3879854364 * get_address_of_Ldloc_1_7() { return &___Ldloc_1_7; }
	inline void set_Ldloc_1_7(OpCode_t3879854364  value)
	{
		___Ldloc_1_7 = value;
	}

	inline static int32_t get_offset_of_Ldloc_2_8() { return static_cast<int32_t>(offsetof(OpCodes_t3193932334_StaticFields, ___Ldloc_2_8)); }
	inline OpCode_t3879854364  get_Ldloc_2_8() const { return ___Ldloc_2_8; }
	inline OpCode_t3879854364 * get_address_of_Ldloc_2_8() { return &___Ldloc_2_8; }
	inline void set_Ldloc_2_8(OpCode_t3879854364  value)
	{
		___Ldloc_2_8 = value;
	}

	inline static int32_t get_offset_of_Ldloc_3_9() { return static_cast<int32_t>(offsetof(OpCodes_t3193932334_StaticFields, ___Ldloc_3_9)); }
	inline OpCode_t3879854364  get_Ldloc_3_9() const { return ___Ldloc_3_9; }
	inline OpCode_t3879854364 * get_address_of_Ldloc_3_9() { return &___Ldloc_3_9; }
	inline void set_Ldloc_3_9(OpCode_t3879854364  value)
	{
		___Ldloc_3_9 = value;
	}

	inline static int32_t get_offset_of_Stloc_0_10() { return static_cast<int32_t>(offsetof(OpCodes_t3193932334_StaticFields, ___Stloc_0_10)); }
	inline OpCode_t3879854364  get_Stloc_0_10() const { return ___Stloc_0_10; }
	inline OpCode_t3879854364 * get_address_of_Stloc_0_10() { return &___Stloc_0_10; }
	inline void set_Stloc_0_10(OpCode_t3879854364  value)
	{
		___Stloc_0_10 = value;
	}

	inline static int32_t get_offset_of_Stloc_1_11() { return static_cast<int32_t>(offsetof(OpCodes_t3193932334_StaticFields, ___Stloc_1_11)); }
	inline OpCode_t3879854364  get_Stloc_1_11() const { return ___Stloc_1_11; }
	inline OpCode_t3879854364 * get_address_of_Stloc_1_11() { return &___Stloc_1_11; }
	inline void set_Stloc_1_11(OpCode_t3879854364  value)
	{
		___Stloc_1_11 = value;
	}

	inline static int32_t get_offset_of_Stloc_2_12() { return static_cast<int32_t>(offsetof(OpCodes_t3193932334_StaticFields, ___Stloc_2_12)); }
	inline OpCode_t3879854364  get_Stloc_2_12() const { return ___Stloc_2_12; }
	inline OpCode_t3879854364 * get_address_of_Stloc_2_12() { return &___Stloc_2_12; }
	inline void set_Stloc_2_12(OpCode_t3879854364  value)
	{
		___Stloc_2_12 = value;
	}

	inline static int32_t get_offset_of_Stloc_3_13() { return static_cast<int32_t>(offsetof(OpCodes_t3193932334_StaticFields, ___Stloc_3_13)); }
	inline OpCode_t3879854364  get_Stloc_3_13() const { return ___Stloc_3_13; }
	inline OpCode_t3879854364 * get_address_of_Stloc_3_13() { return &___Stloc_3_13; }
	inline void set_Stloc_3_13(OpCode_t3879854364  value)
	{
		___Stloc_3_13 = value;
	}

	inline static int32_t get_offset_of_Ldarg_S_14() { return static_cast<int32_t>(offsetof(OpCodes_t3193932334_StaticFields, ___Ldarg_S_14)); }
	inline OpCode_t3879854364  get_Ldarg_S_14() const { return ___Ldarg_S_14; }
	inline OpCode_t3879854364 * get_address_of_Ldarg_S_14() { return &___Ldarg_S_14; }
	inline void set_Ldarg_S_14(OpCode_t3879854364  value)
	{
		___Ldarg_S_14 = value;
	}

	inline static int32_t get_offset_of_Ldarga_S_15() { return static_cast<int32_t>(offsetof(OpCodes_t3193932334_StaticFields, ___Ldarga_S_15)); }
	inline OpCode_t3879854364  get_Ldarga_S_15() const { return ___Ldarga_S_15; }
	inline OpCode_t3879854364 * get_address_of_Ldarga_S_15() { return &___Ldarga_S_15; }
	inline void set_Ldarga_S_15(OpCode_t3879854364  value)
	{
		___Ldarga_S_15 = value;
	}

	inline static int32_t get_offset_of_Starg_S_16() { return static_cast<int32_t>(offsetof(OpCodes_t3193932334_StaticFields, ___Starg_S_16)); }
	inline OpCode_t3879854364  get_Starg_S_16() const { return ___Starg_S_16; }
	inline OpCode_t3879854364 * get_address_of_Starg_S_16() { return &___Starg_S_16; }
	inline void set_Starg_S_16(OpCode_t3879854364  value)
	{
		___Starg_S_16 = value;
	}

	inline static int32_t get_offset_of_Ldloc_S_17() { return static_cast<int32_t>(offsetof(OpCodes_t3193932334_StaticFields, ___Ldloc_S_17)); }
	inline OpCode_t3879854364  get_Ldloc_S_17() const { return ___Ldloc_S_17; }
	inline OpCode_t3879854364 * get_address_of_Ldloc_S_17() { return &___Ldloc_S_17; }
	inline void set_Ldloc_S_17(OpCode_t3879854364  value)
	{
		___Ldloc_S_17 = value;
	}

	inline static int32_t get_offset_of_Ldloca_S_18() { return static_cast<int32_t>(offsetof(OpCodes_t3193932334_StaticFields, ___Ldloca_S_18)); }
	inline OpCode_t3879854364  get_Ldloca_S_18() const { return ___Ldloca_S_18; }
	inline OpCode_t3879854364 * get_address_of_Ldloca_S_18() { return &___Ldloca_S_18; }
	inline void set_Ldloca_S_18(OpCode_t3879854364  value)
	{
		___Ldloca_S_18 = value;
	}

	inline static int32_t get_offset_of_Stloc_S_19() { return static_cast<int32_t>(offsetof(OpCodes_t3193932334_StaticFields, ___Stloc_S_19)); }
	inline OpCode_t3879854364  get_Stloc_S_19() const { return ___Stloc_S_19; }
	inline OpCode_t3879854364 * get_address_of_Stloc_S_19() { return &___Stloc_S_19; }
	inline void set_Stloc_S_19(OpCode_t3879854364  value)
	{
		___Stloc_S_19 = value;
	}

	inline static int32_t get_offset_of_Ldnull_20() { return static_cast<int32_t>(offsetof(OpCodes_t3193932334_StaticFields, ___Ldnull_20)); }
	inline OpCode_t3879854364  get_Ldnull_20() const { return ___Ldnull_20; }
	inline OpCode_t3879854364 * get_address_of_Ldnull_20() { return &___Ldnull_20; }
	inline void set_Ldnull_20(OpCode_t3879854364  value)
	{
		___Ldnull_20 = value;
	}

	inline static int32_t get_offset_of_Ldc_I4_M1_21() { return static_cast<int32_t>(offsetof(OpCodes_t3193932334_StaticFields, ___Ldc_I4_M1_21)); }
	inline OpCode_t3879854364  get_Ldc_I4_M1_21() const { return ___Ldc_I4_M1_21; }
	inline OpCode_t3879854364 * get_address_of_Ldc_I4_M1_21() { return &___Ldc_I4_M1_21; }
	inline void set_Ldc_I4_M1_21(OpCode_t3879854364  value)
	{
		___Ldc_I4_M1_21 = value;
	}

	inline static int32_t get_offset_of_Ldc_I4_0_22() { return static_cast<int32_t>(offsetof(OpCodes_t3193932334_StaticFields, ___Ldc_I4_0_22)); }
	inline OpCode_t3879854364  get_Ldc_I4_0_22() const { return ___Ldc_I4_0_22; }
	inline OpCode_t3879854364 * get_address_of_Ldc_I4_0_22() { return &___Ldc_I4_0_22; }
	inline void set_Ldc_I4_0_22(OpCode_t3879854364  value)
	{
		___Ldc_I4_0_22 = value;
	}

	inline static int32_t get_offset_of_Ldc_I4_1_23() { return static_cast<int32_t>(offsetof(OpCodes_t3193932334_StaticFields, ___Ldc_I4_1_23)); }
	inline OpCode_t3879854364  get_Ldc_I4_1_23() const { return ___Ldc_I4_1_23; }
	inline OpCode_t3879854364 * get_address_of_Ldc_I4_1_23() { return &___Ldc_I4_1_23; }
	inline void set_Ldc_I4_1_23(OpCode_t3879854364  value)
	{
		___Ldc_I4_1_23 = value;
	}

	inline static int32_t get_offset_of_Ldc_I4_2_24() { return static_cast<int32_t>(offsetof(OpCodes_t3193932334_StaticFields, ___Ldc_I4_2_24)); }
	inline OpCode_t3879854364  get_Ldc_I4_2_24() const { return ___Ldc_I4_2_24; }
	inline OpCode_t3879854364 * get_address_of_Ldc_I4_2_24() { return &___Ldc_I4_2_24; }
	inline void set_Ldc_I4_2_24(OpCode_t3879854364  value)
	{
		___Ldc_I4_2_24 = value;
	}

	inline static int32_t get_offset_of_Ldc_I4_3_25() { return static_cast<int32_t>(offsetof(OpCodes_t3193932334_StaticFields, ___Ldc_I4_3_25)); }
	inline OpCode_t3879854364  get_Ldc_I4_3_25() const { return ___Ldc_I4_3_25; }
	inline OpCode_t3879854364 * get_address_of_Ldc_I4_3_25() { return &___Ldc_I4_3_25; }
	inline void set_Ldc_I4_3_25(OpCode_t3879854364  value)
	{
		___Ldc_I4_3_25 = value;
	}

	inline static int32_t get_offset_of_Ldc_I4_4_26() { return static_cast<int32_t>(offsetof(OpCodes_t3193932334_StaticFields, ___Ldc_I4_4_26)); }
	inline OpCode_t3879854364  get_Ldc_I4_4_26() const { return ___Ldc_I4_4_26; }
	inline OpCode_t3879854364 * get_address_of_Ldc_I4_4_26() { return &___Ldc_I4_4_26; }
	inline void set_Ldc_I4_4_26(OpCode_t3879854364  value)
	{
		___Ldc_I4_4_26 = value;
	}

	inline static int32_t get_offset_of_Ldc_I4_5_27() { return static_cast<int32_t>(offsetof(OpCodes_t3193932334_StaticFields, ___Ldc_I4_5_27)); }
	inline OpCode_t3879854364  get_Ldc_I4_5_27() const { return ___Ldc_I4_5_27; }
	inline OpCode_t3879854364 * get_address_of_Ldc_I4_5_27() { return &___Ldc_I4_5_27; }
	inline void set_Ldc_I4_5_27(OpCode_t3879854364  value)
	{
		___Ldc_I4_5_27 = value;
	}

	inline static int32_t get_offset_of_Ldc_I4_6_28() { return static_cast<int32_t>(offsetof(OpCodes_t3193932334_StaticFields, ___Ldc_I4_6_28)); }
	inline OpCode_t3879854364  get_Ldc_I4_6_28() const { return ___Ldc_I4_6_28; }
	inline OpCode_t3879854364 * get_address_of_Ldc_I4_6_28() { return &___Ldc_I4_6_28; }
	inline void set_Ldc_I4_6_28(OpCode_t3879854364  value)
	{
		___Ldc_I4_6_28 = value;
	}

	inline static int32_t get_offset_of_Ldc_I4_7_29() { return static_cast<int32_t>(offsetof(OpCodes_t3193932334_StaticFields, ___Ldc_I4_7_29)); }
	inline OpCode_t3879854364  get_Ldc_I4_7_29() const { return ___Ldc_I4_7_29; }
	inline OpCode_t3879854364 * get_address_of_Ldc_I4_7_29() { return &___Ldc_I4_7_29; }
	inline void set_Ldc_I4_7_29(OpCode_t3879854364  value)
	{
		___Ldc_I4_7_29 = value;
	}

	inline static int32_t get_offset_of_Ldc_I4_8_30() { return static_cast<int32_t>(offsetof(OpCodes_t3193932334_StaticFields, ___Ldc_I4_8_30)); }
	inline OpCode_t3879854364  get_Ldc_I4_8_30() const { return ___Ldc_I4_8_30; }
	inline OpCode_t3879854364 * get_address_of_Ldc_I4_8_30() { return &___Ldc_I4_8_30; }
	inline void set_Ldc_I4_8_30(OpCode_t3879854364  value)
	{
		___Ldc_I4_8_30 = value;
	}

	inline static int32_t get_offset_of_Ldc_I4_S_31() { return static_cast<int32_t>(offsetof(OpCodes_t3193932334_StaticFields, ___Ldc_I4_S_31)); }
	inline OpCode_t3879854364  get_Ldc_I4_S_31() const { return ___Ldc_I4_S_31; }
	inline OpCode_t3879854364 * get_address_of_Ldc_I4_S_31() { return &___Ldc_I4_S_31; }
	inline void set_Ldc_I4_S_31(OpCode_t3879854364  value)
	{
		___Ldc_I4_S_31 = value;
	}

	inline static int32_t get_offset_of_Ldc_I4_32() { return static_cast<int32_t>(offsetof(OpCodes_t3193932334_StaticFields, ___Ldc_I4_32)); }
	inline OpCode_t3879854364  get_Ldc_I4_32() const { return ___Ldc_I4_32; }
	inline OpCode_t3879854364 * get_address_of_Ldc_I4_32() { return &___Ldc_I4_32; }
	inline void set_Ldc_I4_32(OpCode_t3879854364  value)
	{
		___Ldc_I4_32 = value;
	}

	inline static int32_t get_offset_of_Ldc_I8_33() { return static_cast<int32_t>(offsetof(OpCodes_t3193932334_StaticFields, ___Ldc_I8_33)); }
	inline OpCode_t3879854364  get_Ldc_I8_33() const { return ___Ldc_I8_33; }
	inline OpCode_t3879854364 * get_address_of_Ldc_I8_33() { return &___Ldc_I8_33; }
	inline void set_Ldc_I8_33(OpCode_t3879854364  value)
	{
		___Ldc_I8_33 = value;
	}

	inline static int32_t get_offset_of_Ldc_R4_34() { return static_cast<int32_t>(offsetof(OpCodes_t3193932334_StaticFields, ___Ldc_R4_34)); }
	inline OpCode_t3879854364  get_Ldc_R4_34() const { return ___Ldc_R4_34; }
	inline OpCode_t3879854364 * get_address_of_Ldc_R4_34() { return &___Ldc_R4_34; }
	inline void set_Ldc_R4_34(OpCode_t3879854364  value)
	{
		___Ldc_R4_34 = value;
	}

	inline static int32_t get_offset_of_Ldc_R8_35() { return static_cast<int32_t>(offsetof(OpCodes_t3193932334_StaticFields, ___Ldc_R8_35)); }
	inline OpCode_t3879854364  get_Ldc_R8_35() const { return ___Ldc_R8_35; }
	inline OpCode_t3879854364 * get_address_of_Ldc_R8_35() { return &___Ldc_R8_35; }
	inline void set_Ldc_R8_35(OpCode_t3879854364  value)
	{
		___Ldc_R8_35 = value;
	}

	inline static int32_t get_offset_of_Dup_36() { return static_cast<int32_t>(offsetof(OpCodes_t3193932334_StaticFields, ___Dup_36)); }
	inline OpCode_t3879854364  get_Dup_36() const { return ___Dup_36; }
	inline OpCode_t3879854364 * get_address_of_Dup_36() { return &___Dup_36; }
	inline void set_Dup_36(OpCode_t3879854364  value)
	{
		___Dup_36 = value;
	}

	inline static int32_t get_offset_of_Pop_37() { return static_cast<int32_t>(offsetof(OpCodes_t3193932334_StaticFields, ___Pop_37)); }
	inline OpCode_t3879854364  get_Pop_37() const { return ___Pop_37; }
	inline OpCode_t3879854364 * get_address_of_Pop_37() { return &___Pop_37; }
	inline void set_Pop_37(OpCode_t3879854364  value)
	{
		___Pop_37 = value;
	}

	inline static int32_t get_offset_of_Jmp_38() { return static_cast<int32_t>(offsetof(OpCodes_t3193932334_StaticFields, ___Jmp_38)); }
	inline OpCode_t3879854364  get_Jmp_38() const { return ___Jmp_38; }
	inline OpCode_t3879854364 * get_address_of_Jmp_38() { return &___Jmp_38; }
	inline void set_Jmp_38(OpCode_t3879854364  value)
	{
		___Jmp_38 = value;
	}

	inline static int32_t get_offset_of_Call_39() { return static_cast<int32_t>(offsetof(OpCodes_t3193932334_StaticFields, ___Call_39)); }
	inline OpCode_t3879854364  get_Call_39() const { return ___Call_39; }
	inline OpCode_t3879854364 * get_address_of_Call_39() { return &___Call_39; }
	inline void set_Call_39(OpCode_t3879854364  value)
	{
		___Call_39 = value;
	}

	inline static int32_t get_offset_of_Calli_40() { return static_cast<int32_t>(offsetof(OpCodes_t3193932334_StaticFields, ___Calli_40)); }
	inline OpCode_t3879854364  get_Calli_40() const { return ___Calli_40; }
	inline OpCode_t3879854364 * get_address_of_Calli_40() { return &___Calli_40; }
	inline void set_Calli_40(OpCode_t3879854364  value)
	{
		___Calli_40 = value;
	}

	inline static int32_t get_offset_of_Ret_41() { return static_cast<int32_t>(offsetof(OpCodes_t3193932334_StaticFields, ___Ret_41)); }
	inline OpCode_t3879854364  get_Ret_41() const { return ___Ret_41; }
	inline OpCode_t3879854364 * get_address_of_Ret_41() { return &___Ret_41; }
	inline void set_Ret_41(OpCode_t3879854364  value)
	{
		___Ret_41 = value;
	}

	inline static int32_t get_offset_of_Br_S_42() { return static_cast<int32_t>(offsetof(OpCodes_t3193932334_StaticFields, ___Br_S_42)); }
	inline OpCode_t3879854364  get_Br_S_42() const { return ___Br_S_42; }
	inline OpCode_t3879854364 * get_address_of_Br_S_42() { return &___Br_S_42; }
	inline void set_Br_S_42(OpCode_t3879854364  value)
	{
		___Br_S_42 = value;
	}

	inline static int32_t get_offset_of_Brfalse_S_43() { return static_cast<int32_t>(offsetof(OpCodes_t3193932334_StaticFields, ___Brfalse_S_43)); }
	inline OpCode_t3879854364  get_Brfalse_S_43() const { return ___Brfalse_S_43; }
	inline OpCode_t3879854364 * get_address_of_Brfalse_S_43() { return &___Brfalse_S_43; }
	inline void set_Brfalse_S_43(OpCode_t3879854364  value)
	{
		___Brfalse_S_43 = value;
	}

	inline static int32_t get_offset_of_Brtrue_S_44() { return static_cast<int32_t>(offsetof(OpCodes_t3193932334_StaticFields, ___Brtrue_S_44)); }
	inline OpCode_t3879854364  get_Brtrue_S_44() const { return ___Brtrue_S_44; }
	inline OpCode_t3879854364 * get_address_of_Brtrue_S_44() { return &___Brtrue_S_44; }
	inline void set_Brtrue_S_44(OpCode_t3879854364  value)
	{
		___Brtrue_S_44 = value;
	}

	inline static int32_t get_offset_of_Beq_S_45() { return static_cast<int32_t>(offsetof(OpCodes_t3193932334_StaticFields, ___Beq_S_45)); }
	inline OpCode_t3879854364  get_Beq_S_45() const { return ___Beq_S_45; }
	inline OpCode_t3879854364 * get_address_of_Beq_S_45() { return &___Beq_S_45; }
	inline void set_Beq_S_45(OpCode_t3879854364  value)
	{
		___Beq_S_45 = value;
	}

	inline static int32_t get_offset_of_Bge_S_46() { return static_cast<int32_t>(offsetof(OpCodes_t3193932334_StaticFields, ___Bge_S_46)); }
	inline OpCode_t3879854364  get_Bge_S_46() const { return ___Bge_S_46; }
	inline OpCode_t3879854364 * get_address_of_Bge_S_46() { return &___Bge_S_46; }
	inline void set_Bge_S_46(OpCode_t3879854364  value)
	{
		___Bge_S_46 = value;
	}

	inline static int32_t get_offset_of_Bgt_S_47() { return static_cast<int32_t>(offsetof(OpCodes_t3193932334_StaticFields, ___Bgt_S_47)); }
	inline OpCode_t3879854364  get_Bgt_S_47() const { return ___Bgt_S_47; }
	inline OpCode_t3879854364 * get_address_of_Bgt_S_47() { return &___Bgt_S_47; }
	inline void set_Bgt_S_47(OpCode_t3879854364  value)
	{
		___Bgt_S_47 = value;
	}

	inline static int32_t get_offset_of_Ble_S_48() { return static_cast<int32_t>(offsetof(OpCodes_t3193932334_StaticFields, ___Ble_S_48)); }
	inline OpCode_t3879854364  get_Ble_S_48() const { return ___Ble_S_48; }
	inline OpCode_t3879854364 * get_address_of_Ble_S_48() { return &___Ble_S_48; }
	inline void set_Ble_S_48(OpCode_t3879854364  value)
	{
		___Ble_S_48 = value;
	}

	inline static int32_t get_offset_of_Blt_S_49() { return static_cast<int32_t>(offsetof(OpCodes_t3193932334_StaticFields, ___Blt_S_49)); }
	inline OpCode_t3879854364  get_Blt_S_49() const { return ___Blt_S_49; }
	inline OpCode_t3879854364 * get_address_of_Blt_S_49() { return &___Blt_S_49; }
	inline void set_Blt_S_49(OpCode_t3879854364  value)
	{
		___Blt_S_49 = value;
	}

	inline static int32_t get_offset_of_Bne_Un_S_50() { return static_cast<int32_t>(offsetof(OpCodes_t3193932334_StaticFields, ___Bne_Un_S_50)); }
	inline OpCode_t3879854364  get_Bne_Un_S_50() const { return ___Bne_Un_S_50; }
	inline OpCode_t3879854364 * get_address_of_Bne_Un_S_50() { return &___Bne_Un_S_50; }
	inline void set_Bne_Un_S_50(OpCode_t3879854364  value)
	{
		___Bne_Un_S_50 = value;
	}

	inline static int32_t get_offset_of_Bge_Un_S_51() { return static_cast<int32_t>(offsetof(OpCodes_t3193932334_StaticFields, ___Bge_Un_S_51)); }
	inline OpCode_t3879854364  get_Bge_Un_S_51() const { return ___Bge_Un_S_51; }
	inline OpCode_t3879854364 * get_address_of_Bge_Un_S_51() { return &___Bge_Un_S_51; }
	inline void set_Bge_Un_S_51(OpCode_t3879854364  value)
	{
		___Bge_Un_S_51 = value;
	}

	inline static int32_t get_offset_of_Bgt_Un_S_52() { return static_cast<int32_t>(offsetof(OpCodes_t3193932334_StaticFields, ___Bgt_Un_S_52)); }
	inline OpCode_t3879854364  get_Bgt_Un_S_52() const { return ___Bgt_Un_S_52; }
	inline OpCode_t3879854364 * get_address_of_Bgt_Un_S_52() { return &___Bgt_Un_S_52; }
	inline void set_Bgt_Un_S_52(OpCode_t3879854364  value)
	{
		___Bgt_Un_S_52 = value;
	}

	inline static int32_t get_offset_of_Ble_Un_S_53() { return static_cast<int32_t>(offsetof(OpCodes_t3193932334_StaticFields, ___Ble_Un_S_53)); }
	inline OpCode_t3879854364  get_Ble_Un_S_53() const { return ___Ble_Un_S_53; }
	inline OpCode_t3879854364 * get_address_of_Ble_Un_S_53() { return &___Ble_Un_S_53; }
	inline void set_Ble_Un_S_53(OpCode_t3879854364  value)
	{
		___Ble_Un_S_53 = value;
	}

	inline static int32_t get_offset_of_Blt_Un_S_54() { return static_cast<int32_t>(offsetof(OpCodes_t3193932334_StaticFields, ___Blt_Un_S_54)); }
	inline OpCode_t3879854364  get_Blt_Un_S_54() const { return ___Blt_Un_S_54; }
	inline OpCode_t3879854364 * get_address_of_Blt_Un_S_54() { return &___Blt_Un_S_54; }
	inline void set_Blt_Un_S_54(OpCode_t3879854364  value)
	{
		___Blt_Un_S_54 = value;
	}

	inline static int32_t get_offset_of_Br_55() { return static_cast<int32_t>(offsetof(OpCodes_t3193932334_StaticFields, ___Br_55)); }
	inline OpCode_t3879854364  get_Br_55() const { return ___Br_55; }
	inline OpCode_t3879854364 * get_address_of_Br_55() { return &___Br_55; }
	inline void set_Br_55(OpCode_t3879854364  value)
	{
		___Br_55 = value;
	}

	inline static int32_t get_offset_of_Brfalse_56() { return static_cast<int32_t>(offsetof(OpCodes_t3193932334_StaticFields, ___Brfalse_56)); }
	inline OpCode_t3879854364  get_Brfalse_56() const { return ___Brfalse_56; }
	inline OpCode_t3879854364 * get_address_of_Brfalse_56() { return &___Brfalse_56; }
	inline void set_Brfalse_56(OpCode_t3879854364  value)
	{
		___Brfalse_56 = value;
	}

	inline static int32_t get_offset_of_Brtrue_57() { return static_cast<int32_t>(offsetof(OpCodes_t3193932334_StaticFields, ___Brtrue_57)); }
	inline OpCode_t3879854364  get_Brtrue_57() const { return ___Brtrue_57; }
	inline OpCode_t3879854364 * get_address_of_Brtrue_57() { return &___Brtrue_57; }
	inline void set_Brtrue_57(OpCode_t3879854364  value)
	{
		___Brtrue_57 = value;
	}

	inline static int32_t get_offset_of_Beq_58() { return static_cast<int32_t>(offsetof(OpCodes_t3193932334_StaticFields, ___Beq_58)); }
	inline OpCode_t3879854364  get_Beq_58() const { return ___Beq_58; }
	inline OpCode_t3879854364 * get_address_of_Beq_58() { return &___Beq_58; }
	inline void set_Beq_58(OpCode_t3879854364  value)
	{
		___Beq_58 = value;
	}

	inline static int32_t get_offset_of_Bge_59() { return static_cast<int32_t>(offsetof(OpCodes_t3193932334_StaticFields, ___Bge_59)); }
	inline OpCode_t3879854364  get_Bge_59() const { return ___Bge_59; }
	inline OpCode_t3879854364 * get_address_of_Bge_59() { return &___Bge_59; }
	inline void set_Bge_59(OpCode_t3879854364  value)
	{
		___Bge_59 = value;
	}

	inline static int32_t get_offset_of_Bgt_60() { return static_cast<int32_t>(offsetof(OpCodes_t3193932334_StaticFields, ___Bgt_60)); }
	inline OpCode_t3879854364  get_Bgt_60() const { return ___Bgt_60; }
	inline OpCode_t3879854364 * get_address_of_Bgt_60() { return &___Bgt_60; }
	inline void set_Bgt_60(OpCode_t3879854364  value)
	{
		___Bgt_60 = value;
	}

	inline static int32_t get_offset_of_Ble_61() { return static_cast<int32_t>(offsetof(OpCodes_t3193932334_StaticFields, ___Ble_61)); }
	inline OpCode_t3879854364  get_Ble_61() const { return ___Ble_61; }
	inline OpCode_t3879854364 * get_address_of_Ble_61() { return &___Ble_61; }
	inline void set_Ble_61(OpCode_t3879854364  value)
	{
		___Ble_61 = value;
	}

	inline static int32_t get_offset_of_Blt_62() { return static_cast<int32_t>(offsetof(OpCodes_t3193932334_StaticFields, ___Blt_62)); }
	inline OpCode_t3879854364  get_Blt_62() const { return ___Blt_62; }
	inline OpCode_t3879854364 * get_address_of_Blt_62() { return &___Blt_62; }
	inline void set_Blt_62(OpCode_t3879854364  value)
	{
		___Blt_62 = value;
	}

	inline static int32_t get_offset_of_Bne_Un_63() { return static_cast<int32_t>(offsetof(OpCodes_t3193932334_StaticFields, ___Bne_Un_63)); }
	inline OpCode_t3879854364  get_Bne_Un_63() const { return ___Bne_Un_63; }
	inline OpCode_t3879854364 * get_address_of_Bne_Un_63() { return &___Bne_Un_63; }
	inline void set_Bne_Un_63(OpCode_t3879854364  value)
	{
		___Bne_Un_63 = value;
	}

	inline static int32_t get_offset_of_Bge_Un_64() { return static_cast<int32_t>(offsetof(OpCodes_t3193932334_StaticFields, ___Bge_Un_64)); }
	inline OpCode_t3879854364  get_Bge_Un_64() const { return ___Bge_Un_64; }
	inline OpCode_t3879854364 * get_address_of_Bge_Un_64() { return &___Bge_Un_64; }
	inline void set_Bge_Un_64(OpCode_t3879854364  value)
	{
		___Bge_Un_64 = value;
	}

	inline static int32_t get_offset_of_Bgt_Un_65() { return static_cast<int32_t>(offsetof(OpCodes_t3193932334_StaticFields, ___Bgt_Un_65)); }
	inline OpCode_t3879854364  get_Bgt_Un_65() const { return ___Bgt_Un_65; }
	inline OpCode_t3879854364 * get_address_of_Bgt_Un_65() { return &___Bgt_Un_65; }
	inline void set_Bgt_Un_65(OpCode_t3879854364  value)
	{
		___Bgt_Un_65 = value;
	}

	inline static int32_t get_offset_of_Ble_Un_66() { return static_cast<int32_t>(offsetof(OpCodes_t3193932334_StaticFields, ___Ble_Un_66)); }
	inline OpCode_t3879854364  get_Ble_Un_66() const { return ___Ble_Un_66; }
	inline OpCode_t3879854364 * get_address_of_Ble_Un_66() { return &___Ble_Un_66; }
	inline void set_Ble_Un_66(OpCode_t3879854364  value)
	{
		___Ble_Un_66 = value;
	}

	inline static int32_t get_offset_of_Blt_Un_67() { return static_cast<int32_t>(offsetof(OpCodes_t3193932334_StaticFields, ___Blt_Un_67)); }
	inline OpCode_t3879854364  get_Blt_Un_67() const { return ___Blt_Un_67; }
	inline OpCode_t3879854364 * get_address_of_Blt_Un_67() { return &___Blt_Un_67; }
	inline void set_Blt_Un_67(OpCode_t3879854364  value)
	{
		___Blt_Un_67 = value;
	}

	inline static int32_t get_offset_of_Switch_68() { return static_cast<int32_t>(offsetof(OpCodes_t3193932334_StaticFields, ___Switch_68)); }
	inline OpCode_t3879854364  get_Switch_68() const { return ___Switch_68; }
	inline OpCode_t3879854364 * get_address_of_Switch_68() { return &___Switch_68; }
	inline void set_Switch_68(OpCode_t3879854364  value)
	{
		___Switch_68 = value;
	}

	inline static int32_t get_offset_of_Ldind_I1_69() { return static_cast<int32_t>(offsetof(OpCodes_t3193932334_StaticFields, ___Ldind_I1_69)); }
	inline OpCode_t3879854364  get_Ldind_I1_69() const { return ___Ldind_I1_69; }
	inline OpCode_t3879854364 * get_address_of_Ldind_I1_69() { return &___Ldind_I1_69; }
	inline void set_Ldind_I1_69(OpCode_t3879854364  value)
	{
		___Ldind_I1_69 = value;
	}

	inline static int32_t get_offset_of_Ldind_U1_70() { return static_cast<int32_t>(offsetof(OpCodes_t3193932334_StaticFields, ___Ldind_U1_70)); }
	inline OpCode_t3879854364  get_Ldind_U1_70() const { return ___Ldind_U1_70; }
	inline OpCode_t3879854364 * get_address_of_Ldind_U1_70() { return &___Ldind_U1_70; }
	inline void set_Ldind_U1_70(OpCode_t3879854364  value)
	{
		___Ldind_U1_70 = value;
	}

	inline static int32_t get_offset_of_Ldind_I2_71() { return static_cast<int32_t>(offsetof(OpCodes_t3193932334_StaticFields, ___Ldind_I2_71)); }
	inline OpCode_t3879854364  get_Ldind_I2_71() const { return ___Ldind_I2_71; }
	inline OpCode_t3879854364 * get_address_of_Ldind_I2_71() { return &___Ldind_I2_71; }
	inline void set_Ldind_I2_71(OpCode_t3879854364  value)
	{
		___Ldind_I2_71 = value;
	}

	inline static int32_t get_offset_of_Ldind_U2_72() { return static_cast<int32_t>(offsetof(OpCodes_t3193932334_StaticFields, ___Ldind_U2_72)); }
	inline OpCode_t3879854364  get_Ldind_U2_72() const { return ___Ldind_U2_72; }
	inline OpCode_t3879854364 * get_address_of_Ldind_U2_72() { return &___Ldind_U2_72; }
	inline void set_Ldind_U2_72(OpCode_t3879854364  value)
	{
		___Ldind_U2_72 = value;
	}

	inline static int32_t get_offset_of_Ldind_I4_73() { return static_cast<int32_t>(offsetof(OpCodes_t3193932334_StaticFields, ___Ldind_I4_73)); }
	inline OpCode_t3879854364  get_Ldind_I4_73() const { return ___Ldind_I4_73; }
	inline OpCode_t3879854364 * get_address_of_Ldind_I4_73() { return &___Ldind_I4_73; }
	inline void set_Ldind_I4_73(OpCode_t3879854364  value)
	{
		___Ldind_I4_73 = value;
	}

	inline static int32_t get_offset_of_Ldind_U4_74() { return static_cast<int32_t>(offsetof(OpCodes_t3193932334_StaticFields, ___Ldind_U4_74)); }
	inline OpCode_t3879854364  get_Ldind_U4_74() const { return ___Ldind_U4_74; }
	inline OpCode_t3879854364 * get_address_of_Ldind_U4_74() { return &___Ldind_U4_74; }
	inline void set_Ldind_U4_74(OpCode_t3879854364  value)
	{
		___Ldind_U4_74 = value;
	}

	inline static int32_t get_offset_of_Ldind_I8_75() { return static_cast<int32_t>(offsetof(OpCodes_t3193932334_StaticFields, ___Ldind_I8_75)); }
	inline OpCode_t3879854364  get_Ldind_I8_75() const { return ___Ldind_I8_75; }
	inline OpCode_t3879854364 * get_address_of_Ldind_I8_75() { return &___Ldind_I8_75; }
	inline void set_Ldind_I8_75(OpCode_t3879854364  value)
	{
		___Ldind_I8_75 = value;
	}

	inline static int32_t get_offset_of_Ldind_I_76() { return static_cast<int32_t>(offsetof(OpCodes_t3193932334_StaticFields, ___Ldind_I_76)); }
	inline OpCode_t3879854364  get_Ldind_I_76() const { return ___Ldind_I_76; }
	inline OpCode_t3879854364 * get_address_of_Ldind_I_76() { return &___Ldind_I_76; }
	inline void set_Ldind_I_76(OpCode_t3879854364  value)
	{
		___Ldind_I_76 = value;
	}

	inline static int32_t get_offset_of_Ldind_R4_77() { return static_cast<int32_t>(offsetof(OpCodes_t3193932334_StaticFields, ___Ldind_R4_77)); }
	inline OpCode_t3879854364  get_Ldind_R4_77() const { return ___Ldind_R4_77; }
	inline OpCode_t3879854364 * get_address_of_Ldind_R4_77() { return &___Ldind_R4_77; }
	inline void set_Ldind_R4_77(OpCode_t3879854364  value)
	{
		___Ldind_R4_77 = value;
	}

	inline static int32_t get_offset_of_Ldind_R8_78() { return static_cast<int32_t>(offsetof(OpCodes_t3193932334_StaticFields, ___Ldind_R8_78)); }
	inline OpCode_t3879854364  get_Ldind_R8_78() const { return ___Ldind_R8_78; }
	inline OpCode_t3879854364 * get_address_of_Ldind_R8_78() { return &___Ldind_R8_78; }
	inline void set_Ldind_R8_78(OpCode_t3879854364  value)
	{
		___Ldind_R8_78 = value;
	}

	inline static int32_t get_offset_of_Ldind_Ref_79() { return static_cast<int32_t>(offsetof(OpCodes_t3193932334_StaticFields, ___Ldind_Ref_79)); }
	inline OpCode_t3879854364  get_Ldind_Ref_79() const { return ___Ldind_Ref_79; }
	inline OpCode_t3879854364 * get_address_of_Ldind_Ref_79() { return &___Ldind_Ref_79; }
	inline void set_Ldind_Ref_79(OpCode_t3879854364  value)
	{
		___Ldind_Ref_79 = value;
	}

	inline static int32_t get_offset_of_Stind_Ref_80() { return static_cast<int32_t>(offsetof(OpCodes_t3193932334_StaticFields, ___Stind_Ref_80)); }
	inline OpCode_t3879854364  get_Stind_Ref_80() const { return ___Stind_Ref_80; }
	inline OpCode_t3879854364 * get_address_of_Stind_Ref_80() { return &___Stind_Ref_80; }
	inline void set_Stind_Ref_80(OpCode_t3879854364  value)
	{
		___Stind_Ref_80 = value;
	}

	inline static int32_t get_offset_of_Stind_I1_81() { return static_cast<int32_t>(offsetof(OpCodes_t3193932334_StaticFields, ___Stind_I1_81)); }
	inline OpCode_t3879854364  get_Stind_I1_81() const { return ___Stind_I1_81; }
	inline OpCode_t3879854364 * get_address_of_Stind_I1_81() { return &___Stind_I1_81; }
	inline void set_Stind_I1_81(OpCode_t3879854364  value)
	{
		___Stind_I1_81 = value;
	}

	inline static int32_t get_offset_of_Stind_I2_82() { return static_cast<int32_t>(offsetof(OpCodes_t3193932334_StaticFields, ___Stind_I2_82)); }
	inline OpCode_t3879854364  get_Stind_I2_82() const { return ___Stind_I2_82; }
	inline OpCode_t3879854364 * get_address_of_Stind_I2_82() { return &___Stind_I2_82; }
	inline void set_Stind_I2_82(OpCode_t3879854364  value)
	{
		___Stind_I2_82 = value;
	}

	inline static int32_t get_offset_of_Stind_I4_83() { return static_cast<int32_t>(offsetof(OpCodes_t3193932334_StaticFields, ___Stind_I4_83)); }
	inline OpCode_t3879854364  get_Stind_I4_83() const { return ___Stind_I4_83; }
	inline OpCode_t3879854364 * get_address_of_Stind_I4_83() { return &___Stind_I4_83; }
	inline void set_Stind_I4_83(OpCode_t3879854364  value)
	{
		___Stind_I4_83 = value;
	}

	inline static int32_t get_offset_of_Stind_I8_84() { return static_cast<int32_t>(offsetof(OpCodes_t3193932334_StaticFields, ___Stind_I8_84)); }
	inline OpCode_t3879854364  get_Stind_I8_84() const { return ___Stind_I8_84; }
	inline OpCode_t3879854364 * get_address_of_Stind_I8_84() { return &___Stind_I8_84; }
	inline void set_Stind_I8_84(OpCode_t3879854364  value)
	{
		___Stind_I8_84 = value;
	}

	inline static int32_t get_offset_of_Stind_R4_85() { return static_cast<int32_t>(offsetof(OpCodes_t3193932334_StaticFields, ___Stind_R4_85)); }
	inline OpCode_t3879854364  get_Stind_R4_85() const { return ___Stind_R4_85; }
	inline OpCode_t3879854364 * get_address_of_Stind_R4_85() { return &___Stind_R4_85; }
	inline void set_Stind_R4_85(OpCode_t3879854364  value)
	{
		___Stind_R4_85 = value;
	}

	inline static int32_t get_offset_of_Stind_R8_86() { return static_cast<int32_t>(offsetof(OpCodes_t3193932334_StaticFields, ___Stind_R8_86)); }
	inline OpCode_t3879854364  get_Stind_R8_86() const { return ___Stind_R8_86; }
	inline OpCode_t3879854364 * get_address_of_Stind_R8_86() { return &___Stind_R8_86; }
	inline void set_Stind_R8_86(OpCode_t3879854364  value)
	{
		___Stind_R8_86 = value;
	}

	inline static int32_t get_offset_of_Add_87() { return static_cast<int32_t>(offsetof(OpCodes_t3193932334_StaticFields, ___Add_87)); }
	inline OpCode_t3879854364  get_Add_87() const { return ___Add_87; }
	inline OpCode_t3879854364 * get_address_of_Add_87() { return &___Add_87; }
	inline void set_Add_87(OpCode_t3879854364  value)
	{
		___Add_87 = value;
	}

	inline static int32_t get_offset_of_Sub_88() { return static_cast<int32_t>(offsetof(OpCodes_t3193932334_StaticFields, ___Sub_88)); }
	inline OpCode_t3879854364  get_Sub_88() const { return ___Sub_88; }
	inline OpCode_t3879854364 * get_address_of_Sub_88() { return &___Sub_88; }
	inline void set_Sub_88(OpCode_t3879854364  value)
	{
		___Sub_88 = value;
	}

	inline static int32_t get_offset_of_Mul_89() { return static_cast<int32_t>(offsetof(OpCodes_t3193932334_StaticFields, ___Mul_89)); }
	inline OpCode_t3879854364  get_Mul_89() const { return ___Mul_89; }
	inline OpCode_t3879854364 * get_address_of_Mul_89() { return &___Mul_89; }
	inline void set_Mul_89(OpCode_t3879854364  value)
	{
		___Mul_89 = value;
	}

	inline static int32_t get_offset_of_Div_90() { return static_cast<int32_t>(offsetof(OpCodes_t3193932334_StaticFields, ___Div_90)); }
	inline OpCode_t3879854364  get_Div_90() const { return ___Div_90; }
	inline OpCode_t3879854364 * get_address_of_Div_90() { return &___Div_90; }
	inline void set_Div_90(OpCode_t3879854364  value)
	{
		___Div_90 = value;
	}

	inline static int32_t get_offset_of_Div_Un_91() { return static_cast<int32_t>(offsetof(OpCodes_t3193932334_StaticFields, ___Div_Un_91)); }
	inline OpCode_t3879854364  get_Div_Un_91() const { return ___Div_Un_91; }
	inline OpCode_t3879854364 * get_address_of_Div_Un_91() { return &___Div_Un_91; }
	inline void set_Div_Un_91(OpCode_t3879854364  value)
	{
		___Div_Un_91 = value;
	}

	inline static int32_t get_offset_of_Rem_92() { return static_cast<int32_t>(offsetof(OpCodes_t3193932334_StaticFields, ___Rem_92)); }
	inline OpCode_t3879854364  get_Rem_92() const { return ___Rem_92; }
	inline OpCode_t3879854364 * get_address_of_Rem_92() { return &___Rem_92; }
	inline void set_Rem_92(OpCode_t3879854364  value)
	{
		___Rem_92 = value;
	}

	inline static int32_t get_offset_of_Rem_Un_93() { return static_cast<int32_t>(offsetof(OpCodes_t3193932334_StaticFields, ___Rem_Un_93)); }
	inline OpCode_t3879854364  get_Rem_Un_93() const { return ___Rem_Un_93; }
	inline OpCode_t3879854364 * get_address_of_Rem_Un_93() { return &___Rem_Un_93; }
	inline void set_Rem_Un_93(OpCode_t3879854364  value)
	{
		___Rem_Un_93 = value;
	}

	inline static int32_t get_offset_of_And_94() { return static_cast<int32_t>(offsetof(OpCodes_t3193932334_StaticFields, ___And_94)); }
	inline OpCode_t3879854364  get_And_94() const { return ___And_94; }
	inline OpCode_t3879854364 * get_address_of_And_94() { return &___And_94; }
	inline void set_And_94(OpCode_t3879854364  value)
	{
		___And_94 = value;
	}

	inline static int32_t get_offset_of_Or_95() { return static_cast<int32_t>(offsetof(OpCodes_t3193932334_StaticFields, ___Or_95)); }
	inline OpCode_t3879854364  get_Or_95() const { return ___Or_95; }
	inline OpCode_t3879854364 * get_address_of_Or_95() { return &___Or_95; }
	inline void set_Or_95(OpCode_t3879854364  value)
	{
		___Or_95 = value;
	}

	inline static int32_t get_offset_of_Xor_96() { return static_cast<int32_t>(offsetof(OpCodes_t3193932334_StaticFields, ___Xor_96)); }
	inline OpCode_t3879854364  get_Xor_96() const { return ___Xor_96; }
	inline OpCode_t3879854364 * get_address_of_Xor_96() { return &___Xor_96; }
	inline void set_Xor_96(OpCode_t3879854364  value)
	{
		___Xor_96 = value;
	}

	inline static int32_t get_offset_of_Shl_97() { return static_cast<int32_t>(offsetof(OpCodes_t3193932334_StaticFields, ___Shl_97)); }
	inline OpCode_t3879854364  get_Shl_97() const { return ___Shl_97; }
	inline OpCode_t3879854364 * get_address_of_Shl_97() { return &___Shl_97; }
	inline void set_Shl_97(OpCode_t3879854364  value)
	{
		___Shl_97 = value;
	}

	inline static int32_t get_offset_of_Shr_98() { return static_cast<int32_t>(offsetof(OpCodes_t3193932334_StaticFields, ___Shr_98)); }
	inline OpCode_t3879854364  get_Shr_98() const { return ___Shr_98; }
	inline OpCode_t3879854364 * get_address_of_Shr_98() { return &___Shr_98; }
	inline void set_Shr_98(OpCode_t3879854364  value)
	{
		___Shr_98 = value;
	}

	inline static int32_t get_offset_of_Shr_Un_99() { return static_cast<int32_t>(offsetof(OpCodes_t3193932334_StaticFields, ___Shr_Un_99)); }
	inline OpCode_t3879854364  get_Shr_Un_99() const { return ___Shr_Un_99; }
	inline OpCode_t3879854364 * get_address_of_Shr_Un_99() { return &___Shr_Un_99; }
	inline void set_Shr_Un_99(OpCode_t3879854364  value)
	{
		___Shr_Un_99 = value;
	}

	inline static int32_t get_offset_of_Neg_100() { return static_cast<int32_t>(offsetof(OpCodes_t3193932334_StaticFields, ___Neg_100)); }
	inline OpCode_t3879854364  get_Neg_100() const { return ___Neg_100; }
	inline OpCode_t3879854364 * get_address_of_Neg_100() { return &___Neg_100; }
	inline void set_Neg_100(OpCode_t3879854364  value)
	{
		___Neg_100 = value;
	}

	inline static int32_t get_offset_of_Not_101() { return static_cast<int32_t>(offsetof(OpCodes_t3193932334_StaticFields, ___Not_101)); }
	inline OpCode_t3879854364  get_Not_101() const { return ___Not_101; }
	inline OpCode_t3879854364 * get_address_of_Not_101() { return &___Not_101; }
	inline void set_Not_101(OpCode_t3879854364  value)
	{
		___Not_101 = value;
	}

	inline static int32_t get_offset_of_Conv_I1_102() { return static_cast<int32_t>(offsetof(OpCodes_t3193932334_StaticFields, ___Conv_I1_102)); }
	inline OpCode_t3879854364  get_Conv_I1_102() const { return ___Conv_I1_102; }
	inline OpCode_t3879854364 * get_address_of_Conv_I1_102() { return &___Conv_I1_102; }
	inline void set_Conv_I1_102(OpCode_t3879854364  value)
	{
		___Conv_I1_102 = value;
	}

	inline static int32_t get_offset_of_Conv_I2_103() { return static_cast<int32_t>(offsetof(OpCodes_t3193932334_StaticFields, ___Conv_I2_103)); }
	inline OpCode_t3879854364  get_Conv_I2_103() const { return ___Conv_I2_103; }
	inline OpCode_t3879854364 * get_address_of_Conv_I2_103() { return &___Conv_I2_103; }
	inline void set_Conv_I2_103(OpCode_t3879854364  value)
	{
		___Conv_I2_103 = value;
	}

	inline static int32_t get_offset_of_Conv_I4_104() { return static_cast<int32_t>(offsetof(OpCodes_t3193932334_StaticFields, ___Conv_I4_104)); }
	inline OpCode_t3879854364  get_Conv_I4_104() const { return ___Conv_I4_104; }
	inline OpCode_t3879854364 * get_address_of_Conv_I4_104() { return &___Conv_I4_104; }
	inline void set_Conv_I4_104(OpCode_t3879854364  value)
	{
		___Conv_I4_104 = value;
	}

	inline static int32_t get_offset_of_Conv_I8_105() { return static_cast<int32_t>(offsetof(OpCodes_t3193932334_StaticFields, ___Conv_I8_105)); }
	inline OpCode_t3879854364  get_Conv_I8_105() const { return ___Conv_I8_105; }
	inline OpCode_t3879854364 * get_address_of_Conv_I8_105() { return &___Conv_I8_105; }
	inline void set_Conv_I8_105(OpCode_t3879854364  value)
	{
		___Conv_I8_105 = value;
	}

	inline static int32_t get_offset_of_Conv_R4_106() { return static_cast<int32_t>(offsetof(OpCodes_t3193932334_StaticFields, ___Conv_R4_106)); }
	inline OpCode_t3879854364  get_Conv_R4_106() const { return ___Conv_R4_106; }
	inline OpCode_t3879854364 * get_address_of_Conv_R4_106() { return &___Conv_R4_106; }
	inline void set_Conv_R4_106(OpCode_t3879854364  value)
	{
		___Conv_R4_106 = value;
	}

	inline static int32_t get_offset_of_Conv_R8_107() { return static_cast<int32_t>(offsetof(OpCodes_t3193932334_StaticFields, ___Conv_R8_107)); }
	inline OpCode_t3879854364  get_Conv_R8_107() const { return ___Conv_R8_107; }
	inline OpCode_t3879854364 * get_address_of_Conv_R8_107() { return &___Conv_R8_107; }
	inline void set_Conv_R8_107(OpCode_t3879854364  value)
	{
		___Conv_R8_107 = value;
	}

	inline static int32_t get_offset_of_Conv_U4_108() { return static_cast<int32_t>(offsetof(OpCodes_t3193932334_StaticFields, ___Conv_U4_108)); }
	inline OpCode_t3879854364  get_Conv_U4_108() const { return ___Conv_U4_108; }
	inline OpCode_t3879854364 * get_address_of_Conv_U4_108() { return &___Conv_U4_108; }
	inline void set_Conv_U4_108(OpCode_t3879854364  value)
	{
		___Conv_U4_108 = value;
	}

	inline static int32_t get_offset_of_Conv_U8_109() { return static_cast<int32_t>(offsetof(OpCodes_t3193932334_StaticFields, ___Conv_U8_109)); }
	inline OpCode_t3879854364  get_Conv_U8_109() const { return ___Conv_U8_109; }
	inline OpCode_t3879854364 * get_address_of_Conv_U8_109() { return &___Conv_U8_109; }
	inline void set_Conv_U8_109(OpCode_t3879854364  value)
	{
		___Conv_U8_109 = value;
	}

	inline static int32_t get_offset_of_Callvirt_110() { return static_cast<int32_t>(offsetof(OpCodes_t3193932334_StaticFields, ___Callvirt_110)); }
	inline OpCode_t3879854364  get_Callvirt_110() const { return ___Callvirt_110; }
	inline OpCode_t3879854364 * get_address_of_Callvirt_110() { return &___Callvirt_110; }
	inline void set_Callvirt_110(OpCode_t3879854364  value)
	{
		___Callvirt_110 = value;
	}

	inline static int32_t get_offset_of_Cpobj_111() { return static_cast<int32_t>(offsetof(OpCodes_t3193932334_StaticFields, ___Cpobj_111)); }
	inline OpCode_t3879854364  get_Cpobj_111() const { return ___Cpobj_111; }
	inline OpCode_t3879854364 * get_address_of_Cpobj_111() { return &___Cpobj_111; }
	inline void set_Cpobj_111(OpCode_t3879854364  value)
	{
		___Cpobj_111 = value;
	}

	inline static int32_t get_offset_of_Ldobj_112() { return static_cast<int32_t>(offsetof(OpCodes_t3193932334_StaticFields, ___Ldobj_112)); }
	inline OpCode_t3879854364  get_Ldobj_112() const { return ___Ldobj_112; }
	inline OpCode_t3879854364 * get_address_of_Ldobj_112() { return &___Ldobj_112; }
	inline void set_Ldobj_112(OpCode_t3879854364  value)
	{
		___Ldobj_112 = value;
	}

	inline static int32_t get_offset_of_Ldstr_113() { return static_cast<int32_t>(offsetof(OpCodes_t3193932334_StaticFields, ___Ldstr_113)); }
	inline OpCode_t3879854364  get_Ldstr_113() const { return ___Ldstr_113; }
	inline OpCode_t3879854364 * get_address_of_Ldstr_113() { return &___Ldstr_113; }
	inline void set_Ldstr_113(OpCode_t3879854364  value)
	{
		___Ldstr_113 = value;
	}

	inline static int32_t get_offset_of_Newobj_114() { return static_cast<int32_t>(offsetof(OpCodes_t3193932334_StaticFields, ___Newobj_114)); }
	inline OpCode_t3879854364  get_Newobj_114() const { return ___Newobj_114; }
	inline OpCode_t3879854364 * get_address_of_Newobj_114() { return &___Newobj_114; }
	inline void set_Newobj_114(OpCode_t3879854364  value)
	{
		___Newobj_114 = value;
	}

	inline static int32_t get_offset_of_Castclass_115() { return static_cast<int32_t>(offsetof(OpCodes_t3193932334_StaticFields, ___Castclass_115)); }
	inline OpCode_t3879854364  get_Castclass_115() const { return ___Castclass_115; }
	inline OpCode_t3879854364 * get_address_of_Castclass_115() { return &___Castclass_115; }
	inline void set_Castclass_115(OpCode_t3879854364  value)
	{
		___Castclass_115 = value;
	}

	inline static int32_t get_offset_of_Isinst_116() { return static_cast<int32_t>(offsetof(OpCodes_t3193932334_StaticFields, ___Isinst_116)); }
	inline OpCode_t3879854364  get_Isinst_116() const { return ___Isinst_116; }
	inline OpCode_t3879854364 * get_address_of_Isinst_116() { return &___Isinst_116; }
	inline void set_Isinst_116(OpCode_t3879854364  value)
	{
		___Isinst_116 = value;
	}

	inline static int32_t get_offset_of_Conv_R_Un_117() { return static_cast<int32_t>(offsetof(OpCodes_t3193932334_StaticFields, ___Conv_R_Un_117)); }
	inline OpCode_t3879854364  get_Conv_R_Un_117() const { return ___Conv_R_Un_117; }
	inline OpCode_t3879854364 * get_address_of_Conv_R_Un_117() { return &___Conv_R_Un_117; }
	inline void set_Conv_R_Un_117(OpCode_t3879854364  value)
	{
		___Conv_R_Un_117 = value;
	}

	inline static int32_t get_offset_of_Unbox_118() { return static_cast<int32_t>(offsetof(OpCodes_t3193932334_StaticFields, ___Unbox_118)); }
	inline OpCode_t3879854364  get_Unbox_118() const { return ___Unbox_118; }
	inline OpCode_t3879854364 * get_address_of_Unbox_118() { return &___Unbox_118; }
	inline void set_Unbox_118(OpCode_t3879854364  value)
	{
		___Unbox_118 = value;
	}

	inline static int32_t get_offset_of_Throw_119() { return static_cast<int32_t>(offsetof(OpCodes_t3193932334_StaticFields, ___Throw_119)); }
	inline OpCode_t3879854364  get_Throw_119() const { return ___Throw_119; }
	inline OpCode_t3879854364 * get_address_of_Throw_119() { return &___Throw_119; }
	inline void set_Throw_119(OpCode_t3879854364  value)
	{
		___Throw_119 = value;
	}

	inline static int32_t get_offset_of_Ldfld_120() { return static_cast<int32_t>(offsetof(OpCodes_t3193932334_StaticFields, ___Ldfld_120)); }
	inline OpCode_t3879854364  get_Ldfld_120() const { return ___Ldfld_120; }
	inline OpCode_t3879854364 * get_address_of_Ldfld_120() { return &___Ldfld_120; }
	inline void set_Ldfld_120(OpCode_t3879854364  value)
	{
		___Ldfld_120 = value;
	}

	inline static int32_t get_offset_of_Ldflda_121() { return static_cast<int32_t>(offsetof(OpCodes_t3193932334_StaticFields, ___Ldflda_121)); }
	inline OpCode_t3879854364  get_Ldflda_121() const { return ___Ldflda_121; }
	inline OpCode_t3879854364 * get_address_of_Ldflda_121() { return &___Ldflda_121; }
	inline void set_Ldflda_121(OpCode_t3879854364  value)
	{
		___Ldflda_121 = value;
	}

	inline static int32_t get_offset_of_Stfld_122() { return static_cast<int32_t>(offsetof(OpCodes_t3193932334_StaticFields, ___Stfld_122)); }
	inline OpCode_t3879854364  get_Stfld_122() const { return ___Stfld_122; }
	inline OpCode_t3879854364 * get_address_of_Stfld_122() { return &___Stfld_122; }
	inline void set_Stfld_122(OpCode_t3879854364  value)
	{
		___Stfld_122 = value;
	}

	inline static int32_t get_offset_of_Ldsfld_123() { return static_cast<int32_t>(offsetof(OpCodes_t3193932334_StaticFields, ___Ldsfld_123)); }
	inline OpCode_t3879854364  get_Ldsfld_123() const { return ___Ldsfld_123; }
	inline OpCode_t3879854364 * get_address_of_Ldsfld_123() { return &___Ldsfld_123; }
	inline void set_Ldsfld_123(OpCode_t3879854364  value)
	{
		___Ldsfld_123 = value;
	}

	inline static int32_t get_offset_of_Ldsflda_124() { return static_cast<int32_t>(offsetof(OpCodes_t3193932334_StaticFields, ___Ldsflda_124)); }
	inline OpCode_t3879854364  get_Ldsflda_124() const { return ___Ldsflda_124; }
	inline OpCode_t3879854364 * get_address_of_Ldsflda_124() { return &___Ldsflda_124; }
	inline void set_Ldsflda_124(OpCode_t3879854364  value)
	{
		___Ldsflda_124 = value;
	}

	inline static int32_t get_offset_of_Stsfld_125() { return static_cast<int32_t>(offsetof(OpCodes_t3193932334_StaticFields, ___Stsfld_125)); }
	inline OpCode_t3879854364  get_Stsfld_125() const { return ___Stsfld_125; }
	inline OpCode_t3879854364 * get_address_of_Stsfld_125() { return &___Stsfld_125; }
	inline void set_Stsfld_125(OpCode_t3879854364  value)
	{
		___Stsfld_125 = value;
	}

	inline static int32_t get_offset_of_Stobj_126() { return static_cast<int32_t>(offsetof(OpCodes_t3193932334_StaticFields, ___Stobj_126)); }
	inline OpCode_t3879854364  get_Stobj_126() const { return ___Stobj_126; }
	inline OpCode_t3879854364 * get_address_of_Stobj_126() { return &___Stobj_126; }
	inline void set_Stobj_126(OpCode_t3879854364  value)
	{
		___Stobj_126 = value;
	}

	inline static int32_t get_offset_of_Conv_Ovf_I1_Un_127() { return static_cast<int32_t>(offsetof(OpCodes_t3193932334_StaticFields, ___Conv_Ovf_I1_Un_127)); }
	inline OpCode_t3879854364  get_Conv_Ovf_I1_Un_127() const { return ___Conv_Ovf_I1_Un_127; }
	inline OpCode_t3879854364 * get_address_of_Conv_Ovf_I1_Un_127() { return &___Conv_Ovf_I1_Un_127; }
	inline void set_Conv_Ovf_I1_Un_127(OpCode_t3879854364  value)
	{
		___Conv_Ovf_I1_Un_127 = value;
	}

	inline static int32_t get_offset_of_Conv_Ovf_I2_Un_128() { return static_cast<int32_t>(offsetof(OpCodes_t3193932334_StaticFields, ___Conv_Ovf_I2_Un_128)); }
	inline OpCode_t3879854364  get_Conv_Ovf_I2_Un_128() const { return ___Conv_Ovf_I2_Un_128; }
	inline OpCode_t3879854364 * get_address_of_Conv_Ovf_I2_Un_128() { return &___Conv_Ovf_I2_Un_128; }
	inline void set_Conv_Ovf_I2_Un_128(OpCode_t3879854364  value)
	{
		___Conv_Ovf_I2_Un_128 = value;
	}

	inline static int32_t get_offset_of_Conv_Ovf_I4_Un_129() { return static_cast<int32_t>(offsetof(OpCodes_t3193932334_StaticFields, ___Conv_Ovf_I4_Un_129)); }
	inline OpCode_t3879854364  get_Conv_Ovf_I4_Un_129() const { return ___Conv_Ovf_I4_Un_129; }
	inline OpCode_t3879854364 * get_address_of_Conv_Ovf_I4_Un_129() { return &___Conv_Ovf_I4_Un_129; }
	inline void set_Conv_Ovf_I4_Un_129(OpCode_t3879854364  value)
	{
		___Conv_Ovf_I4_Un_129 = value;
	}

	inline static int32_t get_offset_of_Conv_Ovf_I8_Un_130() { return static_cast<int32_t>(offsetof(OpCodes_t3193932334_StaticFields, ___Conv_Ovf_I8_Un_130)); }
	inline OpCode_t3879854364  get_Conv_Ovf_I8_Un_130() const { return ___Conv_Ovf_I8_Un_130; }
	inline OpCode_t3879854364 * get_address_of_Conv_Ovf_I8_Un_130() { return &___Conv_Ovf_I8_Un_130; }
	inline void set_Conv_Ovf_I8_Un_130(OpCode_t3879854364  value)
	{
		___Conv_Ovf_I8_Un_130 = value;
	}

	inline static int32_t get_offset_of_Conv_Ovf_U1_Un_131() { return static_cast<int32_t>(offsetof(OpCodes_t3193932334_StaticFields, ___Conv_Ovf_U1_Un_131)); }
	inline OpCode_t3879854364  get_Conv_Ovf_U1_Un_131() const { return ___Conv_Ovf_U1_Un_131; }
	inline OpCode_t3879854364 * get_address_of_Conv_Ovf_U1_Un_131() { return &___Conv_Ovf_U1_Un_131; }
	inline void set_Conv_Ovf_U1_Un_131(OpCode_t3879854364  value)
	{
		___Conv_Ovf_U1_Un_131 = value;
	}

	inline static int32_t get_offset_of_Conv_Ovf_U2_Un_132() { return static_cast<int32_t>(offsetof(OpCodes_t3193932334_StaticFields, ___Conv_Ovf_U2_Un_132)); }
	inline OpCode_t3879854364  get_Conv_Ovf_U2_Un_132() const { return ___Conv_Ovf_U2_Un_132; }
	inline OpCode_t3879854364 * get_address_of_Conv_Ovf_U2_Un_132() { return &___Conv_Ovf_U2_Un_132; }
	inline void set_Conv_Ovf_U2_Un_132(OpCode_t3879854364  value)
	{
		___Conv_Ovf_U2_Un_132 = value;
	}

	inline static int32_t get_offset_of_Conv_Ovf_U4_Un_133() { return static_cast<int32_t>(offsetof(OpCodes_t3193932334_StaticFields, ___Conv_Ovf_U4_Un_133)); }
	inline OpCode_t3879854364  get_Conv_Ovf_U4_Un_133() const { return ___Conv_Ovf_U4_Un_133; }
	inline OpCode_t3879854364 * get_address_of_Conv_Ovf_U4_Un_133() { return &___Conv_Ovf_U4_Un_133; }
	inline void set_Conv_Ovf_U4_Un_133(OpCode_t3879854364  value)
	{
		___Conv_Ovf_U4_Un_133 = value;
	}

	inline static int32_t get_offset_of_Conv_Ovf_U8_Un_134() { return static_cast<int32_t>(offsetof(OpCodes_t3193932334_StaticFields, ___Conv_Ovf_U8_Un_134)); }
	inline OpCode_t3879854364  get_Conv_Ovf_U8_Un_134() const { return ___Conv_Ovf_U8_Un_134; }
	inline OpCode_t3879854364 * get_address_of_Conv_Ovf_U8_Un_134() { return &___Conv_Ovf_U8_Un_134; }
	inline void set_Conv_Ovf_U8_Un_134(OpCode_t3879854364  value)
	{
		___Conv_Ovf_U8_Un_134 = value;
	}

	inline static int32_t get_offset_of_Conv_Ovf_I_Un_135() { return static_cast<int32_t>(offsetof(OpCodes_t3193932334_StaticFields, ___Conv_Ovf_I_Un_135)); }
	inline OpCode_t3879854364  get_Conv_Ovf_I_Un_135() const { return ___Conv_Ovf_I_Un_135; }
	inline OpCode_t3879854364 * get_address_of_Conv_Ovf_I_Un_135() { return &___Conv_Ovf_I_Un_135; }
	inline void set_Conv_Ovf_I_Un_135(OpCode_t3879854364  value)
	{
		___Conv_Ovf_I_Un_135 = value;
	}

	inline static int32_t get_offset_of_Conv_Ovf_U_Un_136() { return static_cast<int32_t>(offsetof(OpCodes_t3193932334_StaticFields, ___Conv_Ovf_U_Un_136)); }
	inline OpCode_t3879854364  get_Conv_Ovf_U_Un_136() const { return ___Conv_Ovf_U_Un_136; }
	inline OpCode_t3879854364 * get_address_of_Conv_Ovf_U_Un_136() { return &___Conv_Ovf_U_Un_136; }
	inline void set_Conv_Ovf_U_Un_136(OpCode_t3879854364  value)
	{
		___Conv_Ovf_U_Un_136 = value;
	}

	inline static int32_t get_offset_of_Box_137() { return static_cast<int32_t>(offsetof(OpCodes_t3193932334_StaticFields, ___Box_137)); }
	inline OpCode_t3879854364  get_Box_137() const { return ___Box_137; }
	inline OpCode_t3879854364 * get_address_of_Box_137() { return &___Box_137; }
	inline void set_Box_137(OpCode_t3879854364  value)
	{
		___Box_137 = value;
	}

	inline static int32_t get_offset_of_Newarr_138() { return static_cast<int32_t>(offsetof(OpCodes_t3193932334_StaticFields, ___Newarr_138)); }
	inline OpCode_t3879854364  get_Newarr_138() const { return ___Newarr_138; }
	inline OpCode_t3879854364 * get_address_of_Newarr_138() { return &___Newarr_138; }
	inline void set_Newarr_138(OpCode_t3879854364  value)
	{
		___Newarr_138 = value;
	}

	inline static int32_t get_offset_of_Ldlen_139() { return static_cast<int32_t>(offsetof(OpCodes_t3193932334_StaticFields, ___Ldlen_139)); }
	inline OpCode_t3879854364  get_Ldlen_139() const { return ___Ldlen_139; }
	inline OpCode_t3879854364 * get_address_of_Ldlen_139() { return &___Ldlen_139; }
	inline void set_Ldlen_139(OpCode_t3879854364  value)
	{
		___Ldlen_139 = value;
	}

	inline static int32_t get_offset_of_Ldelema_140() { return static_cast<int32_t>(offsetof(OpCodes_t3193932334_StaticFields, ___Ldelema_140)); }
	inline OpCode_t3879854364  get_Ldelema_140() const { return ___Ldelema_140; }
	inline OpCode_t3879854364 * get_address_of_Ldelema_140() { return &___Ldelema_140; }
	inline void set_Ldelema_140(OpCode_t3879854364  value)
	{
		___Ldelema_140 = value;
	}

	inline static int32_t get_offset_of_Ldelem_I1_141() { return static_cast<int32_t>(offsetof(OpCodes_t3193932334_StaticFields, ___Ldelem_I1_141)); }
	inline OpCode_t3879854364  get_Ldelem_I1_141() const { return ___Ldelem_I1_141; }
	inline OpCode_t3879854364 * get_address_of_Ldelem_I1_141() { return &___Ldelem_I1_141; }
	inline void set_Ldelem_I1_141(OpCode_t3879854364  value)
	{
		___Ldelem_I1_141 = value;
	}

	inline static int32_t get_offset_of_Ldelem_U1_142() { return static_cast<int32_t>(offsetof(OpCodes_t3193932334_StaticFields, ___Ldelem_U1_142)); }
	inline OpCode_t3879854364  get_Ldelem_U1_142() const { return ___Ldelem_U1_142; }
	inline OpCode_t3879854364 * get_address_of_Ldelem_U1_142() { return &___Ldelem_U1_142; }
	inline void set_Ldelem_U1_142(OpCode_t3879854364  value)
	{
		___Ldelem_U1_142 = value;
	}

	inline static int32_t get_offset_of_Ldelem_I2_143() { return static_cast<int32_t>(offsetof(OpCodes_t3193932334_StaticFields, ___Ldelem_I2_143)); }
	inline OpCode_t3879854364  get_Ldelem_I2_143() const { return ___Ldelem_I2_143; }
	inline OpCode_t3879854364 * get_address_of_Ldelem_I2_143() { return &___Ldelem_I2_143; }
	inline void set_Ldelem_I2_143(OpCode_t3879854364  value)
	{
		___Ldelem_I2_143 = value;
	}

	inline static int32_t get_offset_of_Ldelem_U2_144() { return static_cast<int32_t>(offsetof(OpCodes_t3193932334_StaticFields, ___Ldelem_U2_144)); }
	inline OpCode_t3879854364  get_Ldelem_U2_144() const { return ___Ldelem_U2_144; }
	inline OpCode_t3879854364 * get_address_of_Ldelem_U2_144() { return &___Ldelem_U2_144; }
	inline void set_Ldelem_U2_144(OpCode_t3879854364  value)
	{
		___Ldelem_U2_144 = value;
	}

	inline static int32_t get_offset_of_Ldelem_I4_145() { return static_cast<int32_t>(offsetof(OpCodes_t3193932334_StaticFields, ___Ldelem_I4_145)); }
	inline OpCode_t3879854364  get_Ldelem_I4_145() const { return ___Ldelem_I4_145; }
	inline OpCode_t3879854364 * get_address_of_Ldelem_I4_145() { return &___Ldelem_I4_145; }
	inline void set_Ldelem_I4_145(OpCode_t3879854364  value)
	{
		___Ldelem_I4_145 = value;
	}

	inline static int32_t get_offset_of_Ldelem_U4_146() { return static_cast<int32_t>(offsetof(OpCodes_t3193932334_StaticFields, ___Ldelem_U4_146)); }
	inline OpCode_t3879854364  get_Ldelem_U4_146() const { return ___Ldelem_U4_146; }
	inline OpCode_t3879854364 * get_address_of_Ldelem_U4_146() { return &___Ldelem_U4_146; }
	inline void set_Ldelem_U4_146(OpCode_t3879854364  value)
	{
		___Ldelem_U4_146 = value;
	}

	inline static int32_t get_offset_of_Ldelem_I8_147() { return static_cast<int32_t>(offsetof(OpCodes_t3193932334_StaticFields, ___Ldelem_I8_147)); }
	inline OpCode_t3879854364  get_Ldelem_I8_147() const { return ___Ldelem_I8_147; }
	inline OpCode_t3879854364 * get_address_of_Ldelem_I8_147() { return &___Ldelem_I8_147; }
	inline void set_Ldelem_I8_147(OpCode_t3879854364  value)
	{
		___Ldelem_I8_147 = value;
	}

	inline static int32_t get_offset_of_Ldelem_I_148() { return static_cast<int32_t>(offsetof(OpCodes_t3193932334_StaticFields, ___Ldelem_I_148)); }
	inline OpCode_t3879854364  get_Ldelem_I_148() const { return ___Ldelem_I_148; }
	inline OpCode_t3879854364 * get_address_of_Ldelem_I_148() { return &___Ldelem_I_148; }
	inline void set_Ldelem_I_148(OpCode_t3879854364  value)
	{
		___Ldelem_I_148 = value;
	}

	inline static int32_t get_offset_of_Ldelem_R4_149() { return static_cast<int32_t>(offsetof(OpCodes_t3193932334_StaticFields, ___Ldelem_R4_149)); }
	inline OpCode_t3879854364  get_Ldelem_R4_149() const { return ___Ldelem_R4_149; }
	inline OpCode_t3879854364 * get_address_of_Ldelem_R4_149() { return &___Ldelem_R4_149; }
	inline void set_Ldelem_R4_149(OpCode_t3879854364  value)
	{
		___Ldelem_R4_149 = value;
	}

	inline static int32_t get_offset_of_Ldelem_R8_150() { return static_cast<int32_t>(offsetof(OpCodes_t3193932334_StaticFields, ___Ldelem_R8_150)); }
	inline OpCode_t3879854364  get_Ldelem_R8_150() const { return ___Ldelem_R8_150; }
	inline OpCode_t3879854364 * get_address_of_Ldelem_R8_150() { return &___Ldelem_R8_150; }
	inline void set_Ldelem_R8_150(OpCode_t3879854364  value)
	{
		___Ldelem_R8_150 = value;
	}

	inline static int32_t get_offset_of_Ldelem_Ref_151() { return static_cast<int32_t>(offsetof(OpCodes_t3193932334_StaticFields, ___Ldelem_Ref_151)); }
	inline OpCode_t3879854364  get_Ldelem_Ref_151() const { return ___Ldelem_Ref_151; }
	inline OpCode_t3879854364 * get_address_of_Ldelem_Ref_151() { return &___Ldelem_Ref_151; }
	inline void set_Ldelem_Ref_151(OpCode_t3879854364  value)
	{
		___Ldelem_Ref_151 = value;
	}

	inline static int32_t get_offset_of_Stelem_I_152() { return static_cast<int32_t>(offsetof(OpCodes_t3193932334_StaticFields, ___Stelem_I_152)); }
	inline OpCode_t3879854364  get_Stelem_I_152() const { return ___Stelem_I_152; }
	inline OpCode_t3879854364 * get_address_of_Stelem_I_152() { return &___Stelem_I_152; }
	inline void set_Stelem_I_152(OpCode_t3879854364  value)
	{
		___Stelem_I_152 = value;
	}

	inline static int32_t get_offset_of_Stelem_I1_153() { return static_cast<int32_t>(offsetof(OpCodes_t3193932334_StaticFields, ___Stelem_I1_153)); }
	inline OpCode_t3879854364  get_Stelem_I1_153() const { return ___Stelem_I1_153; }
	inline OpCode_t3879854364 * get_address_of_Stelem_I1_153() { return &___Stelem_I1_153; }
	inline void set_Stelem_I1_153(OpCode_t3879854364  value)
	{
		___Stelem_I1_153 = value;
	}

	inline static int32_t get_offset_of_Stelem_I2_154() { return static_cast<int32_t>(offsetof(OpCodes_t3193932334_StaticFields, ___Stelem_I2_154)); }
	inline OpCode_t3879854364  get_Stelem_I2_154() const { return ___Stelem_I2_154; }
	inline OpCode_t3879854364 * get_address_of_Stelem_I2_154() { return &___Stelem_I2_154; }
	inline void set_Stelem_I2_154(OpCode_t3879854364  value)
	{
		___Stelem_I2_154 = value;
	}

	inline static int32_t get_offset_of_Stelem_I4_155() { return static_cast<int32_t>(offsetof(OpCodes_t3193932334_StaticFields, ___Stelem_I4_155)); }
	inline OpCode_t3879854364  get_Stelem_I4_155() const { return ___Stelem_I4_155; }
	inline OpCode_t3879854364 * get_address_of_Stelem_I4_155() { return &___Stelem_I4_155; }
	inline void set_Stelem_I4_155(OpCode_t3879854364  value)
	{
		___Stelem_I4_155 = value;
	}

	inline static int32_t get_offset_of_Stelem_I8_156() { return static_cast<int32_t>(offsetof(OpCodes_t3193932334_StaticFields, ___Stelem_I8_156)); }
	inline OpCode_t3879854364  get_Stelem_I8_156() const { return ___Stelem_I8_156; }
	inline OpCode_t3879854364 * get_address_of_Stelem_I8_156() { return &___Stelem_I8_156; }
	inline void set_Stelem_I8_156(OpCode_t3879854364  value)
	{
		___Stelem_I8_156 = value;
	}

	inline static int32_t get_offset_of_Stelem_R4_157() { return static_cast<int32_t>(offsetof(OpCodes_t3193932334_StaticFields, ___Stelem_R4_157)); }
	inline OpCode_t3879854364  get_Stelem_R4_157() const { return ___Stelem_R4_157; }
	inline OpCode_t3879854364 * get_address_of_Stelem_R4_157() { return &___Stelem_R4_157; }
	inline void set_Stelem_R4_157(OpCode_t3879854364  value)
	{
		___Stelem_R4_157 = value;
	}

	inline static int32_t get_offset_of_Stelem_R8_158() { return static_cast<int32_t>(offsetof(OpCodes_t3193932334_StaticFields, ___Stelem_R8_158)); }
	inline OpCode_t3879854364  get_Stelem_R8_158() const { return ___Stelem_R8_158; }
	inline OpCode_t3879854364 * get_address_of_Stelem_R8_158() { return &___Stelem_R8_158; }
	inline void set_Stelem_R8_158(OpCode_t3879854364  value)
	{
		___Stelem_R8_158 = value;
	}

	inline static int32_t get_offset_of_Stelem_Ref_159() { return static_cast<int32_t>(offsetof(OpCodes_t3193932334_StaticFields, ___Stelem_Ref_159)); }
	inline OpCode_t3879854364  get_Stelem_Ref_159() const { return ___Stelem_Ref_159; }
	inline OpCode_t3879854364 * get_address_of_Stelem_Ref_159() { return &___Stelem_Ref_159; }
	inline void set_Stelem_Ref_159(OpCode_t3879854364  value)
	{
		___Stelem_Ref_159 = value;
	}

	inline static int32_t get_offset_of_Ldelem_160() { return static_cast<int32_t>(offsetof(OpCodes_t3193932334_StaticFields, ___Ldelem_160)); }
	inline OpCode_t3879854364  get_Ldelem_160() const { return ___Ldelem_160; }
	inline OpCode_t3879854364 * get_address_of_Ldelem_160() { return &___Ldelem_160; }
	inline void set_Ldelem_160(OpCode_t3879854364  value)
	{
		___Ldelem_160 = value;
	}

	inline static int32_t get_offset_of_Stelem_161() { return static_cast<int32_t>(offsetof(OpCodes_t3193932334_StaticFields, ___Stelem_161)); }
	inline OpCode_t3879854364  get_Stelem_161() const { return ___Stelem_161; }
	inline OpCode_t3879854364 * get_address_of_Stelem_161() { return &___Stelem_161; }
	inline void set_Stelem_161(OpCode_t3879854364  value)
	{
		___Stelem_161 = value;
	}

	inline static int32_t get_offset_of_Unbox_Any_162() { return static_cast<int32_t>(offsetof(OpCodes_t3193932334_StaticFields, ___Unbox_Any_162)); }
	inline OpCode_t3879854364  get_Unbox_Any_162() const { return ___Unbox_Any_162; }
	inline OpCode_t3879854364 * get_address_of_Unbox_Any_162() { return &___Unbox_Any_162; }
	inline void set_Unbox_Any_162(OpCode_t3879854364  value)
	{
		___Unbox_Any_162 = value;
	}

	inline static int32_t get_offset_of_Conv_Ovf_I1_163() { return static_cast<int32_t>(offsetof(OpCodes_t3193932334_StaticFields, ___Conv_Ovf_I1_163)); }
	inline OpCode_t3879854364  get_Conv_Ovf_I1_163() const { return ___Conv_Ovf_I1_163; }
	inline OpCode_t3879854364 * get_address_of_Conv_Ovf_I1_163() { return &___Conv_Ovf_I1_163; }
	inline void set_Conv_Ovf_I1_163(OpCode_t3879854364  value)
	{
		___Conv_Ovf_I1_163 = value;
	}

	inline static int32_t get_offset_of_Conv_Ovf_U1_164() { return static_cast<int32_t>(offsetof(OpCodes_t3193932334_StaticFields, ___Conv_Ovf_U1_164)); }
	inline OpCode_t3879854364  get_Conv_Ovf_U1_164() const { return ___Conv_Ovf_U1_164; }
	inline OpCode_t3879854364 * get_address_of_Conv_Ovf_U1_164() { return &___Conv_Ovf_U1_164; }
	inline void set_Conv_Ovf_U1_164(OpCode_t3879854364  value)
	{
		___Conv_Ovf_U1_164 = value;
	}

	inline static int32_t get_offset_of_Conv_Ovf_I2_165() { return static_cast<int32_t>(offsetof(OpCodes_t3193932334_StaticFields, ___Conv_Ovf_I2_165)); }
	inline OpCode_t3879854364  get_Conv_Ovf_I2_165() const { return ___Conv_Ovf_I2_165; }
	inline OpCode_t3879854364 * get_address_of_Conv_Ovf_I2_165() { return &___Conv_Ovf_I2_165; }
	inline void set_Conv_Ovf_I2_165(OpCode_t3879854364  value)
	{
		___Conv_Ovf_I2_165 = value;
	}

	inline static int32_t get_offset_of_Conv_Ovf_U2_166() { return static_cast<int32_t>(offsetof(OpCodes_t3193932334_StaticFields, ___Conv_Ovf_U2_166)); }
	inline OpCode_t3879854364  get_Conv_Ovf_U2_166() const { return ___Conv_Ovf_U2_166; }
	inline OpCode_t3879854364 * get_address_of_Conv_Ovf_U2_166() { return &___Conv_Ovf_U2_166; }
	inline void set_Conv_Ovf_U2_166(OpCode_t3879854364  value)
	{
		___Conv_Ovf_U2_166 = value;
	}

	inline static int32_t get_offset_of_Conv_Ovf_I4_167() { return static_cast<int32_t>(offsetof(OpCodes_t3193932334_StaticFields, ___Conv_Ovf_I4_167)); }
	inline OpCode_t3879854364  get_Conv_Ovf_I4_167() const { return ___Conv_Ovf_I4_167; }
	inline OpCode_t3879854364 * get_address_of_Conv_Ovf_I4_167() { return &___Conv_Ovf_I4_167; }
	inline void set_Conv_Ovf_I4_167(OpCode_t3879854364  value)
	{
		___Conv_Ovf_I4_167 = value;
	}

	inline static int32_t get_offset_of_Conv_Ovf_U4_168() { return static_cast<int32_t>(offsetof(OpCodes_t3193932334_StaticFields, ___Conv_Ovf_U4_168)); }
	inline OpCode_t3879854364  get_Conv_Ovf_U4_168() const { return ___Conv_Ovf_U4_168; }
	inline OpCode_t3879854364 * get_address_of_Conv_Ovf_U4_168() { return &___Conv_Ovf_U4_168; }
	inline void set_Conv_Ovf_U4_168(OpCode_t3879854364  value)
	{
		___Conv_Ovf_U4_168 = value;
	}

	inline static int32_t get_offset_of_Conv_Ovf_I8_169() { return static_cast<int32_t>(offsetof(OpCodes_t3193932334_StaticFields, ___Conv_Ovf_I8_169)); }
	inline OpCode_t3879854364  get_Conv_Ovf_I8_169() const { return ___Conv_Ovf_I8_169; }
	inline OpCode_t3879854364 * get_address_of_Conv_Ovf_I8_169() { return &___Conv_Ovf_I8_169; }
	inline void set_Conv_Ovf_I8_169(OpCode_t3879854364  value)
	{
		___Conv_Ovf_I8_169 = value;
	}

	inline static int32_t get_offset_of_Conv_Ovf_U8_170() { return static_cast<int32_t>(offsetof(OpCodes_t3193932334_StaticFields, ___Conv_Ovf_U8_170)); }
	inline OpCode_t3879854364  get_Conv_Ovf_U8_170() const { return ___Conv_Ovf_U8_170; }
	inline OpCode_t3879854364 * get_address_of_Conv_Ovf_U8_170() { return &___Conv_Ovf_U8_170; }
	inline void set_Conv_Ovf_U8_170(OpCode_t3879854364  value)
	{
		___Conv_Ovf_U8_170 = value;
	}

	inline static int32_t get_offset_of_Refanyval_171() { return static_cast<int32_t>(offsetof(OpCodes_t3193932334_StaticFields, ___Refanyval_171)); }
	inline OpCode_t3879854364  get_Refanyval_171() const { return ___Refanyval_171; }
	inline OpCode_t3879854364 * get_address_of_Refanyval_171() { return &___Refanyval_171; }
	inline void set_Refanyval_171(OpCode_t3879854364  value)
	{
		___Refanyval_171 = value;
	}

	inline static int32_t get_offset_of_Ckfinite_172() { return static_cast<int32_t>(offsetof(OpCodes_t3193932334_StaticFields, ___Ckfinite_172)); }
	inline OpCode_t3879854364  get_Ckfinite_172() const { return ___Ckfinite_172; }
	inline OpCode_t3879854364 * get_address_of_Ckfinite_172() { return &___Ckfinite_172; }
	inline void set_Ckfinite_172(OpCode_t3879854364  value)
	{
		___Ckfinite_172 = value;
	}

	inline static int32_t get_offset_of_Mkrefany_173() { return static_cast<int32_t>(offsetof(OpCodes_t3193932334_StaticFields, ___Mkrefany_173)); }
	inline OpCode_t3879854364  get_Mkrefany_173() const { return ___Mkrefany_173; }
	inline OpCode_t3879854364 * get_address_of_Mkrefany_173() { return &___Mkrefany_173; }
	inline void set_Mkrefany_173(OpCode_t3879854364  value)
	{
		___Mkrefany_173 = value;
	}

	inline static int32_t get_offset_of_Ldtoken_174() { return static_cast<int32_t>(offsetof(OpCodes_t3193932334_StaticFields, ___Ldtoken_174)); }
	inline OpCode_t3879854364  get_Ldtoken_174() const { return ___Ldtoken_174; }
	inline OpCode_t3879854364 * get_address_of_Ldtoken_174() { return &___Ldtoken_174; }
	inline void set_Ldtoken_174(OpCode_t3879854364  value)
	{
		___Ldtoken_174 = value;
	}

	inline static int32_t get_offset_of_Conv_U2_175() { return static_cast<int32_t>(offsetof(OpCodes_t3193932334_StaticFields, ___Conv_U2_175)); }
	inline OpCode_t3879854364  get_Conv_U2_175() const { return ___Conv_U2_175; }
	inline OpCode_t3879854364 * get_address_of_Conv_U2_175() { return &___Conv_U2_175; }
	inline void set_Conv_U2_175(OpCode_t3879854364  value)
	{
		___Conv_U2_175 = value;
	}

	inline static int32_t get_offset_of_Conv_U1_176() { return static_cast<int32_t>(offsetof(OpCodes_t3193932334_StaticFields, ___Conv_U1_176)); }
	inline OpCode_t3879854364  get_Conv_U1_176() const { return ___Conv_U1_176; }
	inline OpCode_t3879854364 * get_address_of_Conv_U1_176() { return &___Conv_U1_176; }
	inline void set_Conv_U1_176(OpCode_t3879854364  value)
	{
		___Conv_U1_176 = value;
	}

	inline static int32_t get_offset_of_Conv_I_177() { return static_cast<int32_t>(offsetof(OpCodes_t3193932334_StaticFields, ___Conv_I_177)); }
	inline OpCode_t3879854364  get_Conv_I_177() const { return ___Conv_I_177; }
	inline OpCode_t3879854364 * get_address_of_Conv_I_177() { return &___Conv_I_177; }
	inline void set_Conv_I_177(OpCode_t3879854364  value)
	{
		___Conv_I_177 = value;
	}

	inline static int32_t get_offset_of_Conv_Ovf_I_178() { return static_cast<int32_t>(offsetof(OpCodes_t3193932334_StaticFields, ___Conv_Ovf_I_178)); }
	inline OpCode_t3879854364  get_Conv_Ovf_I_178() const { return ___Conv_Ovf_I_178; }
	inline OpCode_t3879854364 * get_address_of_Conv_Ovf_I_178() { return &___Conv_Ovf_I_178; }
	inline void set_Conv_Ovf_I_178(OpCode_t3879854364  value)
	{
		___Conv_Ovf_I_178 = value;
	}

	inline static int32_t get_offset_of_Conv_Ovf_U_179() { return static_cast<int32_t>(offsetof(OpCodes_t3193932334_StaticFields, ___Conv_Ovf_U_179)); }
	inline OpCode_t3879854364  get_Conv_Ovf_U_179() const { return ___Conv_Ovf_U_179; }
	inline OpCode_t3879854364 * get_address_of_Conv_Ovf_U_179() { return &___Conv_Ovf_U_179; }
	inline void set_Conv_Ovf_U_179(OpCode_t3879854364  value)
	{
		___Conv_Ovf_U_179 = value;
	}

	inline static int32_t get_offset_of_Add_Ovf_180() { return static_cast<int32_t>(offsetof(OpCodes_t3193932334_StaticFields, ___Add_Ovf_180)); }
	inline OpCode_t3879854364  get_Add_Ovf_180() const { return ___Add_Ovf_180; }
	inline OpCode_t3879854364 * get_address_of_Add_Ovf_180() { return &___Add_Ovf_180; }
	inline void set_Add_Ovf_180(OpCode_t3879854364  value)
	{
		___Add_Ovf_180 = value;
	}

	inline static int32_t get_offset_of_Add_Ovf_Un_181() { return static_cast<int32_t>(offsetof(OpCodes_t3193932334_StaticFields, ___Add_Ovf_Un_181)); }
	inline OpCode_t3879854364  get_Add_Ovf_Un_181() const { return ___Add_Ovf_Un_181; }
	inline OpCode_t3879854364 * get_address_of_Add_Ovf_Un_181() { return &___Add_Ovf_Un_181; }
	inline void set_Add_Ovf_Un_181(OpCode_t3879854364  value)
	{
		___Add_Ovf_Un_181 = value;
	}

	inline static int32_t get_offset_of_Mul_Ovf_182() { return static_cast<int32_t>(offsetof(OpCodes_t3193932334_StaticFields, ___Mul_Ovf_182)); }
	inline OpCode_t3879854364  get_Mul_Ovf_182() const { return ___Mul_Ovf_182; }
	inline OpCode_t3879854364 * get_address_of_Mul_Ovf_182() { return &___Mul_Ovf_182; }
	inline void set_Mul_Ovf_182(OpCode_t3879854364  value)
	{
		___Mul_Ovf_182 = value;
	}

	inline static int32_t get_offset_of_Mul_Ovf_Un_183() { return static_cast<int32_t>(offsetof(OpCodes_t3193932334_StaticFields, ___Mul_Ovf_Un_183)); }
	inline OpCode_t3879854364  get_Mul_Ovf_Un_183() const { return ___Mul_Ovf_Un_183; }
	inline OpCode_t3879854364 * get_address_of_Mul_Ovf_Un_183() { return &___Mul_Ovf_Un_183; }
	inline void set_Mul_Ovf_Un_183(OpCode_t3879854364  value)
	{
		___Mul_Ovf_Un_183 = value;
	}

	inline static int32_t get_offset_of_Sub_Ovf_184() { return static_cast<int32_t>(offsetof(OpCodes_t3193932334_StaticFields, ___Sub_Ovf_184)); }
	inline OpCode_t3879854364  get_Sub_Ovf_184() const { return ___Sub_Ovf_184; }
	inline OpCode_t3879854364 * get_address_of_Sub_Ovf_184() { return &___Sub_Ovf_184; }
	inline void set_Sub_Ovf_184(OpCode_t3879854364  value)
	{
		___Sub_Ovf_184 = value;
	}

	inline static int32_t get_offset_of_Sub_Ovf_Un_185() { return static_cast<int32_t>(offsetof(OpCodes_t3193932334_StaticFields, ___Sub_Ovf_Un_185)); }
	inline OpCode_t3879854364  get_Sub_Ovf_Un_185() const { return ___Sub_Ovf_Un_185; }
	inline OpCode_t3879854364 * get_address_of_Sub_Ovf_Un_185() { return &___Sub_Ovf_Un_185; }
	inline void set_Sub_Ovf_Un_185(OpCode_t3879854364  value)
	{
		___Sub_Ovf_Un_185 = value;
	}

	inline static int32_t get_offset_of_Endfinally_186() { return static_cast<int32_t>(offsetof(OpCodes_t3193932334_StaticFields, ___Endfinally_186)); }
	inline OpCode_t3879854364  get_Endfinally_186() const { return ___Endfinally_186; }
	inline OpCode_t3879854364 * get_address_of_Endfinally_186() { return &___Endfinally_186; }
	inline void set_Endfinally_186(OpCode_t3879854364  value)
	{
		___Endfinally_186 = value;
	}

	inline static int32_t get_offset_of_Leave_187() { return static_cast<int32_t>(offsetof(OpCodes_t3193932334_StaticFields, ___Leave_187)); }
	inline OpCode_t3879854364  get_Leave_187() const { return ___Leave_187; }
	inline OpCode_t3879854364 * get_address_of_Leave_187() { return &___Leave_187; }
	inline void set_Leave_187(OpCode_t3879854364  value)
	{
		___Leave_187 = value;
	}

	inline static int32_t get_offset_of_Leave_S_188() { return static_cast<int32_t>(offsetof(OpCodes_t3193932334_StaticFields, ___Leave_S_188)); }
	inline OpCode_t3879854364  get_Leave_S_188() const { return ___Leave_S_188; }
	inline OpCode_t3879854364 * get_address_of_Leave_S_188() { return &___Leave_S_188; }
	inline void set_Leave_S_188(OpCode_t3879854364  value)
	{
		___Leave_S_188 = value;
	}

	inline static int32_t get_offset_of_Stind_I_189() { return static_cast<int32_t>(offsetof(OpCodes_t3193932334_StaticFields, ___Stind_I_189)); }
	inline OpCode_t3879854364  get_Stind_I_189() const { return ___Stind_I_189; }
	inline OpCode_t3879854364 * get_address_of_Stind_I_189() { return &___Stind_I_189; }
	inline void set_Stind_I_189(OpCode_t3879854364  value)
	{
		___Stind_I_189 = value;
	}

	inline static int32_t get_offset_of_Conv_U_190() { return static_cast<int32_t>(offsetof(OpCodes_t3193932334_StaticFields, ___Conv_U_190)); }
	inline OpCode_t3879854364  get_Conv_U_190() const { return ___Conv_U_190; }
	inline OpCode_t3879854364 * get_address_of_Conv_U_190() { return &___Conv_U_190; }
	inline void set_Conv_U_190(OpCode_t3879854364  value)
	{
		___Conv_U_190 = value;
	}

	inline static int32_t get_offset_of_Prefix7_191() { return static_cast<int32_t>(offsetof(OpCodes_t3193932334_StaticFields, ___Prefix7_191)); }
	inline OpCode_t3879854364  get_Prefix7_191() const { return ___Prefix7_191; }
	inline OpCode_t3879854364 * get_address_of_Prefix7_191() { return &___Prefix7_191; }
	inline void set_Prefix7_191(OpCode_t3879854364  value)
	{
		___Prefix7_191 = value;
	}

	inline static int32_t get_offset_of_Prefix6_192() { return static_cast<int32_t>(offsetof(OpCodes_t3193932334_StaticFields, ___Prefix6_192)); }
	inline OpCode_t3879854364  get_Prefix6_192() const { return ___Prefix6_192; }
	inline OpCode_t3879854364 * get_address_of_Prefix6_192() { return &___Prefix6_192; }
	inline void set_Prefix6_192(OpCode_t3879854364  value)
	{
		___Prefix6_192 = value;
	}

	inline static int32_t get_offset_of_Prefix5_193() { return static_cast<int32_t>(offsetof(OpCodes_t3193932334_StaticFields, ___Prefix5_193)); }
	inline OpCode_t3879854364  get_Prefix5_193() const { return ___Prefix5_193; }
	inline OpCode_t3879854364 * get_address_of_Prefix5_193() { return &___Prefix5_193; }
	inline void set_Prefix5_193(OpCode_t3879854364  value)
	{
		___Prefix5_193 = value;
	}

	inline static int32_t get_offset_of_Prefix4_194() { return static_cast<int32_t>(offsetof(OpCodes_t3193932334_StaticFields, ___Prefix4_194)); }
	inline OpCode_t3879854364  get_Prefix4_194() const { return ___Prefix4_194; }
	inline OpCode_t3879854364 * get_address_of_Prefix4_194() { return &___Prefix4_194; }
	inline void set_Prefix4_194(OpCode_t3879854364  value)
	{
		___Prefix4_194 = value;
	}

	inline static int32_t get_offset_of_Prefix3_195() { return static_cast<int32_t>(offsetof(OpCodes_t3193932334_StaticFields, ___Prefix3_195)); }
	inline OpCode_t3879854364  get_Prefix3_195() const { return ___Prefix3_195; }
	inline OpCode_t3879854364 * get_address_of_Prefix3_195() { return &___Prefix3_195; }
	inline void set_Prefix3_195(OpCode_t3879854364  value)
	{
		___Prefix3_195 = value;
	}

	inline static int32_t get_offset_of_Prefix2_196() { return static_cast<int32_t>(offsetof(OpCodes_t3193932334_StaticFields, ___Prefix2_196)); }
	inline OpCode_t3879854364  get_Prefix2_196() const { return ___Prefix2_196; }
	inline OpCode_t3879854364 * get_address_of_Prefix2_196() { return &___Prefix2_196; }
	inline void set_Prefix2_196(OpCode_t3879854364  value)
	{
		___Prefix2_196 = value;
	}

	inline static int32_t get_offset_of_Prefix1_197() { return static_cast<int32_t>(offsetof(OpCodes_t3193932334_StaticFields, ___Prefix1_197)); }
	inline OpCode_t3879854364  get_Prefix1_197() const { return ___Prefix1_197; }
	inline OpCode_t3879854364 * get_address_of_Prefix1_197() { return &___Prefix1_197; }
	inline void set_Prefix1_197(OpCode_t3879854364  value)
	{
		___Prefix1_197 = value;
	}

	inline static int32_t get_offset_of_Prefixref_198() { return static_cast<int32_t>(offsetof(OpCodes_t3193932334_StaticFields, ___Prefixref_198)); }
	inline OpCode_t3879854364  get_Prefixref_198() const { return ___Prefixref_198; }
	inline OpCode_t3879854364 * get_address_of_Prefixref_198() { return &___Prefixref_198; }
	inline void set_Prefixref_198(OpCode_t3879854364  value)
	{
		___Prefixref_198 = value;
	}

	inline static int32_t get_offset_of_Arglist_199() { return static_cast<int32_t>(offsetof(OpCodes_t3193932334_StaticFields, ___Arglist_199)); }
	inline OpCode_t3879854364  get_Arglist_199() const { return ___Arglist_199; }
	inline OpCode_t3879854364 * get_address_of_Arglist_199() { return &___Arglist_199; }
	inline void set_Arglist_199(OpCode_t3879854364  value)
	{
		___Arglist_199 = value;
	}

	inline static int32_t get_offset_of_Ceq_200() { return static_cast<int32_t>(offsetof(OpCodes_t3193932334_StaticFields, ___Ceq_200)); }
	inline OpCode_t3879854364  get_Ceq_200() const { return ___Ceq_200; }
	inline OpCode_t3879854364 * get_address_of_Ceq_200() { return &___Ceq_200; }
	inline void set_Ceq_200(OpCode_t3879854364  value)
	{
		___Ceq_200 = value;
	}

	inline static int32_t get_offset_of_Cgt_201() { return static_cast<int32_t>(offsetof(OpCodes_t3193932334_StaticFields, ___Cgt_201)); }
	inline OpCode_t3879854364  get_Cgt_201() const { return ___Cgt_201; }
	inline OpCode_t3879854364 * get_address_of_Cgt_201() { return &___Cgt_201; }
	inline void set_Cgt_201(OpCode_t3879854364  value)
	{
		___Cgt_201 = value;
	}

	inline static int32_t get_offset_of_Cgt_Un_202() { return static_cast<int32_t>(offsetof(OpCodes_t3193932334_StaticFields, ___Cgt_Un_202)); }
	inline OpCode_t3879854364  get_Cgt_Un_202() const { return ___Cgt_Un_202; }
	inline OpCode_t3879854364 * get_address_of_Cgt_Un_202() { return &___Cgt_Un_202; }
	inline void set_Cgt_Un_202(OpCode_t3879854364  value)
	{
		___Cgt_Un_202 = value;
	}

	inline static int32_t get_offset_of_Clt_203() { return static_cast<int32_t>(offsetof(OpCodes_t3193932334_StaticFields, ___Clt_203)); }
	inline OpCode_t3879854364  get_Clt_203() const { return ___Clt_203; }
	inline OpCode_t3879854364 * get_address_of_Clt_203() { return &___Clt_203; }
	inline void set_Clt_203(OpCode_t3879854364  value)
	{
		___Clt_203 = value;
	}

	inline static int32_t get_offset_of_Clt_Un_204() { return static_cast<int32_t>(offsetof(OpCodes_t3193932334_StaticFields, ___Clt_Un_204)); }
	inline OpCode_t3879854364  get_Clt_Un_204() const { return ___Clt_Un_204; }
	inline OpCode_t3879854364 * get_address_of_Clt_Un_204() { return &___Clt_Un_204; }
	inline void set_Clt_Un_204(OpCode_t3879854364  value)
	{
		___Clt_Un_204 = value;
	}

	inline static int32_t get_offset_of_Ldftn_205() { return static_cast<int32_t>(offsetof(OpCodes_t3193932334_StaticFields, ___Ldftn_205)); }
	inline OpCode_t3879854364  get_Ldftn_205() const { return ___Ldftn_205; }
	inline OpCode_t3879854364 * get_address_of_Ldftn_205() { return &___Ldftn_205; }
	inline void set_Ldftn_205(OpCode_t3879854364  value)
	{
		___Ldftn_205 = value;
	}

	inline static int32_t get_offset_of_Ldvirtftn_206() { return static_cast<int32_t>(offsetof(OpCodes_t3193932334_StaticFields, ___Ldvirtftn_206)); }
	inline OpCode_t3879854364  get_Ldvirtftn_206() const { return ___Ldvirtftn_206; }
	inline OpCode_t3879854364 * get_address_of_Ldvirtftn_206() { return &___Ldvirtftn_206; }
	inline void set_Ldvirtftn_206(OpCode_t3879854364  value)
	{
		___Ldvirtftn_206 = value;
	}

	inline static int32_t get_offset_of_Ldarg_207() { return static_cast<int32_t>(offsetof(OpCodes_t3193932334_StaticFields, ___Ldarg_207)); }
	inline OpCode_t3879854364  get_Ldarg_207() const { return ___Ldarg_207; }
	inline OpCode_t3879854364 * get_address_of_Ldarg_207() { return &___Ldarg_207; }
	inline void set_Ldarg_207(OpCode_t3879854364  value)
	{
		___Ldarg_207 = value;
	}

	inline static int32_t get_offset_of_Ldarga_208() { return static_cast<int32_t>(offsetof(OpCodes_t3193932334_StaticFields, ___Ldarga_208)); }
	inline OpCode_t3879854364  get_Ldarga_208() const { return ___Ldarga_208; }
	inline OpCode_t3879854364 * get_address_of_Ldarga_208() { return &___Ldarga_208; }
	inline void set_Ldarga_208(OpCode_t3879854364  value)
	{
		___Ldarga_208 = value;
	}

	inline static int32_t get_offset_of_Starg_209() { return static_cast<int32_t>(offsetof(OpCodes_t3193932334_StaticFields, ___Starg_209)); }
	inline OpCode_t3879854364  get_Starg_209() const { return ___Starg_209; }
	inline OpCode_t3879854364 * get_address_of_Starg_209() { return &___Starg_209; }
	inline void set_Starg_209(OpCode_t3879854364  value)
	{
		___Starg_209 = value;
	}

	inline static int32_t get_offset_of_Ldloc_210() { return static_cast<int32_t>(offsetof(OpCodes_t3193932334_StaticFields, ___Ldloc_210)); }
	inline OpCode_t3879854364  get_Ldloc_210() const { return ___Ldloc_210; }
	inline OpCode_t3879854364 * get_address_of_Ldloc_210() { return &___Ldloc_210; }
	inline void set_Ldloc_210(OpCode_t3879854364  value)
	{
		___Ldloc_210 = value;
	}

	inline static int32_t get_offset_of_Ldloca_211() { return static_cast<int32_t>(offsetof(OpCodes_t3193932334_StaticFields, ___Ldloca_211)); }
	inline OpCode_t3879854364  get_Ldloca_211() const { return ___Ldloca_211; }
	inline OpCode_t3879854364 * get_address_of_Ldloca_211() { return &___Ldloca_211; }
	inline void set_Ldloca_211(OpCode_t3879854364  value)
	{
		___Ldloca_211 = value;
	}

	inline static int32_t get_offset_of_Stloc_212() { return static_cast<int32_t>(offsetof(OpCodes_t3193932334_StaticFields, ___Stloc_212)); }
	inline OpCode_t3879854364  get_Stloc_212() const { return ___Stloc_212; }
	inline OpCode_t3879854364 * get_address_of_Stloc_212() { return &___Stloc_212; }
	inline void set_Stloc_212(OpCode_t3879854364  value)
	{
		___Stloc_212 = value;
	}

	inline static int32_t get_offset_of_Localloc_213() { return static_cast<int32_t>(offsetof(OpCodes_t3193932334_StaticFields, ___Localloc_213)); }
	inline OpCode_t3879854364  get_Localloc_213() const { return ___Localloc_213; }
	inline OpCode_t3879854364 * get_address_of_Localloc_213() { return &___Localloc_213; }
	inline void set_Localloc_213(OpCode_t3879854364  value)
	{
		___Localloc_213 = value;
	}

	inline static int32_t get_offset_of_Endfilter_214() { return static_cast<int32_t>(offsetof(OpCodes_t3193932334_StaticFields, ___Endfilter_214)); }
	inline OpCode_t3879854364  get_Endfilter_214() const { return ___Endfilter_214; }
	inline OpCode_t3879854364 * get_address_of_Endfilter_214() { return &___Endfilter_214; }
	inline void set_Endfilter_214(OpCode_t3879854364  value)
	{
		___Endfilter_214 = value;
	}

	inline static int32_t get_offset_of_Unaligned_215() { return static_cast<int32_t>(offsetof(OpCodes_t3193932334_StaticFields, ___Unaligned_215)); }
	inline OpCode_t3879854364  get_Unaligned_215() const { return ___Unaligned_215; }
	inline OpCode_t3879854364 * get_address_of_Unaligned_215() { return &___Unaligned_215; }
	inline void set_Unaligned_215(OpCode_t3879854364  value)
	{
		___Unaligned_215 = value;
	}

	inline static int32_t get_offset_of_Volatile_216() { return static_cast<int32_t>(offsetof(OpCodes_t3193932334_StaticFields, ___Volatile_216)); }
	inline OpCode_t3879854364  get_Volatile_216() const { return ___Volatile_216; }
	inline OpCode_t3879854364 * get_address_of_Volatile_216() { return &___Volatile_216; }
	inline void set_Volatile_216(OpCode_t3879854364  value)
	{
		___Volatile_216 = value;
	}

	inline static int32_t get_offset_of_Tailcall_217() { return static_cast<int32_t>(offsetof(OpCodes_t3193932334_StaticFields, ___Tailcall_217)); }
	inline OpCode_t3879854364  get_Tailcall_217() const { return ___Tailcall_217; }
	inline OpCode_t3879854364 * get_address_of_Tailcall_217() { return &___Tailcall_217; }
	inline void set_Tailcall_217(OpCode_t3879854364  value)
	{
		___Tailcall_217 = value;
	}

	inline static int32_t get_offset_of_Initobj_218() { return static_cast<int32_t>(offsetof(OpCodes_t3193932334_StaticFields, ___Initobj_218)); }
	inline OpCode_t3879854364  get_Initobj_218() const { return ___Initobj_218; }
	inline OpCode_t3879854364 * get_address_of_Initobj_218() { return &___Initobj_218; }
	inline void set_Initobj_218(OpCode_t3879854364  value)
	{
		___Initobj_218 = value;
	}

	inline static int32_t get_offset_of_Constrained_219() { return static_cast<int32_t>(offsetof(OpCodes_t3193932334_StaticFields, ___Constrained_219)); }
	inline OpCode_t3879854364  get_Constrained_219() const { return ___Constrained_219; }
	inline OpCode_t3879854364 * get_address_of_Constrained_219() { return &___Constrained_219; }
	inline void set_Constrained_219(OpCode_t3879854364  value)
	{
		___Constrained_219 = value;
	}

	inline static int32_t get_offset_of_Cpblk_220() { return static_cast<int32_t>(offsetof(OpCodes_t3193932334_StaticFields, ___Cpblk_220)); }
	inline OpCode_t3879854364  get_Cpblk_220() const { return ___Cpblk_220; }
	inline OpCode_t3879854364 * get_address_of_Cpblk_220() { return &___Cpblk_220; }
	inline void set_Cpblk_220(OpCode_t3879854364  value)
	{
		___Cpblk_220 = value;
	}

	inline static int32_t get_offset_of_Initblk_221() { return static_cast<int32_t>(offsetof(OpCodes_t3193932334_StaticFields, ___Initblk_221)); }
	inline OpCode_t3879854364  get_Initblk_221() const { return ___Initblk_221; }
	inline OpCode_t3879854364 * get_address_of_Initblk_221() { return &___Initblk_221; }
	inline void set_Initblk_221(OpCode_t3879854364  value)
	{
		___Initblk_221 = value;
	}

	inline static int32_t get_offset_of_Rethrow_222() { return static_cast<int32_t>(offsetof(OpCodes_t3193932334_StaticFields, ___Rethrow_222)); }
	inline OpCode_t3879854364  get_Rethrow_222() const { return ___Rethrow_222; }
	inline OpCode_t3879854364 * get_address_of_Rethrow_222() { return &___Rethrow_222; }
	inline void set_Rethrow_222(OpCode_t3879854364  value)
	{
		___Rethrow_222 = value;
	}

	inline static int32_t get_offset_of_Sizeof_223() { return static_cast<int32_t>(offsetof(OpCodes_t3193932334_StaticFields, ___Sizeof_223)); }
	inline OpCode_t3879854364  get_Sizeof_223() const { return ___Sizeof_223; }
	inline OpCode_t3879854364 * get_address_of_Sizeof_223() { return &___Sizeof_223; }
	inline void set_Sizeof_223(OpCode_t3879854364  value)
	{
		___Sizeof_223 = value;
	}

	inline static int32_t get_offset_of_Refanytype_224() { return static_cast<int32_t>(offsetof(OpCodes_t3193932334_StaticFields, ___Refanytype_224)); }
	inline OpCode_t3879854364  get_Refanytype_224() const { return ___Refanytype_224; }
	inline OpCode_t3879854364 * get_address_of_Refanytype_224() { return &___Refanytype_224; }
	inline void set_Refanytype_224(OpCode_t3879854364  value)
	{
		___Refanytype_224 = value;
	}

	inline static int32_t get_offset_of_Readonly_225() { return static_cast<int32_t>(offsetof(OpCodes_t3193932334_StaticFields, ___Readonly_225)); }
	inline OpCode_t3879854364  get_Readonly_225() const { return ___Readonly_225; }
	inline OpCode_t3879854364 * get_address_of_Readonly_225() { return &___Readonly_225; }
	inline void set_Readonly_225(OpCode_t3879854364  value)
	{
		___Readonly_225 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // OPCODES_T3193932334_H
#ifndef STACKBEHAVIOUR_T1515708369_H
#define STACKBEHAVIOUR_T1515708369_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.Emit.StackBehaviour
struct  StackBehaviour_t1515708369 
{
public:
	// System.Int32 System.Reflection.Emit.StackBehaviour::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(StackBehaviour_t1515708369, ___value___1)); }
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
#endif // STACKBEHAVIOUR_T1515708369_H
#ifndef AMBIGUOUSMATCHEXCEPTION_T2856243346_H
#define AMBIGUOUSMATCHEXCEPTION_T2856243346_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.AmbiguousMatchException
struct  AmbiguousMatchException_t2856243346  : public SystemException_t3127155225
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // AMBIGUOUSMATCHEXCEPTION_T2856243346_H
#ifndef ASSEMBLY_T1171681272_H
#define ASSEMBLY_T1171681272_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.Assembly
struct  Assembly_t1171681272  : public RuntimeObject
{
public:
	// System.IntPtr System.Reflection.Assembly::_mono_assembly
	IntPtr_t ____mono_assembly_0;
	// System.Reflection.Assembly/ResolveEventHolder System.Reflection.Assembly::resolve_event_holder
	ResolveEventHolder_t1910797677 * ___resolve_event_holder_1;
	// System.Security.Policy.Evidence System.Reflection.Assembly::_evidence
	Evidence_t185089762 * ____evidence_2;
	// System.Security.PermissionSet System.Reflection.Assembly::_minimum
	PermissionSet_t3334487276 * ____minimum_3;
	// System.Security.PermissionSet System.Reflection.Assembly::_optional
	PermissionSet_t3334487276 * ____optional_4;
	// System.Security.PermissionSet System.Reflection.Assembly::_refuse
	PermissionSet_t3334487276 * ____refuse_5;
	// System.Security.PermissionSet System.Reflection.Assembly::_granted
	PermissionSet_t3334487276 * ____granted_6;
	// System.Security.PermissionSet System.Reflection.Assembly::_denied
	PermissionSet_t3334487276 * ____denied_7;
	// System.Boolean System.Reflection.Assembly::fromByteArray
	bool ___fromByteArray_8;
	// System.String System.Reflection.Assembly::assemblyName
	String_t* ___assemblyName_9;

public:
	inline static int32_t get_offset_of__mono_assembly_0() { return static_cast<int32_t>(offsetof(Assembly_t1171681272, ____mono_assembly_0)); }
	inline IntPtr_t get__mono_assembly_0() const { return ____mono_assembly_0; }
	inline IntPtr_t* get_address_of__mono_assembly_0() { return &____mono_assembly_0; }
	inline void set__mono_assembly_0(IntPtr_t value)
	{
		____mono_assembly_0 = value;
	}

	inline static int32_t get_offset_of_resolve_event_holder_1() { return static_cast<int32_t>(offsetof(Assembly_t1171681272, ___resolve_event_holder_1)); }
	inline ResolveEventHolder_t1910797677 * get_resolve_event_holder_1() const { return ___resolve_event_holder_1; }
	inline ResolveEventHolder_t1910797677 ** get_address_of_resolve_event_holder_1() { return &___resolve_event_holder_1; }
	inline void set_resolve_event_holder_1(ResolveEventHolder_t1910797677 * value)
	{
		___resolve_event_holder_1 = value;
		Il2CppCodeGenWriteBarrier((&___resolve_event_holder_1), value);
	}

	inline static int32_t get_offset_of__evidence_2() { return static_cast<int32_t>(offsetof(Assembly_t1171681272, ____evidence_2)); }
	inline Evidence_t185089762 * get__evidence_2() const { return ____evidence_2; }
	inline Evidence_t185089762 ** get_address_of__evidence_2() { return &____evidence_2; }
	inline void set__evidence_2(Evidence_t185089762 * value)
	{
		____evidence_2 = value;
		Il2CppCodeGenWriteBarrier((&____evidence_2), value);
	}

	inline static int32_t get_offset_of__minimum_3() { return static_cast<int32_t>(offsetof(Assembly_t1171681272, ____minimum_3)); }
	inline PermissionSet_t3334487276 * get__minimum_3() const { return ____minimum_3; }
	inline PermissionSet_t3334487276 ** get_address_of__minimum_3() { return &____minimum_3; }
	inline void set__minimum_3(PermissionSet_t3334487276 * value)
	{
		____minimum_3 = value;
		Il2CppCodeGenWriteBarrier((&____minimum_3), value);
	}

	inline static int32_t get_offset_of__optional_4() { return static_cast<int32_t>(offsetof(Assembly_t1171681272, ____optional_4)); }
	inline PermissionSet_t3334487276 * get__optional_4() const { return ____optional_4; }
	inline PermissionSet_t3334487276 ** get_address_of__optional_4() { return &____optional_4; }
	inline void set__optional_4(PermissionSet_t3334487276 * value)
	{
		____optional_4 = value;
		Il2CppCodeGenWriteBarrier((&____optional_4), value);
	}

	inline static int32_t get_offset_of__refuse_5() { return static_cast<int32_t>(offsetof(Assembly_t1171681272, ____refuse_5)); }
	inline PermissionSet_t3334487276 * get__refuse_5() const { return ____refuse_5; }
	inline PermissionSet_t3334487276 ** get_address_of__refuse_5() { return &____refuse_5; }
	inline void set__refuse_5(PermissionSet_t3334487276 * value)
	{
		____refuse_5 = value;
		Il2CppCodeGenWriteBarrier((&____refuse_5), value);
	}

	inline static int32_t get_offset_of__granted_6() { return static_cast<int32_t>(offsetof(Assembly_t1171681272, ____granted_6)); }
	inline PermissionSet_t3334487276 * get__granted_6() const { return ____granted_6; }
	inline PermissionSet_t3334487276 ** get_address_of__granted_6() { return &____granted_6; }
	inline void set__granted_6(PermissionSet_t3334487276 * value)
	{
		____granted_6 = value;
		Il2CppCodeGenWriteBarrier((&____granted_6), value);
	}

	inline static int32_t get_offset_of__denied_7() { return static_cast<int32_t>(offsetof(Assembly_t1171681272, ____denied_7)); }
	inline PermissionSet_t3334487276 * get__denied_7() const { return ____denied_7; }
	inline PermissionSet_t3334487276 ** get_address_of__denied_7() { return &____denied_7; }
	inline void set__denied_7(PermissionSet_t3334487276 * value)
	{
		____denied_7 = value;
		Il2CppCodeGenWriteBarrier((&____denied_7), value);
	}

	inline static int32_t get_offset_of_fromByteArray_8() { return static_cast<int32_t>(offsetof(Assembly_t1171681272, ___fromByteArray_8)); }
	inline bool get_fromByteArray_8() const { return ___fromByteArray_8; }
	inline bool* get_address_of_fromByteArray_8() { return &___fromByteArray_8; }
	inline void set_fromByteArray_8(bool value)
	{
		___fromByteArray_8 = value;
	}

	inline static int32_t get_offset_of_assemblyName_9() { return static_cast<int32_t>(offsetof(Assembly_t1171681272, ___assemblyName_9)); }
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
#endif // ASSEMBLY_T1171681272_H
#ifndef ASSEMBLYNAMEFLAGS_T851079174_H
#define ASSEMBLYNAMEFLAGS_T851079174_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.AssemblyNameFlags
struct  AssemblyNameFlags_t851079174 
{
public:
	// System.Int32 System.Reflection.AssemblyNameFlags::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(AssemblyNameFlags_t851079174, ___value___1)); }
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
#endif // ASSEMBLYNAMEFLAGS_T851079174_H
#ifndef BINDINGFLAGS_T2168392345_H
#define BINDINGFLAGS_T2168392345_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.BindingFlags
struct  BindingFlags_t2168392345 
{
public:
	// System.Int32 System.Reflection.BindingFlags::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(BindingFlags_t2168392345, ___value___1)); }
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
#endif // BINDINGFLAGS_T2168392345_H
#ifndef CALLINGCONVENTIONS_T1967437177_H
#define CALLINGCONVENTIONS_T1967437177_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.CallingConventions
struct  CallingConventions_t1967437177 
{
public:
	// System.Int32 System.Reflection.CallingConventions::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(CallingConventions_t1967437177, ___value___1)); }
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
#endif // CALLINGCONVENTIONS_T1967437177_H
#ifndef CONSTRUCTORINFO_T4006886990_H
#define CONSTRUCTORINFO_T4006886990_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.ConstructorInfo
struct  ConstructorInfo_t4006886990  : public MethodBase_t2510322194
{
public:

public:
};

struct ConstructorInfo_t4006886990_StaticFields
{
public:
	// System.String System.Reflection.ConstructorInfo::ConstructorName
	String_t* ___ConstructorName_0;
	// System.String System.Reflection.ConstructorInfo::TypeConstructorName
	String_t* ___TypeConstructorName_1;

public:
	inline static int32_t get_offset_of_ConstructorName_0() { return static_cast<int32_t>(offsetof(ConstructorInfo_t4006886990_StaticFields, ___ConstructorName_0)); }
	inline String_t* get_ConstructorName_0() const { return ___ConstructorName_0; }
	inline String_t** get_address_of_ConstructorName_0() { return &___ConstructorName_0; }
	inline void set_ConstructorName_0(String_t* value)
	{
		___ConstructorName_0 = value;
		Il2CppCodeGenWriteBarrier((&___ConstructorName_0), value);
	}

	inline static int32_t get_offset_of_TypeConstructorName_1() { return static_cast<int32_t>(offsetof(ConstructorInfo_t4006886990_StaticFields, ___TypeConstructorName_1)); }
	inline String_t* get_TypeConstructorName_1() const { return ___TypeConstructorName_1; }
	inline String_t** get_address_of_TypeConstructorName_1() { return &___TypeConstructorName_1; }
	inline void set_TypeConstructorName_1(String_t* value)
	{
		___TypeConstructorName_1 = value;
		Il2CppCodeGenWriteBarrier((&___TypeConstructorName_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CONSTRUCTORINFO_T4006886990_H
#ifndef CUSTOMATTRIBUTENAMEDARGUMENT_T560629930_H
#define CUSTOMATTRIBUTENAMEDARGUMENT_T560629930_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.CustomAttributeNamedArgument
struct  CustomAttributeNamedArgument_t560629930 
{
public:
	// System.Reflection.CustomAttributeTypedArgument System.Reflection.CustomAttributeNamedArgument::typedArgument
	CustomAttributeTypedArgument_t4183764089  ___typedArgument_0;
	// System.Reflection.MemberInfo System.Reflection.CustomAttributeNamedArgument::memberInfo
	MemberInfo_t * ___memberInfo_1;

public:
	inline static int32_t get_offset_of_typedArgument_0() { return static_cast<int32_t>(offsetof(CustomAttributeNamedArgument_t560629930, ___typedArgument_0)); }
	inline CustomAttributeTypedArgument_t4183764089  get_typedArgument_0() const { return ___typedArgument_0; }
	inline CustomAttributeTypedArgument_t4183764089 * get_address_of_typedArgument_0() { return &___typedArgument_0; }
	inline void set_typedArgument_0(CustomAttributeTypedArgument_t4183764089  value)
	{
		___typedArgument_0 = value;
	}

	inline static int32_t get_offset_of_memberInfo_1() { return static_cast<int32_t>(offsetof(CustomAttributeNamedArgument_t560629930, ___memberInfo_1)); }
	inline MemberInfo_t * get_memberInfo_1() const { return ___memberInfo_1; }
	inline MemberInfo_t ** get_address_of_memberInfo_1() { return &___memberInfo_1; }
	inline void set_memberInfo_1(MemberInfo_t * value)
	{
		___memberInfo_1 = value;
		Il2CppCodeGenWriteBarrier((&___memberInfo_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Reflection.CustomAttributeNamedArgument
struct CustomAttributeNamedArgument_t560629930_marshaled_pinvoke
{
	CustomAttributeTypedArgument_t4183764089_marshaled_pinvoke ___typedArgument_0;
	MemberInfo_t * ___memberInfo_1;
};
// Native definition for COM marshalling of System.Reflection.CustomAttributeNamedArgument
struct CustomAttributeNamedArgument_t560629930_marshaled_com
{
	CustomAttributeTypedArgument_t4183764089_marshaled_com ___typedArgument_0;
	MemberInfo_t * ___memberInfo_1;
};
#endif // CUSTOMATTRIBUTENAMEDARGUMENT_T560629930_H
#ifndef EVENTATTRIBUTES_T3558573833_H
#define EVENTATTRIBUTES_T3558573833_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.EventAttributes
struct  EventAttributes_t3558573833 
{
public:
	// System.Int32 System.Reflection.EventAttributes::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(EventAttributes_t3558573833, ___value___1)); }
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
#endif // EVENTATTRIBUTES_T3558573833_H
#ifndef FIELDATTRIBUTES_T2195373685_H
#define FIELDATTRIBUTES_T2195373685_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.FieldAttributes
struct  FieldAttributes_t2195373685 
{
public:
	// System.Int32 System.Reflection.FieldAttributes::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(FieldAttributes_t2195373685, ___value___1)); }
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
#endif // FIELDATTRIBUTES_T2195373685_H
#ifndef PROPERTYATTRIBUTES_T875293808_H
#define PROPERTYATTRIBUTES_T875293808_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.PropertyAttributes
struct  PropertyAttributes_t875293808 
{
public:
	// System.Int32 System.Reflection.PropertyAttributes::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(PropertyAttributes_t875293808, ___value___1)); }
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
#endif // PROPERTYATTRIBUTES_T875293808_H
#ifndef METHODATTRIBUTES_T1250134318_H
#define METHODATTRIBUTES_T1250134318_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.MethodAttributes
struct  MethodAttributes_t1250134318 
{
public:
	// System.Int32 System.Reflection.MethodAttributes::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(MethodAttributes_t1250134318, ___value___1)); }
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
#endif // METHODATTRIBUTES_T1250134318_H
#ifndef METHODIMPLATTRIBUTES_T3316424197_H
#define METHODIMPLATTRIBUTES_T3316424197_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.MethodImplAttributes
struct  MethodImplAttributes_t3316424197 
{
public:
	// System.Int32 System.Reflection.MethodImplAttributes::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(MethodImplAttributes_t3316424197, ___value___1)); }
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
#endif // METHODIMPLATTRIBUTES_T3316424197_H
#ifndef METHODINFO_T_H
#define METHODINFO_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.MethodInfo
struct  MethodInfo_t  : public MethodBase_t2510322194
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // METHODINFO_T_H
#ifndef MEMBERTYPES_T982763627_H
#define MEMBERTYPES_T982763627_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.MemberTypes
struct  MemberTypes_t982763627 
{
public:
	// System.Int32 System.Reflection.MemberTypes::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(MemberTypes_t982763627, ___value___1)); }
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
#endif // MEMBERTYPES_T982763627_H
#ifndef MONOEVENT_T_H
#define MONOEVENT_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.MonoEvent
struct  MonoEvent_t  : public EventInfo_t
{
public:
	// System.IntPtr System.Reflection.MonoEvent::klass
	IntPtr_t ___klass_1;
	// System.IntPtr System.Reflection.MonoEvent::handle
	IntPtr_t ___handle_2;

public:
	inline static int32_t get_offset_of_klass_1() { return static_cast<int32_t>(offsetof(MonoEvent_t, ___klass_1)); }
	inline IntPtr_t get_klass_1() const { return ___klass_1; }
	inline IntPtr_t* get_address_of_klass_1() { return &___klass_1; }
	inline void set_klass_1(IntPtr_t value)
	{
		___klass_1 = value;
	}

	inline static int32_t get_offset_of_handle_2() { return static_cast<int32_t>(offsetof(MonoEvent_t, ___handle_2)); }
	inline IntPtr_t get_handle_2() const { return ___handle_2; }
	inline IntPtr_t* get_address_of_handle_2() { return &___handle_2; }
	inline void set_handle_2(IntPtr_t value)
	{
		___handle_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MONOEVENT_T_H
#ifndef PARAMETERATTRIBUTES_T1959180112_H
#define PARAMETERATTRIBUTES_T1959180112_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.ParameterAttributes
struct  ParameterAttributes_t1959180112 
{
public:
	// System.Int32 System.Reflection.ParameterAttributes::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(ParameterAttributes_t1959180112, ___value___1)); }
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
#endif // PARAMETERATTRIBUTES_T1959180112_H
#ifndef RUNTIMETYPEHANDLE_T2846422607_H
#define RUNTIMETYPEHANDLE_T2846422607_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.RuntimeTypeHandle
struct  RuntimeTypeHandle_t2846422607 
{
public:
	// System.IntPtr System.RuntimeTypeHandle::value
	IntPtr_t ___value_0;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(RuntimeTypeHandle_t2846422607, ___value_0)); }
	inline IntPtr_t get_value_0() const { return ___value_0; }
	inline IntPtr_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(IntPtr_t value)
	{
		___value_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNTIMETYPEHANDLE_T2846422607_H
#ifndef PINFO_T3558051654_H
#define PINFO_T3558051654_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.PInfo
struct  PInfo_t3558051654 
{
public:
	// System.Int32 System.Reflection.PInfo::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(PInfo_t3558051654, ___value___1)); }
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
#endif // PINFO_T3558051654_H
#ifndef MONOEVENTINFO_T3402446286_H
#define MONOEVENTINFO_T3402446286_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.MonoEventInfo
struct  MonoEventInfo_t3402446286 
{
public:
	// System.Type System.Reflection.MonoEventInfo::declaring_type
	Type_t * ___declaring_type_0;
	// System.Type System.Reflection.MonoEventInfo::reflected_type
	Type_t * ___reflected_type_1;
	// System.String System.Reflection.MonoEventInfo::name
	String_t* ___name_2;
	// System.Reflection.MethodInfo System.Reflection.MonoEventInfo::add_method
	MethodInfo_t * ___add_method_3;
	// System.Reflection.MethodInfo System.Reflection.MonoEventInfo::remove_method
	MethodInfo_t * ___remove_method_4;
	// System.Reflection.MethodInfo System.Reflection.MonoEventInfo::raise_method
	MethodInfo_t * ___raise_method_5;
	// System.Reflection.EventAttributes System.Reflection.MonoEventInfo::attrs
	int32_t ___attrs_6;
	// System.Reflection.MethodInfo[] System.Reflection.MonoEventInfo::other_methods
	MethodInfoU5BU5D_t1775217668* ___other_methods_7;

public:
	inline static int32_t get_offset_of_declaring_type_0() { return static_cast<int32_t>(offsetof(MonoEventInfo_t3402446286, ___declaring_type_0)); }
	inline Type_t * get_declaring_type_0() const { return ___declaring_type_0; }
	inline Type_t ** get_address_of_declaring_type_0() { return &___declaring_type_0; }
	inline void set_declaring_type_0(Type_t * value)
	{
		___declaring_type_0 = value;
		Il2CppCodeGenWriteBarrier((&___declaring_type_0), value);
	}

	inline static int32_t get_offset_of_reflected_type_1() { return static_cast<int32_t>(offsetof(MonoEventInfo_t3402446286, ___reflected_type_1)); }
	inline Type_t * get_reflected_type_1() const { return ___reflected_type_1; }
	inline Type_t ** get_address_of_reflected_type_1() { return &___reflected_type_1; }
	inline void set_reflected_type_1(Type_t * value)
	{
		___reflected_type_1 = value;
		Il2CppCodeGenWriteBarrier((&___reflected_type_1), value);
	}

	inline static int32_t get_offset_of_name_2() { return static_cast<int32_t>(offsetof(MonoEventInfo_t3402446286, ___name_2)); }
	inline String_t* get_name_2() const { return ___name_2; }
	inline String_t** get_address_of_name_2() { return &___name_2; }
	inline void set_name_2(String_t* value)
	{
		___name_2 = value;
		Il2CppCodeGenWriteBarrier((&___name_2), value);
	}

	inline static int32_t get_offset_of_add_method_3() { return static_cast<int32_t>(offsetof(MonoEventInfo_t3402446286, ___add_method_3)); }
	inline MethodInfo_t * get_add_method_3() const { return ___add_method_3; }
	inline MethodInfo_t ** get_address_of_add_method_3() { return &___add_method_3; }
	inline void set_add_method_3(MethodInfo_t * value)
	{
		___add_method_3 = value;
		Il2CppCodeGenWriteBarrier((&___add_method_3), value);
	}

	inline static int32_t get_offset_of_remove_method_4() { return static_cast<int32_t>(offsetof(MonoEventInfo_t3402446286, ___remove_method_4)); }
	inline MethodInfo_t * get_remove_method_4() const { return ___remove_method_4; }
	inline MethodInfo_t ** get_address_of_remove_method_4() { return &___remove_method_4; }
	inline void set_remove_method_4(MethodInfo_t * value)
	{
		___remove_method_4 = value;
		Il2CppCodeGenWriteBarrier((&___remove_method_4), value);
	}

	inline static int32_t get_offset_of_raise_method_5() { return static_cast<int32_t>(offsetof(MonoEventInfo_t3402446286, ___raise_method_5)); }
	inline MethodInfo_t * get_raise_method_5() const { return ___raise_method_5; }
	inline MethodInfo_t ** get_address_of_raise_method_5() { return &___raise_method_5; }
	inline void set_raise_method_5(MethodInfo_t * value)
	{
		___raise_method_5 = value;
		Il2CppCodeGenWriteBarrier((&___raise_method_5), value);
	}

	inline static int32_t get_offset_of_attrs_6() { return static_cast<int32_t>(offsetof(MonoEventInfo_t3402446286, ___attrs_6)); }
	inline int32_t get_attrs_6() const { return ___attrs_6; }
	inline int32_t* get_address_of_attrs_6() { return &___attrs_6; }
	inline void set_attrs_6(int32_t value)
	{
		___attrs_6 = value;
	}

	inline static int32_t get_offset_of_other_methods_7() { return static_cast<int32_t>(offsetof(MonoEventInfo_t3402446286, ___other_methods_7)); }
	inline MethodInfoU5BU5D_t1775217668* get_other_methods_7() const { return ___other_methods_7; }
	inline MethodInfoU5BU5D_t1775217668** get_address_of_other_methods_7() { return &___other_methods_7; }
	inline void set_other_methods_7(MethodInfoU5BU5D_t1775217668* value)
	{
		___other_methods_7 = value;
		Il2CppCodeGenWriteBarrier((&___other_methods_7), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Reflection.MonoEventInfo
struct MonoEventInfo_t3402446286_marshaled_pinvoke
{
	Type_t * ___declaring_type_0;
	Type_t * ___reflected_type_1;
	char* ___name_2;
	MethodInfo_t * ___add_method_3;
	MethodInfo_t * ___remove_method_4;
	MethodInfo_t * ___raise_method_5;
	int32_t ___attrs_6;
	MethodInfoU5BU5D_t1775217668* ___other_methods_7;
};
// Native definition for COM marshalling of System.Reflection.MonoEventInfo
struct MonoEventInfo_t3402446286_marshaled_com
{
	Type_t * ___declaring_type_0;
	Type_t * ___reflected_type_1;
	Il2CppChar* ___name_2;
	MethodInfo_t * ___add_method_3;
	MethodInfo_t * ___remove_method_4;
	MethodInfo_t * ___raise_method_5;
	int32_t ___attrs_6;
	MethodInfoU5BU5D_t1775217668* ___other_methods_7;
};
#endif // MONOEVENTINFO_T3402446286_H
#ifndef PARAMETERINFO_T4060886943_H
#define PARAMETERINFO_T4060886943_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.ParameterInfo
struct  ParameterInfo_t4060886943  : public RuntimeObject
{
public:
	// System.Type System.Reflection.ParameterInfo::ClassImpl
	Type_t * ___ClassImpl_0;
	// System.Object System.Reflection.ParameterInfo::DefaultValueImpl
	RuntimeObject * ___DefaultValueImpl_1;
	// System.Reflection.MemberInfo System.Reflection.ParameterInfo::MemberImpl
	MemberInfo_t * ___MemberImpl_2;
	// System.String System.Reflection.ParameterInfo::NameImpl
	String_t* ___NameImpl_3;
	// System.Int32 System.Reflection.ParameterInfo::PositionImpl
	int32_t ___PositionImpl_4;
	// System.Reflection.ParameterAttributes System.Reflection.ParameterInfo::AttrsImpl
	int32_t ___AttrsImpl_5;
	// System.Reflection.Emit.UnmanagedMarshal System.Reflection.ParameterInfo::marshalAs
	UnmanagedMarshal_t1636591883 * ___marshalAs_6;

public:
	inline static int32_t get_offset_of_ClassImpl_0() { return static_cast<int32_t>(offsetof(ParameterInfo_t4060886943, ___ClassImpl_0)); }
	inline Type_t * get_ClassImpl_0() const { return ___ClassImpl_0; }
	inline Type_t ** get_address_of_ClassImpl_0() { return &___ClassImpl_0; }
	inline void set_ClassImpl_0(Type_t * value)
	{
		___ClassImpl_0 = value;
		Il2CppCodeGenWriteBarrier((&___ClassImpl_0), value);
	}

	inline static int32_t get_offset_of_DefaultValueImpl_1() { return static_cast<int32_t>(offsetof(ParameterInfo_t4060886943, ___DefaultValueImpl_1)); }
	inline RuntimeObject * get_DefaultValueImpl_1() const { return ___DefaultValueImpl_1; }
	inline RuntimeObject ** get_address_of_DefaultValueImpl_1() { return &___DefaultValueImpl_1; }
	inline void set_DefaultValueImpl_1(RuntimeObject * value)
	{
		___DefaultValueImpl_1 = value;
		Il2CppCodeGenWriteBarrier((&___DefaultValueImpl_1), value);
	}

	inline static int32_t get_offset_of_MemberImpl_2() { return static_cast<int32_t>(offsetof(ParameterInfo_t4060886943, ___MemberImpl_2)); }
	inline MemberInfo_t * get_MemberImpl_2() const { return ___MemberImpl_2; }
	inline MemberInfo_t ** get_address_of_MemberImpl_2() { return &___MemberImpl_2; }
	inline void set_MemberImpl_2(MemberInfo_t * value)
	{
		___MemberImpl_2 = value;
		Il2CppCodeGenWriteBarrier((&___MemberImpl_2), value);
	}

	inline static int32_t get_offset_of_NameImpl_3() { return static_cast<int32_t>(offsetof(ParameterInfo_t4060886943, ___NameImpl_3)); }
	inline String_t* get_NameImpl_3() const { return ___NameImpl_3; }
	inline String_t** get_address_of_NameImpl_3() { return &___NameImpl_3; }
	inline void set_NameImpl_3(String_t* value)
	{
		___NameImpl_3 = value;
		Il2CppCodeGenWriteBarrier((&___NameImpl_3), value);
	}

	inline static int32_t get_offset_of_PositionImpl_4() { return static_cast<int32_t>(offsetof(ParameterInfo_t4060886943, ___PositionImpl_4)); }
	inline int32_t get_PositionImpl_4() const { return ___PositionImpl_4; }
	inline int32_t* get_address_of_PositionImpl_4() { return &___PositionImpl_4; }
	inline void set_PositionImpl_4(int32_t value)
	{
		___PositionImpl_4 = value;
	}

	inline static int32_t get_offset_of_AttrsImpl_5() { return static_cast<int32_t>(offsetof(ParameterInfo_t4060886943, ___AttrsImpl_5)); }
	inline int32_t get_AttrsImpl_5() const { return ___AttrsImpl_5; }
	inline int32_t* get_address_of_AttrsImpl_5() { return &___AttrsImpl_5; }
	inline void set_AttrsImpl_5(int32_t value)
	{
		___AttrsImpl_5 = value;
	}

	inline static int32_t get_offset_of_marshalAs_6() { return static_cast<int32_t>(offsetof(ParameterInfo_t4060886943, ___marshalAs_6)); }
	inline UnmanagedMarshal_t1636591883 * get_marshalAs_6() const { return ___marshalAs_6; }
	inline UnmanagedMarshal_t1636591883 ** get_address_of_marshalAs_6() { return &___marshalAs_6; }
	inline void set_marshalAs_6(UnmanagedMarshal_t1636591883 * value)
	{
		___marshalAs_6 = value;
		Il2CppCodeGenWriteBarrier((&___marshalAs_6), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PARAMETERINFO_T4060886943_H
#ifndef PARAMETERBUILDER_T990320222_H
#define PARAMETERBUILDER_T990320222_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.Emit.ParameterBuilder
struct  ParameterBuilder_t990320222  : public RuntimeObject
{
public:
	// System.String System.Reflection.Emit.ParameterBuilder::name
	String_t* ___name_0;
	// System.Reflection.ParameterAttributes System.Reflection.Emit.ParameterBuilder::attrs
	int32_t ___attrs_1;
	// System.Int32 System.Reflection.Emit.ParameterBuilder::position
	int32_t ___position_2;

public:
	inline static int32_t get_offset_of_name_0() { return static_cast<int32_t>(offsetof(ParameterBuilder_t990320222, ___name_0)); }
	inline String_t* get_name_0() const { return ___name_0; }
	inline String_t** get_address_of_name_0() { return &___name_0; }
	inline void set_name_0(String_t* value)
	{
		___name_0 = value;
		Il2CppCodeGenWriteBarrier((&___name_0), value);
	}

	inline static int32_t get_offset_of_attrs_1() { return static_cast<int32_t>(offsetof(ParameterBuilder_t990320222, ___attrs_1)); }
	inline int32_t get_attrs_1() const { return ___attrs_1; }
	inline int32_t* get_address_of_attrs_1() { return &___attrs_1; }
	inline void set_attrs_1(int32_t value)
	{
		___attrs_1 = value;
	}

	inline static int32_t get_offset_of_position_2() { return static_cast<int32_t>(offsetof(ParameterBuilder_t990320222, ___position_2)); }
	inline int32_t get_position_2() const { return ___position_2; }
	inline int32_t* get_address_of_position_2() { return &___position_2; }
	inline void set_position_2(int32_t value)
	{
		___position_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PARAMETERBUILDER_T990320222_H
#ifndef MULTICASTDELEGATE_T3535027515_H
#define MULTICASTDELEGATE_T3535027515_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.MulticastDelegate
struct  MulticastDelegate_t3535027515  : public Delegate_t1264583404
{
public:
	// System.MulticastDelegate System.MulticastDelegate::prev
	MulticastDelegate_t3535027515 * ___prev_9;
	// System.MulticastDelegate System.MulticastDelegate::kpm_next
	MulticastDelegate_t3535027515 * ___kpm_next_10;

public:
	inline static int32_t get_offset_of_prev_9() { return static_cast<int32_t>(offsetof(MulticastDelegate_t3535027515, ___prev_9)); }
	inline MulticastDelegate_t3535027515 * get_prev_9() const { return ___prev_9; }
	inline MulticastDelegate_t3535027515 ** get_address_of_prev_9() { return &___prev_9; }
	inline void set_prev_9(MulticastDelegate_t3535027515 * value)
	{
		___prev_9 = value;
		Il2CppCodeGenWriteBarrier((&___prev_9), value);
	}

	inline static int32_t get_offset_of_kpm_next_10() { return static_cast<int32_t>(offsetof(MulticastDelegate_t3535027515, ___kpm_next_10)); }
	inline MulticastDelegate_t3535027515 * get_kpm_next_10() const { return ___kpm_next_10; }
	inline MulticastDelegate_t3535027515 ** get_address_of_kpm_next_10() { return &___kpm_next_10; }
	inline void set_kpm_next_10(MulticastDelegate_t3535027515 * value)
	{
		___kpm_next_10 = value;
		Il2CppCodeGenWriteBarrier((&___kpm_next_10), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MULTICASTDELEGATE_T3535027515_H
#ifndef UNMANAGEDMARSHAL_T1636591883_H
#define UNMANAGEDMARSHAL_T1636591883_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.Emit.UnmanagedMarshal
struct  UnmanagedMarshal_t1636591883  : public RuntimeObject
{
public:
	// System.Int32 System.Reflection.Emit.UnmanagedMarshal::count
	int32_t ___count_0;
	// System.Runtime.InteropServices.UnmanagedType System.Reflection.Emit.UnmanagedMarshal::t
	int32_t ___t_1;
	// System.Runtime.InteropServices.UnmanagedType System.Reflection.Emit.UnmanagedMarshal::tbase
	int32_t ___tbase_2;
	// System.String System.Reflection.Emit.UnmanagedMarshal::guid
	String_t* ___guid_3;
	// System.String System.Reflection.Emit.UnmanagedMarshal::mcookie
	String_t* ___mcookie_4;
	// System.String System.Reflection.Emit.UnmanagedMarshal::marshaltype
	String_t* ___marshaltype_5;
	// System.Type System.Reflection.Emit.UnmanagedMarshal::marshaltyperef
	Type_t * ___marshaltyperef_6;
	// System.Int32 System.Reflection.Emit.UnmanagedMarshal::param_num
	int32_t ___param_num_7;
	// System.Boolean System.Reflection.Emit.UnmanagedMarshal::has_size
	bool ___has_size_8;

public:
	inline static int32_t get_offset_of_count_0() { return static_cast<int32_t>(offsetof(UnmanagedMarshal_t1636591883, ___count_0)); }
	inline int32_t get_count_0() const { return ___count_0; }
	inline int32_t* get_address_of_count_0() { return &___count_0; }
	inline void set_count_0(int32_t value)
	{
		___count_0 = value;
	}

	inline static int32_t get_offset_of_t_1() { return static_cast<int32_t>(offsetof(UnmanagedMarshal_t1636591883, ___t_1)); }
	inline int32_t get_t_1() const { return ___t_1; }
	inline int32_t* get_address_of_t_1() { return &___t_1; }
	inline void set_t_1(int32_t value)
	{
		___t_1 = value;
	}

	inline static int32_t get_offset_of_tbase_2() { return static_cast<int32_t>(offsetof(UnmanagedMarshal_t1636591883, ___tbase_2)); }
	inline int32_t get_tbase_2() const { return ___tbase_2; }
	inline int32_t* get_address_of_tbase_2() { return &___tbase_2; }
	inline void set_tbase_2(int32_t value)
	{
		___tbase_2 = value;
	}

	inline static int32_t get_offset_of_guid_3() { return static_cast<int32_t>(offsetof(UnmanagedMarshal_t1636591883, ___guid_3)); }
	inline String_t* get_guid_3() const { return ___guid_3; }
	inline String_t** get_address_of_guid_3() { return &___guid_3; }
	inline void set_guid_3(String_t* value)
	{
		___guid_3 = value;
		Il2CppCodeGenWriteBarrier((&___guid_3), value);
	}

	inline static int32_t get_offset_of_mcookie_4() { return static_cast<int32_t>(offsetof(UnmanagedMarshal_t1636591883, ___mcookie_4)); }
	inline String_t* get_mcookie_4() const { return ___mcookie_4; }
	inline String_t** get_address_of_mcookie_4() { return &___mcookie_4; }
	inline void set_mcookie_4(String_t* value)
	{
		___mcookie_4 = value;
		Il2CppCodeGenWriteBarrier((&___mcookie_4), value);
	}

	inline static int32_t get_offset_of_marshaltype_5() { return static_cast<int32_t>(offsetof(UnmanagedMarshal_t1636591883, ___marshaltype_5)); }
	inline String_t* get_marshaltype_5() const { return ___marshaltype_5; }
	inline String_t** get_address_of_marshaltype_5() { return &___marshaltype_5; }
	inline void set_marshaltype_5(String_t* value)
	{
		___marshaltype_5 = value;
		Il2CppCodeGenWriteBarrier((&___marshaltype_5), value);
	}

	inline static int32_t get_offset_of_marshaltyperef_6() { return static_cast<int32_t>(offsetof(UnmanagedMarshal_t1636591883, ___marshaltyperef_6)); }
	inline Type_t * get_marshaltyperef_6() const { return ___marshaltyperef_6; }
	inline Type_t ** get_address_of_marshaltyperef_6() { return &___marshaltyperef_6; }
	inline void set_marshaltyperef_6(Type_t * value)
	{
		___marshaltyperef_6 = value;
		Il2CppCodeGenWriteBarrier((&___marshaltyperef_6), value);
	}

	inline static int32_t get_offset_of_param_num_7() { return static_cast<int32_t>(offsetof(UnmanagedMarshal_t1636591883, ___param_num_7)); }
	inline int32_t get_param_num_7() const { return ___param_num_7; }
	inline int32_t* get_address_of_param_num_7() { return &___param_num_7; }
	inline void set_param_num_7(int32_t value)
	{
		___param_num_7 = value;
	}

	inline static int32_t get_offset_of_has_size_8() { return static_cast<int32_t>(offsetof(UnmanagedMarshal_t1636591883, ___has_size_8)); }
	inline bool get_has_size_8() const { return ___has_size_8; }
	inline bool* get_address_of_has_size_8() { return &___has_size_8; }
	inline void set_has_size_8(bool value)
	{
		___has_size_8 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNMANAGEDMARSHAL_T1636591883_H
#ifndef ASSEMBLYNAME_T4166692419_H
#define ASSEMBLYNAME_T4166692419_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.AssemblyName
struct  AssemblyName_t4166692419  : public RuntimeObject
{
public:
	// System.String System.Reflection.AssemblyName::name
	String_t* ___name_0;
	// System.String System.Reflection.AssemblyName::codebase
	String_t* ___codebase_1;
	// System.Int32 System.Reflection.AssemblyName::major
	int32_t ___major_2;
	// System.Int32 System.Reflection.AssemblyName::minor
	int32_t ___minor_3;
	// System.Int32 System.Reflection.AssemblyName::build
	int32_t ___build_4;
	// System.Int32 System.Reflection.AssemblyName::revision
	int32_t ___revision_5;
	// System.Globalization.CultureInfo System.Reflection.AssemblyName::cultureinfo
	CultureInfo_t2168508297 * ___cultureinfo_6;
	// System.Reflection.AssemblyNameFlags System.Reflection.AssemblyName::flags
	int32_t ___flags_7;
	// System.Configuration.Assemblies.AssemblyHashAlgorithm System.Reflection.AssemblyName::hashalg
	int32_t ___hashalg_8;
	// System.Reflection.StrongNameKeyPair System.Reflection.AssemblyName::keypair
	StrongNameKeyPair_t1633660243 * ___keypair_9;
	// System.Byte[] System.Reflection.AssemblyName::publicKey
	ByteU5BU5D_t998316899* ___publicKey_10;
	// System.Byte[] System.Reflection.AssemblyName::keyToken
	ByteU5BU5D_t998316899* ___keyToken_11;
	// System.Configuration.Assemblies.AssemblyVersionCompatibility System.Reflection.AssemblyName::versioncompat
	int32_t ___versioncompat_12;
	// System.Version System.Reflection.AssemblyName::version
	Version_t1720425036 * ___version_13;
	// System.Reflection.ProcessorArchitecture System.Reflection.AssemblyName::processor_architecture
	int32_t ___processor_architecture_14;

public:
	inline static int32_t get_offset_of_name_0() { return static_cast<int32_t>(offsetof(AssemblyName_t4166692419, ___name_0)); }
	inline String_t* get_name_0() const { return ___name_0; }
	inline String_t** get_address_of_name_0() { return &___name_0; }
	inline void set_name_0(String_t* value)
	{
		___name_0 = value;
		Il2CppCodeGenWriteBarrier((&___name_0), value);
	}

	inline static int32_t get_offset_of_codebase_1() { return static_cast<int32_t>(offsetof(AssemblyName_t4166692419, ___codebase_1)); }
	inline String_t* get_codebase_1() const { return ___codebase_1; }
	inline String_t** get_address_of_codebase_1() { return &___codebase_1; }
	inline void set_codebase_1(String_t* value)
	{
		___codebase_1 = value;
		Il2CppCodeGenWriteBarrier((&___codebase_1), value);
	}

	inline static int32_t get_offset_of_major_2() { return static_cast<int32_t>(offsetof(AssemblyName_t4166692419, ___major_2)); }
	inline int32_t get_major_2() const { return ___major_2; }
	inline int32_t* get_address_of_major_2() { return &___major_2; }
	inline void set_major_2(int32_t value)
	{
		___major_2 = value;
	}

	inline static int32_t get_offset_of_minor_3() { return static_cast<int32_t>(offsetof(AssemblyName_t4166692419, ___minor_3)); }
	inline int32_t get_minor_3() const { return ___minor_3; }
	inline int32_t* get_address_of_minor_3() { return &___minor_3; }
	inline void set_minor_3(int32_t value)
	{
		___minor_3 = value;
	}

	inline static int32_t get_offset_of_build_4() { return static_cast<int32_t>(offsetof(AssemblyName_t4166692419, ___build_4)); }
	inline int32_t get_build_4() const { return ___build_4; }
	inline int32_t* get_address_of_build_4() { return &___build_4; }
	inline void set_build_4(int32_t value)
	{
		___build_4 = value;
	}

	inline static int32_t get_offset_of_revision_5() { return static_cast<int32_t>(offsetof(AssemblyName_t4166692419, ___revision_5)); }
	inline int32_t get_revision_5() const { return ___revision_5; }
	inline int32_t* get_address_of_revision_5() { return &___revision_5; }
	inline void set_revision_5(int32_t value)
	{
		___revision_5 = value;
	}

	inline static int32_t get_offset_of_cultureinfo_6() { return static_cast<int32_t>(offsetof(AssemblyName_t4166692419, ___cultureinfo_6)); }
	inline CultureInfo_t2168508297 * get_cultureinfo_6() const { return ___cultureinfo_6; }
	inline CultureInfo_t2168508297 ** get_address_of_cultureinfo_6() { return &___cultureinfo_6; }
	inline void set_cultureinfo_6(CultureInfo_t2168508297 * value)
	{
		___cultureinfo_6 = value;
		Il2CppCodeGenWriteBarrier((&___cultureinfo_6), value);
	}

	inline static int32_t get_offset_of_flags_7() { return static_cast<int32_t>(offsetof(AssemblyName_t4166692419, ___flags_7)); }
	inline int32_t get_flags_7() const { return ___flags_7; }
	inline int32_t* get_address_of_flags_7() { return &___flags_7; }
	inline void set_flags_7(int32_t value)
	{
		___flags_7 = value;
	}

	inline static int32_t get_offset_of_hashalg_8() { return static_cast<int32_t>(offsetof(AssemblyName_t4166692419, ___hashalg_8)); }
	inline int32_t get_hashalg_8() const { return ___hashalg_8; }
	inline int32_t* get_address_of_hashalg_8() { return &___hashalg_8; }
	inline void set_hashalg_8(int32_t value)
	{
		___hashalg_8 = value;
	}

	inline static int32_t get_offset_of_keypair_9() { return static_cast<int32_t>(offsetof(AssemblyName_t4166692419, ___keypair_9)); }
	inline StrongNameKeyPair_t1633660243 * get_keypair_9() const { return ___keypair_9; }
	inline StrongNameKeyPair_t1633660243 ** get_address_of_keypair_9() { return &___keypair_9; }
	inline void set_keypair_9(StrongNameKeyPair_t1633660243 * value)
	{
		___keypair_9 = value;
		Il2CppCodeGenWriteBarrier((&___keypair_9), value);
	}

	inline static int32_t get_offset_of_publicKey_10() { return static_cast<int32_t>(offsetof(AssemblyName_t4166692419, ___publicKey_10)); }
	inline ByteU5BU5D_t998316899* get_publicKey_10() const { return ___publicKey_10; }
	inline ByteU5BU5D_t998316899** get_address_of_publicKey_10() { return &___publicKey_10; }
	inline void set_publicKey_10(ByteU5BU5D_t998316899* value)
	{
		___publicKey_10 = value;
		Il2CppCodeGenWriteBarrier((&___publicKey_10), value);
	}

	inline static int32_t get_offset_of_keyToken_11() { return static_cast<int32_t>(offsetof(AssemblyName_t4166692419, ___keyToken_11)); }
	inline ByteU5BU5D_t998316899* get_keyToken_11() const { return ___keyToken_11; }
	inline ByteU5BU5D_t998316899** get_address_of_keyToken_11() { return &___keyToken_11; }
	inline void set_keyToken_11(ByteU5BU5D_t998316899* value)
	{
		___keyToken_11 = value;
		Il2CppCodeGenWriteBarrier((&___keyToken_11), value);
	}

	inline static int32_t get_offset_of_versioncompat_12() { return static_cast<int32_t>(offsetof(AssemblyName_t4166692419, ___versioncompat_12)); }
	inline int32_t get_versioncompat_12() const { return ___versioncompat_12; }
	inline int32_t* get_address_of_versioncompat_12() { return &___versioncompat_12; }
	inline void set_versioncompat_12(int32_t value)
	{
		___versioncompat_12 = value;
	}

	inline static int32_t get_offset_of_version_13() { return static_cast<int32_t>(offsetof(AssemblyName_t4166692419, ___version_13)); }
	inline Version_t1720425036 * get_version_13() const { return ___version_13; }
	inline Version_t1720425036 ** get_address_of_version_13() { return &___version_13; }
	inline void set_version_13(Version_t1720425036 * value)
	{
		___version_13 = value;
		Il2CppCodeGenWriteBarrier((&___version_13), value);
	}

	inline static int32_t get_offset_of_processor_architecture_14() { return static_cast<int32_t>(offsetof(AssemblyName_t4166692419, ___processor_architecture_14)); }
	inline int32_t get_processor_architecture_14() const { return ___processor_architecture_14; }
	inline int32_t* get_address_of_processor_architecture_14() { return &___processor_architecture_14; }
	inline void set_processor_architecture_14(int32_t value)
	{
		___processor_architecture_14 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ASSEMBLYNAME_T4166692419_H
#ifndef MONOPROPERTYINFO_T4194409498_H
#define MONOPROPERTYINFO_T4194409498_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.MonoPropertyInfo
struct  MonoPropertyInfo_t4194409498 
{
public:
	// System.Type System.Reflection.MonoPropertyInfo::parent
	Type_t * ___parent_0;
	// System.String System.Reflection.MonoPropertyInfo::name
	String_t* ___name_1;
	// System.Reflection.MethodInfo System.Reflection.MonoPropertyInfo::get_method
	MethodInfo_t * ___get_method_2;
	// System.Reflection.MethodInfo System.Reflection.MonoPropertyInfo::set_method
	MethodInfo_t * ___set_method_3;
	// System.Reflection.PropertyAttributes System.Reflection.MonoPropertyInfo::attrs
	int32_t ___attrs_4;

public:
	inline static int32_t get_offset_of_parent_0() { return static_cast<int32_t>(offsetof(MonoPropertyInfo_t4194409498, ___parent_0)); }
	inline Type_t * get_parent_0() const { return ___parent_0; }
	inline Type_t ** get_address_of_parent_0() { return &___parent_0; }
	inline void set_parent_0(Type_t * value)
	{
		___parent_0 = value;
		Il2CppCodeGenWriteBarrier((&___parent_0), value);
	}

	inline static int32_t get_offset_of_name_1() { return static_cast<int32_t>(offsetof(MonoPropertyInfo_t4194409498, ___name_1)); }
	inline String_t* get_name_1() const { return ___name_1; }
	inline String_t** get_address_of_name_1() { return &___name_1; }
	inline void set_name_1(String_t* value)
	{
		___name_1 = value;
		Il2CppCodeGenWriteBarrier((&___name_1), value);
	}

	inline static int32_t get_offset_of_get_method_2() { return static_cast<int32_t>(offsetof(MonoPropertyInfo_t4194409498, ___get_method_2)); }
	inline MethodInfo_t * get_get_method_2() const { return ___get_method_2; }
	inline MethodInfo_t ** get_address_of_get_method_2() { return &___get_method_2; }
	inline void set_get_method_2(MethodInfo_t * value)
	{
		___get_method_2 = value;
		Il2CppCodeGenWriteBarrier((&___get_method_2), value);
	}

	inline static int32_t get_offset_of_set_method_3() { return static_cast<int32_t>(offsetof(MonoPropertyInfo_t4194409498, ___set_method_3)); }
	inline MethodInfo_t * get_set_method_3() const { return ___set_method_3; }
	inline MethodInfo_t ** get_address_of_set_method_3() { return &___set_method_3; }
	inline void set_set_method_3(MethodInfo_t * value)
	{
		___set_method_3 = value;
		Il2CppCodeGenWriteBarrier((&___set_method_3), value);
	}

	inline static int32_t get_offset_of_attrs_4() { return static_cast<int32_t>(offsetof(MonoPropertyInfo_t4194409498, ___attrs_4)); }
	inline int32_t get_attrs_4() const { return ___attrs_4; }
	inline int32_t* get_address_of_attrs_4() { return &___attrs_4; }
	inline void set_attrs_4(int32_t value)
	{
		___attrs_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Reflection.MonoPropertyInfo
struct MonoPropertyInfo_t4194409498_marshaled_pinvoke
{
	Type_t * ___parent_0;
	char* ___name_1;
	MethodInfo_t * ___get_method_2;
	MethodInfo_t * ___set_method_3;
	int32_t ___attrs_4;
};
// Native definition for COM marshalling of System.Reflection.MonoPropertyInfo
struct MonoPropertyInfo_t4194409498_marshaled_com
{
	Type_t * ___parent_0;
	Il2CppChar* ___name_1;
	MethodInfo_t * ___get_method_2;
	MethodInfo_t * ___set_method_3;
	int32_t ___attrs_4;
};
#endif // MONOPROPERTYINFO_T4194409498_H
#ifndef MONOCMETHOD_T305854846_H
#define MONOCMETHOD_T305854846_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.MonoCMethod
struct  MonoCMethod_t305854846  : public ConstructorInfo_t4006886990
{
public:
	// System.IntPtr System.Reflection.MonoCMethod::mhandle
	IntPtr_t ___mhandle_2;
	// System.String System.Reflection.MonoCMethod::name
	String_t* ___name_3;
	// System.Type System.Reflection.MonoCMethod::reftype
	Type_t * ___reftype_4;

public:
	inline static int32_t get_offset_of_mhandle_2() { return static_cast<int32_t>(offsetof(MonoCMethod_t305854846, ___mhandle_2)); }
	inline IntPtr_t get_mhandle_2() const { return ___mhandle_2; }
	inline IntPtr_t* get_address_of_mhandle_2() { return &___mhandle_2; }
	inline void set_mhandle_2(IntPtr_t value)
	{
		___mhandle_2 = value;
	}

	inline static int32_t get_offset_of_name_3() { return static_cast<int32_t>(offsetof(MonoCMethod_t305854846, ___name_3)); }
	inline String_t* get_name_3() const { return ___name_3; }
	inline String_t** get_address_of_name_3() { return &___name_3; }
	inline void set_name_3(String_t* value)
	{
		___name_3 = value;
		Il2CppCodeGenWriteBarrier((&___name_3), value);
	}

	inline static int32_t get_offset_of_reftype_4() { return static_cast<int32_t>(offsetof(MonoCMethod_t305854846, ___reftype_4)); }
	inline Type_t * get_reftype_4() const { return ___reftype_4; }
	inline Type_t ** get_address_of_reftype_4() { return &___reftype_4; }
	inline void set_reftype_4(Type_t * value)
	{
		___reftype_4 = value;
		Il2CppCodeGenWriteBarrier((&___reftype_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MONOCMETHOD_T305854846_H
#ifndef MODULE_T1344277516_H
#define MODULE_T1344277516_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.Module
struct  Module_t1344277516  : public RuntimeObject
{
public:
	// System.IntPtr System.Reflection.Module::_impl
	IntPtr_t ____impl_3;
	// System.Reflection.Assembly System.Reflection.Module::assembly
	Assembly_t1171681272 * ___assembly_4;
	// System.String System.Reflection.Module::fqname
	String_t* ___fqname_5;
	// System.String System.Reflection.Module::name
	String_t* ___name_6;
	// System.String System.Reflection.Module::scopename
	String_t* ___scopename_7;
	// System.Boolean System.Reflection.Module::is_resource
	bool ___is_resource_8;
	// System.Int32 System.Reflection.Module::token
	int32_t ___token_9;

public:
	inline static int32_t get_offset_of__impl_3() { return static_cast<int32_t>(offsetof(Module_t1344277516, ____impl_3)); }
	inline IntPtr_t get__impl_3() const { return ____impl_3; }
	inline IntPtr_t* get_address_of__impl_3() { return &____impl_3; }
	inline void set__impl_3(IntPtr_t value)
	{
		____impl_3 = value;
	}

	inline static int32_t get_offset_of_assembly_4() { return static_cast<int32_t>(offsetof(Module_t1344277516, ___assembly_4)); }
	inline Assembly_t1171681272 * get_assembly_4() const { return ___assembly_4; }
	inline Assembly_t1171681272 ** get_address_of_assembly_4() { return &___assembly_4; }
	inline void set_assembly_4(Assembly_t1171681272 * value)
	{
		___assembly_4 = value;
		Il2CppCodeGenWriteBarrier((&___assembly_4), value);
	}

	inline static int32_t get_offset_of_fqname_5() { return static_cast<int32_t>(offsetof(Module_t1344277516, ___fqname_5)); }
	inline String_t* get_fqname_5() const { return ___fqname_5; }
	inline String_t** get_address_of_fqname_5() { return &___fqname_5; }
	inline void set_fqname_5(String_t* value)
	{
		___fqname_5 = value;
		Il2CppCodeGenWriteBarrier((&___fqname_5), value);
	}

	inline static int32_t get_offset_of_name_6() { return static_cast<int32_t>(offsetof(Module_t1344277516, ___name_6)); }
	inline String_t* get_name_6() const { return ___name_6; }
	inline String_t** get_address_of_name_6() { return &___name_6; }
	inline void set_name_6(String_t* value)
	{
		___name_6 = value;
		Il2CppCodeGenWriteBarrier((&___name_6), value);
	}

	inline static int32_t get_offset_of_scopename_7() { return static_cast<int32_t>(offsetof(Module_t1344277516, ___scopename_7)); }
	inline String_t* get_scopename_7() const { return ___scopename_7; }
	inline String_t** get_address_of_scopename_7() { return &___scopename_7; }
	inline void set_scopename_7(String_t* value)
	{
		___scopename_7 = value;
		Il2CppCodeGenWriteBarrier((&___scopename_7), value);
	}

	inline static int32_t get_offset_of_is_resource_8() { return static_cast<int32_t>(offsetof(Module_t1344277516, ___is_resource_8)); }
	inline bool get_is_resource_8() const { return ___is_resource_8; }
	inline bool* get_address_of_is_resource_8() { return &___is_resource_8; }
	inline void set_is_resource_8(bool value)
	{
		___is_resource_8 = value;
	}

	inline static int32_t get_offset_of_token_9() { return static_cast<int32_t>(offsetof(Module_t1344277516, ___token_9)); }
	inline int32_t get_token_9() const { return ___token_9; }
	inline int32_t* get_address_of_token_9() { return &___token_9; }
	inline void set_token_9(int32_t value)
	{
		___token_9 = value;
	}
};

struct Module_t1344277516_StaticFields
{
public:
	// System.Reflection.TypeFilter System.Reflection.Module::FilterTypeName
	TypeFilter_t3787624935 * ___FilterTypeName_1;
	// System.Reflection.TypeFilter System.Reflection.Module::FilterTypeNameIgnoreCase
	TypeFilter_t3787624935 * ___FilterTypeNameIgnoreCase_2;

public:
	inline static int32_t get_offset_of_FilterTypeName_1() { return static_cast<int32_t>(offsetof(Module_t1344277516_StaticFields, ___FilterTypeName_1)); }
	inline TypeFilter_t3787624935 * get_FilterTypeName_1() const { return ___FilterTypeName_1; }
	inline TypeFilter_t3787624935 ** get_address_of_FilterTypeName_1() { return &___FilterTypeName_1; }
	inline void set_FilterTypeName_1(TypeFilter_t3787624935 * value)
	{
		___FilterTypeName_1 = value;
		Il2CppCodeGenWriteBarrier((&___FilterTypeName_1), value);
	}

	inline static int32_t get_offset_of_FilterTypeNameIgnoreCase_2() { return static_cast<int32_t>(offsetof(Module_t1344277516_StaticFields, ___FilterTypeNameIgnoreCase_2)); }
	inline TypeFilter_t3787624935 * get_FilterTypeNameIgnoreCase_2() const { return ___FilterTypeNameIgnoreCase_2; }
	inline TypeFilter_t3787624935 ** get_address_of_FilterTypeNameIgnoreCase_2() { return &___FilterTypeNameIgnoreCase_2; }
	inline void set_FilterTypeNameIgnoreCase_2(TypeFilter_t3787624935 * value)
	{
		___FilterTypeNameIgnoreCase_2 = value;
		Il2CppCodeGenWriteBarrier((&___FilterTypeNameIgnoreCase_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MODULE_T1344277516_H
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
	RuntimeTypeHandle_t2846422607  ____impl_1;

public:
	inline static int32_t get_offset_of__impl_1() { return static_cast<int32_t>(offsetof(Type_t, ____impl_1)); }
	inline RuntimeTypeHandle_t2846422607  get__impl_1() const { return ____impl_1; }
	inline RuntimeTypeHandle_t2846422607 * get_address_of__impl_1() { return &____impl_1; }
	inline void set__impl_1(RuntimeTypeHandle_t2846422607  value)
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
	TypeU5BU5D_t2352909122* ___EmptyTypes_3;
	// System.Reflection.MemberFilter System.Type::FilterAttribute
	MemberFilter_t3448069498 * ___FilterAttribute_4;
	// System.Reflection.MemberFilter System.Type::FilterName
	MemberFilter_t3448069498 * ___FilterName_5;
	// System.Reflection.MemberFilter System.Type::FilterNameIgnoreCase
	MemberFilter_t3448069498 * ___FilterNameIgnoreCase_6;
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
	inline TypeU5BU5D_t2352909122* get_EmptyTypes_3() const { return ___EmptyTypes_3; }
	inline TypeU5BU5D_t2352909122** get_address_of_EmptyTypes_3() { return &___EmptyTypes_3; }
	inline void set_EmptyTypes_3(TypeU5BU5D_t2352909122* value)
	{
		___EmptyTypes_3 = value;
		Il2CppCodeGenWriteBarrier((&___EmptyTypes_3), value);
	}

	inline static int32_t get_offset_of_FilterAttribute_4() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterAttribute_4)); }
	inline MemberFilter_t3448069498 * get_FilterAttribute_4() const { return ___FilterAttribute_4; }
	inline MemberFilter_t3448069498 ** get_address_of_FilterAttribute_4() { return &___FilterAttribute_4; }
	inline void set_FilterAttribute_4(MemberFilter_t3448069498 * value)
	{
		___FilterAttribute_4 = value;
		Il2CppCodeGenWriteBarrier((&___FilterAttribute_4), value);
	}

	inline static int32_t get_offset_of_FilterName_5() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterName_5)); }
	inline MemberFilter_t3448069498 * get_FilterName_5() const { return ___FilterName_5; }
	inline MemberFilter_t3448069498 ** get_address_of_FilterName_5() { return &___FilterName_5; }
	inline void set_FilterName_5(MemberFilter_t3448069498 * value)
	{
		___FilterName_5 = value;
		Il2CppCodeGenWriteBarrier((&___FilterName_5), value);
	}

	inline static int32_t get_offset_of_FilterNameIgnoreCase_6() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterNameIgnoreCase_6)); }
	inline MemberFilter_t3448069498 * get_FilterNameIgnoreCase_6() const { return ___FilterNameIgnoreCase_6; }
	inline MemberFilter_t3448069498 ** get_address_of_FilterNameIgnoreCase_6() { return &___FilterNameIgnoreCase_6; }
	inline void set_FilterNameIgnoreCase_6(MemberFilter_t3448069498 * value)
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
#ifndef MONOMETHODINFO_T1827472430_H
#define MONOMETHODINFO_T1827472430_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.MonoMethodInfo
struct  MonoMethodInfo_t1827472430 
{
public:
	// System.Type System.Reflection.MonoMethodInfo::parent
	Type_t * ___parent_0;
	// System.Type System.Reflection.MonoMethodInfo::ret
	Type_t * ___ret_1;
	// System.Reflection.MethodAttributes System.Reflection.MonoMethodInfo::attrs
	int32_t ___attrs_2;
	// System.Reflection.MethodImplAttributes System.Reflection.MonoMethodInfo::iattrs
	int32_t ___iattrs_3;
	// System.Reflection.CallingConventions System.Reflection.MonoMethodInfo::callconv
	int32_t ___callconv_4;

public:
	inline static int32_t get_offset_of_parent_0() { return static_cast<int32_t>(offsetof(MonoMethodInfo_t1827472430, ___parent_0)); }
	inline Type_t * get_parent_0() const { return ___parent_0; }
	inline Type_t ** get_address_of_parent_0() { return &___parent_0; }
	inline void set_parent_0(Type_t * value)
	{
		___parent_0 = value;
		Il2CppCodeGenWriteBarrier((&___parent_0), value);
	}

	inline static int32_t get_offset_of_ret_1() { return static_cast<int32_t>(offsetof(MonoMethodInfo_t1827472430, ___ret_1)); }
	inline Type_t * get_ret_1() const { return ___ret_1; }
	inline Type_t ** get_address_of_ret_1() { return &___ret_1; }
	inline void set_ret_1(Type_t * value)
	{
		___ret_1 = value;
		Il2CppCodeGenWriteBarrier((&___ret_1), value);
	}

	inline static int32_t get_offset_of_attrs_2() { return static_cast<int32_t>(offsetof(MonoMethodInfo_t1827472430, ___attrs_2)); }
	inline int32_t get_attrs_2() const { return ___attrs_2; }
	inline int32_t* get_address_of_attrs_2() { return &___attrs_2; }
	inline void set_attrs_2(int32_t value)
	{
		___attrs_2 = value;
	}

	inline static int32_t get_offset_of_iattrs_3() { return static_cast<int32_t>(offsetof(MonoMethodInfo_t1827472430, ___iattrs_3)); }
	inline int32_t get_iattrs_3() const { return ___iattrs_3; }
	inline int32_t* get_address_of_iattrs_3() { return &___iattrs_3; }
	inline void set_iattrs_3(int32_t value)
	{
		___iattrs_3 = value;
	}

	inline static int32_t get_offset_of_callconv_4() { return static_cast<int32_t>(offsetof(MonoMethodInfo_t1827472430, ___callconv_4)); }
	inline int32_t get_callconv_4() const { return ___callconv_4; }
	inline int32_t* get_address_of_callconv_4() { return &___callconv_4; }
	inline void set_callconv_4(int32_t value)
	{
		___callconv_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Reflection.MonoMethodInfo
struct MonoMethodInfo_t1827472430_marshaled_pinvoke
{
	Type_t * ___parent_0;
	Type_t * ___ret_1;
	int32_t ___attrs_2;
	int32_t ___iattrs_3;
	int32_t ___callconv_4;
};
// Native definition for COM marshalling of System.Reflection.MonoMethodInfo
struct MonoMethodInfo_t1827472430_marshaled_com
{
	Type_t * ___parent_0;
	Type_t * ___ret_1;
	int32_t ___attrs_2;
	int32_t ___iattrs_3;
	int32_t ___callconv_4;
};
#endif // MONOMETHODINFO_T1827472430_H
#ifndef CLASSINTERFACEATTRIBUTE_T1419534981_H
#define CLASSINTERFACEATTRIBUTE_T1419534981_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.InteropServices.ClassInterfaceAttribute
struct  ClassInterfaceAttribute_t1419534981  : public Attribute_t2512812344
{
public:
	// System.Runtime.InteropServices.ClassInterfaceType System.Runtime.InteropServices.ClassInterfaceAttribute::ciType
	int32_t ___ciType_0;

public:
	inline static int32_t get_offset_of_ciType_0() { return static_cast<int32_t>(offsetof(ClassInterfaceAttribute_t1419534981, ___ciType_0)); }
	inline int32_t get_ciType_0() const { return ___ciType_0; }
	inline int32_t* get_address_of_ciType_0() { return &___ciType_0; }
	inline void set_ciType_0(int32_t value)
	{
		___ciType_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CLASSINTERFACEATTRIBUTE_T1419534981_H
#ifndef MEMBERINFOSERIALIZATIONHOLDER_T3431409113_H
#define MEMBERINFOSERIALIZATIONHOLDER_T3431409113_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.MemberInfoSerializationHolder
struct  MemberInfoSerializationHolder_t3431409113  : public RuntimeObject
{
public:
	// System.String System.Reflection.MemberInfoSerializationHolder::_memberName
	String_t* ____memberName_0;
	// System.String System.Reflection.MemberInfoSerializationHolder::_memberSignature
	String_t* ____memberSignature_1;
	// System.Reflection.MemberTypes System.Reflection.MemberInfoSerializationHolder::_memberType
	int32_t ____memberType_2;
	// System.Type System.Reflection.MemberInfoSerializationHolder::_reflectedType
	Type_t * ____reflectedType_3;
	// System.Type[] System.Reflection.MemberInfoSerializationHolder::_genericArguments
	TypeU5BU5D_t2352909122* ____genericArguments_4;

public:
	inline static int32_t get_offset_of__memberName_0() { return static_cast<int32_t>(offsetof(MemberInfoSerializationHolder_t3431409113, ____memberName_0)); }
	inline String_t* get__memberName_0() const { return ____memberName_0; }
	inline String_t** get_address_of__memberName_0() { return &____memberName_0; }
	inline void set__memberName_0(String_t* value)
	{
		____memberName_0 = value;
		Il2CppCodeGenWriteBarrier((&____memberName_0), value);
	}

	inline static int32_t get_offset_of__memberSignature_1() { return static_cast<int32_t>(offsetof(MemberInfoSerializationHolder_t3431409113, ____memberSignature_1)); }
	inline String_t* get__memberSignature_1() const { return ____memberSignature_1; }
	inline String_t** get_address_of__memberSignature_1() { return &____memberSignature_1; }
	inline void set__memberSignature_1(String_t* value)
	{
		____memberSignature_1 = value;
		Il2CppCodeGenWriteBarrier((&____memberSignature_1), value);
	}

	inline static int32_t get_offset_of__memberType_2() { return static_cast<int32_t>(offsetof(MemberInfoSerializationHolder_t3431409113, ____memberType_2)); }
	inline int32_t get__memberType_2() const { return ____memberType_2; }
	inline int32_t* get_address_of__memberType_2() { return &____memberType_2; }
	inline void set__memberType_2(int32_t value)
	{
		____memberType_2 = value;
	}

	inline static int32_t get_offset_of__reflectedType_3() { return static_cast<int32_t>(offsetof(MemberInfoSerializationHolder_t3431409113, ____reflectedType_3)); }
	inline Type_t * get__reflectedType_3() const { return ____reflectedType_3; }
	inline Type_t ** get_address_of__reflectedType_3() { return &____reflectedType_3; }
	inline void set__reflectedType_3(Type_t * value)
	{
		____reflectedType_3 = value;
		Il2CppCodeGenWriteBarrier((&____reflectedType_3), value);
	}

	inline static int32_t get_offset_of__genericArguments_4() { return static_cast<int32_t>(offsetof(MemberInfoSerializationHolder_t3431409113, ____genericArguments_4)); }
	inline TypeU5BU5D_t2352909122* get__genericArguments_4() const { return ____genericArguments_4; }
	inline TypeU5BU5D_t2352909122** get_address_of__genericArguments_4() { return &____genericArguments_4; }
	inline void set__genericArguments_4(TypeU5BU5D_t2352909122* value)
	{
		____genericArguments_4 = value;
		Il2CppCodeGenWriteBarrier((&____genericArguments_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MEMBERINFOSERIALIZATIONHOLDER_T3431409113_H
#ifndef DEFAULTDEPENDENCYATTRIBUTE_T2379702222_H
#define DEFAULTDEPENDENCYATTRIBUTE_T2379702222_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.CompilerServices.DefaultDependencyAttribute
struct  DefaultDependencyAttribute_t2379702222  : public Attribute_t2512812344
{
public:
	// System.Runtime.CompilerServices.LoadHint System.Runtime.CompilerServices.DefaultDependencyAttribute::hint
	int32_t ___hint_0;

public:
	inline static int32_t get_offset_of_hint_0() { return static_cast<int32_t>(offsetof(DefaultDependencyAttribute_t2379702222, ___hint_0)); }
	inline int32_t get_hint_0() const { return ___hint_0; }
	inline int32_t* get_address_of_hint_0() { return &___hint_0; }
	inline void set_hint_0(int32_t value)
	{
		___hint_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DEFAULTDEPENDENCYATTRIBUTE_T2379702222_H
#ifndef COMEXCEPTION_T2702222534_H
#define COMEXCEPTION_T2702222534_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.InteropServices.COMException
struct  COMException_t2702222534  : public ExternalException_t1793089662
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COMEXCEPTION_T2702222534_H
#ifndef MONOFIELD_T_H
#define MONOFIELD_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.MonoField
struct  MonoField_t  : public FieldInfo_t
{
public:
	// System.IntPtr System.Reflection.MonoField::klass
	IntPtr_t ___klass_0;
	// System.RuntimeFieldHandle System.Reflection.MonoField::fhandle
	RuntimeFieldHandle_t97424371  ___fhandle_1;
	// System.String System.Reflection.MonoField::name
	String_t* ___name_2;
	// System.Type System.Reflection.MonoField::type
	Type_t * ___type_3;
	// System.Reflection.FieldAttributes System.Reflection.MonoField::attrs
	int32_t ___attrs_4;

public:
	inline static int32_t get_offset_of_klass_0() { return static_cast<int32_t>(offsetof(MonoField_t, ___klass_0)); }
	inline IntPtr_t get_klass_0() const { return ___klass_0; }
	inline IntPtr_t* get_address_of_klass_0() { return &___klass_0; }
	inline void set_klass_0(IntPtr_t value)
	{
		___klass_0 = value;
	}

	inline static int32_t get_offset_of_fhandle_1() { return static_cast<int32_t>(offsetof(MonoField_t, ___fhandle_1)); }
	inline RuntimeFieldHandle_t97424371  get_fhandle_1() const { return ___fhandle_1; }
	inline RuntimeFieldHandle_t97424371 * get_address_of_fhandle_1() { return &___fhandle_1; }
	inline void set_fhandle_1(RuntimeFieldHandle_t97424371  value)
	{
		___fhandle_1 = value;
	}

	inline static int32_t get_offset_of_name_2() { return static_cast<int32_t>(offsetof(MonoField_t, ___name_2)); }
	inline String_t* get_name_2() const { return ___name_2; }
	inline String_t** get_address_of_name_2() { return &___name_2; }
	inline void set_name_2(String_t* value)
	{
		___name_2 = value;
		Il2CppCodeGenWriteBarrier((&___name_2), value);
	}

	inline static int32_t get_offset_of_type_3() { return static_cast<int32_t>(offsetof(MonoField_t, ___type_3)); }
	inline Type_t * get_type_3() const { return ___type_3; }
	inline Type_t ** get_address_of_type_3() { return &___type_3; }
	inline void set_type_3(Type_t * value)
	{
		___type_3 = value;
		Il2CppCodeGenWriteBarrier((&___type_3), value);
	}

	inline static int32_t get_offset_of_attrs_4() { return static_cast<int32_t>(offsetof(MonoField_t, ___attrs_4)); }
	inline int32_t get_attrs_4() const { return ___attrs_4; }
	inline int32_t* get_address_of_attrs_4() { return &___attrs_4; }
	inline void set_attrs_4(int32_t value)
	{
		___attrs_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MONOFIELD_T_H
#ifndef RELIABILITYCONTRACTATTRIBUTE_T1736779792_H
#define RELIABILITYCONTRACTATTRIBUTE_T1736779792_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.ConstrainedExecution.ReliabilityContractAttribute
struct  ReliabilityContractAttribute_t1736779792  : public Attribute_t2512812344
{
public:
	// System.Runtime.ConstrainedExecution.Consistency System.Runtime.ConstrainedExecution.ReliabilityContractAttribute::consistency
	int32_t ___consistency_0;
	// System.Runtime.ConstrainedExecution.Cer System.Runtime.ConstrainedExecution.ReliabilityContractAttribute::cer
	int32_t ___cer_1;

public:
	inline static int32_t get_offset_of_consistency_0() { return static_cast<int32_t>(offsetof(ReliabilityContractAttribute_t1736779792, ___consistency_0)); }
	inline int32_t get_consistency_0() const { return ___consistency_0; }
	inline int32_t* get_address_of_consistency_0() { return &___consistency_0; }
	inline void set_consistency_0(int32_t value)
	{
		___consistency_0 = value;
	}

	inline static int32_t get_offset_of_cer_1() { return static_cast<int32_t>(offsetof(ReliabilityContractAttribute_t1736779792, ___cer_1)); }
	inline int32_t get_cer_1() const { return ___cer_1; }
	inline int32_t* get_address_of_cer_1() { return &___cer_1; }
	inline void set_cer_1(int32_t value)
	{
		___cer_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RELIABILITYCONTRACTATTRIBUTE_T1736779792_H
#ifndef MONOMETHOD_T_H
#define MONOMETHOD_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.MonoMethod
struct  MonoMethod_t  : public MethodInfo_t
{
public:
	// System.IntPtr System.Reflection.MonoMethod::mhandle
	IntPtr_t ___mhandle_0;
	// System.String System.Reflection.MonoMethod::name
	String_t* ___name_1;
	// System.Type System.Reflection.MonoMethod::reftype
	Type_t * ___reftype_2;

public:
	inline static int32_t get_offset_of_mhandle_0() { return static_cast<int32_t>(offsetof(MonoMethod_t, ___mhandle_0)); }
	inline IntPtr_t get_mhandle_0() const { return ___mhandle_0; }
	inline IntPtr_t* get_address_of_mhandle_0() { return &___mhandle_0; }
	inline void set_mhandle_0(IntPtr_t value)
	{
		___mhandle_0 = value;
	}

	inline static int32_t get_offset_of_name_1() { return static_cast<int32_t>(offsetof(MonoMethod_t, ___name_1)); }
	inline String_t* get_name_1() const { return ___name_1; }
	inline String_t** get_address_of_name_1() { return &___name_1; }
	inline void set_name_1(String_t* value)
	{
		___name_1 = value;
		Il2CppCodeGenWriteBarrier((&___name_1), value);
	}

	inline static int32_t get_offset_of_reftype_2() { return static_cast<int32_t>(offsetof(MonoMethod_t, ___reftype_2)); }
	inline Type_t * get_reftype_2() const { return ___reftype_2; }
	inline Type_t ** get_address_of_reftype_2() { return &___reftype_2; }
	inline void set_reftype_2(Type_t * value)
	{
		___reftype_2 = value;
		Il2CppCodeGenWriteBarrier((&___reftype_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MONOMETHOD_T_H
#ifndef MONOGENERICCMETHOD_T3197725446_H
#define MONOGENERICCMETHOD_T3197725446_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.MonoGenericCMethod
struct  MonoGenericCMethod_t3197725446  : public MonoCMethod_t305854846
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MONOGENERICCMETHOD_T3197725446_H
#ifndef ADDEVENTADAPTER_T2464420954_H
#define ADDEVENTADAPTER_T2464420954_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.EventInfo/AddEventAdapter
struct  AddEventAdapter_t2464420954  : public MulticastDelegate_t3535027515
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ADDEVENTADAPTER_T2464420954_H
#ifndef MONOGENERICMETHOD_T_H
#define MONOGENERICMETHOD_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.MonoGenericMethod
struct  MonoGenericMethod_t  : public MonoMethod_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MONOGENERICMETHOD_T_H
#ifndef MONOPROPERTY_T_H
#define MONOPROPERTY_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.MonoProperty
struct  MonoProperty_t  : public PropertyInfo_t
{
public:
	// System.IntPtr System.Reflection.MonoProperty::klass
	IntPtr_t ___klass_0;
	// System.IntPtr System.Reflection.MonoProperty::prop
	IntPtr_t ___prop_1;
	// System.Reflection.MonoPropertyInfo System.Reflection.MonoProperty::info
	MonoPropertyInfo_t4194409498  ___info_2;
	// System.Reflection.PInfo System.Reflection.MonoProperty::cached
	int32_t ___cached_3;
	// System.Reflection.MonoProperty/GetterAdapter System.Reflection.MonoProperty::cached_getter
	GetterAdapter_t1212170220 * ___cached_getter_4;

public:
	inline static int32_t get_offset_of_klass_0() { return static_cast<int32_t>(offsetof(MonoProperty_t, ___klass_0)); }
	inline IntPtr_t get_klass_0() const { return ___klass_0; }
	inline IntPtr_t* get_address_of_klass_0() { return &___klass_0; }
	inline void set_klass_0(IntPtr_t value)
	{
		___klass_0 = value;
	}

	inline static int32_t get_offset_of_prop_1() { return static_cast<int32_t>(offsetof(MonoProperty_t, ___prop_1)); }
	inline IntPtr_t get_prop_1() const { return ___prop_1; }
	inline IntPtr_t* get_address_of_prop_1() { return &___prop_1; }
	inline void set_prop_1(IntPtr_t value)
	{
		___prop_1 = value;
	}

	inline static int32_t get_offset_of_info_2() { return static_cast<int32_t>(offsetof(MonoProperty_t, ___info_2)); }
	inline MonoPropertyInfo_t4194409498  get_info_2() const { return ___info_2; }
	inline MonoPropertyInfo_t4194409498 * get_address_of_info_2() { return &___info_2; }
	inline void set_info_2(MonoPropertyInfo_t4194409498  value)
	{
		___info_2 = value;
	}

	inline static int32_t get_offset_of_cached_3() { return static_cast<int32_t>(offsetof(MonoProperty_t, ___cached_3)); }
	inline int32_t get_cached_3() const { return ___cached_3; }
	inline int32_t* get_address_of_cached_3() { return &___cached_3; }
	inline void set_cached_3(int32_t value)
	{
		___cached_3 = value;
	}

	inline static int32_t get_offset_of_cached_getter_4() { return static_cast<int32_t>(offsetof(MonoProperty_t, ___cached_getter_4)); }
	inline GetterAdapter_t1212170220 * get_cached_getter_4() const { return ___cached_getter_4; }
	inline GetterAdapter_t1212170220 ** get_address_of_cached_getter_4() { return &___cached_getter_4; }
	inline void set_cached_getter_4(GetterAdapter_t1212170220 * value)
	{
		___cached_getter_4 = value;
		Il2CppCodeGenWriteBarrier((&___cached_getter_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MONOPROPERTY_T_H
#ifndef TYPEBUILDER_T3978936164_H
#define TYPEBUILDER_T3978936164_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.Emit.TypeBuilder
struct  TypeBuilder_t3978936164  : public Type_t
{
public:
	// System.String System.Reflection.Emit.TypeBuilder::tname
	String_t* ___tname_8;
	// System.String System.Reflection.Emit.TypeBuilder::nspace
	String_t* ___nspace_9;
	// System.Type System.Reflection.Emit.TypeBuilder::parent
	Type_t * ___parent_10;
	// System.Type System.Reflection.Emit.TypeBuilder::nesting_type
	Type_t * ___nesting_type_11;
	// System.Type[] System.Reflection.Emit.TypeBuilder::interfaces
	TypeU5BU5D_t2352909122* ___interfaces_12;
	// System.Int32 System.Reflection.Emit.TypeBuilder::num_methods
	int32_t ___num_methods_13;
	// System.Reflection.Emit.MethodBuilder[] System.Reflection.Emit.TypeBuilder::methods
	MethodBuilderU5BU5D_t2768222055* ___methods_14;
	// System.Reflection.Emit.ConstructorBuilder[] System.Reflection.Emit.TypeBuilder::ctors
	ConstructorBuilderU5BU5D_t2483286157* ___ctors_15;
	// System.Reflection.Emit.FieldBuilder[] System.Reflection.Emit.TypeBuilder::fields
	FieldBuilderU5BU5D_t2338563367* ___fields_16;
	// System.Reflection.TypeAttributes System.Reflection.Emit.TypeBuilder::attrs
	int32_t ___attrs_17;
	// System.Reflection.Emit.ModuleBuilder System.Reflection.Emit.TypeBuilder::pmodule
	ModuleBuilder_t1155181340 * ___pmodule_18;
	// System.Reflection.Emit.GenericTypeParameterBuilder[] System.Reflection.Emit.TypeBuilder::generic_params
	GenericTypeParameterBuilderU5BU5D_t2719777775* ___generic_params_19;
	// System.Type System.Reflection.Emit.TypeBuilder::created
	Type_t * ___created_20;
	// System.String System.Reflection.Emit.TypeBuilder::fullname
	String_t* ___fullname_21;
	// System.Boolean System.Reflection.Emit.TypeBuilder::createTypeCalled
	bool ___createTypeCalled_22;
	// System.Type System.Reflection.Emit.TypeBuilder::underlying_type
	Type_t * ___underlying_type_23;

public:
	inline static int32_t get_offset_of_tname_8() { return static_cast<int32_t>(offsetof(TypeBuilder_t3978936164, ___tname_8)); }
	inline String_t* get_tname_8() const { return ___tname_8; }
	inline String_t** get_address_of_tname_8() { return &___tname_8; }
	inline void set_tname_8(String_t* value)
	{
		___tname_8 = value;
		Il2CppCodeGenWriteBarrier((&___tname_8), value);
	}

	inline static int32_t get_offset_of_nspace_9() { return static_cast<int32_t>(offsetof(TypeBuilder_t3978936164, ___nspace_9)); }
	inline String_t* get_nspace_9() const { return ___nspace_9; }
	inline String_t** get_address_of_nspace_9() { return &___nspace_9; }
	inline void set_nspace_9(String_t* value)
	{
		___nspace_9 = value;
		Il2CppCodeGenWriteBarrier((&___nspace_9), value);
	}

	inline static int32_t get_offset_of_parent_10() { return static_cast<int32_t>(offsetof(TypeBuilder_t3978936164, ___parent_10)); }
	inline Type_t * get_parent_10() const { return ___parent_10; }
	inline Type_t ** get_address_of_parent_10() { return &___parent_10; }
	inline void set_parent_10(Type_t * value)
	{
		___parent_10 = value;
		Il2CppCodeGenWriteBarrier((&___parent_10), value);
	}

	inline static int32_t get_offset_of_nesting_type_11() { return static_cast<int32_t>(offsetof(TypeBuilder_t3978936164, ___nesting_type_11)); }
	inline Type_t * get_nesting_type_11() const { return ___nesting_type_11; }
	inline Type_t ** get_address_of_nesting_type_11() { return &___nesting_type_11; }
	inline void set_nesting_type_11(Type_t * value)
	{
		___nesting_type_11 = value;
		Il2CppCodeGenWriteBarrier((&___nesting_type_11), value);
	}

	inline static int32_t get_offset_of_interfaces_12() { return static_cast<int32_t>(offsetof(TypeBuilder_t3978936164, ___interfaces_12)); }
	inline TypeU5BU5D_t2352909122* get_interfaces_12() const { return ___interfaces_12; }
	inline TypeU5BU5D_t2352909122** get_address_of_interfaces_12() { return &___interfaces_12; }
	inline void set_interfaces_12(TypeU5BU5D_t2352909122* value)
	{
		___interfaces_12 = value;
		Il2CppCodeGenWriteBarrier((&___interfaces_12), value);
	}

	inline static int32_t get_offset_of_num_methods_13() { return static_cast<int32_t>(offsetof(TypeBuilder_t3978936164, ___num_methods_13)); }
	inline int32_t get_num_methods_13() const { return ___num_methods_13; }
	inline int32_t* get_address_of_num_methods_13() { return &___num_methods_13; }
	inline void set_num_methods_13(int32_t value)
	{
		___num_methods_13 = value;
	}

	inline static int32_t get_offset_of_methods_14() { return static_cast<int32_t>(offsetof(TypeBuilder_t3978936164, ___methods_14)); }
	inline MethodBuilderU5BU5D_t2768222055* get_methods_14() const { return ___methods_14; }
	inline MethodBuilderU5BU5D_t2768222055** get_address_of_methods_14() { return &___methods_14; }
	inline void set_methods_14(MethodBuilderU5BU5D_t2768222055* value)
	{
		___methods_14 = value;
		Il2CppCodeGenWriteBarrier((&___methods_14), value);
	}

	inline static int32_t get_offset_of_ctors_15() { return static_cast<int32_t>(offsetof(TypeBuilder_t3978936164, ___ctors_15)); }
	inline ConstructorBuilderU5BU5D_t2483286157* get_ctors_15() const { return ___ctors_15; }
	inline ConstructorBuilderU5BU5D_t2483286157** get_address_of_ctors_15() { return &___ctors_15; }
	inline void set_ctors_15(ConstructorBuilderU5BU5D_t2483286157* value)
	{
		___ctors_15 = value;
		Il2CppCodeGenWriteBarrier((&___ctors_15), value);
	}

	inline static int32_t get_offset_of_fields_16() { return static_cast<int32_t>(offsetof(TypeBuilder_t3978936164, ___fields_16)); }
	inline FieldBuilderU5BU5D_t2338563367* get_fields_16() const { return ___fields_16; }
	inline FieldBuilderU5BU5D_t2338563367** get_address_of_fields_16() { return &___fields_16; }
	inline void set_fields_16(FieldBuilderU5BU5D_t2338563367* value)
	{
		___fields_16 = value;
		Il2CppCodeGenWriteBarrier((&___fields_16), value);
	}

	inline static int32_t get_offset_of_attrs_17() { return static_cast<int32_t>(offsetof(TypeBuilder_t3978936164, ___attrs_17)); }
	inline int32_t get_attrs_17() const { return ___attrs_17; }
	inline int32_t* get_address_of_attrs_17() { return &___attrs_17; }
	inline void set_attrs_17(int32_t value)
	{
		___attrs_17 = value;
	}

	inline static int32_t get_offset_of_pmodule_18() { return static_cast<int32_t>(offsetof(TypeBuilder_t3978936164, ___pmodule_18)); }
	inline ModuleBuilder_t1155181340 * get_pmodule_18() const { return ___pmodule_18; }
	inline ModuleBuilder_t1155181340 ** get_address_of_pmodule_18() { return &___pmodule_18; }
	inline void set_pmodule_18(ModuleBuilder_t1155181340 * value)
	{
		___pmodule_18 = value;
		Il2CppCodeGenWriteBarrier((&___pmodule_18), value);
	}

	inline static int32_t get_offset_of_generic_params_19() { return static_cast<int32_t>(offsetof(TypeBuilder_t3978936164, ___generic_params_19)); }
	inline GenericTypeParameterBuilderU5BU5D_t2719777775* get_generic_params_19() const { return ___generic_params_19; }
	inline GenericTypeParameterBuilderU5BU5D_t2719777775** get_address_of_generic_params_19() { return &___generic_params_19; }
	inline void set_generic_params_19(GenericTypeParameterBuilderU5BU5D_t2719777775* value)
	{
		___generic_params_19 = value;
		Il2CppCodeGenWriteBarrier((&___generic_params_19), value);
	}

	inline static int32_t get_offset_of_created_20() { return static_cast<int32_t>(offsetof(TypeBuilder_t3978936164, ___created_20)); }
	inline Type_t * get_created_20() const { return ___created_20; }
	inline Type_t ** get_address_of_created_20() { return &___created_20; }
	inline void set_created_20(Type_t * value)
	{
		___created_20 = value;
		Il2CppCodeGenWriteBarrier((&___created_20), value);
	}

	inline static int32_t get_offset_of_fullname_21() { return static_cast<int32_t>(offsetof(TypeBuilder_t3978936164, ___fullname_21)); }
	inline String_t* get_fullname_21() const { return ___fullname_21; }
	inline String_t** get_address_of_fullname_21() { return &___fullname_21; }
	inline void set_fullname_21(String_t* value)
	{
		___fullname_21 = value;
		Il2CppCodeGenWriteBarrier((&___fullname_21), value);
	}

	inline static int32_t get_offset_of_createTypeCalled_22() { return static_cast<int32_t>(offsetof(TypeBuilder_t3978936164, ___createTypeCalled_22)); }
	inline bool get_createTypeCalled_22() const { return ___createTypeCalled_22; }
	inline bool* get_address_of_createTypeCalled_22() { return &___createTypeCalled_22; }
	inline void set_createTypeCalled_22(bool value)
	{
		___createTypeCalled_22 = value;
	}

	inline static int32_t get_offset_of_underlying_type_23() { return static_cast<int32_t>(offsetof(TypeBuilder_t3978936164, ___underlying_type_23)); }
	inline Type_t * get_underlying_type_23() const { return ___underlying_type_23; }
	inline Type_t ** get_address_of_underlying_type_23() { return &___underlying_type_23; }
	inline void set_underlying_type_23(Type_t * value)
	{
		___underlying_type_23 = value;
		Il2CppCodeGenWriteBarrier((&___underlying_type_23), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TYPEBUILDER_T3978936164_H
#ifndef GETTERADAPTER_T1212170220_H
#define GETTERADAPTER_T1212170220_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.MonoProperty/GetterAdapter
struct  GetterAdapter_t1212170220  : public MulticastDelegate_t3535027515
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GETTERADAPTER_T1212170220_H





#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize300 = { sizeof (ModuleBuilderTokenGenerator_t8538338), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable300[1] = 
{
	ModuleBuilderTokenGenerator_t8538338::get_offset_of_mb_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize301 = { sizeof (OpCode_t3879854364)+ sizeof (RuntimeObject), sizeof(OpCode_t3879854364 ), 0, 0 };
extern const int32_t g_FieldOffsetTable301[8] = 
{
	OpCode_t3879854364::get_offset_of_op1_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	OpCode_t3879854364::get_offset_of_op2_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	OpCode_t3879854364::get_offset_of_push_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	OpCode_t3879854364::get_offset_of_pop_3() + static_cast<int32_t>(sizeof(RuntimeObject)),
	OpCode_t3879854364::get_offset_of_size_4() + static_cast<int32_t>(sizeof(RuntimeObject)),
	OpCode_t3879854364::get_offset_of_type_5() + static_cast<int32_t>(sizeof(RuntimeObject)),
	OpCode_t3879854364::get_offset_of_args_6() + static_cast<int32_t>(sizeof(RuntimeObject)),
	OpCode_t3879854364::get_offset_of_flow_7() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize302 = { sizeof (OpCodeNames_t1676869817), -1, sizeof(OpCodeNames_t1676869817_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable302[1] = 
{
	OpCodeNames_t1676869817_StaticFields::get_offset_of_names_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize303 = { sizeof (OpCodes_t3193932334), -1, sizeof(OpCodes_t3193932334_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable303[226] = 
{
	OpCodes_t3193932334_StaticFields::get_offset_of_Nop_0(),
	OpCodes_t3193932334_StaticFields::get_offset_of_Break_1(),
	OpCodes_t3193932334_StaticFields::get_offset_of_Ldarg_0_2(),
	OpCodes_t3193932334_StaticFields::get_offset_of_Ldarg_1_3(),
	OpCodes_t3193932334_StaticFields::get_offset_of_Ldarg_2_4(),
	OpCodes_t3193932334_StaticFields::get_offset_of_Ldarg_3_5(),
	OpCodes_t3193932334_StaticFields::get_offset_of_Ldloc_0_6(),
	OpCodes_t3193932334_StaticFields::get_offset_of_Ldloc_1_7(),
	OpCodes_t3193932334_StaticFields::get_offset_of_Ldloc_2_8(),
	OpCodes_t3193932334_StaticFields::get_offset_of_Ldloc_3_9(),
	OpCodes_t3193932334_StaticFields::get_offset_of_Stloc_0_10(),
	OpCodes_t3193932334_StaticFields::get_offset_of_Stloc_1_11(),
	OpCodes_t3193932334_StaticFields::get_offset_of_Stloc_2_12(),
	OpCodes_t3193932334_StaticFields::get_offset_of_Stloc_3_13(),
	OpCodes_t3193932334_StaticFields::get_offset_of_Ldarg_S_14(),
	OpCodes_t3193932334_StaticFields::get_offset_of_Ldarga_S_15(),
	OpCodes_t3193932334_StaticFields::get_offset_of_Starg_S_16(),
	OpCodes_t3193932334_StaticFields::get_offset_of_Ldloc_S_17(),
	OpCodes_t3193932334_StaticFields::get_offset_of_Ldloca_S_18(),
	OpCodes_t3193932334_StaticFields::get_offset_of_Stloc_S_19(),
	OpCodes_t3193932334_StaticFields::get_offset_of_Ldnull_20(),
	OpCodes_t3193932334_StaticFields::get_offset_of_Ldc_I4_M1_21(),
	OpCodes_t3193932334_StaticFields::get_offset_of_Ldc_I4_0_22(),
	OpCodes_t3193932334_StaticFields::get_offset_of_Ldc_I4_1_23(),
	OpCodes_t3193932334_StaticFields::get_offset_of_Ldc_I4_2_24(),
	OpCodes_t3193932334_StaticFields::get_offset_of_Ldc_I4_3_25(),
	OpCodes_t3193932334_StaticFields::get_offset_of_Ldc_I4_4_26(),
	OpCodes_t3193932334_StaticFields::get_offset_of_Ldc_I4_5_27(),
	OpCodes_t3193932334_StaticFields::get_offset_of_Ldc_I4_6_28(),
	OpCodes_t3193932334_StaticFields::get_offset_of_Ldc_I4_7_29(),
	OpCodes_t3193932334_StaticFields::get_offset_of_Ldc_I4_8_30(),
	OpCodes_t3193932334_StaticFields::get_offset_of_Ldc_I4_S_31(),
	OpCodes_t3193932334_StaticFields::get_offset_of_Ldc_I4_32(),
	OpCodes_t3193932334_StaticFields::get_offset_of_Ldc_I8_33(),
	OpCodes_t3193932334_StaticFields::get_offset_of_Ldc_R4_34(),
	OpCodes_t3193932334_StaticFields::get_offset_of_Ldc_R8_35(),
	OpCodes_t3193932334_StaticFields::get_offset_of_Dup_36(),
	OpCodes_t3193932334_StaticFields::get_offset_of_Pop_37(),
	OpCodes_t3193932334_StaticFields::get_offset_of_Jmp_38(),
	OpCodes_t3193932334_StaticFields::get_offset_of_Call_39(),
	OpCodes_t3193932334_StaticFields::get_offset_of_Calli_40(),
	OpCodes_t3193932334_StaticFields::get_offset_of_Ret_41(),
	OpCodes_t3193932334_StaticFields::get_offset_of_Br_S_42(),
	OpCodes_t3193932334_StaticFields::get_offset_of_Brfalse_S_43(),
	OpCodes_t3193932334_StaticFields::get_offset_of_Brtrue_S_44(),
	OpCodes_t3193932334_StaticFields::get_offset_of_Beq_S_45(),
	OpCodes_t3193932334_StaticFields::get_offset_of_Bge_S_46(),
	OpCodes_t3193932334_StaticFields::get_offset_of_Bgt_S_47(),
	OpCodes_t3193932334_StaticFields::get_offset_of_Ble_S_48(),
	OpCodes_t3193932334_StaticFields::get_offset_of_Blt_S_49(),
	OpCodes_t3193932334_StaticFields::get_offset_of_Bne_Un_S_50(),
	OpCodes_t3193932334_StaticFields::get_offset_of_Bge_Un_S_51(),
	OpCodes_t3193932334_StaticFields::get_offset_of_Bgt_Un_S_52(),
	OpCodes_t3193932334_StaticFields::get_offset_of_Ble_Un_S_53(),
	OpCodes_t3193932334_StaticFields::get_offset_of_Blt_Un_S_54(),
	OpCodes_t3193932334_StaticFields::get_offset_of_Br_55(),
	OpCodes_t3193932334_StaticFields::get_offset_of_Brfalse_56(),
	OpCodes_t3193932334_StaticFields::get_offset_of_Brtrue_57(),
	OpCodes_t3193932334_StaticFields::get_offset_of_Beq_58(),
	OpCodes_t3193932334_StaticFields::get_offset_of_Bge_59(),
	OpCodes_t3193932334_StaticFields::get_offset_of_Bgt_60(),
	OpCodes_t3193932334_StaticFields::get_offset_of_Ble_61(),
	OpCodes_t3193932334_StaticFields::get_offset_of_Blt_62(),
	OpCodes_t3193932334_StaticFields::get_offset_of_Bne_Un_63(),
	OpCodes_t3193932334_StaticFields::get_offset_of_Bge_Un_64(),
	OpCodes_t3193932334_StaticFields::get_offset_of_Bgt_Un_65(),
	OpCodes_t3193932334_StaticFields::get_offset_of_Ble_Un_66(),
	OpCodes_t3193932334_StaticFields::get_offset_of_Blt_Un_67(),
	OpCodes_t3193932334_StaticFields::get_offset_of_Switch_68(),
	OpCodes_t3193932334_StaticFields::get_offset_of_Ldind_I1_69(),
	OpCodes_t3193932334_StaticFields::get_offset_of_Ldind_U1_70(),
	OpCodes_t3193932334_StaticFields::get_offset_of_Ldind_I2_71(),
	OpCodes_t3193932334_StaticFields::get_offset_of_Ldind_U2_72(),
	OpCodes_t3193932334_StaticFields::get_offset_of_Ldind_I4_73(),
	OpCodes_t3193932334_StaticFields::get_offset_of_Ldind_U4_74(),
	OpCodes_t3193932334_StaticFields::get_offset_of_Ldind_I8_75(),
	OpCodes_t3193932334_StaticFields::get_offset_of_Ldind_I_76(),
	OpCodes_t3193932334_StaticFields::get_offset_of_Ldind_R4_77(),
	OpCodes_t3193932334_StaticFields::get_offset_of_Ldind_R8_78(),
	OpCodes_t3193932334_StaticFields::get_offset_of_Ldind_Ref_79(),
	OpCodes_t3193932334_StaticFields::get_offset_of_Stind_Ref_80(),
	OpCodes_t3193932334_StaticFields::get_offset_of_Stind_I1_81(),
	OpCodes_t3193932334_StaticFields::get_offset_of_Stind_I2_82(),
	OpCodes_t3193932334_StaticFields::get_offset_of_Stind_I4_83(),
	OpCodes_t3193932334_StaticFields::get_offset_of_Stind_I8_84(),
	OpCodes_t3193932334_StaticFields::get_offset_of_Stind_R4_85(),
	OpCodes_t3193932334_StaticFields::get_offset_of_Stind_R8_86(),
	OpCodes_t3193932334_StaticFields::get_offset_of_Add_87(),
	OpCodes_t3193932334_StaticFields::get_offset_of_Sub_88(),
	OpCodes_t3193932334_StaticFields::get_offset_of_Mul_89(),
	OpCodes_t3193932334_StaticFields::get_offset_of_Div_90(),
	OpCodes_t3193932334_StaticFields::get_offset_of_Div_Un_91(),
	OpCodes_t3193932334_StaticFields::get_offset_of_Rem_92(),
	OpCodes_t3193932334_StaticFields::get_offset_of_Rem_Un_93(),
	OpCodes_t3193932334_StaticFields::get_offset_of_And_94(),
	OpCodes_t3193932334_StaticFields::get_offset_of_Or_95(),
	OpCodes_t3193932334_StaticFields::get_offset_of_Xor_96(),
	OpCodes_t3193932334_StaticFields::get_offset_of_Shl_97(),
	OpCodes_t3193932334_StaticFields::get_offset_of_Shr_98(),
	OpCodes_t3193932334_StaticFields::get_offset_of_Shr_Un_99(),
	OpCodes_t3193932334_StaticFields::get_offset_of_Neg_100(),
	OpCodes_t3193932334_StaticFields::get_offset_of_Not_101(),
	OpCodes_t3193932334_StaticFields::get_offset_of_Conv_I1_102(),
	OpCodes_t3193932334_StaticFields::get_offset_of_Conv_I2_103(),
	OpCodes_t3193932334_StaticFields::get_offset_of_Conv_I4_104(),
	OpCodes_t3193932334_StaticFields::get_offset_of_Conv_I8_105(),
	OpCodes_t3193932334_StaticFields::get_offset_of_Conv_R4_106(),
	OpCodes_t3193932334_StaticFields::get_offset_of_Conv_R8_107(),
	OpCodes_t3193932334_StaticFields::get_offset_of_Conv_U4_108(),
	OpCodes_t3193932334_StaticFields::get_offset_of_Conv_U8_109(),
	OpCodes_t3193932334_StaticFields::get_offset_of_Callvirt_110(),
	OpCodes_t3193932334_StaticFields::get_offset_of_Cpobj_111(),
	OpCodes_t3193932334_StaticFields::get_offset_of_Ldobj_112(),
	OpCodes_t3193932334_StaticFields::get_offset_of_Ldstr_113(),
	OpCodes_t3193932334_StaticFields::get_offset_of_Newobj_114(),
	OpCodes_t3193932334_StaticFields::get_offset_of_Castclass_115(),
	OpCodes_t3193932334_StaticFields::get_offset_of_Isinst_116(),
	OpCodes_t3193932334_StaticFields::get_offset_of_Conv_R_Un_117(),
	OpCodes_t3193932334_StaticFields::get_offset_of_Unbox_118(),
	OpCodes_t3193932334_StaticFields::get_offset_of_Throw_119(),
	OpCodes_t3193932334_StaticFields::get_offset_of_Ldfld_120(),
	OpCodes_t3193932334_StaticFields::get_offset_of_Ldflda_121(),
	OpCodes_t3193932334_StaticFields::get_offset_of_Stfld_122(),
	OpCodes_t3193932334_StaticFields::get_offset_of_Ldsfld_123(),
	OpCodes_t3193932334_StaticFields::get_offset_of_Ldsflda_124(),
	OpCodes_t3193932334_StaticFields::get_offset_of_Stsfld_125(),
	OpCodes_t3193932334_StaticFields::get_offset_of_Stobj_126(),
	OpCodes_t3193932334_StaticFields::get_offset_of_Conv_Ovf_I1_Un_127(),
	OpCodes_t3193932334_StaticFields::get_offset_of_Conv_Ovf_I2_Un_128(),
	OpCodes_t3193932334_StaticFields::get_offset_of_Conv_Ovf_I4_Un_129(),
	OpCodes_t3193932334_StaticFields::get_offset_of_Conv_Ovf_I8_Un_130(),
	OpCodes_t3193932334_StaticFields::get_offset_of_Conv_Ovf_U1_Un_131(),
	OpCodes_t3193932334_StaticFields::get_offset_of_Conv_Ovf_U2_Un_132(),
	OpCodes_t3193932334_StaticFields::get_offset_of_Conv_Ovf_U4_Un_133(),
	OpCodes_t3193932334_StaticFields::get_offset_of_Conv_Ovf_U8_Un_134(),
	OpCodes_t3193932334_StaticFields::get_offset_of_Conv_Ovf_I_Un_135(),
	OpCodes_t3193932334_StaticFields::get_offset_of_Conv_Ovf_U_Un_136(),
	OpCodes_t3193932334_StaticFields::get_offset_of_Box_137(),
	OpCodes_t3193932334_StaticFields::get_offset_of_Newarr_138(),
	OpCodes_t3193932334_StaticFields::get_offset_of_Ldlen_139(),
	OpCodes_t3193932334_StaticFields::get_offset_of_Ldelema_140(),
	OpCodes_t3193932334_StaticFields::get_offset_of_Ldelem_I1_141(),
	OpCodes_t3193932334_StaticFields::get_offset_of_Ldelem_U1_142(),
	OpCodes_t3193932334_StaticFields::get_offset_of_Ldelem_I2_143(),
	OpCodes_t3193932334_StaticFields::get_offset_of_Ldelem_U2_144(),
	OpCodes_t3193932334_StaticFields::get_offset_of_Ldelem_I4_145(),
	OpCodes_t3193932334_StaticFields::get_offset_of_Ldelem_U4_146(),
	OpCodes_t3193932334_StaticFields::get_offset_of_Ldelem_I8_147(),
	OpCodes_t3193932334_StaticFields::get_offset_of_Ldelem_I_148(),
	OpCodes_t3193932334_StaticFields::get_offset_of_Ldelem_R4_149(),
	OpCodes_t3193932334_StaticFields::get_offset_of_Ldelem_R8_150(),
	OpCodes_t3193932334_StaticFields::get_offset_of_Ldelem_Ref_151(),
	OpCodes_t3193932334_StaticFields::get_offset_of_Stelem_I_152(),
	OpCodes_t3193932334_StaticFields::get_offset_of_Stelem_I1_153(),
	OpCodes_t3193932334_StaticFields::get_offset_of_Stelem_I2_154(),
	OpCodes_t3193932334_StaticFields::get_offset_of_Stelem_I4_155(),
	OpCodes_t3193932334_StaticFields::get_offset_of_Stelem_I8_156(),
	OpCodes_t3193932334_StaticFields::get_offset_of_Stelem_R4_157(),
	OpCodes_t3193932334_StaticFields::get_offset_of_Stelem_R8_158(),
	OpCodes_t3193932334_StaticFields::get_offset_of_Stelem_Ref_159(),
	OpCodes_t3193932334_StaticFields::get_offset_of_Ldelem_160(),
	OpCodes_t3193932334_StaticFields::get_offset_of_Stelem_161(),
	OpCodes_t3193932334_StaticFields::get_offset_of_Unbox_Any_162(),
	OpCodes_t3193932334_StaticFields::get_offset_of_Conv_Ovf_I1_163(),
	OpCodes_t3193932334_StaticFields::get_offset_of_Conv_Ovf_U1_164(),
	OpCodes_t3193932334_StaticFields::get_offset_of_Conv_Ovf_I2_165(),
	OpCodes_t3193932334_StaticFields::get_offset_of_Conv_Ovf_U2_166(),
	OpCodes_t3193932334_StaticFields::get_offset_of_Conv_Ovf_I4_167(),
	OpCodes_t3193932334_StaticFields::get_offset_of_Conv_Ovf_U4_168(),
	OpCodes_t3193932334_StaticFields::get_offset_of_Conv_Ovf_I8_169(),
	OpCodes_t3193932334_StaticFields::get_offset_of_Conv_Ovf_U8_170(),
	OpCodes_t3193932334_StaticFields::get_offset_of_Refanyval_171(),
	OpCodes_t3193932334_StaticFields::get_offset_of_Ckfinite_172(),
	OpCodes_t3193932334_StaticFields::get_offset_of_Mkrefany_173(),
	OpCodes_t3193932334_StaticFields::get_offset_of_Ldtoken_174(),
	OpCodes_t3193932334_StaticFields::get_offset_of_Conv_U2_175(),
	OpCodes_t3193932334_StaticFields::get_offset_of_Conv_U1_176(),
	OpCodes_t3193932334_StaticFields::get_offset_of_Conv_I_177(),
	OpCodes_t3193932334_StaticFields::get_offset_of_Conv_Ovf_I_178(),
	OpCodes_t3193932334_StaticFields::get_offset_of_Conv_Ovf_U_179(),
	OpCodes_t3193932334_StaticFields::get_offset_of_Add_Ovf_180(),
	OpCodes_t3193932334_StaticFields::get_offset_of_Add_Ovf_Un_181(),
	OpCodes_t3193932334_StaticFields::get_offset_of_Mul_Ovf_182(),
	OpCodes_t3193932334_StaticFields::get_offset_of_Mul_Ovf_Un_183(),
	OpCodes_t3193932334_StaticFields::get_offset_of_Sub_Ovf_184(),
	OpCodes_t3193932334_StaticFields::get_offset_of_Sub_Ovf_Un_185(),
	OpCodes_t3193932334_StaticFields::get_offset_of_Endfinally_186(),
	OpCodes_t3193932334_StaticFields::get_offset_of_Leave_187(),
	OpCodes_t3193932334_StaticFields::get_offset_of_Leave_S_188(),
	OpCodes_t3193932334_StaticFields::get_offset_of_Stind_I_189(),
	OpCodes_t3193932334_StaticFields::get_offset_of_Conv_U_190(),
	OpCodes_t3193932334_StaticFields::get_offset_of_Prefix7_191(),
	OpCodes_t3193932334_StaticFields::get_offset_of_Prefix6_192(),
	OpCodes_t3193932334_StaticFields::get_offset_of_Prefix5_193(),
	OpCodes_t3193932334_StaticFields::get_offset_of_Prefix4_194(),
	OpCodes_t3193932334_StaticFields::get_offset_of_Prefix3_195(),
	OpCodes_t3193932334_StaticFields::get_offset_of_Prefix2_196(),
	OpCodes_t3193932334_StaticFields::get_offset_of_Prefix1_197(),
	OpCodes_t3193932334_StaticFields::get_offset_of_Prefixref_198(),
	OpCodes_t3193932334_StaticFields::get_offset_of_Arglist_199(),
	OpCodes_t3193932334_StaticFields::get_offset_of_Ceq_200(),
	OpCodes_t3193932334_StaticFields::get_offset_of_Cgt_201(),
	OpCodes_t3193932334_StaticFields::get_offset_of_Cgt_Un_202(),
	OpCodes_t3193932334_StaticFields::get_offset_of_Clt_203(),
	OpCodes_t3193932334_StaticFields::get_offset_of_Clt_Un_204(),
	OpCodes_t3193932334_StaticFields::get_offset_of_Ldftn_205(),
	OpCodes_t3193932334_StaticFields::get_offset_of_Ldvirtftn_206(),
	OpCodes_t3193932334_StaticFields::get_offset_of_Ldarg_207(),
	OpCodes_t3193932334_StaticFields::get_offset_of_Ldarga_208(),
	OpCodes_t3193932334_StaticFields::get_offset_of_Starg_209(),
	OpCodes_t3193932334_StaticFields::get_offset_of_Ldloc_210(),
	OpCodes_t3193932334_StaticFields::get_offset_of_Ldloca_211(),
	OpCodes_t3193932334_StaticFields::get_offset_of_Stloc_212(),
	OpCodes_t3193932334_StaticFields::get_offset_of_Localloc_213(),
	OpCodes_t3193932334_StaticFields::get_offset_of_Endfilter_214(),
	OpCodes_t3193932334_StaticFields::get_offset_of_Unaligned_215(),
	OpCodes_t3193932334_StaticFields::get_offset_of_Volatile_216(),
	OpCodes_t3193932334_StaticFields::get_offset_of_Tailcall_217(),
	OpCodes_t3193932334_StaticFields::get_offset_of_Initobj_218(),
	OpCodes_t3193932334_StaticFields::get_offset_of_Constrained_219(),
	OpCodes_t3193932334_StaticFields::get_offset_of_Cpblk_220(),
	OpCodes_t3193932334_StaticFields::get_offset_of_Initblk_221(),
	OpCodes_t3193932334_StaticFields::get_offset_of_Rethrow_222(),
	OpCodes_t3193932334_StaticFields::get_offset_of_Sizeof_223(),
	OpCodes_t3193932334_StaticFields::get_offset_of_Refanytype_224(),
	OpCodes_t3193932334_StaticFields::get_offset_of_Readonly_225(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize304 = { sizeof (ParameterBuilder_t990320222), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable304[3] = 
{
	ParameterBuilder_t990320222::get_offset_of_name_0(),
	ParameterBuilder_t990320222::get_offset_of_attrs_1(),
	ParameterBuilder_t990320222::get_offset_of_position_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize305 = { sizeof (StackBehaviour_t1515708369)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable305[30] = 
{
	StackBehaviour_t1515708369::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize306 = { sizeof (TypeBuilder_t3978936164), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable306[16] = 
{
	TypeBuilder_t3978936164::get_offset_of_tname_8(),
	TypeBuilder_t3978936164::get_offset_of_nspace_9(),
	TypeBuilder_t3978936164::get_offset_of_parent_10(),
	TypeBuilder_t3978936164::get_offset_of_nesting_type_11(),
	TypeBuilder_t3978936164::get_offset_of_interfaces_12(),
	TypeBuilder_t3978936164::get_offset_of_num_methods_13(),
	TypeBuilder_t3978936164::get_offset_of_methods_14(),
	TypeBuilder_t3978936164::get_offset_of_ctors_15(),
	TypeBuilder_t3978936164::get_offset_of_fields_16(),
	TypeBuilder_t3978936164::get_offset_of_attrs_17(),
	TypeBuilder_t3978936164::get_offset_of_pmodule_18(),
	TypeBuilder_t3978936164::get_offset_of_generic_params_19(),
	TypeBuilder_t3978936164::get_offset_of_created_20(),
	TypeBuilder_t3978936164::get_offset_of_fullname_21(),
	TypeBuilder_t3978936164::get_offset_of_createTypeCalled_22(),
	TypeBuilder_t3978936164::get_offset_of_underlying_type_23(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize307 = { sizeof (UnmanagedMarshal_t1636591883), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable307[9] = 
{
	UnmanagedMarshal_t1636591883::get_offset_of_count_0(),
	UnmanagedMarshal_t1636591883::get_offset_of_t_1(),
	UnmanagedMarshal_t1636591883::get_offset_of_tbase_2(),
	UnmanagedMarshal_t1636591883::get_offset_of_guid_3(),
	UnmanagedMarshal_t1636591883::get_offset_of_mcookie_4(),
	UnmanagedMarshal_t1636591883::get_offset_of_marshaltype_5(),
	UnmanagedMarshal_t1636591883::get_offset_of_marshaltyperef_6(),
	UnmanagedMarshal_t1636591883::get_offset_of_param_num_7(),
	UnmanagedMarshal_t1636591883::get_offset_of_has_size_8(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize308 = { sizeof (AmbiguousMatchException_t2856243346), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize309 = { sizeof (Assembly_t1171681272), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable309[10] = 
{
	Assembly_t1171681272::get_offset_of__mono_assembly_0(),
	Assembly_t1171681272::get_offset_of_resolve_event_holder_1(),
	Assembly_t1171681272::get_offset_of__evidence_2(),
	Assembly_t1171681272::get_offset_of__minimum_3(),
	Assembly_t1171681272::get_offset_of__optional_4(),
	Assembly_t1171681272::get_offset_of__refuse_5(),
	Assembly_t1171681272::get_offset_of__granted_6(),
	Assembly_t1171681272::get_offset_of__denied_7(),
	Assembly_t1171681272::get_offset_of_fromByteArray_8(),
	Assembly_t1171681272::get_offset_of_assemblyName_9(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize310 = { sizeof (ResolveEventHolder_t1910797677), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize311 = { sizeof (AssemblyCompanyAttribute_t1934384631), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable311[1] = 
{
	AssemblyCompanyAttribute_t1934384631::get_offset_of_name_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize312 = { sizeof (AssemblyConfigurationAttribute_t2036680737), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable312[1] = 
{
	AssemblyConfigurationAttribute_t2036680737::get_offset_of_name_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize313 = { sizeof (AssemblyCopyrightAttribute_t1802899732), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable313[1] = 
{
	AssemblyCopyrightAttribute_t1802899732::get_offset_of_name_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize314 = { sizeof (AssemblyDefaultAliasAttribute_t50285372), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable314[1] = 
{
	AssemblyDefaultAliasAttribute_t50285372::get_offset_of_name_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize315 = { sizeof (AssemblyDelaySignAttribute_t305434571), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable315[1] = 
{
	AssemblyDelaySignAttribute_t305434571::get_offset_of_delay_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize316 = { sizeof (AssemblyDescriptionAttribute_t3258087278), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable316[1] = 
{
	AssemblyDescriptionAttribute_t3258087278::get_offset_of_name_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize317 = { sizeof (AssemblyFileVersionAttribute_t3318548662), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable317[1] = 
{
	AssemblyFileVersionAttribute_t3318548662::get_offset_of_name_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize318 = { sizeof (AssemblyInformationalVersionAttribute_t3026773960), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable318[1] = 
{
	AssemblyInformationalVersionAttribute_t3026773960::get_offset_of_name_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize319 = { sizeof (AssemblyKeyFileAttribute_t1029188607), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable319[1] = 
{
	AssemblyKeyFileAttribute_t1029188607::get_offset_of_name_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize320 = { sizeof (AssemblyName_t4166692419), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable320[15] = 
{
	AssemblyName_t4166692419::get_offset_of_name_0(),
	AssemblyName_t4166692419::get_offset_of_codebase_1(),
	AssemblyName_t4166692419::get_offset_of_major_2(),
	AssemblyName_t4166692419::get_offset_of_minor_3(),
	AssemblyName_t4166692419::get_offset_of_build_4(),
	AssemblyName_t4166692419::get_offset_of_revision_5(),
	AssemblyName_t4166692419::get_offset_of_cultureinfo_6(),
	AssemblyName_t4166692419::get_offset_of_flags_7(),
	AssemblyName_t4166692419::get_offset_of_hashalg_8(),
	AssemblyName_t4166692419::get_offset_of_keypair_9(),
	AssemblyName_t4166692419::get_offset_of_publicKey_10(),
	AssemblyName_t4166692419::get_offset_of_keyToken_11(),
	AssemblyName_t4166692419::get_offset_of_versioncompat_12(),
	AssemblyName_t4166692419::get_offset_of_version_13(),
	AssemblyName_t4166692419::get_offset_of_processor_architecture_14(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize321 = { sizeof (AssemblyNameFlags_t851079174)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable321[6] = 
{
	AssemblyNameFlags_t851079174::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize322 = { sizeof (AssemblyProductAttribute_t1008180663), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable322[1] = 
{
	AssemblyProductAttribute_t1008180663::get_offset_of_name_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize323 = { sizeof (AssemblyTitleAttribute_t932561627), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable323[1] = 
{
	AssemblyTitleAttribute_t932561627::get_offset_of_name_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize324 = { sizeof (AssemblyTrademarkAttribute_t2378224240), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable324[1] = 
{
	AssemblyTrademarkAttribute_t2378224240::get_offset_of_name_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize325 = { sizeof (Binder_t3726367644), -1, sizeof(Binder_t3726367644_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable325[1] = 
{
	Binder_t3726367644_StaticFields::get_offset_of_default_binder_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize326 = { sizeof (Default_t1995776279), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize327 = { sizeof (BindingFlags_t2168392345)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable327[21] = 
{
	BindingFlags_t2168392345::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize328 = { sizeof (CallingConventions_t1967437177)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable328[6] = 
{
	CallingConventions_t1967437177::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize329 = { sizeof (ConstructorInfo_t4006886990), -1, sizeof(ConstructorInfo_t4006886990_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable329[2] = 
{
	ConstructorInfo_t4006886990_StaticFields::get_offset_of_ConstructorName_0(),
	ConstructorInfo_t4006886990_StaticFields::get_offset_of_TypeConstructorName_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize330 = { sizeof (CustomAttributeData_t3867098225), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable330[3] = 
{
	CustomAttributeData_t3867098225::get_offset_of_ctorInfo_0(),
	CustomAttributeData_t3867098225::get_offset_of_ctorArgs_1(),
	CustomAttributeData_t3867098225::get_offset_of_namedArgs_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize331 = { sizeof (CustomAttributeNamedArgument_t560629930)+ sizeof (RuntimeObject), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable331[2] = 
{
	CustomAttributeNamedArgument_t560629930::get_offset_of_typedArgument_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	CustomAttributeNamedArgument_t560629930::get_offset_of_memberInfo_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize332 = { sizeof (CustomAttributeTypedArgument_t4183764089)+ sizeof (RuntimeObject), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable332[2] = 
{
	CustomAttributeTypedArgument_t4183764089::get_offset_of_argumentType_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	CustomAttributeTypedArgument_t4183764089::get_offset_of_value_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize333 = { sizeof (EventAttributes_t3558573833)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable333[5] = 
{
	EventAttributes_t3558573833::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize334 = { sizeof (EventInfo_t), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable334[1] = 
{
	EventInfo_t::get_offset_of_cached_add_event_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize335 = { sizeof (AddEventAdapter_t2464420954), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize336 = { sizeof (FieldAttributes_t2195373685)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable336[20] = 
{
	FieldAttributes_t2195373685::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize337 = { sizeof (FieldInfo_t), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize338 = { sizeof (MemberInfoSerializationHolder_t3431409113), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable338[5] = 
{
	MemberInfoSerializationHolder_t3431409113::get_offset_of__memberName_0(),
	MemberInfoSerializationHolder_t3431409113::get_offset_of__memberSignature_1(),
	MemberInfoSerializationHolder_t3431409113::get_offset_of__memberType_2(),
	MemberInfoSerializationHolder_t3431409113::get_offset_of__reflectedType_3(),
	MemberInfoSerializationHolder_t3431409113::get_offset_of__genericArguments_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize339 = { sizeof (MemberTypes_t982763627)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable339[10] = 
{
	MemberTypes_t982763627::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize340 = { sizeof (MethodAttributes_t1250134318)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable340[25] = 
{
	MethodAttributes_t1250134318::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize341 = { sizeof (MethodBase_t2510322194), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize342 = { sizeof (MethodImplAttributes_t3316424197)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable342[15] = 
{
	MethodImplAttributes_t3316424197::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize343 = { sizeof (MethodInfo_t), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize344 = { sizeof (Missing_t1084945390), -1, sizeof(Missing_t1084945390_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable344[1] = 
{
	Missing_t1084945390_StaticFields::get_offset_of_Value_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize345 = { sizeof (Module_t1344277516), -1, sizeof(Module_t1344277516_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable345[10] = 
{
	0,
	Module_t1344277516_StaticFields::get_offset_of_FilterTypeName_1(),
	Module_t1344277516_StaticFields::get_offset_of_FilterTypeNameIgnoreCase_2(),
	Module_t1344277516::get_offset_of__impl_3(),
	Module_t1344277516::get_offset_of_assembly_4(),
	Module_t1344277516::get_offset_of_fqname_5(),
	Module_t1344277516::get_offset_of_name_6(),
	Module_t1344277516::get_offset_of_scopename_7(),
	Module_t1344277516::get_offset_of_is_resource_8(),
	Module_t1344277516::get_offset_of_token_9(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize346 = { sizeof (MonoEventInfo_t3402446286)+ sizeof (RuntimeObject), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable346[8] = 
{
	MonoEventInfo_t3402446286::get_offset_of_declaring_type_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	MonoEventInfo_t3402446286::get_offset_of_reflected_type_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	MonoEventInfo_t3402446286::get_offset_of_name_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	MonoEventInfo_t3402446286::get_offset_of_add_method_3() + static_cast<int32_t>(sizeof(RuntimeObject)),
	MonoEventInfo_t3402446286::get_offset_of_remove_method_4() + static_cast<int32_t>(sizeof(RuntimeObject)),
	MonoEventInfo_t3402446286::get_offset_of_raise_method_5() + static_cast<int32_t>(sizeof(RuntimeObject)),
	MonoEventInfo_t3402446286::get_offset_of_attrs_6() + static_cast<int32_t>(sizeof(RuntimeObject)),
	MonoEventInfo_t3402446286::get_offset_of_other_methods_7() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize347 = { sizeof (MonoEvent_t), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable347[2] = 
{
	MonoEvent_t::get_offset_of_klass_1(),
	MonoEvent_t::get_offset_of_handle_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize348 = { sizeof (MonoField_t), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable348[5] = 
{
	MonoField_t::get_offset_of_klass_0(),
	MonoField_t::get_offset_of_fhandle_1(),
	MonoField_t::get_offset_of_name_2(),
	MonoField_t::get_offset_of_type_3(),
	MonoField_t::get_offset_of_attrs_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize349 = { sizeof (MonoGenericMethod_t), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize350 = { sizeof (MonoGenericCMethod_t3197725446), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize351 = { sizeof (MonoMethodInfo_t1827472430)+ sizeof (RuntimeObject), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable351[5] = 
{
	MonoMethodInfo_t1827472430::get_offset_of_parent_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	MonoMethodInfo_t1827472430::get_offset_of_ret_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	MonoMethodInfo_t1827472430::get_offset_of_attrs_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	MonoMethodInfo_t1827472430::get_offset_of_iattrs_3() + static_cast<int32_t>(sizeof(RuntimeObject)),
	MonoMethodInfo_t1827472430::get_offset_of_callconv_4() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize352 = { sizeof (MonoMethod_t), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable352[3] = 
{
	MonoMethod_t::get_offset_of_mhandle_0(),
	MonoMethod_t::get_offset_of_name_1(),
	MonoMethod_t::get_offset_of_reftype_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize353 = { sizeof (MonoCMethod_t305854846), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable353[3] = 
{
	MonoCMethod_t305854846::get_offset_of_mhandle_2(),
	MonoCMethod_t305854846::get_offset_of_name_3(),
	MonoCMethod_t305854846::get_offset_of_reftype_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize354 = { sizeof (MonoPropertyInfo_t4194409498)+ sizeof (RuntimeObject), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable354[5] = 
{
	MonoPropertyInfo_t4194409498::get_offset_of_parent_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	MonoPropertyInfo_t4194409498::get_offset_of_name_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	MonoPropertyInfo_t4194409498::get_offset_of_get_method_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	MonoPropertyInfo_t4194409498::get_offset_of_set_method_3() + static_cast<int32_t>(sizeof(RuntimeObject)),
	MonoPropertyInfo_t4194409498::get_offset_of_attrs_4() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize355 = { sizeof (PInfo_t3558051654)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable355[7] = 
{
	PInfo_t3558051654::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize356 = { sizeof (MonoProperty_t), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable356[5] = 
{
	MonoProperty_t::get_offset_of_klass_0(),
	MonoProperty_t::get_offset_of_prop_1(),
	MonoProperty_t::get_offset_of_info_2(),
	MonoProperty_t::get_offset_of_cached_3(),
	MonoProperty_t::get_offset_of_cached_getter_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize357 = { sizeof (GetterAdapter_t1212170220), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize358 = { 0, 0, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize359 = { 0, 0, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize360 = { sizeof (ParameterAttributes_t1959180112)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable360[12] = 
{
	ParameterAttributes_t1959180112::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize361 = { sizeof (ParameterInfo_t4060886943), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable361[7] = 
{
	ParameterInfo_t4060886943::get_offset_of_ClassImpl_0(),
	ParameterInfo_t4060886943::get_offset_of_DefaultValueImpl_1(),
	ParameterInfo_t4060886943::get_offset_of_MemberImpl_2(),
	ParameterInfo_t4060886943::get_offset_of_NameImpl_3(),
	ParameterInfo_t4060886943::get_offset_of_PositionImpl_4(),
	ParameterInfo_t4060886943::get_offset_of_AttrsImpl_5(),
	ParameterInfo_t4060886943::get_offset_of_marshalAs_6(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize362 = { sizeof (ParameterModifier_t1155932803)+ sizeof (RuntimeObject), sizeof(ParameterModifier_t1155932803_marshaled_pinvoke), 0, 0 };
extern const int32_t g_FieldOffsetTable362[1] = 
{
	ParameterModifier_t1155932803::get_offset_of__byref_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize363 = { sizeof (Pointer_t3014290161), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable363[2] = 
{
	Pointer_t3014290161::get_offset_of_data_0(),
	Pointer_t3014290161::get_offset_of_type_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize364 = { sizeof (ProcessorArchitecture_t3223967941)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable364[6] = 
{
	ProcessorArchitecture_t3223967941::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize365 = { sizeof (PropertyAttributes_t875293808)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable365[9] = 
{
	PropertyAttributes_t875293808::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize366 = { sizeof (PropertyInfo_t), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize367 = { sizeof (StrongNameKeyPair_t1633660243), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable367[4] = 
{
	StrongNameKeyPair_t1633660243::get_offset_of__publicKey_0(),
	StrongNameKeyPair_t1633660243::get_offset_of__keyPairContainer_1(),
	StrongNameKeyPair_t1633660243::get_offset_of__keyPairExported_2(),
	StrongNameKeyPair_t1633660243::get_offset_of__keyPairArray_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize368 = { sizeof (TargetException_t4384542), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize369 = { sizeof (TargetInvocationException_t4166835084), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize370 = { sizeof (TargetParameterCountException_t2278282655), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize371 = { sizeof (TypeAttributes_t3214111652)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable371[32] = 
{
	TypeAttributes_t3214111652::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize372 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize373 = { sizeof (NeutralResourcesLanguageAttribute_t3508866279), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable373[1] = 
{
	NeutralResourcesLanguageAttribute_t3508866279::get_offset_of_culture_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize374 = { sizeof (ResourceManager_t2010066326), -1, sizeof(ResourceManager_t2010066326_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable374[5] = 
{
	ResourceManager_t2010066326_StaticFields::get_offset_of_ResourceCache_0(),
	ResourceManager_t2010066326_StaticFields::get_offset_of_NonExistent_1(),
	ResourceManager_t2010066326_StaticFields::get_offset_of_HeaderVersionNumber_2(),
	ResourceManager_t2010066326_StaticFields::get_offset_of_MagicNumber_3(),
	ResourceManager_t2010066326::get_offset_of_resourceSetType_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize375 = { sizeof (PredefinedResourceType_t1445429601)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable375[21] = 
{
	PredefinedResourceType_t1445429601::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize376 = { sizeof (ResourceReader_t1960966370), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable376[13] = 
{
	ResourceReader_t1960966370::get_offset_of_reader_0(),
	ResourceReader_t1960966370::get_offset_of_readerLock_1(),
	ResourceReader_t1960966370::get_offset_of_formatter_2(),
	ResourceReader_t1960966370::get_offset_of_resourceCount_3(),
	ResourceReader_t1960966370::get_offset_of_typeCount_4(),
	ResourceReader_t1960966370::get_offset_of_typeNames_5(),
	ResourceReader_t1960966370::get_offset_of_hashes_6(),
	ResourceReader_t1960966370::get_offset_of_infos_7(),
	ResourceReader_t1960966370::get_offset_of_dataSectionOffset_8(),
	ResourceReader_t1960966370::get_offset_of_nameSectionOffset_9(),
	ResourceReader_t1960966370::get_offset_of_resource_ver_10(),
	ResourceReader_t1960966370::get_offset_of_cache_11(),
	ResourceReader_t1960966370::get_offset_of_cache_lock_12(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize377 = { sizeof (ResourceInfo_t2545680357)+ sizeof (RuntimeObject), sizeof(ResourceInfo_t2545680357_marshaled_pinvoke), 0, 0 };
extern const int32_t g_FieldOffsetTable377[3] = 
{
	ResourceInfo_t2545680357::get_offset_of_ValuePosition_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	ResourceInfo_t2545680357::get_offset_of_ResourceName_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	ResourceInfo_t2545680357::get_offset_of_TypeIndex_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize378 = { sizeof (ResourceCacheItem_t1485375503)+ sizeof (RuntimeObject), sizeof(ResourceCacheItem_t1485375503_marshaled_pinvoke), 0, 0 };
extern const int32_t g_FieldOffsetTable378[2] = 
{
	ResourceCacheItem_t1485375503::get_offset_of_ResourceName_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	ResourceCacheItem_t1485375503::get_offset_of_ResourceValue_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize379 = { sizeof (ResourceEnumerator_t7886450), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable379[3] = 
{
	ResourceEnumerator_t7886450::get_offset_of_reader_0(),
	ResourceEnumerator_t7886450::get_offset_of_index_1(),
	ResourceEnumerator_t7886450::get_offset_of_finished_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize380 = { sizeof (ResourceSet_t3257676901), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable380[4] = 
{
	ResourceSet_t3257676901::get_offset_of_Reader_0(),
	ResourceSet_t3257676901::get_offset_of_Table_1(),
	ResourceSet_t3257676901::get_offset_of_resources_read_2(),
	ResourceSet_t3257676901::get_offset_of_disposed_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize381 = { sizeof (RuntimeResourceSet_t2011574961), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize382 = { sizeof (SatelliteContractVersionAttribute_t1427845223), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable382[1] = 
{
	SatelliteContractVersionAttribute_t1427845223::get_offset_of_ver_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize383 = { sizeof (CompilationRelaxations_t3750021707)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable383[2] = 
{
	CompilationRelaxations_t3750021707::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize384 = { sizeof (CompilationRelaxationsAttribute_t3005882814), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable384[1] = 
{
	CompilationRelaxationsAttribute_t3005882814::get_offset_of_relax_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize385 = { sizeof (DefaultDependencyAttribute_t2379702222), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable385[1] = 
{
	DefaultDependencyAttribute_t2379702222::get_offset_of_hint_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize386 = { sizeof (IsVolatile_t1432184093), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize387 = { sizeof (LoadHint_t2935231416)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable387[4] = 
{
	LoadHint_t2935231416::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize388 = { sizeof (StringFreezingAttribute_t511352540), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize389 = { sizeof (Cer_t3746393490)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable389[4] = 
{
	Cer_t3746393490::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize390 = { sizeof (Consistency_t2999158753)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable390[5] = 
{
	Consistency_t2999158753::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize391 = { sizeof (CriticalFinalizerObject_t339194016), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize392 = { sizeof (ReliabilityContractAttribute_t1736779792), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable392[2] = 
{
	ReliabilityContractAttribute_t1736779792::get_offset_of_consistency_0(),
	ReliabilityContractAttribute_t1736779792::get_offset_of_cer_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize393 = { sizeof (ActivationArguments_t4182384294), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize394 = { sizeof (COMException_t2702222534), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize395 = { sizeof (CallingConvention_t2634007872)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable395[6] = 
{
	CallingConvention_t2634007872::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize396 = { sizeof (CharSet_t3790924677)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable396[5] = 
{
	CharSet_t3790924677::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize397 = { sizeof (ClassInterfaceAttribute_t1419534981), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable397[1] = 
{
	ClassInterfaceAttribute_t1419534981::get_offset_of_ciType_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize398 = { sizeof (ClassInterfaceType_t535385316)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable398[4] = 
{
	ClassInterfaceType_t535385316::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize399 = { sizeof (ComDefaultInterfaceAttribute_t990492726), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable399[1] = 
{
	ComDefaultInterfaceAttribute_t990492726::get_offset_of__type_0(),
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
