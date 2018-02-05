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


// MoonSharp.Interpreter.Diagnostics.PerformanceResult
struct PerformanceResult_t2520541359;
// MoonSharp.Interpreter.Execution.VM.ByteCode
struct ByteCode_t218744739;
// System.String
struct String_t;
// MoonSharp.Interpreter.DynValue
struct DynValue_t548152748;
// MoonSharp.Interpreter.SymbolRef
struct SymbolRef_t2926262290;
// MoonSharp.Interpreter.Debugging.SourceRef
struct SourceRef_t3386753787;
// System.String[]
struct StringU5BU5D_t1281789340;
// MoonSharp.Interpreter.Script
struct Script_t154231481;
// System.Collections.Generic.List`1<MoonSharp.Interpreter.Debugging.SourceRef>
struct List_1_t563861233;
// MoonSharp.Interpreter.ScriptExecutionContext
struct ScriptExecutionContext_t1593241952;
// MoonSharp.Interpreter.Execution.VM.Processor
struct Processor_t733572553;
// MoonSharp.Interpreter.DynValue[]
struct DynValueU5BU5D_t2098401829;
// MoonSharp.Interpreter.Tree.Expressions.DynamicExprExpression
struct DynamicExprExpression_t1007256600;
// System.Collections.Generic.List`1<MoonSharp.Interpreter.Execution.Scopes.BuildTimeScopeFrame>
struct List_1_t705532072;
// System.Collections.Generic.List`1<MoonSharp.Interpreter.Execution.IClosureBuilder>
struct List_1_t1335259083;
// System.Collections.Generic.List`1<MoonSharp.Interpreter.Execution.Scopes.BuildTimeScopeBlock>
struct List_1_t1410724120;
// MoonSharp.Interpreter.Execution.RuntimeScopeBlock
struct RuntimeScopeBlock_t1116835061;
// System.Collections.Generic.Dictionary`2<System.String,MoonSharp.Interpreter.SymbolRef>
struct Dictionary_2_t2711518589;
// System.Collections.Generic.List`1<MoonSharp.Interpreter.Tree.Statements.GotoStatement>
struct List_1_t4083271947;
// System.Collections.Generic.Dictionary`2<System.String,MoonSharp.Interpreter.Tree.Statements.LabelStatement>
struct Dictionary_2_t512568844;
// MoonSharp.Interpreter.Execution.Scopes.BuildTimeScopeBlock
struct BuildTimeScopeBlock_t4233616674;
// MoonSharp.Interpreter.Execution.RuntimeScopeFrame
struct RuntimeScopeFrame_t1870046025;
// MoonSharp.Interpreter.DataStructs.FastStack`1<MoonSharp.Interpreter.Execution.ILoop>
struct FastStack_1_t1449454515;
// MoonSharp.Interpreter.Diagnostics.PerformanceCounters.IPerformanceStopwatch[]
struct IPerformanceStopwatchU5BU5D_t2218300581;
// System.Collections.Generic.List`1<MoonSharp.Interpreter.SymbolRef>
struct List_1_t103369736;
// MoonSharp.Interpreter.CallbackFunction
struct CallbackFunction_t350661728;
// System.Diagnostics.Stopwatch
struct Stopwatch_t305734070;
// MoonSharp.Interpreter.Diagnostics.PerformanceCounters.GlobalPerformanceStopwatch
struct GlobalPerformanceStopwatch_t2074566713;
// MoonSharp.Interpreter.Execution.BuildTimeScope
struct BuildTimeScope_t3047810466;
// MoonSharp.Interpreter.Debugging.SourceCode
struct SourceCode_t1392738632;
// MoonSharp.Interpreter.Tree.Lexer
struct Lexer_t530427525;
// MoonSharp.Interpreter.Interop.BasicDescriptors.IMemberDescriptor
struct IMemberDescriptor_t3364839136;
// System.Collections.Generic.IEnumerator`1<MoonSharp.Interpreter.DynValue>
struct IEnumerator_1_t980723216;
// MoonSharp.Interpreter.Coroutine
struct Coroutine_t2598270305;
// System.Collections.Generic.Dictionary`2<System.String,MoonSharp.Interpreter.Interop.BasicDescriptors.IMemberDescriptor>
struct Dictionary_2_t3150095435;
// System.Type
struct Type_t;
// System.Collections.Generic.Dictionary`2<System.String,System.Int32>
struct Dictionary_2_t2736202052;
// System.Collections.Generic.IList`1<MoonSharp.Interpreter.DynValue>
struct IList_1_t2363472531;
// System.IntPtr[]
struct IntPtrU5BU5D_t4013366056;
// System.Collections.IDictionary
struct IDictionary_t1363984059;
// MoonSharp.Interpreter.Interop.BasicDescriptors.DispatchingUserDataDescriptor
struct DispatchingUserDataDescriptor_t4246933607;
// System.Func`2<MoonSharp.Interpreter.SymbolRef,System.String>
struct Func_2_t1739109373;
// System.Collections.Generic.List`1<MoonSharp.Interpreter.Execution.VM.Instruction>
struct List_1_t467784671;
// MoonSharp.Interpreter.Execution.LoopTracker
struct LoopTracker_t2759355568;
// System.Char[]
struct CharU5BU5D_t3528271667;
// System.Collections.Generic.LinkedList`1<MoonSharp.Interpreter.TablePair>
struct LinkedList_1_t298211720;
// MoonSharp.Interpreter.DataStructs.LinkedListIndex`2<MoonSharp.Interpreter.DynValue,MoonSharp.Interpreter.TablePair>
struct LinkedListIndex_2_t3538162670;
// MoonSharp.Interpreter.DataStructs.LinkedListIndex`2<System.String,MoonSharp.Interpreter.TablePair>
struct LinkedListIndex_2_t2721550181;
// MoonSharp.Interpreter.DataStructs.LinkedListIndex`2<System.Int32,MoonSharp.Interpreter.TablePair>
struct LinkedListIndex_2_t1825007213;
// System.Func`2<MoonSharp.Interpreter.TablePair,MoonSharp.Interpreter.TablePair>
struct Func_2_t57849402;
// System.Func`2<MoonSharp.Interpreter.TablePair,MoonSharp.Interpreter.DynValue>
struct Func_2_t3442403735;
// MoonSharp.Interpreter.Interop.IUserDataDescriptor
struct IUserDataDescriptor_t2334867142;
// System.Func`2<System.Collections.Generic.KeyValuePair`2<System.Type,MoonSharp.Interpreter.Interop.IUserDataDescriptor>,System.Type>
struct Func_2_t1120322037;
// MoonSharp.Interpreter.Execution.ClosureContext
struct ClosureContext_t772623181;
// System.Collections.Generic.IList`1<MoonSharp.Interpreter.Debugging.WatchItem>
struct IList_1_t3606082931;
// System.Void
struct Void_t1185182177;
// MoonSharp.Interpreter.Tree.Token
struct Token_t2495393407;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.DelegateData
struct DelegateData_t1677132599;
// MoonSharp.Interpreter.DataStructs.FastStack`1<MoonSharp.Interpreter.DynValue>
struct FastStack_1_t3979991217;
// MoonSharp.Interpreter.DataStructs.FastStack`1<MoonSharp.Interpreter.Execution.VM.CallStackItem>
struct FastStack_1_t1230810114;
// System.Collections.Generic.List`1<MoonSharp.Interpreter.Execution.VM.Processor>
struct List_1_t2205647295;
// MoonSharp.Interpreter.Table
struct Table_t1500596475;
// MoonSharp.Interpreter.Execution.VM.Processor/DebugContext
struct DebugContext_t2025408788;
// System.Func`2<MoonSharp.Interpreter.Execution.VM.Processor,MoonSharp.Interpreter.Debugging.WatchItem>
struct Func_2_t2363718101;
// System.Int32[]
struct Int32U5BU5D_t385246372;
// System.Func`3<MoonSharp.Interpreter.ScriptExecutionContext,MoonSharp.Interpreter.CallbackArguments,MoonSharp.Interpreter.DynValue>
struct Func_3_t241411922;
// MoonSharp.Interpreter.Debugging.IDebugger
struct IDebugger_t1373165261;
// MoonSharp.Interpreter.SymbolRef[]
struct SymbolRefU5BU5D_t3368573799;
// System.Func`2<MoonSharp.Interpreter.DynValue,System.Boolean>
struct Func_2_t3013741975;
// System.Func`2<MoonSharp.Interpreter.DynValue,System.String>
struct Func_2_t468937403;
// System.Object[]
struct ObjectU5BU5D_t2843939325;
// System.IAsyncResult
struct IAsyncResult_t767004451;
// System.AsyncCallback
struct AsyncCallback_t3962456242;




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
#ifndef DUMMYPERFORMANCESTOPWATCH_T1084872175_H
#define DUMMYPERFORMANCESTOPWATCH_T1084872175_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MoonSharp.Interpreter.Diagnostics.PerformanceCounters.DummyPerformanceStopwatch
struct  DummyPerformanceStopwatch_t1084872175  : public RuntimeObject
{
public:
	// MoonSharp.Interpreter.Diagnostics.PerformanceResult MoonSharp.Interpreter.Diagnostics.PerformanceCounters.DummyPerformanceStopwatch::m_Result
	PerformanceResult_t2520541359 * ___m_Result_1;

public:
	inline static int32_t get_offset_of_m_Result_1() { return static_cast<int32_t>(offsetof(DummyPerformanceStopwatch_t1084872175, ___m_Result_1)); }
	inline PerformanceResult_t2520541359 * get_m_Result_1() const { return ___m_Result_1; }
	inline PerformanceResult_t2520541359 ** get_address_of_m_Result_1() { return &___m_Result_1; }
	inline void set_m_Result_1(PerformanceResult_t2520541359 * value)
	{
		___m_Result_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_Result_1), value);
	}
};

struct DummyPerformanceStopwatch_t1084872175_StaticFields
{
public:
	// MoonSharp.Interpreter.Diagnostics.PerformanceCounters.DummyPerformanceStopwatch MoonSharp.Interpreter.Diagnostics.PerformanceCounters.DummyPerformanceStopwatch::Instance
	DummyPerformanceStopwatch_t1084872175 * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(DummyPerformanceStopwatch_t1084872175_StaticFields, ___Instance_0)); }
	inline DummyPerformanceStopwatch_t1084872175 * get_Instance_0() const { return ___Instance_0; }
	inline DummyPerformanceStopwatch_t1084872175 ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(DummyPerformanceStopwatch_t1084872175 * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((&___Instance_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DUMMYPERFORMANCESTOPWATCH_T1084872175_H
#ifndef SOURCECODESTACKGUARD_T2746434502_H
#define SOURCECODESTACKGUARD_T2746434502_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MoonSharp.Interpreter.Execution.VM.ByteCode/SourceCodeStackGuard
struct  SourceCodeStackGuard_t2746434502  : public RuntimeObject
{
public:
	// MoonSharp.Interpreter.Execution.VM.ByteCode MoonSharp.Interpreter.Execution.VM.ByteCode/SourceCodeStackGuard::m_Bc
	ByteCode_t218744739 * ___m_Bc_0;

public:
	inline static int32_t get_offset_of_m_Bc_0() { return static_cast<int32_t>(offsetof(SourceCodeStackGuard_t2746434502, ___m_Bc_0)); }
	inline ByteCode_t218744739 * get_m_Bc_0() const { return ___m_Bc_0; }
	inline ByteCode_t218744739 ** get_address_of_m_Bc_0() { return &___m_Bc_0; }
	inline void set_m_Bc_0(ByteCode_t218744739 * value)
	{
		___m_Bc_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_Bc_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SOURCECODESTACKGUARD_T2746434502_H
#ifndef WATCHITEM_T1790763148_H
#define WATCHITEM_T1790763148_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MoonSharp.Interpreter.Debugging.WatchItem
struct  WatchItem_t1790763148  : public RuntimeObject
{
public:
	// System.Int32 MoonSharp.Interpreter.Debugging.WatchItem::<Address>k__BackingField
	int32_t ___U3CAddressU3Ek__BackingField_0;
	// System.Int32 MoonSharp.Interpreter.Debugging.WatchItem::<BasePtr>k__BackingField
	int32_t ___U3CBasePtrU3Ek__BackingField_1;
	// System.Int32 MoonSharp.Interpreter.Debugging.WatchItem::<RetAddress>k__BackingField
	int32_t ___U3CRetAddressU3Ek__BackingField_2;
	// System.String MoonSharp.Interpreter.Debugging.WatchItem::<Name>k__BackingField
	String_t* ___U3CNameU3Ek__BackingField_3;
	// MoonSharp.Interpreter.DynValue MoonSharp.Interpreter.Debugging.WatchItem::<Value>k__BackingField
	DynValue_t548152748 * ___U3CValueU3Ek__BackingField_4;
	// MoonSharp.Interpreter.SymbolRef MoonSharp.Interpreter.Debugging.WatchItem::<LValue>k__BackingField
	SymbolRef_t2926262290 * ___U3CLValueU3Ek__BackingField_5;
	// System.Boolean MoonSharp.Interpreter.Debugging.WatchItem::<IsError>k__BackingField
	bool ___U3CIsErrorU3Ek__BackingField_6;
	// MoonSharp.Interpreter.Debugging.SourceRef MoonSharp.Interpreter.Debugging.WatchItem::<Location>k__BackingField
	SourceRef_t3386753787 * ___U3CLocationU3Ek__BackingField_7;

public:
	inline static int32_t get_offset_of_U3CAddressU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(WatchItem_t1790763148, ___U3CAddressU3Ek__BackingField_0)); }
	inline int32_t get_U3CAddressU3Ek__BackingField_0() const { return ___U3CAddressU3Ek__BackingField_0; }
	inline int32_t* get_address_of_U3CAddressU3Ek__BackingField_0() { return &___U3CAddressU3Ek__BackingField_0; }
	inline void set_U3CAddressU3Ek__BackingField_0(int32_t value)
	{
		___U3CAddressU3Ek__BackingField_0 = value;
	}

	inline static int32_t get_offset_of_U3CBasePtrU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(WatchItem_t1790763148, ___U3CBasePtrU3Ek__BackingField_1)); }
	inline int32_t get_U3CBasePtrU3Ek__BackingField_1() const { return ___U3CBasePtrU3Ek__BackingField_1; }
	inline int32_t* get_address_of_U3CBasePtrU3Ek__BackingField_1() { return &___U3CBasePtrU3Ek__BackingField_1; }
	inline void set_U3CBasePtrU3Ek__BackingField_1(int32_t value)
	{
		___U3CBasePtrU3Ek__BackingField_1 = value;
	}

	inline static int32_t get_offset_of_U3CRetAddressU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(WatchItem_t1790763148, ___U3CRetAddressU3Ek__BackingField_2)); }
	inline int32_t get_U3CRetAddressU3Ek__BackingField_2() const { return ___U3CRetAddressU3Ek__BackingField_2; }
	inline int32_t* get_address_of_U3CRetAddressU3Ek__BackingField_2() { return &___U3CRetAddressU3Ek__BackingField_2; }
	inline void set_U3CRetAddressU3Ek__BackingField_2(int32_t value)
	{
		___U3CRetAddressU3Ek__BackingField_2 = value;
	}

	inline static int32_t get_offset_of_U3CNameU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(WatchItem_t1790763148, ___U3CNameU3Ek__BackingField_3)); }
	inline String_t* get_U3CNameU3Ek__BackingField_3() const { return ___U3CNameU3Ek__BackingField_3; }
	inline String_t** get_address_of_U3CNameU3Ek__BackingField_3() { return &___U3CNameU3Ek__BackingField_3; }
	inline void set_U3CNameU3Ek__BackingField_3(String_t* value)
	{
		___U3CNameU3Ek__BackingField_3 = value;
		Il2CppCodeGenWriteBarrier((&___U3CNameU3Ek__BackingField_3), value);
	}

	inline static int32_t get_offset_of_U3CValueU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(WatchItem_t1790763148, ___U3CValueU3Ek__BackingField_4)); }
	inline DynValue_t548152748 * get_U3CValueU3Ek__BackingField_4() const { return ___U3CValueU3Ek__BackingField_4; }
	inline DynValue_t548152748 ** get_address_of_U3CValueU3Ek__BackingField_4() { return &___U3CValueU3Ek__BackingField_4; }
	inline void set_U3CValueU3Ek__BackingField_4(DynValue_t548152748 * value)
	{
		___U3CValueU3Ek__BackingField_4 = value;
		Il2CppCodeGenWriteBarrier((&___U3CValueU3Ek__BackingField_4), value);
	}

	inline static int32_t get_offset_of_U3CLValueU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(WatchItem_t1790763148, ___U3CLValueU3Ek__BackingField_5)); }
	inline SymbolRef_t2926262290 * get_U3CLValueU3Ek__BackingField_5() const { return ___U3CLValueU3Ek__BackingField_5; }
	inline SymbolRef_t2926262290 ** get_address_of_U3CLValueU3Ek__BackingField_5() { return &___U3CLValueU3Ek__BackingField_5; }
	inline void set_U3CLValueU3Ek__BackingField_5(SymbolRef_t2926262290 * value)
	{
		___U3CLValueU3Ek__BackingField_5 = value;
		Il2CppCodeGenWriteBarrier((&___U3CLValueU3Ek__BackingField_5), value);
	}

	inline static int32_t get_offset_of_U3CIsErrorU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(WatchItem_t1790763148, ___U3CIsErrorU3Ek__BackingField_6)); }
	inline bool get_U3CIsErrorU3Ek__BackingField_6() const { return ___U3CIsErrorU3Ek__BackingField_6; }
	inline bool* get_address_of_U3CIsErrorU3Ek__BackingField_6() { return &___U3CIsErrorU3Ek__BackingField_6; }
	inline void set_U3CIsErrorU3Ek__BackingField_6(bool value)
	{
		___U3CIsErrorU3Ek__BackingField_6 = value;
	}

	inline static int32_t get_offset_of_U3CLocationU3Ek__BackingField_7() { return static_cast<int32_t>(offsetof(WatchItem_t1790763148, ___U3CLocationU3Ek__BackingField_7)); }
	inline SourceRef_t3386753787 * get_U3CLocationU3Ek__BackingField_7() const { return ___U3CLocationU3Ek__BackingField_7; }
	inline SourceRef_t3386753787 ** get_address_of_U3CLocationU3Ek__BackingField_7() { return &___U3CLocationU3Ek__BackingField_7; }
	inline void set_U3CLocationU3Ek__BackingField_7(SourceRef_t3386753787 * value)
	{
		___U3CLocationU3Ek__BackingField_7 = value;
		Il2CppCodeGenWriteBarrier((&___U3CLocationU3Ek__BackingField_7), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // WATCHITEM_T1790763148_H
#ifndef SOURCEREF_T3386753787_H
#define SOURCEREF_T3386753787_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MoonSharp.Interpreter.Debugging.SourceRef
struct  SourceRef_t3386753787  : public RuntimeObject
{
public:
	// System.Boolean MoonSharp.Interpreter.Debugging.SourceRef::<IsClrLocation>k__BackingField
	bool ___U3CIsClrLocationU3Ek__BackingField_0;
	// System.Int32 MoonSharp.Interpreter.Debugging.SourceRef::<SourceIdx>k__BackingField
	int32_t ___U3CSourceIdxU3Ek__BackingField_1;
	// System.Int32 MoonSharp.Interpreter.Debugging.SourceRef::<FromChar>k__BackingField
	int32_t ___U3CFromCharU3Ek__BackingField_2;
	// System.Int32 MoonSharp.Interpreter.Debugging.SourceRef::<ToChar>k__BackingField
	int32_t ___U3CToCharU3Ek__BackingField_3;
	// System.Int32 MoonSharp.Interpreter.Debugging.SourceRef::<FromLine>k__BackingField
	int32_t ___U3CFromLineU3Ek__BackingField_4;
	// System.Int32 MoonSharp.Interpreter.Debugging.SourceRef::<ToLine>k__BackingField
	int32_t ___U3CToLineU3Ek__BackingField_5;
	// System.Boolean MoonSharp.Interpreter.Debugging.SourceRef::<IsStepStop>k__BackingField
	bool ___U3CIsStepStopU3Ek__BackingField_6;
	// System.Boolean MoonSharp.Interpreter.Debugging.SourceRef::Breakpoint
	bool ___Breakpoint_7;
	// System.Boolean MoonSharp.Interpreter.Debugging.SourceRef::<CannotBreakpoint>k__BackingField
	bool ___U3CCannotBreakpointU3Ek__BackingField_8;

public:
	inline static int32_t get_offset_of_U3CIsClrLocationU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(SourceRef_t3386753787, ___U3CIsClrLocationU3Ek__BackingField_0)); }
	inline bool get_U3CIsClrLocationU3Ek__BackingField_0() const { return ___U3CIsClrLocationU3Ek__BackingField_0; }
	inline bool* get_address_of_U3CIsClrLocationU3Ek__BackingField_0() { return &___U3CIsClrLocationU3Ek__BackingField_0; }
	inline void set_U3CIsClrLocationU3Ek__BackingField_0(bool value)
	{
		___U3CIsClrLocationU3Ek__BackingField_0 = value;
	}

	inline static int32_t get_offset_of_U3CSourceIdxU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(SourceRef_t3386753787, ___U3CSourceIdxU3Ek__BackingField_1)); }
	inline int32_t get_U3CSourceIdxU3Ek__BackingField_1() const { return ___U3CSourceIdxU3Ek__BackingField_1; }
	inline int32_t* get_address_of_U3CSourceIdxU3Ek__BackingField_1() { return &___U3CSourceIdxU3Ek__BackingField_1; }
	inline void set_U3CSourceIdxU3Ek__BackingField_1(int32_t value)
	{
		___U3CSourceIdxU3Ek__BackingField_1 = value;
	}

	inline static int32_t get_offset_of_U3CFromCharU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(SourceRef_t3386753787, ___U3CFromCharU3Ek__BackingField_2)); }
	inline int32_t get_U3CFromCharU3Ek__BackingField_2() const { return ___U3CFromCharU3Ek__BackingField_2; }
	inline int32_t* get_address_of_U3CFromCharU3Ek__BackingField_2() { return &___U3CFromCharU3Ek__BackingField_2; }
	inline void set_U3CFromCharU3Ek__BackingField_2(int32_t value)
	{
		___U3CFromCharU3Ek__BackingField_2 = value;
	}

	inline static int32_t get_offset_of_U3CToCharU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(SourceRef_t3386753787, ___U3CToCharU3Ek__BackingField_3)); }
	inline int32_t get_U3CToCharU3Ek__BackingField_3() const { return ___U3CToCharU3Ek__BackingField_3; }
	inline int32_t* get_address_of_U3CToCharU3Ek__BackingField_3() { return &___U3CToCharU3Ek__BackingField_3; }
	inline void set_U3CToCharU3Ek__BackingField_3(int32_t value)
	{
		___U3CToCharU3Ek__BackingField_3 = value;
	}

	inline static int32_t get_offset_of_U3CFromLineU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(SourceRef_t3386753787, ___U3CFromLineU3Ek__BackingField_4)); }
	inline int32_t get_U3CFromLineU3Ek__BackingField_4() const { return ___U3CFromLineU3Ek__BackingField_4; }
	inline int32_t* get_address_of_U3CFromLineU3Ek__BackingField_4() { return &___U3CFromLineU3Ek__BackingField_4; }
	inline void set_U3CFromLineU3Ek__BackingField_4(int32_t value)
	{
		___U3CFromLineU3Ek__BackingField_4 = value;
	}

	inline static int32_t get_offset_of_U3CToLineU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(SourceRef_t3386753787, ___U3CToLineU3Ek__BackingField_5)); }
	inline int32_t get_U3CToLineU3Ek__BackingField_5() const { return ___U3CToLineU3Ek__BackingField_5; }
	inline int32_t* get_address_of_U3CToLineU3Ek__BackingField_5() { return &___U3CToLineU3Ek__BackingField_5; }
	inline void set_U3CToLineU3Ek__BackingField_5(int32_t value)
	{
		___U3CToLineU3Ek__BackingField_5 = value;
	}

	inline static int32_t get_offset_of_U3CIsStepStopU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(SourceRef_t3386753787, ___U3CIsStepStopU3Ek__BackingField_6)); }
	inline bool get_U3CIsStepStopU3Ek__BackingField_6() const { return ___U3CIsStepStopU3Ek__BackingField_6; }
	inline bool* get_address_of_U3CIsStepStopU3Ek__BackingField_6() { return &___U3CIsStepStopU3Ek__BackingField_6; }
	inline void set_U3CIsStepStopU3Ek__BackingField_6(bool value)
	{
		___U3CIsStepStopU3Ek__BackingField_6 = value;
	}

	inline static int32_t get_offset_of_Breakpoint_7() { return static_cast<int32_t>(offsetof(SourceRef_t3386753787, ___Breakpoint_7)); }
	inline bool get_Breakpoint_7() const { return ___Breakpoint_7; }
	inline bool* get_address_of_Breakpoint_7() { return &___Breakpoint_7; }
	inline void set_Breakpoint_7(bool value)
	{
		___Breakpoint_7 = value;
	}

	inline static int32_t get_offset_of_U3CCannotBreakpointU3Ek__BackingField_8() { return static_cast<int32_t>(offsetof(SourceRef_t3386753787, ___U3CCannotBreakpointU3Ek__BackingField_8)); }
	inline bool get_U3CCannotBreakpointU3Ek__BackingField_8() const { return ___U3CCannotBreakpointU3Ek__BackingField_8; }
	inline bool* get_address_of_U3CCannotBreakpointU3Ek__BackingField_8() { return &___U3CCannotBreakpointU3Ek__BackingField_8; }
	inline void set_U3CCannotBreakpointU3Ek__BackingField_8(bool value)
	{
		___U3CCannotBreakpointU3Ek__BackingField_8 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SOURCEREF_T3386753787_H
#ifndef SOURCECODE_T1392738632_H
#define SOURCECODE_T1392738632_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MoonSharp.Interpreter.Debugging.SourceCode
struct  SourceCode_t1392738632  : public RuntimeObject
{
public:
	// System.String MoonSharp.Interpreter.Debugging.SourceCode::<Name>k__BackingField
	String_t* ___U3CNameU3Ek__BackingField_0;
	// System.String MoonSharp.Interpreter.Debugging.SourceCode::<Code>k__BackingField
	String_t* ___U3CCodeU3Ek__BackingField_1;
	// System.String[] MoonSharp.Interpreter.Debugging.SourceCode::<Lines>k__BackingField
	StringU5BU5D_t1281789340* ___U3CLinesU3Ek__BackingField_2;
	// MoonSharp.Interpreter.Script MoonSharp.Interpreter.Debugging.SourceCode::<OwnerScript>k__BackingField
	Script_t154231481 * ___U3COwnerScriptU3Ek__BackingField_3;
	// System.Int32 MoonSharp.Interpreter.Debugging.SourceCode::<SourceID>k__BackingField
	int32_t ___U3CSourceIDU3Ek__BackingField_4;
	// System.Collections.Generic.List`1<MoonSharp.Interpreter.Debugging.SourceRef> MoonSharp.Interpreter.Debugging.SourceCode::<Refs>k__BackingField
	List_1_t563861233 * ___U3CRefsU3Ek__BackingField_5;

public:
	inline static int32_t get_offset_of_U3CNameU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(SourceCode_t1392738632, ___U3CNameU3Ek__BackingField_0)); }
	inline String_t* get_U3CNameU3Ek__BackingField_0() const { return ___U3CNameU3Ek__BackingField_0; }
	inline String_t** get_address_of_U3CNameU3Ek__BackingField_0() { return &___U3CNameU3Ek__BackingField_0; }
	inline void set_U3CNameU3Ek__BackingField_0(String_t* value)
	{
		___U3CNameU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((&___U3CNameU3Ek__BackingField_0), value);
	}

	inline static int32_t get_offset_of_U3CCodeU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(SourceCode_t1392738632, ___U3CCodeU3Ek__BackingField_1)); }
	inline String_t* get_U3CCodeU3Ek__BackingField_1() const { return ___U3CCodeU3Ek__BackingField_1; }
	inline String_t** get_address_of_U3CCodeU3Ek__BackingField_1() { return &___U3CCodeU3Ek__BackingField_1; }
	inline void set_U3CCodeU3Ek__BackingField_1(String_t* value)
	{
		___U3CCodeU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((&___U3CCodeU3Ek__BackingField_1), value);
	}

	inline static int32_t get_offset_of_U3CLinesU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(SourceCode_t1392738632, ___U3CLinesU3Ek__BackingField_2)); }
	inline StringU5BU5D_t1281789340* get_U3CLinesU3Ek__BackingField_2() const { return ___U3CLinesU3Ek__BackingField_2; }
	inline StringU5BU5D_t1281789340** get_address_of_U3CLinesU3Ek__BackingField_2() { return &___U3CLinesU3Ek__BackingField_2; }
	inline void set_U3CLinesU3Ek__BackingField_2(StringU5BU5D_t1281789340* value)
	{
		___U3CLinesU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((&___U3CLinesU3Ek__BackingField_2), value);
	}

	inline static int32_t get_offset_of_U3COwnerScriptU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(SourceCode_t1392738632, ___U3COwnerScriptU3Ek__BackingField_3)); }
	inline Script_t154231481 * get_U3COwnerScriptU3Ek__BackingField_3() const { return ___U3COwnerScriptU3Ek__BackingField_3; }
	inline Script_t154231481 ** get_address_of_U3COwnerScriptU3Ek__BackingField_3() { return &___U3COwnerScriptU3Ek__BackingField_3; }
	inline void set_U3COwnerScriptU3Ek__BackingField_3(Script_t154231481 * value)
	{
		___U3COwnerScriptU3Ek__BackingField_3 = value;
		Il2CppCodeGenWriteBarrier((&___U3COwnerScriptU3Ek__BackingField_3), value);
	}

	inline static int32_t get_offset_of_U3CSourceIDU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(SourceCode_t1392738632, ___U3CSourceIDU3Ek__BackingField_4)); }
	inline int32_t get_U3CSourceIDU3Ek__BackingField_4() const { return ___U3CSourceIDU3Ek__BackingField_4; }
	inline int32_t* get_address_of_U3CSourceIDU3Ek__BackingField_4() { return &___U3CSourceIDU3Ek__BackingField_4; }
	inline void set_U3CSourceIDU3Ek__BackingField_4(int32_t value)
	{
		___U3CSourceIDU3Ek__BackingField_4 = value;
	}

	inline static int32_t get_offset_of_U3CRefsU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(SourceCode_t1392738632, ___U3CRefsU3Ek__BackingField_5)); }
	inline List_1_t563861233 * get_U3CRefsU3Ek__BackingField_5() const { return ___U3CRefsU3Ek__BackingField_5; }
	inline List_1_t563861233 ** get_address_of_U3CRefsU3Ek__BackingField_5() { return &___U3CRefsU3Ek__BackingField_5; }
	inline void set_U3CRefsU3Ek__BackingField_5(List_1_t563861233 * value)
	{
		___U3CRefsU3Ek__BackingField_5 = value;
		Il2CppCodeGenWriteBarrier((&___U3CRefsU3Ek__BackingField_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SOURCECODE_T1392738632_H
#ifndef EXTENSION_METHODS_T2367104102_H
#define EXTENSION_METHODS_T2367104102_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MoonSharp.Interpreter.Extension_Methods
struct  Extension_Methods_t2367104102  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EXTENSION_METHODS_T2367104102_H
#ifndef U3CDEBUGGER_REFRESHWATCHESU3EC__ANONSTOREY0_T1061094221_H
#define U3CDEBUGGER_REFRESHWATCHESU3EC__ANONSTOREY0_T1061094221_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MoonSharp.Interpreter.Execution.VM.Processor/<Debugger_RefreshWatches>c__AnonStorey0
struct  U3CDebugger_RefreshWatchesU3Ec__AnonStorey0_t1061094221  : public RuntimeObject
{
public:
	// MoonSharp.Interpreter.ScriptExecutionContext MoonSharp.Interpreter.Execution.VM.Processor/<Debugger_RefreshWatches>c__AnonStorey0::context
	ScriptExecutionContext_t1593241952 * ___context_0;
	// MoonSharp.Interpreter.Execution.VM.Processor MoonSharp.Interpreter.Execution.VM.Processor/<Debugger_RefreshWatches>c__AnonStorey0::$this
	Processor_t733572553 * ___U24this_1;

public:
	inline static int32_t get_offset_of_context_0() { return static_cast<int32_t>(offsetof(U3CDebugger_RefreshWatchesU3Ec__AnonStorey0_t1061094221, ___context_0)); }
	inline ScriptExecutionContext_t1593241952 * get_context_0() const { return ___context_0; }
	inline ScriptExecutionContext_t1593241952 ** get_address_of_context_0() { return &___context_0; }
	inline void set_context_0(ScriptExecutionContext_t1593241952 * value)
	{
		___context_0 = value;
		Il2CppCodeGenWriteBarrier((&___context_0), value);
	}

	inline static int32_t get_offset_of_U24this_1() { return static_cast<int32_t>(offsetof(U3CDebugger_RefreshWatchesU3Ec__AnonStorey0_t1061094221, ___U24this_1)); }
	inline Processor_t733572553 * get_U24this_1() const { return ___U24this_1; }
	inline Processor_t733572553 ** get_address_of_U24this_1() { return &___U24this_1; }
	inline void set_U24this_1(Processor_t733572553 * value)
	{
		___U24this_1 = value;
		Il2CppCodeGenWriteBarrier((&___U24this_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CDEBUGGER_REFRESHWATCHESU3EC__ANONSTOREY0_T1061094221_H
#ifndef YIELDREQUEST_T604574644_H
#define YIELDREQUEST_T604574644_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MoonSharp.Interpreter.YieldRequest
struct  YieldRequest_t604574644  : public RuntimeObject
{
public:
	// MoonSharp.Interpreter.DynValue[] MoonSharp.Interpreter.YieldRequest::ReturnValues
	DynValueU5BU5D_t2098401829* ___ReturnValues_0;
	// System.Boolean MoonSharp.Interpreter.YieldRequest::<Forced>k__BackingField
	bool ___U3CForcedU3Ek__BackingField_1;

public:
	inline static int32_t get_offset_of_ReturnValues_0() { return static_cast<int32_t>(offsetof(YieldRequest_t604574644, ___ReturnValues_0)); }
	inline DynValueU5BU5D_t2098401829* get_ReturnValues_0() const { return ___ReturnValues_0; }
	inline DynValueU5BU5D_t2098401829** get_address_of_ReturnValues_0() { return &___ReturnValues_0; }
	inline void set_ReturnValues_0(DynValueU5BU5D_t2098401829* value)
	{
		___ReturnValues_0 = value;
		Il2CppCodeGenWriteBarrier((&___ReturnValues_0), value);
	}

	inline static int32_t get_offset_of_U3CForcedU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(YieldRequest_t604574644, ___U3CForcedU3Ek__BackingField_1)); }
	inline bool get_U3CForcedU3Ek__BackingField_1() const { return ___U3CForcedU3Ek__BackingField_1; }
	inline bool* get_address_of_U3CForcedU3Ek__BackingField_1() { return &___U3CForcedU3Ek__BackingField_1; }
	inline void set_U3CForcedU3Ek__BackingField_1(bool value)
	{
		___U3CForcedU3Ek__BackingField_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // YIELDREQUEST_T604574644_H
#ifndef WELLKNOWNSYMBOLS_T3251118689_H
#define WELLKNOWNSYMBOLS_T3251118689_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MoonSharp.Interpreter.WellKnownSymbols
struct  WellKnownSymbols_t3251118689  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // WELLKNOWNSYMBOLS_T3251118689_H
#ifndef INSTRUCTIONFIELDUSAGE_EXTENSIONS_T793826415_H
#define INSTRUCTIONFIELDUSAGE_EXTENSIONS_T793826415_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MoonSharp.Interpreter.Execution.InstructionFieldUsage_Extensions
struct  InstructionFieldUsage_Extensions_t793826415  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INSTRUCTIONFIELDUSAGE_EXTENSIONS_T793826415_H
#ifndef DEBUGSERVICE_T1299096851_H
#define DEBUGSERVICE_T1299096851_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MoonSharp.Interpreter.Debugging.DebugService
struct  DebugService_t1299096851  : public RuntimeObject
{
public:
	// MoonSharp.Interpreter.Execution.VM.Processor MoonSharp.Interpreter.Debugging.DebugService::m_Processor
	Processor_t733572553 * ___m_Processor_0;
	// MoonSharp.Interpreter.Script MoonSharp.Interpreter.Debugging.DebugService::<OwnerScript>k__BackingField
	Script_t154231481 * ___U3COwnerScriptU3Ek__BackingField_1;

public:
	inline static int32_t get_offset_of_m_Processor_0() { return static_cast<int32_t>(offsetof(DebugService_t1299096851, ___m_Processor_0)); }
	inline Processor_t733572553 * get_m_Processor_0() const { return ___m_Processor_0; }
	inline Processor_t733572553 ** get_address_of_m_Processor_0() { return &___m_Processor_0; }
	inline void set_m_Processor_0(Processor_t733572553 * value)
	{
		___m_Processor_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_Processor_0), value);
	}

	inline static int32_t get_offset_of_U3COwnerScriptU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(DebugService_t1299096851, ___U3COwnerScriptU3Ek__BackingField_1)); }
	inline Script_t154231481 * get_U3COwnerScriptU3Ek__BackingField_1() const { return ___U3COwnerScriptU3Ek__BackingField_1; }
	inline Script_t154231481 ** get_address_of_U3COwnerScriptU3Ek__BackingField_1() { return &___U3COwnerScriptU3Ek__BackingField_1; }
	inline void set_U3COwnerScriptU3Ek__BackingField_1(Script_t154231481 * value)
	{
		___U3COwnerScriptU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((&___U3COwnerScriptU3Ek__BackingField_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DEBUGSERVICE_T1299096851_H
#ifndef DYNAMICEXPRESSION_T4193116082_H
#define DYNAMICEXPRESSION_T4193116082_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MoonSharp.Interpreter.DynamicExpression
struct  DynamicExpression_t4193116082  : public RuntimeObject
{
public:
	// MoonSharp.Interpreter.Tree.Expressions.DynamicExprExpression MoonSharp.Interpreter.DynamicExpression::m_Exp
	DynamicExprExpression_t1007256600 * ___m_Exp_0;
	// MoonSharp.Interpreter.DynValue MoonSharp.Interpreter.DynamicExpression::m_Constant
	DynValue_t548152748 * ___m_Constant_1;
	// System.String MoonSharp.Interpreter.DynamicExpression::ExpressionCode
	String_t* ___ExpressionCode_2;
	// MoonSharp.Interpreter.Script MoonSharp.Interpreter.DynamicExpression::<OwnerScript>k__BackingField
	Script_t154231481 * ___U3COwnerScriptU3Ek__BackingField_3;

public:
	inline static int32_t get_offset_of_m_Exp_0() { return static_cast<int32_t>(offsetof(DynamicExpression_t4193116082, ___m_Exp_0)); }
	inline DynamicExprExpression_t1007256600 * get_m_Exp_0() const { return ___m_Exp_0; }
	inline DynamicExprExpression_t1007256600 ** get_address_of_m_Exp_0() { return &___m_Exp_0; }
	inline void set_m_Exp_0(DynamicExprExpression_t1007256600 * value)
	{
		___m_Exp_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_Exp_0), value);
	}

	inline static int32_t get_offset_of_m_Constant_1() { return static_cast<int32_t>(offsetof(DynamicExpression_t4193116082, ___m_Constant_1)); }
	inline DynValue_t548152748 * get_m_Constant_1() const { return ___m_Constant_1; }
	inline DynValue_t548152748 ** get_address_of_m_Constant_1() { return &___m_Constant_1; }
	inline void set_m_Constant_1(DynValue_t548152748 * value)
	{
		___m_Constant_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_Constant_1), value);
	}

	inline static int32_t get_offset_of_ExpressionCode_2() { return static_cast<int32_t>(offsetof(DynamicExpression_t4193116082, ___ExpressionCode_2)); }
	inline String_t* get_ExpressionCode_2() const { return ___ExpressionCode_2; }
	inline String_t** get_address_of_ExpressionCode_2() { return &___ExpressionCode_2; }
	inline void set_ExpressionCode_2(String_t* value)
	{
		___ExpressionCode_2 = value;
		Il2CppCodeGenWriteBarrier((&___ExpressionCode_2), value);
	}

	inline static int32_t get_offset_of_U3COwnerScriptU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(DynamicExpression_t4193116082, ___U3COwnerScriptU3Ek__BackingField_3)); }
	inline Script_t154231481 * get_U3COwnerScriptU3Ek__BackingField_3() const { return ___U3COwnerScriptU3Ek__BackingField_3; }
	inline Script_t154231481 ** get_address_of_U3COwnerScriptU3Ek__BackingField_3() { return &___U3COwnerScriptU3Ek__BackingField_3; }
	inline void set_U3COwnerScriptU3Ek__BackingField_3(Script_t154231481 * value)
	{
		___U3COwnerScriptU3Ek__BackingField_3 = value;
		Il2CppCodeGenWriteBarrier((&___U3COwnerScriptU3Ek__BackingField_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DYNAMICEXPRESSION_T4193116082_H
#ifndef BUILDTIMESCOPE_T3047810466_H
#define BUILDTIMESCOPE_T3047810466_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MoonSharp.Interpreter.Execution.BuildTimeScope
struct  BuildTimeScope_t3047810466  : public RuntimeObject
{
public:
	// System.Collections.Generic.List`1<MoonSharp.Interpreter.Execution.Scopes.BuildTimeScopeFrame> MoonSharp.Interpreter.Execution.BuildTimeScope::m_Frames
	List_1_t705532072 * ___m_Frames_0;
	// System.Collections.Generic.List`1<MoonSharp.Interpreter.Execution.IClosureBuilder> MoonSharp.Interpreter.Execution.BuildTimeScope::m_ClosureBuilders
	List_1_t1335259083 * ___m_ClosureBuilders_1;

public:
	inline static int32_t get_offset_of_m_Frames_0() { return static_cast<int32_t>(offsetof(BuildTimeScope_t3047810466, ___m_Frames_0)); }
	inline List_1_t705532072 * get_m_Frames_0() const { return ___m_Frames_0; }
	inline List_1_t705532072 ** get_address_of_m_Frames_0() { return &___m_Frames_0; }
	inline void set_m_Frames_0(List_1_t705532072 * value)
	{
		___m_Frames_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_Frames_0), value);
	}

	inline static int32_t get_offset_of_m_ClosureBuilders_1() { return static_cast<int32_t>(offsetof(BuildTimeScope_t3047810466, ___m_ClosureBuilders_1)); }
	inline List_1_t1335259083 * get_m_ClosureBuilders_1() const { return ___m_ClosureBuilders_1; }
	inline List_1_t1335259083 ** get_address_of_m_ClosureBuilders_1() { return &___m_ClosureBuilders_1; }
	inline void set_m_ClosureBuilders_1(List_1_t1335259083 * value)
	{
		___m_ClosureBuilders_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_ClosureBuilders_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BUILDTIMESCOPE_T3047810466_H
#ifndef BUILDTIMESCOPEBLOCK_T4233616674_H
#define BUILDTIMESCOPEBLOCK_T4233616674_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MoonSharp.Interpreter.Execution.Scopes.BuildTimeScopeBlock
struct  BuildTimeScopeBlock_t4233616674  : public RuntimeObject
{
public:
	// MoonSharp.Interpreter.Execution.Scopes.BuildTimeScopeBlock MoonSharp.Interpreter.Execution.Scopes.BuildTimeScopeBlock::<Parent>k__BackingField
	BuildTimeScopeBlock_t4233616674 * ___U3CParentU3Ek__BackingField_0;
	// System.Collections.Generic.List`1<MoonSharp.Interpreter.Execution.Scopes.BuildTimeScopeBlock> MoonSharp.Interpreter.Execution.Scopes.BuildTimeScopeBlock::<ChildNodes>k__BackingField
	List_1_t1410724120 * ___U3CChildNodesU3Ek__BackingField_1;
	// MoonSharp.Interpreter.Execution.RuntimeScopeBlock MoonSharp.Interpreter.Execution.Scopes.BuildTimeScopeBlock::<ScopeBlock>k__BackingField
	RuntimeScopeBlock_t1116835061 * ___U3CScopeBlockU3Ek__BackingField_2;
	// System.Collections.Generic.Dictionary`2<System.String,MoonSharp.Interpreter.SymbolRef> MoonSharp.Interpreter.Execution.Scopes.BuildTimeScopeBlock::m_DefinedNames
	Dictionary_2_t2711518589 * ___m_DefinedNames_3;
	// System.Collections.Generic.List`1<MoonSharp.Interpreter.Tree.Statements.GotoStatement> MoonSharp.Interpreter.Execution.Scopes.BuildTimeScopeBlock::m_PendingGotos
	List_1_t4083271947 * ___m_PendingGotos_4;
	// System.Collections.Generic.Dictionary`2<System.String,MoonSharp.Interpreter.Tree.Statements.LabelStatement> MoonSharp.Interpreter.Execution.Scopes.BuildTimeScopeBlock::m_LocalLabels
	Dictionary_2_t512568844 * ___m_LocalLabels_5;
	// System.String MoonSharp.Interpreter.Execution.Scopes.BuildTimeScopeBlock::m_LastDefinedName
	String_t* ___m_LastDefinedName_6;

public:
	inline static int32_t get_offset_of_U3CParentU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(BuildTimeScopeBlock_t4233616674, ___U3CParentU3Ek__BackingField_0)); }
	inline BuildTimeScopeBlock_t4233616674 * get_U3CParentU3Ek__BackingField_0() const { return ___U3CParentU3Ek__BackingField_0; }
	inline BuildTimeScopeBlock_t4233616674 ** get_address_of_U3CParentU3Ek__BackingField_0() { return &___U3CParentU3Ek__BackingField_0; }
	inline void set_U3CParentU3Ek__BackingField_0(BuildTimeScopeBlock_t4233616674 * value)
	{
		___U3CParentU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((&___U3CParentU3Ek__BackingField_0), value);
	}

	inline static int32_t get_offset_of_U3CChildNodesU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(BuildTimeScopeBlock_t4233616674, ___U3CChildNodesU3Ek__BackingField_1)); }
	inline List_1_t1410724120 * get_U3CChildNodesU3Ek__BackingField_1() const { return ___U3CChildNodesU3Ek__BackingField_1; }
	inline List_1_t1410724120 ** get_address_of_U3CChildNodesU3Ek__BackingField_1() { return &___U3CChildNodesU3Ek__BackingField_1; }
	inline void set_U3CChildNodesU3Ek__BackingField_1(List_1_t1410724120 * value)
	{
		___U3CChildNodesU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((&___U3CChildNodesU3Ek__BackingField_1), value);
	}

	inline static int32_t get_offset_of_U3CScopeBlockU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(BuildTimeScopeBlock_t4233616674, ___U3CScopeBlockU3Ek__BackingField_2)); }
	inline RuntimeScopeBlock_t1116835061 * get_U3CScopeBlockU3Ek__BackingField_2() const { return ___U3CScopeBlockU3Ek__BackingField_2; }
	inline RuntimeScopeBlock_t1116835061 ** get_address_of_U3CScopeBlockU3Ek__BackingField_2() { return &___U3CScopeBlockU3Ek__BackingField_2; }
	inline void set_U3CScopeBlockU3Ek__BackingField_2(RuntimeScopeBlock_t1116835061 * value)
	{
		___U3CScopeBlockU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((&___U3CScopeBlockU3Ek__BackingField_2), value);
	}

	inline static int32_t get_offset_of_m_DefinedNames_3() { return static_cast<int32_t>(offsetof(BuildTimeScopeBlock_t4233616674, ___m_DefinedNames_3)); }
	inline Dictionary_2_t2711518589 * get_m_DefinedNames_3() const { return ___m_DefinedNames_3; }
	inline Dictionary_2_t2711518589 ** get_address_of_m_DefinedNames_3() { return &___m_DefinedNames_3; }
	inline void set_m_DefinedNames_3(Dictionary_2_t2711518589 * value)
	{
		___m_DefinedNames_3 = value;
		Il2CppCodeGenWriteBarrier((&___m_DefinedNames_3), value);
	}

	inline static int32_t get_offset_of_m_PendingGotos_4() { return static_cast<int32_t>(offsetof(BuildTimeScopeBlock_t4233616674, ___m_PendingGotos_4)); }
	inline List_1_t4083271947 * get_m_PendingGotos_4() const { return ___m_PendingGotos_4; }
	inline List_1_t4083271947 ** get_address_of_m_PendingGotos_4() { return &___m_PendingGotos_4; }
	inline void set_m_PendingGotos_4(List_1_t4083271947 * value)
	{
		___m_PendingGotos_4 = value;
		Il2CppCodeGenWriteBarrier((&___m_PendingGotos_4), value);
	}

	inline static int32_t get_offset_of_m_LocalLabels_5() { return static_cast<int32_t>(offsetof(BuildTimeScopeBlock_t4233616674, ___m_LocalLabels_5)); }
	inline Dictionary_2_t512568844 * get_m_LocalLabels_5() const { return ___m_LocalLabels_5; }
	inline Dictionary_2_t512568844 ** get_address_of_m_LocalLabels_5() { return &___m_LocalLabels_5; }
	inline void set_m_LocalLabels_5(Dictionary_2_t512568844 * value)
	{
		___m_LocalLabels_5 = value;
		Il2CppCodeGenWriteBarrier((&___m_LocalLabels_5), value);
	}

	inline static int32_t get_offset_of_m_LastDefinedName_6() { return static_cast<int32_t>(offsetof(BuildTimeScopeBlock_t4233616674, ___m_LastDefinedName_6)); }
	inline String_t* get_m_LastDefinedName_6() const { return ___m_LastDefinedName_6; }
	inline String_t** get_address_of_m_LastDefinedName_6() { return &___m_LastDefinedName_6; }
	inline void set_m_LastDefinedName_6(String_t* value)
	{
		___m_LastDefinedName_6 = value;
		Il2CppCodeGenWriteBarrier((&___m_LastDefinedName_6), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BUILDTIMESCOPEBLOCK_T4233616674_H
#ifndef BUILDTIMESCOPEFRAME_T3528424626_H
#define BUILDTIMESCOPEFRAME_T3528424626_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MoonSharp.Interpreter.Execution.Scopes.BuildTimeScopeFrame
struct  BuildTimeScopeFrame_t3528424626  : public RuntimeObject
{
public:
	// MoonSharp.Interpreter.Execution.Scopes.BuildTimeScopeBlock MoonSharp.Interpreter.Execution.Scopes.BuildTimeScopeFrame::m_ScopeTreeRoot
	BuildTimeScopeBlock_t4233616674 * ___m_ScopeTreeRoot_0;
	// MoonSharp.Interpreter.Execution.Scopes.BuildTimeScopeBlock MoonSharp.Interpreter.Execution.Scopes.BuildTimeScopeFrame::m_ScopeTreeHead
	BuildTimeScopeBlock_t4233616674 * ___m_ScopeTreeHead_1;
	// MoonSharp.Interpreter.Execution.RuntimeScopeFrame MoonSharp.Interpreter.Execution.Scopes.BuildTimeScopeFrame::m_ScopeFrame
	RuntimeScopeFrame_t1870046025 * ___m_ScopeFrame_2;
	// System.Boolean MoonSharp.Interpreter.Execution.Scopes.BuildTimeScopeFrame::<HasVarArgs>k__BackingField
	bool ___U3CHasVarArgsU3Ek__BackingField_3;

public:
	inline static int32_t get_offset_of_m_ScopeTreeRoot_0() { return static_cast<int32_t>(offsetof(BuildTimeScopeFrame_t3528424626, ___m_ScopeTreeRoot_0)); }
	inline BuildTimeScopeBlock_t4233616674 * get_m_ScopeTreeRoot_0() const { return ___m_ScopeTreeRoot_0; }
	inline BuildTimeScopeBlock_t4233616674 ** get_address_of_m_ScopeTreeRoot_0() { return &___m_ScopeTreeRoot_0; }
	inline void set_m_ScopeTreeRoot_0(BuildTimeScopeBlock_t4233616674 * value)
	{
		___m_ScopeTreeRoot_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_ScopeTreeRoot_0), value);
	}

	inline static int32_t get_offset_of_m_ScopeTreeHead_1() { return static_cast<int32_t>(offsetof(BuildTimeScopeFrame_t3528424626, ___m_ScopeTreeHead_1)); }
	inline BuildTimeScopeBlock_t4233616674 * get_m_ScopeTreeHead_1() const { return ___m_ScopeTreeHead_1; }
	inline BuildTimeScopeBlock_t4233616674 ** get_address_of_m_ScopeTreeHead_1() { return &___m_ScopeTreeHead_1; }
	inline void set_m_ScopeTreeHead_1(BuildTimeScopeBlock_t4233616674 * value)
	{
		___m_ScopeTreeHead_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_ScopeTreeHead_1), value);
	}

	inline static int32_t get_offset_of_m_ScopeFrame_2() { return static_cast<int32_t>(offsetof(BuildTimeScopeFrame_t3528424626, ___m_ScopeFrame_2)); }
	inline RuntimeScopeFrame_t1870046025 * get_m_ScopeFrame_2() const { return ___m_ScopeFrame_2; }
	inline RuntimeScopeFrame_t1870046025 ** get_address_of_m_ScopeFrame_2() { return &___m_ScopeFrame_2; }
	inline void set_m_ScopeFrame_2(RuntimeScopeFrame_t1870046025 * value)
	{
		___m_ScopeFrame_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_ScopeFrame_2), value);
	}

	inline static int32_t get_offset_of_U3CHasVarArgsU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(BuildTimeScopeFrame_t3528424626, ___U3CHasVarArgsU3Ek__BackingField_3)); }
	inline bool get_U3CHasVarArgsU3Ek__BackingField_3() const { return ___U3CHasVarArgsU3Ek__BackingField_3; }
	inline bool* get_address_of_U3CHasVarArgsU3Ek__BackingField_3() { return &___U3CHasVarArgsU3Ek__BackingField_3; }
	inline void set_U3CHasVarArgsU3Ek__BackingField_3(bool value)
	{
		___U3CHasVarArgsU3Ek__BackingField_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BUILDTIMESCOPEFRAME_T3528424626_H
#ifndef LOOPTRACKER_T2759355568_H
#define LOOPTRACKER_T2759355568_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MoonSharp.Interpreter.Execution.LoopTracker
struct  LoopTracker_t2759355568  : public RuntimeObject
{
public:
	// MoonSharp.Interpreter.DataStructs.FastStack`1<MoonSharp.Interpreter.Execution.ILoop> MoonSharp.Interpreter.Execution.LoopTracker::Loops
	FastStack_1_t1449454515 * ___Loops_0;

public:
	inline static int32_t get_offset_of_Loops_0() { return static_cast<int32_t>(offsetof(LoopTracker_t2759355568, ___Loops_0)); }
	inline FastStack_1_t1449454515 * get_Loops_0() const { return ___Loops_0; }
	inline FastStack_1_t1449454515 ** get_address_of_Loops_0() { return &___Loops_0; }
	inline void set_Loops_0(FastStack_1_t1449454515 * value)
	{
		___Loops_0 = value;
		Il2CppCodeGenWriteBarrier((&___Loops_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LOOPTRACKER_T2759355568_H
#ifndef PERFORMANCESTATISTICS_T262909997_H
#define PERFORMANCESTATISTICS_T262909997_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MoonSharp.Interpreter.Diagnostics.PerformanceStatistics
struct  PerformanceStatistics_t262909997  : public RuntimeObject
{
public:
	// MoonSharp.Interpreter.Diagnostics.PerformanceCounters.IPerformanceStopwatch[] MoonSharp.Interpreter.Diagnostics.PerformanceStatistics::m_Stopwatches
	IPerformanceStopwatchU5BU5D_t2218300581* ___m_Stopwatches_0;
	// System.Boolean MoonSharp.Interpreter.Diagnostics.PerformanceStatistics::m_Enabled
	bool ___m_Enabled_2;

public:
	inline static int32_t get_offset_of_m_Stopwatches_0() { return static_cast<int32_t>(offsetof(PerformanceStatistics_t262909997, ___m_Stopwatches_0)); }
	inline IPerformanceStopwatchU5BU5D_t2218300581* get_m_Stopwatches_0() const { return ___m_Stopwatches_0; }
	inline IPerformanceStopwatchU5BU5D_t2218300581** get_address_of_m_Stopwatches_0() { return &___m_Stopwatches_0; }
	inline void set_m_Stopwatches_0(IPerformanceStopwatchU5BU5D_t2218300581* value)
	{
		___m_Stopwatches_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_Stopwatches_0), value);
	}

	inline static int32_t get_offset_of_m_Enabled_2() { return static_cast<int32_t>(offsetof(PerformanceStatistics_t262909997, ___m_Enabled_2)); }
	inline bool get_m_Enabled_2() const { return ___m_Enabled_2; }
	inline bool* get_address_of_m_Enabled_2() { return &___m_Enabled_2; }
	inline void set_m_Enabled_2(bool value)
	{
		___m_Enabled_2 = value;
	}
};

struct PerformanceStatistics_t262909997_StaticFields
{
public:
	// MoonSharp.Interpreter.Diagnostics.PerformanceCounters.IPerformanceStopwatch[] MoonSharp.Interpreter.Diagnostics.PerformanceStatistics::m_GlobalStopwatches
	IPerformanceStopwatchU5BU5D_t2218300581* ___m_GlobalStopwatches_1;

public:
	inline static int32_t get_offset_of_m_GlobalStopwatches_1() { return static_cast<int32_t>(offsetof(PerformanceStatistics_t262909997_StaticFields, ___m_GlobalStopwatches_1)); }
	inline IPerformanceStopwatchU5BU5D_t2218300581* get_m_GlobalStopwatches_1() const { return ___m_GlobalStopwatches_1; }
	inline IPerformanceStopwatchU5BU5D_t2218300581** get_address_of_m_GlobalStopwatches_1() { return &___m_GlobalStopwatches_1; }
	inline void set_m_GlobalStopwatches_1(IPerformanceStopwatchU5BU5D_t2218300581* value)
	{
		___m_GlobalStopwatches_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_GlobalStopwatches_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PERFORMANCESTATISTICS_T262909997_H
#ifndef RUNTIMESCOPEBLOCK_T1116835061_H
#define RUNTIMESCOPEBLOCK_T1116835061_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MoonSharp.Interpreter.Execution.RuntimeScopeBlock
struct  RuntimeScopeBlock_t1116835061  : public RuntimeObject
{
public:
	// System.Int32 MoonSharp.Interpreter.Execution.RuntimeScopeBlock::<From>k__BackingField
	int32_t ___U3CFromU3Ek__BackingField_0;
	// System.Int32 MoonSharp.Interpreter.Execution.RuntimeScopeBlock::<To>k__BackingField
	int32_t ___U3CToU3Ek__BackingField_1;
	// System.Int32 MoonSharp.Interpreter.Execution.RuntimeScopeBlock::<ToInclusive>k__BackingField
	int32_t ___U3CToInclusiveU3Ek__BackingField_2;

public:
	inline static int32_t get_offset_of_U3CFromU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(RuntimeScopeBlock_t1116835061, ___U3CFromU3Ek__BackingField_0)); }
	inline int32_t get_U3CFromU3Ek__BackingField_0() const { return ___U3CFromU3Ek__BackingField_0; }
	inline int32_t* get_address_of_U3CFromU3Ek__BackingField_0() { return &___U3CFromU3Ek__BackingField_0; }
	inline void set_U3CFromU3Ek__BackingField_0(int32_t value)
	{
		___U3CFromU3Ek__BackingField_0 = value;
	}

	inline static int32_t get_offset_of_U3CToU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(RuntimeScopeBlock_t1116835061, ___U3CToU3Ek__BackingField_1)); }
	inline int32_t get_U3CToU3Ek__BackingField_1() const { return ___U3CToU3Ek__BackingField_1; }
	inline int32_t* get_address_of_U3CToU3Ek__BackingField_1() { return &___U3CToU3Ek__BackingField_1; }
	inline void set_U3CToU3Ek__BackingField_1(int32_t value)
	{
		___U3CToU3Ek__BackingField_1 = value;
	}

	inline static int32_t get_offset_of_U3CToInclusiveU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(RuntimeScopeBlock_t1116835061, ___U3CToInclusiveU3Ek__BackingField_2)); }
	inline int32_t get_U3CToInclusiveU3Ek__BackingField_2() const { return ___U3CToInclusiveU3Ek__BackingField_2; }
	inline int32_t* get_address_of_U3CToInclusiveU3Ek__BackingField_2() { return &___U3CToInclusiveU3Ek__BackingField_2; }
	inline void set_U3CToInclusiveU3Ek__BackingField_2(int32_t value)
	{
		___U3CToInclusiveU3Ek__BackingField_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNTIMESCOPEBLOCK_T1116835061_H
#ifndef RUNTIMESCOPEFRAME_T1870046025_H
#define RUNTIMESCOPEFRAME_T1870046025_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MoonSharp.Interpreter.Execution.RuntimeScopeFrame
struct  RuntimeScopeFrame_t1870046025  : public RuntimeObject
{
public:
	// System.Collections.Generic.List`1<MoonSharp.Interpreter.SymbolRef> MoonSharp.Interpreter.Execution.RuntimeScopeFrame::<DebugSymbols>k__BackingField
	List_1_t103369736 * ___U3CDebugSymbolsU3Ek__BackingField_0;
	// System.Int32 MoonSharp.Interpreter.Execution.RuntimeScopeFrame::<ToFirstBlock>k__BackingField
	int32_t ___U3CToFirstBlockU3Ek__BackingField_1;

public:
	inline static int32_t get_offset_of_U3CDebugSymbolsU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(RuntimeScopeFrame_t1870046025, ___U3CDebugSymbolsU3Ek__BackingField_0)); }
	inline List_1_t103369736 * get_U3CDebugSymbolsU3Ek__BackingField_0() const { return ___U3CDebugSymbolsU3Ek__BackingField_0; }
	inline List_1_t103369736 ** get_address_of_U3CDebugSymbolsU3Ek__BackingField_0() { return &___U3CDebugSymbolsU3Ek__BackingField_0; }
	inline void set_U3CDebugSymbolsU3Ek__BackingField_0(List_1_t103369736 * value)
	{
		___U3CDebugSymbolsU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((&___U3CDebugSymbolsU3Ek__BackingField_0), value);
	}

	inline static int32_t get_offset_of_U3CToFirstBlockU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(RuntimeScopeFrame_t1870046025, ___U3CToFirstBlockU3Ek__BackingField_1)); }
	inline int32_t get_U3CToFirstBlockU3Ek__BackingField_1() const { return ___U3CToFirstBlockU3Ek__BackingField_1; }
	inline int32_t* get_address_of_U3CToFirstBlockU3Ek__BackingField_1() { return &___U3CToFirstBlockU3Ek__BackingField_1; }
	inline void set_U3CToFirstBlockU3Ek__BackingField_1(int32_t value)
	{
		___U3CToFirstBlockU3Ek__BackingField_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNTIMESCOPEFRAME_T1870046025_H
#ifndef SCRIPTEXECUTIONCONTEXT_T1593241952_H
#define SCRIPTEXECUTIONCONTEXT_T1593241952_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MoonSharp.Interpreter.ScriptExecutionContext
struct  ScriptExecutionContext_t1593241952  : public RuntimeObject
{
public:
	// MoonSharp.Interpreter.Execution.VM.Processor MoonSharp.Interpreter.ScriptExecutionContext::m_Processor
	Processor_t733572553 * ___m_Processor_0;
	// MoonSharp.Interpreter.CallbackFunction MoonSharp.Interpreter.ScriptExecutionContext::m_Callback
	CallbackFunction_t350661728 * ___m_Callback_1;
	// System.Boolean MoonSharp.Interpreter.ScriptExecutionContext::<IsDynamicExecution>k__BackingField
	bool ___U3CIsDynamicExecutionU3Ek__BackingField_2;
	// MoonSharp.Interpreter.Debugging.SourceRef MoonSharp.Interpreter.ScriptExecutionContext::<CallingLocation>k__BackingField
	SourceRef_t3386753787 * ___U3CCallingLocationU3Ek__BackingField_3;

public:
	inline static int32_t get_offset_of_m_Processor_0() { return static_cast<int32_t>(offsetof(ScriptExecutionContext_t1593241952, ___m_Processor_0)); }
	inline Processor_t733572553 * get_m_Processor_0() const { return ___m_Processor_0; }
	inline Processor_t733572553 ** get_address_of_m_Processor_0() { return &___m_Processor_0; }
	inline void set_m_Processor_0(Processor_t733572553 * value)
	{
		___m_Processor_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_Processor_0), value);
	}

	inline static int32_t get_offset_of_m_Callback_1() { return static_cast<int32_t>(offsetof(ScriptExecutionContext_t1593241952, ___m_Callback_1)); }
	inline CallbackFunction_t350661728 * get_m_Callback_1() const { return ___m_Callback_1; }
	inline CallbackFunction_t350661728 ** get_address_of_m_Callback_1() { return &___m_Callback_1; }
	inline void set_m_Callback_1(CallbackFunction_t350661728 * value)
	{
		___m_Callback_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_Callback_1), value);
	}

	inline static int32_t get_offset_of_U3CIsDynamicExecutionU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(ScriptExecutionContext_t1593241952, ___U3CIsDynamicExecutionU3Ek__BackingField_2)); }
	inline bool get_U3CIsDynamicExecutionU3Ek__BackingField_2() const { return ___U3CIsDynamicExecutionU3Ek__BackingField_2; }
	inline bool* get_address_of_U3CIsDynamicExecutionU3Ek__BackingField_2() { return &___U3CIsDynamicExecutionU3Ek__BackingField_2; }
	inline void set_U3CIsDynamicExecutionU3Ek__BackingField_2(bool value)
	{
		___U3CIsDynamicExecutionU3Ek__BackingField_2 = value;
	}

	inline static int32_t get_offset_of_U3CCallingLocationU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(ScriptExecutionContext_t1593241952, ___U3CCallingLocationU3Ek__BackingField_3)); }
	inline SourceRef_t3386753787 * get_U3CCallingLocationU3Ek__BackingField_3() const { return ___U3CCallingLocationU3Ek__BackingField_3; }
	inline SourceRef_t3386753787 ** get_address_of_U3CCallingLocationU3Ek__BackingField_3() { return &___U3CCallingLocationU3Ek__BackingField_3; }
	inline void set_U3CCallingLocationU3Ek__BackingField_3(SourceRef_t3386753787 * value)
	{
		___U3CCallingLocationU3Ek__BackingField_3 = value;
		Il2CppCodeGenWriteBarrier((&___U3CCallingLocationU3Ek__BackingField_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SCRIPTEXECUTIONCONTEXT_T1593241952_H
#ifndef GLOBALPERFORMANCESTOPWATCH_STOPWATCHOBJECT_T2533882312_H
#define GLOBALPERFORMANCESTOPWATCH_STOPWATCHOBJECT_T2533882312_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MoonSharp.Interpreter.Diagnostics.PerformanceCounters.GlobalPerformanceStopwatch/GlobalPerformanceStopwatch_StopwatchObject
struct  GlobalPerformanceStopwatch_StopwatchObject_t2533882312  : public RuntimeObject
{
public:
	// System.Diagnostics.Stopwatch MoonSharp.Interpreter.Diagnostics.PerformanceCounters.GlobalPerformanceStopwatch/GlobalPerformanceStopwatch_StopwatchObject::m_Stopwatch
	Stopwatch_t305734070 * ___m_Stopwatch_0;
	// MoonSharp.Interpreter.Diagnostics.PerformanceCounters.GlobalPerformanceStopwatch MoonSharp.Interpreter.Diagnostics.PerformanceCounters.GlobalPerformanceStopwatch/GlobalPerformanceStopwatch_StopwatchObject::m_Parent
	GlobalPerformanceStopwatch_t2074566713 * ___m_Parent_1;

public:
	inline static int32_t get_offset_of_m_Stopwatch_0() { return static_cast<int32_t>(offsetof(GlobalPerformanceStopwatch_StopwatchObject_t2533882312, ___m_Stopwatch_0)); }
	inline Stopwatch_t305734070 * get_m_Stopwatch_0() const { return ___m_Stopwatch_0; }
	inline Stopwatch_t305734070 ** get_address_of_m_Stopwatch_0() { return &___m_Stopwatch_0; }
	inline void set_m_Stopwatch_0(Stopwatch_t305734070 * value)
	{
		___m_Stopwatch_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_Stopwatch_0), value);
	}

	inline static int32_t get_offset_of_m_Parent_1() { return static_cast<int32_t>(offsetof(GlobalPerformanceStopwatch_StopwatchObject_t2533882312, ___m_Parent_1)); }
	inline GlobalPerformanceStopwatch_t2074566713 * get_m_Parent_1() const { return ___m_Parent_1; }
	inline GlobalPerformanceStopwatch_t2074566713 ** get_address_of_m_Parent_1() { return &___m_Parent_1; }
	inline void set_m_Parent_1(GlobalPerformanceStopwatch_t2074566713 * value)
	{
		___m_Parent_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_Parent_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GLOBALPERFORMANCESTOPWATCH_STOPWATCHOBJECT_T2533882312_H
#ifndef SCRIPTLOADINGCONTEXT_T2755804994_H
#define SCRIPTLOADINGCONTEXT_T2755804994_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MoonSharp.Interpreter.Execution.ScriptLoadingContext
struct  ScriptLoadingContext_t2755804994  : public RuntimeObject
{
public:
	// MoonSharp.Interpreter.Script MoonSharp.Interpreter.Execution.ScriptLoadingContext::<Script>k__BackingField
	Script_t154231481 * ___U3CScriptU3Ek__BackingField_0;
	// MoonSharp.Interpreter.Execution.BuildTimeScope MoonSharp.Interpreter.Execution.ScriptLoadingContext::<Scope>k__BackingField
	BuildTimeScope_t3047810466 * ___U3CScopeU3Ek__BackingField_1;
	// MoonSharp.Interpreter.Debugging.SourceCode MoonSharp.Interpreter.Execution.ScriptLoadingContext::<Source>k__BackingField
	SourceCode_t1392738632 * ___U3CSourceU3Ek__BackingField_2;
	// System.Boolean MoonSharp.Interpreter.Execution.ScriptLoadingContext::<Anonymous>k__BackingField
	bool ___U3CAnonymousU3Ek__BackingField_3;
	// System.Boolean MoonSharp.Interpreter.Execution.ScriptLoadingContext::<IsDynamicExpression>k__BackingField
	bool ___U3CIsDynamicExpressionU3Ek__BackingField_4;
	// MoonSharp.Interpreter.Tree.Lexer MoonSharp.Interpreter.Execution.ScriptLoadingContext::<Lexer>k__BackingField
	Lexer_t530427525 * ___U3CLexerU3Ek__BackingField_5;

public:
	inline static int32_t get_offset_of_U3CScriptU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(ScriptLoadingContext_t2755804994, ___U3CScriptU3Ek__BackingField_0)); }
	inline Script_t154231481 * get_U3CScriptU3Ek__BackingField_0() const { return ___U3CScriptU3Ek__BackingField_0; }
	inline Script_t154231481 ** get_address_of_U3CScriptU3Ek__BackingField_0() { return &___U3CScriptU3Ek__BackingField_0; }
	inline void set_U3CScriptU3Ek__BackingField_0(Script_t154231481 * value)
	{
		___U3CScriptU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((&___U3CScriptU3Ek__BackingField_0), value);
	}

	inline static int32_t get_offset_of_U3CScopeU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(ScriptLoadingContext_t2755804994, ___U3CScopeU3Ek__BackingField_1)); }
	inline BuildTimeScope_t3047810466 * get_U3CScopeU3Ek__BackingField_1() const { return ___U3CScopeU3Ek__BackingField_1; }
	inline BuildTimeScope_t3047810466 ** get_address_of_U3CScopeU3Ek__BackingField_1() { return &___U3CScopeU3Ek__BackingField_1; }
	inline void set_U3CScopeU3Ek__BackingField_1(BuildTimeScope_t3047810466 * value)
	{
		___U3CScopeU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((&___U3CScopeU3Ek__BackingField_1), value);
	}

	inline static int32_t get_offset_of_U3CSourceU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(ScriptLoadingContext_t2755804994, ___U3CSourceU3Ek__BackingField_2)); }
	inline SourceCode_t1392738632 * get_U3CSourceU3Ek__BackingField_2() const { return ___U3CSourceU3Ek__BackingField_2; }
	inline SourceCode_t1392738632 ** get_address_of_U3CSourceU3Ek__BackingField_2() { return &___U3CSourceU3Ek__BackingField_2; }
	inline void set_U3CSourceU3Ek__BackingField_2(SourceCode_t1392738632 * value)
	{
		___U3CSourceU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((&___U3CSourceU3Ek__BackingField_2), value);
	}

	inline static int32_t get_offset_of_U3CAnonymousU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(ScriptLoadingContext_t2755804994, ___U3CAnonymousU3Ek__BackingField_3)); }
	inline bool get_U3CAnonymousU3Ek__BackingField_3() const { return ___U3CAnonymousU3Ek__BackingField_3; }
	inline bool* get_address_of_U3CAnonymousU3Ek__BackingField_3() { return &___U3CAnonymousU3Ek__BackingField_3; }
	inline void set_U3CAnonymousU3Ek__BackingField_3(bool value)
	{
		___U3CAnonymousU3Ek__BackingField_3 = value;
	}

	inline static int32_t get_offset_of_U3CIsDynamicExpressionU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(ScriptLoadingContext_t2755804994, ___U3CIsDynamicExpressionU3Ek__BackingField_4)); }
	inline bool get_U3CIsDynamicExpressionU3Ek__BackingField_4() const { return ___U3CIsDynamicExpressionU3Ek__BackingField_4; }
	inline bool* get_address_of_U3CIsDynamicExpressionU3Ek__BackingField_4() { return &___U3CIsDynamicExpressionU3Ek__BackingField_4; }
	inline void set_U3CIsDynamicExpressionU3Ek__BackingField_4(bool value)
	{
		___U3CIsDynamicExpressionU3Ek__BackingField_4 = value;
	}

	inline static int32_t get_offset_of_U3CLexerU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(ScriptLoadingContext_t2755804994, ___U3CLexerU3Ek__BackingField_5)); }
	inline Lexer_t530427525 * get_U3CLexerU3Ek__BackingField_5() const { return ___U3CLexerU3Ek__BackingField_5; }
	inline Lexer_t530427525 ** get_address_of_U3CLexerU3Ek__BackingField_5() { return &___U3CLexerU3Ek__BackingField_5; }
	inline void set_U3CLexerU3Ek__BackingField_5(Lexer_t530427525 * value)
	{
		___U3CLexerU3Ek__BackingField_5 = value;
		Il2CppCodeGenWriteBarrier((&___U3CLexerU3Ek__BackingField_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SCRIPTLOADINGCONTEXT_T2755804994_H
#ifndef U3CGETGETTERCALLBACKASDYNVALUEU3EC__ANONSTOREY0_T2735016947_H
#define U3CGETGETTERCALLBACKASDYNVALUEU3EC__ANONSTOREY0_T2735016947_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MoonSharp.Interpreter.Interop.BasicDescriptors.MemberDescriptor/<GetGetterCallbackAsDynValue>c__AnonStorey0
struct  U3CGetGetterCallbackAsDynValueU3Ec__AnonStorey0_t2735016947  : public RuntimeObject
{
public:
	// MoonSharp.Interpreter.Interop.BasicDescriptors.IMemberDescriptor MoonSharp.Interpreter.Interop.BasicDescriptors.MemberDescriptor/<GetGetterCallbackAsDynValue>c__AnonStorey0::desc
	RuntimeObject* ___desc_0;
	// MoonSharp.Interpreter.Script MoonSharp.Interpreter.Interop.BasicDescriptors.MemberDescriptor/<GetGetterCallbackAsDynValue>c__AnonStorey0::script
	Script_t154231481 * ___script_1;
	// System.Object MoonSharp.Interpreter.Interop.BasicDescriptors.MemberDescriptor/<GetGetterCallbackAsDynValue>c__AnonStorey0::obj
	RuntimeObject * ___obj_2;

public:
	inline static int32_t get_offset_of_desc_0() { return static_cast<int32_t>(offsetof(U3CGetGetterCallbackAsDynValueU3Ec__AnonStorey0_t2735016947, ___desc_0)); }
	inline RuntimeObject* get_desc_0() const { return ___desc_0; }
	inline RuntimeObject** get_address_of_desc_0() { return &___desc_0; }
	inline void set_desc_0(RuntimeObject* value)
	{
		___desc_0 = value;
		Il2CppCodeGenWriteBarrier((&___desc_0), value);
	}

	inline static int32_t get_offset_of_script_1() { return static_cast<int32_t>(offsetof(U3CGetGetterCallbackAsDynValueU3Ec__AnonStorey0_t2735016947, ___script_1)); }
	inline Script_t154231481 * get_script_1() const { return ___script_1; }
	inline Script_t154231481 ** get_address_of_script_1() { return &___script_1; }
	inline void set_script_1(Script_t154231481 * value)
	{
		___script_1 = value;
		Il2CppCodeGenWriteBarrier((&___script_1), value);
	}

	inline static int32_t get_offset_of_obj_2() { return static_cast<int32_t>(offsetof(U3CGetGetterCallbackAsDynValueU3Ec__AnonStorey0_t2735016947, ___obj_2)); }
	inline RuntimeObject * get_obj_2() const { return ___obj_2; }
	inline RuntimeObject ** get_address_of_obj_2() { return &___obj_2; }
	inline void set_obj_2(RuntimeObject * value)
	{
		___obj_2 = value;
		Il2CppCodeGenWriteBarrier((&___obj_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CGETGETTERCALLBACKASDYNVALUEU3EC__ANONSTOREY0_T2735016947_H
#ifndef SCRIPTPRIVATERESOURCE_EXTENSION_T1646673236_H
#define SCRIPTPRIVATERESOURCE_EXTENSION_T1646673236_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MoonSharp.Interpreter.ScriptPrivateResource_Extension
struct  ScriptPrivateResource_Extension_t1646673236  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SCRIPTPRIVATERESOURCE_EXTENSION_T1646673236_H
#ifndef MEMBERDESCRIPTOR_T1636821019_H
#define MEMBERDESCRIPTOR_T1636821019_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MoonSharp.Interpreter.Interop.BasicDescriptors.MemberDescriptor
struct  MemberDescriptor_t1636821019  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MEMBERDESCRIPTOR_T1636821019_H
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
#ifndef LIST_1_T2020227490_H
#define LIST_1_T2020227490_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1<MoonSharp.Interpreter.DynValue>
struct  List_1_t2020227490  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	DynValueU5BU5D_t2098401829* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t2020227490, ____items_1)); }
	inline DynValueU5BU5D_t2098401829* get__items_1() const { return ____items_1; }
	inline DynValueU5BU5D_t2098401829** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(DynValueU5BU5D_t2098401829* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((&____items_1), value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t2020227490, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t2020227490, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}
};

struct List_1_t2020227490_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::EmptyArray
	DynValueU5BU5D_t2098401829* ___EmptyArray_4;

public:
	inline static int32_t get_offset_of_EmptyArray_4() { return static_cast<int32_t>(offsetof(List_1_t2020227490_StaticFields, ___EmptyArray_4)); }
	inline DynValueU5BU5D_t2098401829* get_EmptyArray_4() const { return ___EmptyArray_4; }
	inline DynValueU5BU5D_t2098401829** get_address_of_EmptyArray_4() { return &___EmptyArray_4; }
	inline void set_EmptyArray_4(DynValueU5BU5D_t2098401829* value)
	{
		___EmptyArray_4 = value;
		Il2CppCodeGenWriteBarrier((&___EmptyArray_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LIST_1_T2020227490_H
#ifndef U3CASUNITYCOROUTINEU3EC__ITERATOR3_T156915770_H
#define U3CASUNITYCOROUTINEU3EC__ITERATOR3_T156915770_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MoonSharp.Interpreter.Coroutine/<AsUnityCoroutine>c__Iterator3
struct  U3CAsUnityCoroutineU3Ec__Iterator3_t156915770  : public RuntimeObject
{
public:
	// System.Collections.Generic.IEnumerator`1<MoonSharp.Interpreter.DynValue> MoonSharp.Interpreter.Coroutine/<AsUnityCoroutine>c__Iterator3::$locvar0
	RuntimeObject* ___U24locvar0_0;
	// MoonSharp.Interpreter.DynValue MoonSharp.Interpreter.Coroutine/<AsUnityCoroutine>c__Iterator3::<v>__1
	DynValue_t548152748 * ___U3CvU3E__1_1;
	// MoonSharp.Interpreter.Coroutine MoonSharp.Interpreter.Coroutine/<AsUnityCoroutine>c__Iterator3::$this
	Coroutine_t2598270305 * ___U24this_2;
	// System.Object MoonSharp.Interpreter.Coroutine/<AsUnityCoroutine>c__Iterator3::$current
	RuntimeObject * ___U24current_3;
	// System.Boolean MoonSharp.Interpreter.Coroutine/<AsUnityCoroutine>c__Iterator3::$disposing
	bool ___U24disposing_4;
	// System.Int32 MoonSharp.Interpreter.Coroutine/<AsUnityCoroutine>c__Iterator3::$PC
	int32_t ___U24PC_5;

public:
	inline static int32_t get_offset_of_U24locvar0_0() { return static_cast<int32_t>(offsetof(U3CAsUnityCoroutineU3Ec__Iterator3_t156915770, ___U24locvar0_0)); }
	inline RuntimeObject* get_U24locvar0_0() const { return ___U24locvar0_0; }
	inline RuntimeObject** get_address_of_U24locvar0_0() { return &___U24locvar0_0; }
	inline void set_U24locvar0_0(RuntimeObject* value)
	{
		___U24locvar0_0 = value;
		Il2CppCodeGenWriteBarrier((&___U24locvar0_0), value);
	}

	inline static int32_t get_offset_of_U3CvU3E__1_1() { return static_cast<int32_t>(offsetof(U3CAsUnityCoroutineU3Ec__Iterator3_t156915770, ___U3CvU3E__1_1)); }
	inline DynValue_t548152748 * get_U3CvU3E__1_1() const { return ___U3CvU3E__1_1; }
	inline DynValue_t548152748 ** get_address_of_U3CvU3E__1_1() { return &___U3CvU3E__1_1; }
	inline void set_U3CvU3E__1_1(DynValue_t548152748 * value)
	{
		___U3CvU3E__1_1 = value;
		Il2CppCodeGenWriteBarrier((&___U3CvU3E__1_1), value);
	}

	inline static int32_t get_offset_of_U24this_2() { return static_cast<int32_t>(offsetof(U3CAsUnityCoroutineU3Ec__Iterator3_t156915770, ___U24this_2)); }
	inline Coroutine_t2598270305 * get_U24this_2() const { return ___U24this_2; }
	inline Coroutine_t2598270305 ** get_address_of_U24this_2() { return &___U24this_2; }
	inline void set_U24this_2(Coroutine_t2598270305 * value)
	{
		___U24this_2 = value;
		Il2CppCodeGenWriteBarrier((&___U24this_2), value);
	}

	inline static int32_t get_offset_of_U24current_3() { return static_cast<int32_t>(offsetof(U3CAsUnityCoroutineU3Ec__Iterator3_t156915770, ___U24current_3)); }
	inline RuntimeObject * get_U24current_3() const { return ___U24current_3; }
	inline RuntimeObject ** get_address_of_U24current_3() { return &___U24current_3; }
	inline void set_U24current_3(RuntimeObject * value)
	{
		___U24current_3 = value;
		Il2CppCodeGenWriteBarrier((&___U24current_3), value);
	}

	inline static int32_t get_offset_of_U24disposing_4() { return static_cast<int32_t>(offsetof(U3CAsUnityCoroutineU3Ec__Iterator3_t156915770, ___U24disposing_4)); }
	inline bool get_U24disposing_4() const { return ___U24disposing_4; }
	inline bool* get_address_of_U24disposing_4() { return &___U24disposing_4; }
	inline void set_U24disposing_4(bool value)
	{
		___U24disposing_4 = value;
	}

	inline static int32_t get_offset_of_U24PC_5() { return static_cast<int32_t>(offsetof(U3CAsUnityCoroutineU3Ec__Iterator3_t156915770, ___U24PC_5)); }
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
#endif // U3CASUNITYCOROUTINEU3EC__ITERATOR3_T156915770_H
#ifndef U3CASENUMERABLEU3EC__ITERATOR1_T413804840_H
#define U3CASENUMERABLEU3EC__ITERATOR1_T413804840_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MoonSharp.Interpreter.Coroutine/<AsEnumerable>c__Iterator1
struct  U3CAsEnumerableU3Ec__Iterator1_t413804840  : public RuntimeObject
{
public:
	// System.Collections.Generic.IEnumerator`1<MoonSharp.Interpreter.DynValue> MoonSharp.Interpreter.Coroutine/<AsEnumerable>c__Iterator1::$locvar0
	RuntimeObject* ___U24locvar0_0;
	// MoonSharp.Interpreter.DynValue MoonSharp.Interpreter.Coroutine/<AsEnumerable>c__Iterator1::<v>__1
	DynValue_t548152748 * ___U3CvU3E__1_1;
	// MoonSharp.Interpreter.Coroutine MoonSharp.Interpreter.Coroutine/<AsEnumerable>c__Iterator1::$this
	Coroutine_t2598270305 * ___U24this_2;
	// System.Object MoonSharp.Interpreter.Coroutine/<AsEnumerable>c__Iterator1::$current
	RuntimeObject * ___U24current_3;
	// System.Boolean MoonSharp.Interpreter.Coroutine/<AsEnumerable>c__Iterator1::$disposing
	bool ___U24disposing_4;
	// System.Int32 MoonSharp.Interpreter.Coroutine/<AsEnumerable>c__Iterator1::$PC
	int32_t ___U24PC_5;

public:
	inline static int32_t get_offset_of_U24locvar0_0() { return static_cast<int32_t>(offsetof(U3CAsEnumerableU3Ec__Iterator1_t413804840, ___U24locvar0_0)); }
	inline RuntimeObject* get_U24locvar0_0() const { return ___U24locvar0_0; }
	inline RuntimeObject** get_address_of_U24locvar0_0() { return &___U24locvar0_0; }
	inline void set_U24locvar0_0(RuntimeObject* value)
	{
		___U24locvar0_0 = value;
		Il2CppCodeGenWriteBarrier((&___U24locvar0_0), value);
	}

	inline static int32_t get_offset_of_U3CvU3E__1_1() { return static_cast<int32_t>(offsetof(U3CAsEnumerableU3Ec__Iterator1_t413804840, ___U3CvU3E__1_1)); }
	inline DynValue_t548152748 * get_U3CvU3E__1_1() const { return ___U3CvU3E__1_1; }
	inline DynValue_t548152748 ** get_address_of_U3CvU3E__1_1() { return &___U3CvU3E__1_1; }
	inline void set_U3CvU3E__1_1(DynValue_t548152748 * value)
	{
		___U3CvU3E__1_1 = value;
		Il2CppCodeGenWriteBarrier((&___U3CvU3E__1_1), value);
	}

	inline static int32_t get_offset_of_U24this_2() { return static_cast<int32_t>(offsetof(U3CAsEnumerableU3Ec__Iterator1_t413804840, ___U24this_2)); }
	inline Coroutine_t2598270305 * get_U24this_2() const { return ___U24this_2; }
	inline Coroutine_t2598270305 ** get_address_of_U24this_2() { return &___U24this_2; }
	inline void set_U24this_2(Coroutine_t2598270305 * value)
	{
		___U24this_2 = value;
		Il2CppCodeGenWriteBarrier((&___U24this_2), value);
	}

	inline static int32_t get_offset_of_U24current_3() { return static_cast<int32_t>(offsetof(U3CAsEnumerableU3Ec__Iterator1_t413804840, ___U24current_3)); }
	inline RuntimeObject * get_U24current_3() const { return ___U24current_3; }
	inline RuntimeObject ** get_address_of_U24current_3() { return &___U24current_3; }
	inline void set_U24current_3(RuntimeObject * value)
	{
		___U24current_3 = value;
		Il2CppCodeGenWriteBarrier((&___U24current_3), value);
	}

	inline static int32_t get_offset_of_U24disposing_4() { return static_cast<int32_t>(offsetof(U3CAsEnumerableU3Ec__Iterator1_t413804840, ___U24disposing_4)); }
	inline bool get_U24disposing_4() const { return ___U24disposing_4; }
	inline bool* get_address_of_U24disposing_4() { return &___U24disposing_4; }
	inline void set_U24disposing_4(bool value)
	{
		___U24disposing_4 = value;
	}

	inline static int32_t get_offset_of_U24PC_5() { return static_cast<int32_t>(offsetof(U3CAsEnumerableU3Ec__Iterator1_t413804840, ___U24PC_5)); }
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
#endif // U3CASENUMERABLEU3EC__ITERATOR1_T413804840_H
#ifndef U3CASTYPEDENUMERABLEU3EC__ITERATOR0_T3883737723_H
#define U3CASTYPEDENUMERABLEU3EC__ITERATOR0_T3883737723_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MoonSharp.Interpreter.Coroutine/<AsTypedEnumerable>c__Iterator0
struct  U3CAsTypedEnumerableU3Ec__Iterator0_t3883737723  : public RuntimeObject
{
public:
	// MoonSharp.Interpreter.Coroutine MoonSharp.Interpreter.Coroutine/<AsTypedEnumerable>c__Iterator0::$this
	Coroutine_t2598270305 * ___U24this_0;
	// MoonSharp.Interpreter.DynValue MoonSharp.Interpreter.Coroutine/<AsTypedEnumerable>c__Iterator0::$current
	DynValue_t548152748 * ___U24current_1;
	// System.Boolean MoonSharp.Interpreter.Coroutine/<AsTypedEnumerable>c__Iterator0::$disposing
	bool ___U24disposing_2;
	// System.Int32 MoonSharp.Interpreter.Coroutine/<AsTypedEnumerable>c__Iterator0::$PC
	int32_t ___U24PC_3;

public:
	inline static int32_t get_offset_of_U24this_0() { return static_cast<int32_t>(offsetof(U3CAsTypedEnumerableU3Ec__Iterator0_t3883737723, ___U24this_0)); }
	inline Coroutine_t2598270305 * get_U24this_0() const { return ___U24this_0; }
	inline Coroutine_t2598270305 ** get_address_of_U24this_0() { return &___U24this_0; }
	inline void set_U24this_0(Coroutine_t2598270305 * value)
	{
		___U24this_0 = value;
		Il2CppCodeGenWriteBarrier((&___U24this_0), value);
	}

	inline static int32_t get_offset_of_U24current_1() { return static_cast<int32_t>(offsetof(U3CAsTypedEnumerableU3Ec__Iterator0_t3883737723, ___U24current_1)); }
	inline DynValue_t548152748 * get_U24current_1() const { return ___U24current_1; }
	inline DynValue_t548152748 ** get_address_of_U24current_1() { return &___U24current_1; }
	inline void set_U24current_1(DynValue_t548152748 * value)
	{
		___U24current_1 = value;
		Il2CppCodeGenWriteBarrier((&___U24current_1), value);
	}

	inline static int32_t get_offset_of_U24disposing_2() { return static_cast<int32_t>(offsetof(U3CAsTypedEnumerableU3Ec__Iterator0_t3883737723, ___U24disposing_2)); }
	inline bool get_U24disposing_2() const { return ___U24disposing_2; }
	inline bool* get_address_of_U24disposing_2() { return &___U24disposing_2; }
	inline void set_U24disposing_2(bool value)
	{
		___U24disposing_2 = value;
	}

	inline static int32_t get_offset_of_U24PC_3() { return static_cast<int32_t>(offsetof(U3CAsTypedEnumerableU3Ec__Iterator0_t3883737723, ___U24PC_3)); }
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
#endif // U3CASTYPEDENUMERABLEU3EC__ITERATOR0_T3883737723_H
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
#ifndef REFIDOBJECT_T1123467269_H
#define REFIDOBJECT_T1123467269_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MoonSharp.Interpreter.RefIdObject
struct  RefIdObject_t1123467269  : public RuntimeObject
{
public:
	// System.Int32 MoonSharp.Interpreter.RefIdObject::m_RefID
	int32_t ___m_RefID_1;

public:
	inline static int32_t get_offset_of_m_RefID_1() { return static_cast<int32_t>(offsetof(RefIdObject_t1123467269, ___m_RefID_1)); }
	inline int32_t get_m_RefID_1() const { return ___m_RefID_1; }
	inline int32_t* get_address_of_m_RefID_1() { return &___m_RefID_1; }
	inline void set_m_RefID_1(int32_t value)
	{
		___m_RefID_1 = value;
	}
};

struct RefIdObject_t1123467269_StaticFields
{
public:
	// System.Int32 MoonSharp.Interpreter.RefIdObject::s_RefIDCounter
	int32_t ___s_RefIDCounter_0;

public:
	inline static int32_t get_offset_of_s_RefIDCounter_0() { return static_cast<int32_t>(offsetof(RefIdObject_t1123467269_StaticFields, ___s_RefIDCounter_0)); }
	inline int32_t get_s_RefIDCounter_0() const { return ___s_RefIDCounter_0; }
	inline int32_t* get_address_of_s_RefIDCounter_0() { return &___s_RefIDCounter_0; }
	inline void set_s_RefIDCounter_0(int32_t value)
	{
		___s_RefIDCounter_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // REFIDOBJECT_T1123467269_H
#ifndef TAILCALLDATA_T733779567_H
#define TAILCALLDATA_T733779567_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MoonSharp.Interpreter.TailCallData
struct  TailCallData_t733779567  : public RuntimeObject
{
public:
	// MoonSharp.Interpreter.DynValue MoonSharp.Interpreter.TailCallData::<Function>k__BackingField
	DynValue_t548152748 * ___U3CFunctionU3Ek__BackingField_0;
	// MoonSharp.Interpreter.DynValue[] MoonSharp.Interpreter.TailCallData::<Args>k__BackingField
	DynValueU5BU5D_t2098401829* ___U3CArgsU3Ek__BackingField_1;
	// MoonSharp.Interpreter.CallbackFunction MoonSharp.Interpreter.TailCallData::<Continuation>k__BackingField
	CallbackFunction_t350661728 * ___U3CContinuationU3Ek__BackingField_2;
	// MoonSharp.Interpreter.CallbackFunction MoonSharp.Interpreter.TailCallData::<ErrorHandler>k__BackingField
	CallbackFunction_t350661728 * ___U3CErrorHandlerU3Ek__BackingField_3;
	// MoonSharp.Interpreter.DynValue MoonSharp.Interpreter.TailCallData::<ErrorHandlerBeforeUnwind>k__BackingField
	DynValue_t548152748 * ___U3CErrorHandlerBeforeUnwindU3Ek__BackingField_4;

public:
	inline static int32_t get_offset_of_U3CFunctionU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(TailCallData_t733779567, ___U3CFunctionU3Ek__BackingField_0)); }
	inline DynValue_t548152748 * get_U3CFunctionU3Ek__BackingField_0() const { return ___U3CFunctionU3Ek__BackingField_0; }
	inline DynValue_t548152748 ** get_address_of_U3CFunctionU3Ek__BackingField_0() { return &___U3CFunctionU3Ek__BackingField_0; }
	inline void set_U3CFunctionU3Ek__BackingField_0(DynValue_t548152748 * value)
	{
		___U3CFunctionU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((&___U3CFunctionU3Ek__BackingField_0), value);
	}

	inline static int32_t get_offset_of_U3CArgsU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(TailCallData_t733779567, ___U3CArgsU3Ek__BackingField_1)); }
	inline DynValueU5BU5D_t2098401829* get_U3CArgsU3Ek__BackingField_1() const { return ___U3CArgsU3Ek__BackingField_1; }
	inline DynValueU5BU5D_t2098401829** get_address_of_U3CArgsU3Ek__BackingField_1() { return &___U3CArgsU3Ek__BackingField_1; }
	inline void set_U3CArgsU3Ek__BackingField_1(DynValueU5BU5D_t2098401829* value)
	{
		___U3CArgsU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((&___U3CArgsU3Ek__BackingField_1), value);
	}

	inline static int32_t get_offset_of_U3CContinuationU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(TailCallData_t733779567, ___U3CContinuationU3Ek__BackingField_2)); }
	inline CallbackFunction_t350661728 * get_U3CContinuationU3Ek__BackingField_2() const { return ___U3CContinuationU3Ek__BackingField_2; }
	inline CallbackFunction_t350661728 ** get_address_of_U3CContinuationU3Ek__BackingField_2() { return &___U3CContinuationU3Ek__BackingField_2; }
	inline void set_U3CContinuationU3Ek__BackingField_2(CallbackFunction_t350661728 * value)
	{
		___U3CContinuationU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((&___U3CContinuationU3Ek__BackingField_2), value);
	}

	inline static int32_t get_offset_of_U3CErrorHandlerU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(TailCallData_t733779567, ___U3CErrorHandlerU3Ek__BackingField_3)); }
	inline CallbackFunction_t350661728 * get_U3CErrorHandlerU3Ek__BackingField_3() const { return ___U3CErrorHandlerU3Ek__BackingField_3; }
	inline CallbackFunction_t350661728 ** get_address_of_U3CErrorHandlerU3Ek__BackingField_3() { return &___U3CErrorHandlerU3Ek__BackingField_3; }
	inline void set_U3CErrorHandlerU3Ek__BackingField_3(CallbackFunction_t350661728 * value)
	{
		___U3CErrorHandlerU3Ek__BackingField_3 = value;
		Il2CppCodeGenWriteBarrier((&___U3CErrorHandlerU3Ek__BackingField_3), value);
	}

	inline static int32_t get_offset_of_U3CErrorHandlerBeforeUnwindU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(TailCallData_t733779567, ___U3CErrorHandlerBeforeUnwindU3Ek__BackingField_4)); }
	inline DynValue_t548152748 * get_U3CErrorHandlerBeforeUnwindU3Ek__BackingField_4() const { return ___U3CErrorHandlerBeforeUnwindU3Ek__BackingField_4; }
	inline DynValue_t548152748 ** get_address_of_U3CErrorHandlerBeforeUnwindU3Ek__BackingField_4() { return &___U3CErrorHandlerBeforeUnwindU3Ek__BackingField_4; }
	inline void set_U3CErrorHandlerBeforeUnwindU3Ek__BackingField_4(DynValue_t548152748 * value)
	{
		___U3CErrorHandlerBeforeUnwindU3Ek__BackingField_4 = value;
		Il2CppCodeGenWriteBarrier((&___U3CErrorHandlerBeforeUnwindU3Ek__BackingField_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TAILCALLDATA_T733779567_H
#ifndef REFERENCEEQUALITYCOMPARER_T3730594676_H
#define REFERENCEEQUALITYCOMPARER_T3730594676_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MoonSharp.Interpreter.DataStructs.ReferenceEqualityComparer
struct  ReferenceEqualityComparer_t3730594676  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // REFERENCEEQUALITYCOMPARER_T3730594676_H
#ifndef DISPATCHINGUSERDATADESCRIPTOR_T4246933607_H
#define DISPATCHINGUSERDATADESCRIPTOR_T4246933607_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MoonSharp.Interpreter.Interop.BasicDescriptors.DispatchingUserDataDescriptor
struct  DispatchingUserDataDescriptor_t4246933607  : public RuntimeObject
{
public:
	// System.Int32 MoonSharp.Interpreter.Interop.BasicDescriptors.DispatchingUserDataDescriptor::m_ExtMethodsVersion
	int32_t ___m_ExtMethodsVersion_0;
	// System.Collections.Generic.Dictionary`2<System.String,MoonSharp.Interpreter.Interop.BasicDescriptors.IMemberDescriptor> MoonSharp.Interpreter.Interop.BasicDescriptors.DispatchingUserDataDescriptor::m_MetaMembers
	Dictionary_2_t3150095435 * ___m_MetaMembers_1;
	// System.Collections.Generic.Dictionary`2<System.String,MoonSharp.Interpreter.Interop.BasicDescriptors.IMemberDescriptor> MoonSharp.Interpreter.Interop.BasicDescriptors.DispatchingUserDataDescriptor::m_Members
	Dictionary_2_t3150095435 * ___m_Members_2;
	// System.String MoonSharp.Interpreter.Interop.BasicDescriptors.DispatchingUserDataDescriptor::<Name>k__BackingField
	String_t* ___U3CNameU3Ek__BackingField_7;
	// System.Type MoonSharp.Interpreter.Interop.BasicDescriptors.DispatchingUserDataDescriptor::<Type>k__BackingField
	Type_t * ___U3CTypeU3Ek__BackingField_8;
	// System.String MoonSharp.Interpreter.Interop.BasicDescriptors.DispatchingUserDataDescriptor::<FriendlyName>k__BackingField
	String_t* ___U3CFriendlyNameU3Ek__BackingField_9;

public:
	inline static int32_t get_offset_of_m_ExtMethodsVersion_0() { return static_cast<int32_t>(offsetof(DispatchingUserDataDescriptor_t4246933607, ___m_ExtMethodsVersion_0)); }
	inline int32_t get_m_ExtMethodsVersion_0() const { return ___m_ExtMethodsVersion_0; }
	inline int32_t* get_address_of_m_ExtMethodsVersion_0() { return &___m_ExtMethodsVersion_0; }
	inline void set_m_ExtMethodsVersion_0(int32_t value)
	{
		___m_ExtMethodsVersion_0 = value;
	}

	inline static int32_t get_offset_of_m_MetaMembers_1() { return static_cast<int32_t>(offsetof(DispatchingUserDataDescriptor_t4246933607, ___m_MetaMembers_1)); }
	inline Dictionary_2_t3150095435 * get_m_MetaMembers_1() const { return ___m_MetaMembers_1; }
	inline Dictionary_2_t3150095435 ** get_address_of_m_MetaMembers_1() { return &___m_MetaMembers_1; }
	inline void set_m_MetaMembers_1(Dictionary_2_t3150095435 * value)
	{
		___m_MetaMembers_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_MetaMembers_1), value);
	}

	inline static int32_t get_offset_of_m_Members_2() { return static_cast<int32_t>(offsetof(DispatchingUserDataDescriptor_t4246933607, ___m_Members_2)); }
	inline Dictionary_2_t3150095435 * get_m_Members_2() const { return ___m_Members_2; }
	inline Dictionary_2_t3150095435 ** get_address_of_m_Members_2() { return &___m_Members_2; }
	inline void set_m_Members_2(Dictionary_2_t3150095435 * value)
	{
		___m_Members_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_Members_2), value);
	}

	inline static int32_t get_offset_of_U3CNameU3Ek__BackingField_7() { return static_cast<int32_t>(offsetof(DispatchingUserDataDescriptor_t4246933607, ___U3CNameU3Ek__BackingField_7)); }
	inline String_t* get_U3CNameU3Ek__BackingField_7() const { return ___U3CNameU3Ek__BackingField_7; }
	inline String_t** get_address_of_U3CNameU3Ek__BackingField_7() { return &___U3CNameU3Ek__BackingField_7; }
	inline void set_U3CNameU3Ek__BackingField_7(String_t* value)
	{
		___U3CNameU3Ek__BackingField_7 = value;
		Il2CppCodeGenWriteBarrier((&___U3CNameU3Ek__BackingField_7), value);
	}

	inline static int32_t get_offset_of_U3CTypeU3Ek__BackingField_8() { return static_cast<int32_t>(offsetof(DispatchingUserDataDescriptor_t4246933607, ___U3CTypeU3Ek__BackingField_8)); }
	inline Type_t * get_U3CTypeU3Ek__BackingField_8() const { return ___U3CTypeU3Ek__BackingField_8; }
	inline Type_t ** get_address_of_U3CTypeU3Ek__BackingField_8() { return &___U3CTypeU3Ek__BackingField_8; }
	inline void set_U3CTypeU3Ek__BackingField_8(Type_t * value)
	{
		___U3CTypeU3Ek__BackingField_8 = value;
		Il2CppCodeGenWriteBarrier((&___U3CTypeU3Ek__BackingField_8), value);
	}

	inline static int32_t get_offset_of_U3CFriendlyNameU3Ek__BackingField_9() { return static_cast<int32_t>(offsetof(DispatchingUserDataDescriptor_t4246933607, ___U3CFriendlyNameU3Ek__BackingField_9)); }
	inline String_t* get_U3CFriendlyNameU3Ek__BackingField_9() const { return ___U3CFriendlyNameU3Ek__BackingField_9; }
	inline String_t** get_address_of_U3CFriendlyNameU3Ek__BackingField_9() { return &___U3CFriendlyNameU3Ek__BackingField_9; }
	inline void set_U3CFriendlyNameU3Ek__BackingField_9(String_t* value)
	{
		___U3CFriendlyNameU3Ek__BackingField_9 = value;
		Il2CppCodeGenWriteBarrier((&___U3CFriendlyNameU3Ek__BackingField_9), value);
	}
};

struct DispatchingUserDataDescriptor_t4246933607_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> MoonSharp.Interpreter.Interop.BasicDescriptors.DispatchingUserDataDescriptor::<>f__switch$map4
	Dictionary_2_t2736202052 * ___U3CU3Ef__switchU24map4_10;

public:
	inline static int32_t get_offset_of_U3CU3Ef__switchU24map4_10() { return static_cast<int32_t>(offsetof(DispatchingUserDataDescriptor_t4246933607_StaticFields, ___U3CU3Ef__switchU24map4_10)); }
	inline Dictionary_2_t2736202052 * get_U3CU3Ef__switchU24map4_10() const { return ___U3CU3Ef__switchU24map4_10; }
	inline Dictionary_2_t2736202052 ** get_address_of_U3CU3Ef__switchU24map4_10() { return &___U3CU3Ef__switchU24map4_10; }
	inline void set_U3CU3Ef__switchU24map4_10(Dictionary_2_t2736202052 * value)
	{
		___U3CU3Ef__switchU24map4_10 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__switchU24map4_10), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DISPATCHINGUSERDATADESCRIPTOR_T4246933607_H
#ifndef CALLBACKARGUMENTS_T758669439_H
#define CALLBACKARGUMENTS_T758669439_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MoonSharp.Interpreter.CallbackArguments
struct  CallbackArguments_t758669439  : public RuntimeObject
{
public:
	// System.Collections.Generic.IList`1<MoonSharp.Interpreter.DynValue> MoonSharp.Interpreter.CallbackArguments::m_Args
	RuntimeObject* ___m_Args_0;
	// System.Int32 MoonSharp.Interpreter.CallbackArguments::m_Count
	int32_t ___m_Count_1;
	// System.Boolean MoonSharp.Interpreter.CallbackArguments::m_LastIsTuple
	bool ___m_LastIsTuple_2;
	// System.Boolean MoonSharp.Interpreter.CallbackArguments::<IsMethodCall>k__BackingField
	bool ___U3CIsMethodCallU3Ek__BackingField_3;

public:
	inline static int32_t get_offset_of_m_Args_0() { return static_cast<int32_t>(offsetof(CallbackArguments_t758669439, ___m_Args_0)); }
	inline RuntimeObject* get_m_Args_0() const { return ___m_Args_0; }
	inline RuntimeObject** get_address_of_m_Args_0() { return &___m_Args_0; }
	inline void set_m_Args_0(RuntimeObject* value)
	{
		___m_Args_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_Args_0), value);
	}

	inline static int32_t get_offset_of_m_Count_1() { return static_cast<int32_t>(offsetof(CallbackArguments_t758669439, ___m_Count_1)); }
	inline int32_t get_m_Count_1() const { return ___m_Count_1; }
	inline int32_t* get_address_of_m_Count_1() { return &___m_Count_1; }
	inline void set_m_Count_1(int32_t value)
	{
		___m_Count_1 = value;
	}

	inline static int32_t get_offset_of_m_LastIsTuple_2() { return static_cast<int32_t>(offsetof(CallbackArguments_t758669439, ___m_LastIsTuple_2)); }
	inline bool get_m_LastIsTuple_2() const { return ___m_LastIsTuple_2; }
	inline bool* get_address_of_m_LastIsTuple_2() { return &___m_LastIsTuple_2; }
	inline void set_m_LastIsTuple_2(bool value)
	{
		___m_LastIsTuple_2 = value;
	}

	inline static int32_t get_offset_of_U3CIsMethodCallU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(CallbackArguments_t758669439, ___U3CIsMethodCallU3Ek__BackingField_3)); }
	inline bool get_U3CIsMethodCallU3Ek__BackingField_3() const { return ___U3CIsMethodCallU3Ek__BackingField_3; }
	inline bool* get_address_of_U3CIsMethodCallU3Ek__BackingField_3() { return &___U3CIsMethodCallU3Ek__BackingField_3; }
	inline void set_U3CIsMethodCallU3Ek__BackingField_3(bool value)
	{
		___U3CIsMethodCallU3Ek__BackingField_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CALLBACKARGUMENTS_T758669439_H
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
#ifndef U3CMULTIDISPATCHLESSTHANOREQUALU3EC__ANONSTOREY0_T4066408643_H
#define U3CMULTIDISPATCHLESSTHANOREQUALU3EC__ANONSTOREY0_T4066408643_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MoonSharp.Interpreter.Interop.BasicDescriptors.DispatchingUserDataDescriptor/<MultiDispatchLessThanOrEqual>c__AnonStorey0
struct  U3CMultiDispatchLessThanOrEqualU3Ec__AnonStorey0_t4066408643  : public RuntimeObject
{
public:
	// System.Object MoonSharp.Interpreter.Interop.BasicDescriptors.DispatchingUserDataDescriptor/<MultiDispatchLessThanOrEqual>c__AnonStorey0::obj
	RuntimeObject * ___obj_0;
	// MoonSharp.Interpreter.Interop.BasicDescriptors.DispatchingUserDataDescriptor MoonSharp.Interpreter.Interop.BasicDescriptors.DispatchingUserDataDescriptor/<MultiDispatchLessThanOrEqual>c__AnonStorey0::$this
	DispatchingUserDataDescriptor_t4246933607 * ___U24this_1;

public:
	inline static int32_t get_offset_of_obj_0() { return static_cast<int32_t>(offsetof(U3CMultiDispatchLessThanOrEqualU3Ec__AnonStorey0_t4066408643, ___obj_0)); }
	inline RuntimeObject * get_obj_0() const { return ___obj_0; }
	inline RuntimeObject ** get_address_of_obj_0() { return &___obj_0; }
	inline void set_obj_0(RuntimeObject * value)
	{
		___obj_0 = value;
		Il2CppCodeGenWriteBarrier((&___obj_0), value);
	}

	inline static int32_t get_offset_of_U24this_1() { return static_cast<int32_t>(offsetof(U3CMultiDispatchLessThanOrEqualU3Ec__AnonStorey0_t4066408643, ___U24this_1)); }
	inline DispatchingUserDataDescriptor_t4246933607 * get_U24this_1() const { return ___U24this_1; }
	inline DispatchingUserDataDescriptor_t4246933607 ** get_address_of_U24this_1() { return &___U24this_1; }
	inline void set_U24this_1(DispatchingUserDataDescriptor_t4246933607 * value)
	{
		___U24this_1 = value;
		Il2CppCodeGenWriteBarrier((&___U24this_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CMULTIDISPATCHLESSTHANOREQUALU3EC__ANONSTOREY0_T4066408643_H
#ifndef U3CMULTIDISPATCHLESSTHANU3EC__ANONSTOREY1_T2966779943_H
#define U3CMULTIDISPATCHLESSTHANU3EC__ANONSTOREY1_T2966779943_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MoonSharp.Interpreter.Interop.BasicDescriptors.DispatchingUserDataDescriptor/<MultiDispatchLessThan>c__AnonStorey1
struct  U3CMultiDispatchLessThanU3Ec__AnonStorey1_t2966779943  : public RuntimeObject
{
public:
	// System.Object MoonSharp.Interpreter.Interop.BasicDescriptors.DispatchingUserDataDescriptor/<MultiDispatchLessThan>c__AnonStorey1::obj
	RuntimeObject * ___obj_0;
	// MoonSharp.Interpreter.Interop.BasicDescriptors.DispatchingUserDataDescriptor MoonSharp.Interpreter.Interop.BasicDescriptors.DispatchingUserDataDescriptor/<MultiDispatchLessThan>c__AnonStorey1::$this
	DispatchingUserDataDescriptor_t4246933607 * ___U24this_1;

public:
	inline static int32_t get_offset_of_obj_0() { return static_cast<int32_t>(offsetof(U3CMultiDispatchLessThanU3Ec__AnonStorey1_t2966779943, ___obj_0)); }
	inline RuntimeObject * get_obj_0() const { return ___obj_0; }
	inline RuntimeObject ** get_address_of_obj_0() { return &___obj_0; }
	inline void set_obj_0(RuntimeObject * value)
	{
		___obj_0 = value;
		Il2CppCodeGenWriteBarrier((&___obj_0), value);
	}

	inline static int32_t get_offset_of_U24this_1() { return static_cast<int32_t>(offsetof(U3CMultiDispatchLessThanU3Ec__AnonStorey1_t2966779943, ___U24this_1)); }
	inline DispatchingUserDataDescriptor_t4246933607 * get_U24this_1() const { return ___U24this_1; }
	inline DispatchingUserDataDescriptor_t4246933607 ** get_address_of_U24this_1() { return &___U24this_1; }
	inline void set_U24this_1(DispatchingUserDataDescriptor_t4246933607 * value)
	{
		___U24this_1 = value;
		Il2CppCodeGenWriteBarrier((&___U24this_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CMULTIDISPATCHLESSTHANU3EC__ANONSTOREY1_T2966779943_H
#ifndef U3CMULTIDISPATCHEQUALU3EC__ANONSTOREY2_T2335897924_H
#define U3CMULTIDISPATCHEQUALU3EC__ANONSTOREY2_T2335897924_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MoonSharp.Interpreter.Interop.BasicDescriptors.DispatchingUserDataDescriptor/<MultiDispatchEqual>c__AnonStorey2
struct  U3CMultiDispatchEqualU3Ec__AnonStorey2_t2335897924  : public RuntimeObject
{
public:
	// System.Object MoonSharp.Interpreter.Interop.BasicDescriptors.DispatchingUserDataDescriptor/<MultiDispatchEqual>c__AnonStorey2::obj
	RuntimeObject * ___obj_0;
	// MoonSharp.Interpreter.Interop.BasicDescriptors.DispatchingUserDataDescriptor MoonSharp.Interpreter.Interop.BasicDescriptors.DispatchingUserDataDescriptor/<MultiDispatchEqual>c__AnonStorey2::$this
	DispatchingUserDataDescriptor_t4246933607 * ___U24this_1;

public:
	inline static int32_t get_offset_of_obj_0() { return static_cast<int32_t>(offsetof(U3CMultiDispatchEqualU3Ec__AnonStorey2_t2335897924, ___obj_0)); }
	inline RuntimeObject * get_obj_0() const { return ___obj_0; }
	inline RuntimeObject ** get_address_of_obj_0() { return &___obj_0; }
	inline void set_obj_0(RuntimeObject * value)
	{
		___obj_0 = value;
		Il2CppCodeGenWriteBarrier((&___obj_0), value);
	}

	inline static int32_t get_offset_of_U24this_1() { return static_cast<int32_t>(offsetof(U3CMultiDispatchEqualU3Ec__AnonStorey2_t2335897924, ___U24this_1)); }
	inline DispatchingUserDataDescriptor_t4246933607 * get_U24this_1() const { return ___U24this_1; }
	inline DispatchingUserDataDescriptor_t4246933607 ** get_address_of_U24this_1() { return &___U24this_1; }
	inline void set_U24this_1(DispatchingUserDataDescriptor_t4246933607 * value)
	{
		___U24this_1 = value;
		Il2CppCodeGenWriteBarrier((&___U24this_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CMULTIDISPATCHEQUALU3EC__ANONSTOREY2_T2335897924_H
#ifndef CLOSURECONTEXT_T772623181_H
#define CLOSURECONTEXT_T772623181_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MoonSharp.Interpreter.Execution.ClosureContext
struct  ClosureContext_t772623181  : public List_1_t2020227490
{
public:
	// System.String[] MoonSharp.Interpreter.Execution.ClosureContext::<Symbols>k__BackingField
	StringU5BU5D_t1281789340* ___U3CSymbolsU3Ek__BackingField_5;

public:
	inline static int32_t get_offset_of_U3CSymbolsU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(ClosureContext_t772623181, ___U3CSymbolsU3Ek__BackingField_5)); }
	inline StringU5BU5D_t1281789340* get_U3CSymbolsU3Ek__BackingField_5() const { return ___U3CSymbolsU3Ek__BackingField_5; }
	inline StringU5BU5D_t1281789340** get_address_of_U3CSymbolsU3Ek__BackingField_5() { return &___U3CSymbolsU3Ek__BackingField_5; }
	inline void set_U3CSymbolsU3Ek__BackingField_5(StringU5BU5D_t1281789340* value)
	{
		___U3CSymbolsU3Ek__BackingField_5 = value;
		Il2CppCodeGenWriteBarrier((&___U3CSymbolsU3Ek__BackingField_5), value);
	}
};

struct ClosureContext_t772623181_StaticFields
{
public:
	// System.Func`2<MoonSharp.Interpreter.SymbolRef,System.String> MoonSharp.Interpreter.Execution.ClosureContext::<>f__am$cache0
	Func_2_t1739109373 * ___U3CU3Ef__amU24cache0_6;

public:
	inline static int32_t get_offset_of_U3CU3Ef__amU24cache0_6() { return static_cast<int32_t>(offsetof(ClosureContext_t772623181_StaticFields, ___U3CU3Ef__amU24cache0_6)); }
	inline Func_2_t1739109373 * get_U3CU3Ef__amU24cache0_6() const { return ___U3CU3Ef__amU24cache0_6; }
	inline Func_2_t1739109373 ** get_address_of_U3CU3Ef__amU24cache0_6() { return &___U3CU3Ef__amU24cache0_6; }
	inline void set_U3CU3Ef__amU24cache0_6(Func_2_t1739109373 * value)
	{
		___U3CU3Ef__amU24cache0_6 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__amU24cache0_6), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CLOSURECONTEXT_T772623181_H
#ifndef TIMESPAN_T881159249_H
#define TIMESPAN_T881159249_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.TimeSpan
struct  TimeSpan_t881159249 
{
public:
	// System.Int64 System.TimeSpan::_ticks
	int64_t ____ticks_8;

public:
	inline static int32_t get_offset_of__ticks_8() { return static_cast<int32_t>(offsetof(TimeSpan_t881159249, ____ticks_8)); }
	inline int64_t get__ticks_8() const { return ____ticks_8; }
	inline int64_t* get_address_of__ticks_8() { return &____ticks_8; }
	inline void set__ticks_8(int64_t value)
	{
		____ticks_8 = value;
	}
};

struct TimeSpan_t881159249_StaticFields
{
public:
	// System.TimeSpan System.TimeSpan::MaxValue
	TimeSpan_t881159249  ___MaxValue_5;
	// System.TimeSpan System.TimeSpan::MinValue
	TimeSpan_t881159249  ___MinValue_6;
	// System.TimeSpan System.TimeSpan::Zero
	TimeSpan_t881159249  ___Zero_7;

public:
	inline static int32_t get_offset_of_MaxValue_5() { return static_cast<int32_t>(offsetof(TimeSpan_t881159249_StaticFields, ___MaxValue_5)); }
	inline TimeSpan_t881159249  get_MaxValue_5() const { return ___MaxValue_5; }
	inline TimeSpan_t881159249 * get_address_of_MaxValue_5() { return &___MaxValue_5; }
	inline void set_MaxValue_5(TimeSpan_t881159249  value)
	{
		___MaxValue_5 = value;
	}

	inline static int32_t get_offset_of_MinValue_6() { return static_cast<int32_t>(offsetof(TimeSpan_t881159249_StaticFields, ___MinValue_6)); }
	inline TimeSpan_t881159249  get_MinValue_6() const { return ___MinValue_6; }
	inline TimeSpan_t881159249 * get_address_of_MinValue_6() { return &___MinValue_6; }
	inline void set_MinValue_6(TimeSpan_t881159249  value)
	{
		___MinValue_6 = value;
	}

	inline static int32_t get_offset_of_Zero_7() { return static_cast<int32_t>(offsetof(TimeSpan_t881159249_StaticFields, ___Zero_7)); }
	inline TimeSpan_t881159249  get_Zero_7() const { return ___Zero_7; }
	inline TimeSpan_t881159249 * get_address_of_Zero_7() { return &___Zero_7; }
	inline void set_Zero_7(TimeSpan_t881159249  value)
	{
		___Zero_7 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TIMESPAN_T881159249_H
#ifndef MOONSHARPVISIBLEATTRIBUTE_T2835884365_H
#define MOONSHARPVISIBLEATTRIBUTE_T2835884365_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MoonSharp.Interpreter.Interop.MoonSharpVisibleAttribute
struct  MoonSharpVisibleAttribute_t2835884365  : public Attribute_t861562559
{
public:
	// System.Boolean MoonSharp.Interpreter.Interop.MoonSharpVisibleAttribute::<Visible>k__BackingField
	bool ___U3CVisibleU3Ek__BackingField_0;

public:
	inline static int32_t get_offset_of_U3CVisibleU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(MoonSharpVisibleAttribute_t2835884365, ___U3CVisibleU3Ek__BackingField_0)); }
	inline bool get_U3CVisibleU3Ek__BackingField_0() const { return ___U3CVisibleU3Ek__BackingField_0; }
	inline bool* get_address_of_U3CVisibleU3Ek__BackingField_0() { return &___U3CVisibleU3Ek__BackingField_0; }
	inline void set_U3CVisibleU3Ek__BackingField_0(bool value)
	{
		___U3CVisibleU3Ek__BackingField_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MOONSHARPVISIBLEATTRIBUTE_T2835884365_H
#ifndef MOONSHARPHIDEMEMBERATTRIBUTE_T3895257771_H
#define MOONSHARPHIDEMEMBERATTRIBUTE_T3895257771_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MoonSharp.Interpreter.MoonSharpHideMemberAttribute
struct  MoonSharpHideMemberAttribute_t3895257771  : public Attribute_t861562559
{
public:
	// System.String MoonSharp.Interpreter.MoonSharpHideMemberAttribute::<MemberName>k__BackingField
	String_t* ___U3CMemberNameU3Ek__BackingField_0;

public:
	inline static int32_t get_offset_of_U3CMemberNameU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(MoonSharpHideMemberAttribute_t3895257771, ___U3CMemberNameU3Ek__BackingField_0)); }
	inline String_t* get_U3CMemberNameU3Ek__BackingField_0() const { return ___U3CMemberNameU3Ek__BackingField_0; }
	inline String_t** get_address_of_U3CMemberNameU3Ek__BackingField_0() { return &___U3CMemberNameU3Ek__BackingField_0; }
	inline void set_U3CMemberNameU3Ek__BackingField_0(String_t* value)
	{
		___U3CMemberNameU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((&___U3CMemberNameU3Ek__BackingField_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MOONSHARPHIDEMEMBERATTRIBUTE_T3895257771_H
#ifndef MOONSHARPHIDDENATTRIBUTE_T2482276435_H
#define MOONSHARPHIDDENATTRIBUTE_T2482276435_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MoonSharp.Interpreter.MoonSharpHiddenAttribute
struct  MoonSharpHiddenAttribute_t2482276435  : public Attribute_t861562559
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MOONSHARPHIDDENATTRIBUTE_T2482276435_H
#ifndef BYTECODE_T218744739_H
#define BYTECODE_T218744739_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MoonSharp.Interpreter.Execution.VM.ByteCode
struct  ByteCode_t218744739  : public RefIdObject_t1123467269
{
public:
	// System.Collections.Generic.List`1<MoonSharp.Interpreter.Execution.VM.Instruction> MoonSharp.Interpreter.Execution.VM.ByteCode::Code
	List_1_t467784671 * ___Code_2;
	// MoonSharp.Interpreter.Script MoonSharp.Interpreter.Execution.VM.ByteCode::<Script>k__BackingField
	Script_t154231481 * ___U3CScriptU3Ek__BackingField_3;
	// System.Collections.Generic.List`1<MoonSharp.Interpreter.Debugging.SourceRef> MoonSharp.Interpreter.Execution.VM.ByteCode::m_SourceRefStack
	List_1_t563861233 * ___m_SourceRefStack_4;
	// MoonSharp.Interpreter.Debugging.SourceRef MoonSharp.Interpreter.Execution.VM.ByteCode::m_CurrentSourceRef
	SourceRef_t3386753787 * ___m_CurrentSourceRef_5;
	// MoonSharp.Interpreter.Execution.LoopTracker MoonSharp.Interpreter.Execution.VM.ByteCode::LoopTracker
	LoopTracker_t2759355568 * ___LoopTracker_6;

public:
	inline static int32_t get_offset_of_Code_2() { return static_cast<int32_t>(offsetof(ByteCode_t218744739, ___Code_2)); }
	inline List_1_t467784671 * get_Code_2() const { return ___Code_2; }
	inline List_1_t467784671 ** get_address_of_Code_2() { return &___Code_2; }
	inline void set_Code_2(List_1_t467784671 * value)
	{
		___Code_2 = value;
		Il2CppCodeGenWriteBarrier((&___Code_2), value);
	}

	inline static int32_t get_offset_of_U3CScriptU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(ByteCode_t218744739, ___U3CScriptU3Ek__BackingField_3)); }
	inline Script_t154231481 * get_U3CScriptU3Ek__BackingField_3() const { return ___U3CScriptU3Ek__BackingField_3; }
	inline Script_t154231481 ** get_address_of_U3CScriptU3Ek__BackingField_3() { return &___U3CScriptU3Ek__BackingField_3; }
	inline void set_U3CScriptU3Ek__BackingField_3(Script_t154231481 * value)
	{
		___U3CScriptU3Ek__BackingField_3 = value;
		Il2CppCodeGenWriteBarrier((&___U3CScriptU3Ek__BackingField_3), value);
	}

	inline static int32_t get_offset_of_m_SourceRefStack_4() { return static_cast<int32_t>(offsetof(ByteCode_t218744739, ___m_SourceRefStack_4)); }
	inline List_1_t563861233 * get_m_SourceRefStack_4() const { return ___m_SourceRefStack_4; }
	inline List_1_t563861233 ** get_address_of_m_SourceRefStack_4() { return &___m_SourceRefStack_4; }
	inline void set_m_SourceRefStack_4(List_1_t563861233 * value)
	{
		___m_SourceRefStack_4 = value;
		Il2CppCodeGenWriteBarrier((&___m_SourceRefStack_4), value);
	}

	inline static int32_t get_offset_of_m_CurrentSourceRef_5() { return static_cast<int32_t>(offsetof(ByteCode_t218744739, ___m_CurrentSourceRef_5)); }
	inline SourceRef_t3386753787 * get_m_CurrentSourceRef_5() const { return ___m_CurrentSourceRef_5; }
	inline SourceRef_t3386753787 ** get_address_of_m_CurrentSourceRef_5() { return &___m_CurrentSourceRef_5; }
	inline void set_m_CurrentSourceRef_5(SourceRef_t3386753787 * value)
	{
		___m_CurrentSourceRef_5 = value;
		Il2CppCodeGenWriteBarrier((&___m_CurrentSourceRef_5), value);
	}

	inline static int32_t get_offset_of_LoopTracker_6() { return static_cast<int32_t>(offsetof(ByteCode_t218744739, ___LoopTracker_6)); }
	inline LoopTracker_t2759355568 * get_LoopTracker_6() const { return ___LoopTracker_6; }
	inline LoopTracker_t2759355568 ** get_address_of_LoopTracker_6() { return &___LoopTracker_6; }
	inline void set_LoopTracker_6(LoopTracker_t2759355568 * value)
	{
		___LoopTracker_6 = value;
		Il2CppCodeGenWriteBarrier((&___LoopTracker_6), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BYTECODE_T218744739_H
#ifndef MOONSHARPUSERDATAMETAMETHODATTRIBUTE_T1660890698_H
#define MOONSHARPUSERDATAMETAMETHODATTRIBUTE_T1660890698_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MoonSharp.Interpreter.MoonSharpUserDataMetamethodAttribute
struct  MoonSharpUserDataMetamethodAttribute_t1660890698  : public Attribute_t861562559
{
public:
	// System.String MoonSharp.Interpreter.MoonSharpUserDataMetamethodAttribute::<Name>k__BackingField
	String_t* ___U3CNameU3Ek__BackingField_0;

public:
	inline static int32_t get_offset_of_U3CNameU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(MoonSharpUserDataMetamethodAttribute_t1660890698, ___U3CNameU3Ek__BackingField_0)); }
	inline String_t* get_U3CNameU3Ek__BackingField_0() const { return ___U3CNameU3Ek__BackingField_0; }
	inline String_t** get_address_of_U3CNameU3Ek__BackingField_0() { return &___U3CNameU3Ek__BackingField_0; }
	inline void set_U3CNameU3Ek__BackingField_0(String_t* value)
	{
		___U3CNameU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((&___U3CNameU3Ek__BackingField_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MOONSHARPUSERDATAMETAMETHODATTRIBUTE_T1660890698_H
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
#ifndef MOONSHARPPROPERTYATTRIBUTE_T2309983121_H
#define MOONSHARPPROPERTYATTRIBUTE_T2309983121_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MoonSharp.Interpreter.MoonSharpPropertyAttribute
struct  MoonSharpPropertyAttribute_t2309983121  : public Attribute_t861562559
{
public:
	// System.String MoonSharp.Interpreter.MoonSharpPropertyAttribute::<Name>k__BackingField
	String_t* ___U3CNameU3Ek__BackingField_0;

public:
	inline static int32_t get_offset_of_U3CNameU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(MoonSharpPropertyAttribute_t2309983121, ___U3CNameU3Ek__BackingField_0)); }
	inline String_t* get_U3CNameU3Ek__BackingField_0() const { return ___U3CNameU3Ek__BackingField_0; }
	inline String_t** get_address_of_U3CNameU3Ek__BackingField_0() { return &___U3CNameU3Ek__BackingField_0; }
	inline void set_U3CNameU3Ek__BackingField_0(String_t* value)
	{
		___U3CNameU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((&___U3CNameU3Ek__BackingField_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MOONSHARPPROPERTYATTRIBUTE_T2309983121_H
#ifndef TABLE_T1500596475_H
#define TABLE_T1500596475_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MoonSharp.Interpreter.Table
struct  Table_t1500596475  : public RefIdObject_t1123467269
{
public:
	// System.Collections.Generic.LinkedList`1<MoonSharp.Interpreter.TablePair> MoonSharp.Interpreter.Table::m_Values
	LinkedList_1_t298211720 * ___m_Values_2;
	// MoonSharp.Interpreter.DataStructs.LinkedListIndex`2<MoonSharp.Interpreter.DynValue,MoonSharp.Interpreter.TablePair> MoonSharp.Interpreter.Table::m_ValueMap
	LinkedListIndex_2_t3538162670 * ___m_ValueMap_3;
	// MoonSharp.Interpreter.DataStructs.LinkedListIndex`2<System.String,MoonSharp.Interpreter.TablePair> MoonSharp.Interpreter.Table::m_StringMap
	LinkedListIndex_2_t2721550181 * ___m_StringMap_4;
	// MoonSharp.Interpreter.DataStructs.LinkedListIndex`2<System.Int32,MoonSharp.Interpreter.TablePair> MoonSharp.Interpreter.Table::m_ArrayMap
	LinkedListIndex_2_t1825007213 * ___m_ArrayMap_5;
	// MoonSharp.Interpreter.Script MoonSharp.Interpreter.Table::m_Owner
	Script_t154231481 * ___m_Owner_6;
	// System.Int32 MoonSharp.Interpreter.Table::m_InitArray
	int32_t ___m_InitArray_7;
	// System.Int32 MoonSharp.Interpreter.Table::m_CachedLength
	int32_t ___m_CachedLength_8;
	// System.Boolean MoonSharp.Interpreter.Table::m_ContainsNilEntries
	bool ___m_ContainsNilEntries_9;
	// MoonSharp.Interpreter.Table MoonSharp.Interpreter.Table::m_MetaTable
	Table_t1500596475 * ___m_MetaTable_10;

public:
	inline static int32_t get_offset_of_m_Values_2() { return static_cast<int32_t>(offsetof(Table_t1500596475, ___m_Values_2)); }
	inline LinkedList_1_t298211720 * get_m_Values_2() const { return ___m_Values_2; }
	inline LinkedList_1_t298211720 ** get_address_of_m_Values_2() { return &___m_Values_2; }
	inline void set_m_Values_2(LinkedList_1_t298211720 * value)
	{
		___m_Values_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_Values_2), value);
	}

	inline static int32_t get_offset_of_m_ValueMap_3() { return static_cast<int32_t>(offsetof(Table_t1500596475, ___m_ValueMap_3)); }
	inline LinkedListIndex_2_t3538162670 * get_m_ValueMap_3() const { return ___m_ValueMap_3; }
	inline LinkedListIndex_2_t3538162670 ** get_address_of_m_ValueMap_3() { return &___m_ValueMap_3; }
	inline void set_m_ValueMap_3(LinkedListIndex_2_t3538162670 * value)
	{
		___m_ValueMap_3 = value;
		Il2CppCodeGenWriteBarrier((&___m_ValueMap_3), value);
	}

	inline static int32_t get_offset_of_m_StringMap_4() { return static_cast<int32_t>(offsetof(Table_t1500596475, ___m_StringMap_4)); }
	inline LinkedListIndex_2_t2721550181 * get_m_StringMap_4() const { return ___m_StringMap_4; }
	inline LinkedListIndex_2_t2721550181 ** get_address_of_m_StringMap_4() { return &___m_StringMap_4; }
	inline void set_m_StringMap_4(LinkedListIndex_2_t2721550181 * value)
	{
		___m_StringMap_4 = value;
		Il2CppCodeGenWriteBarrier((&___m_StringMap_4), value);
	}

	inline static int32_t get_offset_of_m_ArrayMap_5() { return static_cast<int32_t>(offsetof(Table_t1500596475, ___m_ArrayMap_5)); }
	inline LinkedListIndex_2_t1825007213 * get_m_ArrayMap_5() const { return ___m_ArrayMap_5; }
	inline LinkedListIndex_2_t1825007213 ** get_address_of_m_ArrayMap_5() { return &___m_ArrayMap_5; }
	inline void set_m_ArrayMap_5(LinkedListIndex_2_t1825007213 * value)
	{
		___m_ArrayMap_5 = value;
		Il2CppCodeGenWriteBarrier((&___m_ArrayMap_5), value);
	}

	inline static int32_t get_offset_of_m_Owner_6() { return static_cast<int32_t>(offsetof(Table_t1500596475, ___m_Owner_6)); }
	inline Script_t154231481 * get_m_Owner_6() const { return ___m_Owner_6; }
	inline Script_t154231481 ** get_address_of_m_Owner_6() { return &___m_Owner_6; }
	inline void set_m_Owner_6(Script_t154231481 * value)
	{
		___m_Owner_6 = value;
		Il2CppCodeGenWriteBarrier((&___m_Owner_6), value);
	}

	inline static int32_t get_offset_of_m_InitArray_7() { return static_cast<int32_t>(offsetof(Table_t1500596475, ___m_InitArray_7)); }
	inline int32_t get_m_InitArray_7() const { return ___m_InitArray_7; }
	inline int32_t* get_address_of_m_InitArray_7() { return &___m_InitArray_7; }
	inline void set_m_InitArray_7(int32_t value)
	{
		___m_InitArray_7 = value;
	}

	inline static int32_t get_offset_of_m_CachedLength_8() { return static_cast<int32_t>(offsetof(Table_t1500596475, ___m_CachedLength_8)); }
	inline int32_t get_m_CachedLength_8() const { return ___m_CachedLength_8; }
	inline int32_t* get_address_of_m_CachedLength_8() { return &___m_CachedLength_8; }
	inline void set_m_CachedLength_8(int32_t value)
	{
		___m_CachedLength_8 = value;
	}

	inline static int32_t get_offset_of_m_ContainsNilEntries_9() { return static_cast<int32_t>(offsetof(Table_t1500596475, ___m_ContainsNilEntries_9)); }
	inline bool get_m_ContainsNilEntries_9() const { return ___m_ContainsNilEntries_9; }
	inline bool* get_address_of_m_ContainsNilEntries_9() { return &___m_ContainsNilEntries_9; }
	inline void set_m_ContainsNilEntries_9(bool value)
	{
		___m_ContainsNilEntries_9 = value;
	}

	inline static int32_t get_offset_of_m_MetaTable_10() { return static_cast<int32_t>(offsetof(Table_t1500596475, ___m_MetaTable_10)); }
	inline Table_t1500596475 * get_m_MetaTable_10() const { return ___m_MetaTable_10; }
	inline Table_t1500596475 ** get_address_of_m_MetaTable_10() { return &___m_MetaTable_10; }
	inline void set_m_MetaTable_10(Table_t1500596475 * value)
	{
		___m_MetaTable_10 = value;
		Il2CppCodeGenWriteBarrier((&___m_MetaTable_10), value);
	}
};

struct Table_t1500596475_StaticFields
{
public:
	// System.Func`2<MoonSharp.Interpreter.TablePair,MoonSharp.Interpreter.TablePair> MoonSharp.Interpreter.Table::<>f__am$cache0
	Func_2_t57849402 * ___U3CU3Ef__amU24cache0_11;
	// System.Func`2<MoonSharp.Interpreter.TablePair,MoonSharp.Interpreter.DynValue> MoonSharp.Interpreter.Table::<>f__am$cache1
	Func_2_t3442403735 * ___U3CU3Ef__amU24cache1_12;
	// System.Func`2<MoonSharp.Interpreter.TablePair,MoonSharp.Interpreter.DynValue> MoonSharp.Interpreter.Table::<>f__am$cache2
	Func_2_t3442403735 * ___U3CU3Ef__amU24cache2_13;

public:
	inline static int32_t get_offset_of_U3CU3Ef__amU24cache0_11() { return static_cast<int32_t>(offsetof(Table_t1500596475_StaticFields, ___U3CU3Ef__amU24cache0_11)); }
	inline Func_2_t57849402 * get_U3CU3Ef__amU24cache0_11() const { return ___U3CU3Ef__amU24cache0_11; }
	inline Func_2_t57849402 ** get_address_of_U3CU3Ef__amU24cache0_11() { return &___U3CU3Ef__amU24cache0_11; }
	inline void set_U3CU3Ef__amU24cache0_11(Func_2_t57849402 * value)
	{
		___U3CU3Ef__amU24cache0_11 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__amU24cache0_11), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache1_12() { return static_cast<int32_t>(offsetof(Table_t1500596475_StaticFields, ___U3CU3Ef__amU24cache1_12)); }
	inline Func_2_t3442403735 * get_U3CU3Ef__amU24cache1_12() const { return ___U3CU3Ef__amU24cache1_12; }
	inline Func_2_t3442403735 ** get_address_of_U3CU3Ef__amU24cache1_12() { return &___U3CU3Ef__amU24cache1_12; }
	inline void set_U3CU3Ef__amU24cache1_12(Func_2_t3442403735 * value)
	{
		___U3CU3Ef__amU24cache1_12 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__amU24cache1_12), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache2_13() { return static_cast<int32_t>(offsetof(Table_t1500596475_StaticFields, ___U3CU3Ef__amU24cache2_13)); }
	inline Func_2_t3442403735 * get_U3CU3Ef__amU24cache2_13() const { return ___U3CU3Ef__amU24cache2_13; }
	inline Func_2_t3442403735 ** get_address_of_U3CU3Ef__amU24cache2_13() { return &___U3CU3Ef__amU24cache2_13; }
	inline void set_U3CU3Ef__amU24cache2_13(Func_2_t3442403735 * value)
	{
		___U3CU3Ef__amU24cache2_13 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__amU24cache2_13), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TABLE_T1500596475_H
#ifndef TABLEPAIR_T1458565711_H
#define TABLEPAIR_T1458565711_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MoonSharp.Interpreter.TablePair
struct  TablePair_t1458565711 
{
public:
	// MoonSharp.Interpreter.DynValue MoonSharp.Interpreter.TablePair::key
	DynValue_t548152748 * ___key_1;
	// MoonSharp.Interpreter.DynValue MoonSharp.Interpreter.TablePair::value
	DynValue_t548152748 * ___value_2;

public:
	inline static int32_t get_offset_of_key_1() { return static_cast<int32_t>(offsetof(TablePair_t1458565711, ___key_1)); }
	inline DynValue_t548152748 * get_key_1() const { return ___key_1; }
	inline DynValue_t548152748 ** get_address_of_key_1() { return &___key_1; }
	inline void set_key_1(DynValue_t548152748 * value)
	{
		___key_1 = value;
		Il2CppCodeGenWriteBarrier((&___key_1), value);
	}

	inline static int32_t get_offset_of_value_2() { return static_cast<int32_t>(offsetof(TablePair_t1458565711, ___value_2)); }
	inline DynValue_t548152748 * get_value_2() const { return ___value_2; }
	inline DynValue_t548152748 ** get_address_of_value_2() { return &___value_2; }
	inline void set_value_2(DynValue_t548152748 * value)
	{
		___value_2 = value;
		Il2CppCodeGenWriteBarrier((&___value_2), value);
	}
};

struct TablePair_t1458565711_StaticFields
{
public:
	// MoonSharp.Interpreter.TablePair MoonSharp.Interpreter.TablePair::s_NilNode
	TablePair_t1458565711  ___s_NilNode_0;

public:
	inline static int32_t get_offset_of_s_NilNode_0() { return static_cast<int32_t>(offsetof(TablePair_t1458565711_StaticFields, ___s_NilNode_0)); }
	inline TablePair_t1458565711  get_s_NilNode_0() const { return ___s_NilNode_0; }
	inline TablePair_t1458565711 * get_address_of_s_NilNode_0() { return &___s_NilNode_0; }
	inline void set_s_NilNode_0(TablePair_t1458565711  value)
	{
		___s_NilNode_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of MoonSharp.Interpreter.TablePair
struct TablePair_t1458565711_marshaled_pinvoke
{
	DynValue_t548152748 * ___key_1;
	DynValue_t548152748 * ___value_2;
};
// Native definition for COM marshalling of MoonSharp.Interpreter.TablePair
struct TablePair_t1458565711_marshaled_com
{
	DynValue_t548152748 * ___key_1;
	DynValue_t548152748 * ___value_2;
};
#endif // TABLEPAIR_T1458565711_H
#ifndef USERDATA_T2270692526_H
#define USERDATA_T2270692526_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MoonSharp.Interpreter.UserData
struct  UserData_t2270692526  : public RefIdObject_t1123467269
{
public:
	// MoonSharp.Interpreter.DynValue MoonSharp.Interpreter.UserData::<UserValue>k__BackingField
	DynValue_t548152748 * ___U3CUserValueU3Ek__BackingField_2;
	// System.Object MoonSharp.Interpreter.UserData::<Object>k__BackingField
	RuntimeObject * ___U3CObjectU3Ek__BackingField_3;
	// MoonSharp.Interpreter.Interop.IUserDataDescriptor MoonSharp.Interpreter.UserData::<Descriptor>k__BackingField
	RuntimeObject* ___U3CDescriptorU3Ek__BackingField_4;

public:
	inline static int32_t get_offset_of_U3CUserValueU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(UserData_t2270692526, ___U3CUserValueU3Ek__BackingField_2)); }
	inline DynValue_t548152748 * get_U3CUserValueU3Ek__BackingField_2() const { return ___U3CUserValueU3Ek__BackingField_2; }
	inline DynValue_t548152748 ** get_address_of_U3CUserValueU3Ek__BackingField_2() { return &___U3CUserValueU3Ek__BackingField_2; }
	inline void set_U3CUserValueU3Ek__BackingField_2(DynValue_t548152748 * value)
	{
		___U3CUserValueU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((&___U3CUserValueU3Ek__BackingField_2), value);
	}

	inline static int32_t get_offset_of_U3CObjectU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(UserData_t2270692526, ___U3CObjectU3Ek__BackingField_3)); }
	inline RuntimeObject * get_U3CObjectU3Ek__BackingField_3() const { return ___U3CObjectU3Ek__BackingField_3; }
	inline RuntimeObject ** get_address_of_U3CObjectU3Ek__BackingField_3() { return &___U3CObjectU3Ek__BackingField_3; }
	inline void set_U3CObjectU3Ek__BackingField_3(RuntimeObject * value)
	{
		___U3CObjectU3Ek__BackingField_3 = value;
		Il2CppCodeGenWriteBarrier((&___U3CObjectU3Ek__BackingField_3), value);
	}

	inline static int32_t get_offset_of_U3CDescriptorU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(UserData_t2270692526, ___U3CDescriptorU3Ek__BackingField_4)); }
	inline RuntimeObject* get_U3CDescriptorU3Ek__BackingField_4() const { return ___U3CDescriptorU3Ek__BackingField_4; }
	inline RuntimeObject** get_address_of_U3CDescriptorU3Ek__BackingField_4() { return &___U3CDescriptorU3Ek__BackingField_4; }
	inline void set_U3CDescriptorU3Ek__BackingField_4(RuntimeObject* value)
	{
		___U3CDescriptorU3Ek__BackingField_4 = value;
		Il2CppCodeGenWriteBarrier((&___U3CDescriptorU3Ek__BackingField_4), value);
	}
};

struct UserData_t2270692526_StaticFields
{
public:
	// System.Func`2<System.Collections.Generic.KeyValuePair`2<System.Type,MoonSharp.Interpreter.Interop.IUserDataDescriptor>,System.Type> MoonSharp.Interpreter.UserData::<>f__am$cache0
	Func_2_t1120322037 * ___U3CU3Ef__amU24cache0_5;

public:
	inline static int32_t get_offset_of_U3CU3Ef__amU24cache0_5() { return static_cast<int32_t>(offsetof(UserData_t2270692526_StaticFields, ___U3CU3Ef__amU24cache0_5)); }
	inline Func_2_t1120322037 * get_U3CU3Ef__amU24cache0_5() const { return ___U3CU3Ef__amU24cache0_5; }
	inline Func_2_t1120322037 ** get_address_of_U3CU3Ef__amU24cache0_5() { return &___U3CU3Ef__amU24cache0_5; }
	inline void set_U3CU3Ef__amU24cache0_5(Func_2_t1120322037 * value)
	{
		___U3CU3Ef__amU24cache0_5 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__amU24cache0_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // USERDATA_T2270692526_H
#ifndef CLOSURE_T2323531620_H
#define CLOSURE_T2323531620_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MoonSharp.Interpreter.Closure
struct  Closure_t2323531620  : public RefIdObject_t1123467269
{
public:
	// System.Int32 MoonSharp.Interpreter.Closure::<EntryPointByteCodeLocation>k__BackingField
	int32_t ___U3CEntryPointByteCodeLocationU3Ek__BackingField_2;
	// MoonSharp.Interpreter.Script MoonSharp.Interpreter.Closure::<OwnerScript>k__BackingField
	Script_t154231481 * ___U3COwnerScriptU3Ek__BackingField_3;
	// MoonSharp.Interpreter.Execution.ClosureContext MoonSharp.Interpreter.Closure::<ClosureContext>k__BackingField
	ClosureContext_t772623181 * ___U3CClosureContextU3Ek__BackingField_5;

public:
	inline static int32_t get_offset_of_U3CEntryPointByteCodeLocationU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(Closure_t2323531620, ___U3CEntryPointByteCodeLocationU3Ek__BackingField_2)); }
	inline int32_t get_U3CEntryPointByteCodeLocationU3Ek__BackingField_2() const { return ___U3CEntryPointByteCodeLocationU3Ek__BackingField_2; }
	inline int32_t* get_address_of_U3CEntryPointByteCodeLocationU3Ek__BackingField_2() { return &___U3CEntryPointByteCodeLocationU3Ek__BackingField_2; }
	inline void set_U3CEntryPointByteCodeLocationU3Ek__BackingField_2(int32_t value)
	{
		___U3CEntryPointByteCodeLocationU3Ek__BackingField_2 = value;
	}

	inline static int32_t get_offset_of_U3COwnerScriptU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(Closure_t2323531620, ___U3COwnerScriptU3Ek__BackingField_3)); }
	inline Script_t154231481 * get_U3COwnerScriptU3Ek__BackingField_3() const { return ___U3COwnerScriptU3Ek__BackingField_3; }
	inline Script_t154231481 ** get_address_of_U3COwnerScriptU3Ek__BackingField_3() { return &___U3COwnerScriptU3Ek__BackingField_3; }
	inline void set_U3COwnerScriptU3Ek__BackingField_3(Script_t154231481 * value)
	{
		___U3COwnerScriptU3Ek__BackingField_3 = value;
		Il2CppCodeGenWriteBarrier((&___U3COwnerScriptU3Ek__BackingField_3), value);
	}

	inline static int32_t get_offset_of_U3CClosureContextU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(Closure_t2323531620, ___U3CClosureContextU3Ek__BackingField_5)); }
	inline ClosureContext_t772623181 * get_U3CClosureContextU3Ek__BackingField_5() const { return ___U3CClosureContextU3Ek__BackingField_5; }
	inline ClosureContext_t772623181 ** get_address_of_U3CClosureContextU3Ek__BackingField_5() { return &___U3CClosureContextU3Ek__BackingField_5; }
	inline void set_U3CClosureContextU3Ek__BackingField_5(ClosureContext_t772623181 * value)
	{
		___U3CClosureContextU3Ek__BackingField_5 = value;
		Il2CppCodeGenWriteBarrier((&___U3CClosureContextU3Ek__BackingField_5), value);
	}
};

struct Closure_t2323531620_StaticFields
{
public:
	// MoonSharp.Interpreter.Execution.ClosureContext MoonSharp.Interpreter.Closure::emptyClosure
	ClosureContext_t772623181 * ___emptyClosure_4;

public:
	inline static int32_t get_offset_of_emptyClosure_4() { return static_cast<int32_t>(offsetof(Closure_t2323531620_StaticFields, ___emptyClosure_4)); }
	inline ClosureContext_t772623181 * get_emptyClosure_4() const { return ___emptyClosure_4; }
	inline ClosureContext_t772623181 ** get_address_of_emptyClosure_4() { return &___emptyClosure_4; }
	inline void set_emptyClosure_4(ClosureContext_t772623181 * value)
	{
		___emptyClosure_4 = value;
		Il2CppCodeGenWriteBarrier((&___emptyClosure_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CLOSURE_T2323531620_H
#ifndef INTERPRETEREXCEPTION_T1792992816_H
#define INTERPRETEREXCEPTION_T1792992816_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MoonSharp.Interpreter.InterpreterException
struct  InterpreterException_t1792992816  : public Exception_t
{
public:
	// System.Int32 MoonSharp.Interpreter.InterpreterException::<InstructionPtr>k__BackingField
	int32_t ___U3CInstructionPtrU3Ek__BackingField_11;
	// System.Collections.Generic.IList`1<MoonSharp.Interpreter.Debugging.WatchItem> MoonSharp.Interpreter.InterpreterException::<CallStack>k__BackingField
	RuntimeObject* ___U3CCallStackU3Ek__BackingField_12;
	// System.String MoonSharp.Interpreter.InterpreterException::<DecoratedMessage>k__BackingField
	String_t* ___U3CDecoratedMessageU3Ek__BackingField_13;
	// System.Boolean MoonSharp.Interpreter.InterpreterException::<DoNotDecorateMessage>k__BackingField
	bool ___U3CDoNotDecorateMessageU3Ek__BackingField_14;

public:
	inline static int32_t get_offset_of_U3CInstructionPtrU3Ek__BackingField_11() { return static_cast<int32_t>(offsetof(InterpreterException_t1792992816, ___U3CInstructionPtrU3Ek__BackingField_11)); }
	inline int32_t get_U3CInstructionPtrU3Ek__BackingField_11() const { return ___U3CInstructionPtrU3Ek__BackingField_11; }
	inline int32_t* get_address_of_U3CInstructionPtrU3Ek__BackingField_11() { return &___U3CInstructionPtrU3Ek__BackingField_11; }
	inline void set_U3CInstructionPtrU3Ek__BackingField_11(int32_t value)
	{
		___U3CInstructionPtrU3Ek__BackingField_11 = value;
	}

	inline static int32_t get_offset_of_U3CCallStackU3Ek__BackingField_12() { return static_cast<int32_t>(offsetof(InterpreterException_t1792992816, ___U3CCallStackU3Ek__BackingField_12)); }
	inline RuntimeObject* get_U3CCallStackU3Ek__BackingField_12() const { return ___U3CCallStackU3Ek__BackingField_12; }
	inline RuntimeObject** get_address_of_U3CCallStackU3Ek__BackingField_12() { return &___U3CCallStackU3Ek__BackingField_12; }
	inline void set_U3CCallStackU3Ek__BackingField_12(RuntimeObject* value)
	{
		___U3CCallStackU3Ek__BackingField_12 = value;
		Il2CppCodeGenWriteBarrier((&___U3CCallStackU3Ek__BackingField_12), value);
	}

	inline static int32_t get_offset_of_U3CDecoratedMessageU3Ek__BackingField_13() { return static_cast<int32_t>(offsetof(InterpreterException_t1792992816, ___U3CDecoratedMessageU3Ek__BackingField_13)); }
	inline String_t* get_U3CDecoratedMessageU3Ek__BackingField_13() const { return ___U3CDecoratedMessageU3Ek__BackingField_13; }
	inline String_t** get_address_of_U3CDecoratedMessageU3Ek__BackingField_13() { return &___U3CDecoratedMessageU3Ek__BackingField_13; }
	inline void set_U3CDecoratedMessageU3Ek__BackingField_13(String_t* value)
	{
		___U3CDecoratedMessageU3Ek__BackingField_13 = value;
		Il2CppCodeGenWriteBarrier((&___U3CDecoratedMessageU3Ek__BackingField_13), value);
	}

	inline static int32_t get_offset_of_U3CDoNotDecorateMessageU3Ek__BackingField_14() { return static_cast<int32_t>(offsetof(InterpreterException_t1792992816, ___U3CDoNotDecorateMessageU3Ek__BackingField_14)); }
	inline bool get_U3CDoNotDecorateMessageU3Ek__BackingField_14() const { return ___U3CDoNotDecorateMessageU3Ek__BackingField_14; }
	inline bool* get_address_of_U3CDoNotDecorateMessageU3Ek__BackingField_14() { return &___U3CDoNotDecorateMessageU3Ek__BackingField_14; }
	inline void set_U3CDoNotDecorateMessageU3Ek__BackingField_14(bool value)
	{
		___U3CDoNotDecorateMessageU3Ek__BackingField_14 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INTERPRETEREXCEPTION_T1792992816_H
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
#ifndef DEBUGGERCAPS_T3161035045_H
#define DEBUGGERCAPS_T3161035045_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MoonSharp.Interpreter.Debugging.DebuggerCaps
struct  DebuggerCaps_t3161035045 
{
public:
	// System.Int32 MoonSharp.Interpreter.Debugging.DebuggerCaps::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(DebuggerCaps_t3161035045, ___value___1)); }
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
#endif // DEBUGGERCAPS_T3161035045_H
#ifndef TYPEVALIDATIONFLAGS_T3849279478_H
#define TYPEVALIDATIONFLAGS_T3849279478_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MoonSharp.Interpreter.TypeValidationFlags
struct  TypeValidationFlags_t3849279478 
{
public:
	// System.Int32 MoonSharp.Interpreter.TypeValidationFlags::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(TypeValidationFlags_t3849279478, ___value___1)); }
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
#endif // TYPEVALIDATIONFLAGS_T3849279478_H
#ifndef ACTIONTYPE_T3783648257_H
#define ACTIONTYPE_T3783648257_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MoonSharp.Interpreter.Debugging.DebuggerAction/ActionType
struct  ActionType_t3783648257 
{
public:
	// System.Int32 MoonSharp.Interpreter.Debugging.DebuggerAction/ActionType::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(ActionType_t3783648257, ___value___1)); }
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
#endif // ACTIONTYPE_T3783648257_H
#ifndef SYNTAXERROREXCEPTION_T3494522607_H
#define SYNTAXERROREXCEPTION_T3494522607_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MoonSharp.Interpreter.SyntaxErrorException
struct  SyntaxErrorException_t3494522607  : public InterpreterException_t1792992816
{
public:
	// MoonSharp.Interpreter.Tree.Token MoonSharp.Interpreter.SyntaxErrorException::<Token>k__BackingField
	Token_t2495393407 * ___U3CTokenU3Ek__BackingField_15;
	// System.Boolean MoonSharp.Interpreter.SyntaxErrorException::<IsPrematureStreamTermination>k__BackingField
	bool ___U3CIsPrematureStreamTerminationU3Ek__BackingField_16;

public:
	inline static int32_t get_offset_of_U3CTokenU3Ek__BackingField_15() { return static_cast<int32_t>(offsetof(SyntaxErrorException_t3494522607, ___U3CTokenU3Ek__BackingField_15)); }
	inline Token_t2495393407 * get_U3CTokenU3Ek__BackingField_15() const { return ___U3CTokenU3Ek__BackingField_15; }
	inline Token_t2495393407 ** get_address_of_U3CTokenU3Ek__BackingField_15() { return &___U3CTokenU3Ek__BackingField_15; }
	inline void set_U3CTokenU3Ek__BackingField_15(Token_t2495393407 * value)
	{
		___U3CTokenU3Ek__BackingField_15 = value;
		Il2CppCodeGenWriteBarrier((&___U3CTokenU3Ek__BackingField_15), value);
	}

	inline static int32_t get_offset_of_U3CIsPrematureStreamTerminationU3Ek__BackingField_16() { return static_cast<int32_t>(offsetof(SyntaxErrorException_t3494522607, ___U3CIsPrematureStreamTerminationU3Ek__BackingField_16)); }
	inline bool get_U3CIsPrematureStreamTerminationU3Ek__BackingField_16() const { return ___U3CIsPrematureStreamTerminationU3Ek__BackingField_16; }
	inline bool* get_address_of_U3CIsPrematureStreamTerminationU3Ek__BackingField_16() { return &___U3CIsPrematureStreamTerminationU3Ek__BackingField_16; }
	inline void set_U3CIsPrematureStreamTerminationU3Ek__BackingField_16(bool value)
	{
		___U3CIsPrematureStreamTerminationU3Ek__BackingField_16 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SYNTAXERROREXCEPTION_T3494522607_H
#ifndef SYMBOLREFTYPE_T1687795071_H
#define SYMBOLREFTYPE_T1687795071_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MoonSharp.Interpreter.SymbolRefType
struct  SymbolRefType_t1687795071 
{
public:
	// System.Int32 MoonSharp.Interpreter.SymbolRefType::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(SymbolRefType_t1687795071, ___value___1)); }
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
#endif // SYMBOLREFTYPE_T1687795071_H
#ifndef DATETIMEKIND_T3468814247_H
#define DATETIMEKIND_T3468814247_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.DateTimeKind
struct  DateTimeKind_t3468814247 
{
public:
	// System.Int32 System.DateTimeKind::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(DateTimeKind_t3468814247, ___value___1)); }
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
#endif // DATETIMEKIND_T3468814247_H
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
#ifndef UPVALUESTYPE_T970504965_H
#define UPVALUESTYPE_T970504965_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MoonSharp.Interpreter.Closure/UpvaluesType
struct  UpvaluesType_t970504965 
{
public:
	// System.Int32 MoonSharp.Interpreter.Closure/UpvaluesType::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(UpvaluesType_t970504965, ___value___1)); }
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
#endif // UPVALUESTYPE_T970504965_H
#ifndef COROUTINETYPE_T1889443180_H
#define COROUTINETYPE_T1889443180_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MoonSharp.Interpreter.Coroutine/CoroutineType
struct  CoroutineType_t1889443180 
{
public:
	// System.Int32 MoonSharp.Interpreter.Coroutine/CoroutineType::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(CoroutineType_t1889443180, ___value___1)); }
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
#endif // COROUTINETYPE_T1889443180_H
#ifndef COROUTINESTATE_T1502853016_H
#define COROUTINESTATE_T1502853016_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MoonSharp.Interpreter.CoroutineState
struct  CoroutineState_t1502853016 
{
public:
	// System.Int32 MoonSharp.Interpreter.CoroutineState::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(CoroutineState_t1502853016, ___value___1)); }
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
#endif // COROUTINESTATE_T1502853016_H
#ifndef INTEROPACCESSMODE_T1652408392_H
#define INTEROPACCESSMODE_T1652408392_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MoonSharp.Interpreter.InteropAccessMode
struct  InteropAccessMode_t1652408392 
{
public:
	// System.Int32 MoonSharp.Interpreter.InteropAccessMode::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(InteropAccessMode_t1652408392, ___value___1)); }
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
#endif // INTEROPACCESSMODE_T1652408392_H
#ifndef DATATYPE_T638853460_H
#define DATATYPE_T638853460_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MoonSharp.Interpreter.DataType
struct  DataType_t638853460 
{
public:
	// System.Int32 MoonSharp.Interpreter.DataType::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(DataType_t638853460, ___value___1)); }
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
#endif // DATATYPE_T638853460_H
#ifndef INTERNALERROREXCEPTION_T1172924431_H
#define INTERNALERROREXCEPTION_T1172924431_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MoonSharp.Interpreter.InternalErrorException
struct  InternalErrorException_t1172924431  : public InterpreterException_t1792992816
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INTERNALERROREXCEPTION_T1172924431_H
#ifndef PERFORMANCECOUNTER_T82117261_H
#define PERFORMANCECOUNTER_T82117261_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MoonSharp.Interpreter.Diagnostics.PerformanceCounter
struct  PerformanceCounter_t82117261 
{
public:
	// System.Int32 MoonSharp.Interpreter.Diagnostics.PerformanceCounter::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(PerformanceCounter_t82117261, ___value___1)); }
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
#endif // PERFORMANCECOUNTER_T82117261_H
#ifndef CALLSTACKITEMFLAGS_T1669054736_H
#define CALLSTACKITEMFLAGS_T1669054736_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MoonSharp.Interpreter.Execution.VM.CallStackItemFlags
struct  CallStackItemFlags_t1669054736 
{
public:
	// System.Int32 MoonSharp.Interpreter.Execution.VM.CallStackItemFlags::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(CallStackItemFlags_t1669054736, ___value___1)); }
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
#endif // CALLSTACKITEMFLAGS_T1669054736_H
#ifndef SCRIPTRUNTIMEEXCEPTION_T501315205_H
#define SCRIPTRUNTIMEEXCEPTION_T501315205_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MoonSharp.Interpreter.ScriptRuntimeException
struct  ScriptRuntimeException_t501315205  : public InterpreterException_t1792992816
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SCRIPTRUNTIMEEXCEPTION_T501315205_H
#ifndef PERFORMANCECOUNTERTYPE_T164443786_H
#define PERFORMANCECOUNTERTYPE_T164443786_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MoonSharp.Interpreter.Diagnostics.PerformanceCounterType
struct  PerformanceCounterType_t164443786 
{
public:
	// System.Int32 MoonSharp.Interpreter.Diagnostics.PerformanceCounterType::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(PerformanceCounterType_t164443786, ___value___1)); }
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
#endif // PERFORMANCECOUNTERTYPE_T164443786_H
#ifndef OPCODE_T2095194683_H
#define OPCODE_T2095194683_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MoonSharp.Interpreter.Execution.VM.OpCode
struct  OpCode_t2095194683 
{
public:
	// System.Int32 MoonSharp.Interpreter.Execution.VM.OpCode::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(OpCode_t2095194683, ___value___1)); }
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
#endif // OPCODE_T2095194683_H
#ifndef OPCODEMETADATATYPE_T3910395355_H
#define OPCODEMETADATATYPE_T3910395355_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MoonSharp.Interpreter.Execution.VM.OpCodeMetadataType
struct  OpCodeMetadataType_t3910395355 
{
public:
	// System.Int32 MoonSharp.Interpreter.Execution.VM.OpCodeMetadataType::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(OpCodeMetadataType_t3910395355, ___value___1)); }
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
#endif // OPCODEMETADATATYPE_T3910395355_H
#ifndef INSTRUCTIONFIELDUSAGE_T1363328296_H
#define INSTRUCTIONFIELDUSAGE_T1363328296_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MoonSharp.Interpreter.Execution.InstructionFieldUsage
struct  InstructionFieldUsage_t1363328296 
{
public:
	// System.Int32 MoonSharp.Interpreter.Execution.InstructionFieldUsage::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(InstructionFieldUsage_t1363328296, ___value___1)); }
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
#endif // INSTRUCTIONFIELDUSAGE_T1363328296_H
#ifndef WATCHTYPE_T1405566565_H
#define WATCHTYPE_T1405566565_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MoonSharp.Interpreter.Debugging.WatchType
struct  WatchType_t1405566565 
{
public:
	// System.Int32 MoonSharp.Interpreter.Debugging.WatchType::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(WatchType_t1405566565, ___value___1)); }
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
#endif // WATCHTYPE_T1405566565_H
#ifndef PERFORMANCERESULT_T2520541359_H
#define PERFORMANCERESULT_T2520541359_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MoonSharp.Interpreter.Diagnostics.PerformanceResult
struct  PerformanceResult_t2520541359  : public RuntimeObject
{
public:
	// System.String MoonSharp.Interpreter.Diagnostics.PerformanceResult::<Name>k__BackingField
	String_t* ___U3CNameU3Ek__BackingField_0;
	// System.Int64 MoonSharp.Interpreter.Diagnostics.PerformanceResult::<Counter>k__BackingField
	int64_t ___U3CCounterU3Ek__BackingField_1;
	// System.Int32 MoonSharp.Interpreter.Diagnostics.PerformanceResult::<Instances>k__BackingField
	int32_t ___U3CInstancesU3Ek__BackingField_2;
	// System.Boolean MoonSharp.Interpreter.Diagnostics.PerformanceResult::<Global>k__BackingField
	bool ___U3CGlobalU3Ek__BackingField_3;
	// MoonSharp.Interpreter.Diagnostics.PerformanceCounterType MoonSharp.Interpreter.Diagnostics.PerformanceResult::<Type>k__BackingField
	int32_t ___U3CTypeU3Ek__BackingField_4;

public:
	inline static int32_t get_offset_of_U3CNameU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(PerformanceResult_t2520541359, ___U3CNameU3Ek__BackingField_0)); }
	inline String_t* get_U3CNameU3Ek__BackingField_0() const { return ___U3CNameU3Ek__BackingField_0; }
	inline String_t** get_address_of_U3CNameU3Ek__BackingField_0() { return &___U3CNameU3Ek__BackingField_0; }
	inline void set_U3CNameU3Ek__BackingField_0(String_t* value)
	{
		___U3CNameU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((&___U3CNameU3Ek__BackingField_0), value);
	}

	inline static int32_t get_offset_of_U3CCounterU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(PerformanceResult_t2520541359, ___U3CCounterU3Ek__BackingField_1)); }
	inline int64_t get_U3CCounterU3Ek__BackingField_1() const { return ___U3CCounterU3Ek__BackingField_1; }
	inline int64_t* get_address_of_U3CCounterU3Ek__BackingField_1() { return &___U3CCounterU3Ek__BackingField_1; }
	inline void set_U3CCounterU3Ek__BackingField_1(int64_t value)
	{
		___U3CCounterU3Ek__BackingField_1 = value;
	}

	inline static int32_t get_offset_of_U3CInstancesU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(PerformanceResult_t2520541359, ___U3CInstancesU3Ek__BackingField_2)); }
	inline int32_t get_U3CInstancesU3Ek__BackingField_2() const { return ___U3CInstancesU3Ek__BackingField_2; }
	inline int32_t* get_address_of_U3CInstancesU3Ek__BackingField_2() { return &___U3CInstancesU3Ek__BackingField_2; }
	inline void set_U3CInstancesU3Ek__BackingField_2(int32_t value)
	{
		___U3CInstancesU3Ek__BackingField_2 = value;
	}

	inline static int32_t get_offset_of_U3CGlobalU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(PerformanceResult_t2520541359, ___U3CGlobalU3Ek__BackingField_3)); }
	inline bool get_U3CGlobalU3Ek__BackingField_3() const { return ___U3CGlobalU3Ek__BackingField_3; }
	inline bool* get_address_of_U3CGlobalU3Ek__BackingField_3() { return &___U3CGlobalU3Ek__BackingField_3; }
	inline void set_U3CGlobalU3Ek__BackingField_3(bool value)
	{
		___U3CGlobalU3Ek__BackingField_3 = value;
	}

	inline static int32_t get_offset_of_U3CTypeU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(PerformanceResult_t2520541359, ___U3CTypeU3Ek__BackingField_4)); }
	inline int32_t get_U3CTypeU3Ek__BackingField_4() const { return ___U3CTypeU3Ek__BackingField_4; }
	inline int32_t* get_address_of_U3CTypeU3Ek__BackingField_4() { return &___U3CTypeU3Ek__BackingField_4; }
	inline void set_U3CTypeU3Ek__BackingField_4(int32_t value)
	{
		___U3CTypeU3Ek__BackingField_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PERFORMANCERESULT_T2520541359_H
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
#ifndef PROCESSOR_T733572553_H
#define PROCESSOR_T733572553_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MoonSharp.Interpreter.Execution.VM.Processor
struct  Processor_t733572553  : public RuntimeObject
{
public:
	// MoonSharp.Interpreter.Execution.VM.ByteCode MoonSharp.Interpreter.Execution.VM.Processor::m_RootChunk
	ByteCode_t218744739 * ___m_RootChunk_0;
	// MoonSharp.Interpreter.DataStructs.FastStack`1<MoonSharp.Interpreter.DynValue> MoonSharp.Interpreter.Execution.VM.Processor::m_ValueStack
	FastStack_1_t3979991217 * ___m_ValueStack_1;
	// MoonSharp.Interpreter.DataStructs.FastStack`1<MoonSharp.Interpreter.Execution.VM.CallStackItem> MoonSharp.Interpreter.Execution.VM.Processor::m_ExecutionStack
	FastStack_1_t1230810114 * ___m_ExecutionStack_2;
	// System.Collections.Generic.List`1<MoonSharp.Interpreter.Execution.VM.Processor> MoonSharp.Interpreter.Execution.VM.Processor::m_CoroutinesStack
	List_1_t2205647295 * ___m_CoroutinesStack_3;
	// MoonSharp.Interpreter.Table MoonSharp.Interpreter.Execution.VM.Processor::m_GlobalTable
	Table_t1500596475 * ___m_GlobalTable_4;
	// MoonSharp.Interpreter.Script MoonSharp.Interpreter.Execution.VM.Processor::m_Script
	Script_t154231481 * ___m_Script_5;
	// MoonSharp.Interpreter.Execution.VM.Processor MoonSharp.Interpreter.Execution.VM.Processor::m_Parent
	Processor_t733572553 * ___m_Parent_6;
	// MoonSharp.Interpreter.CoroutineState MoonSharp.Interpreter.Execution.VM.Processor::m_State
	int32_t ___m_State_7;
	// System.Boolean MoonSharp.Interpreter.Execution.VM.Processor::m_CanYield
	bool ___m_CanYield_8;
	// System.Int32 MoonSharp.Interpreter.Execution.VM.Processor::m_SavedInstructionPtr
	int32_t ___m_SavedInstructionPtr_9;
	// MoonSharp.Interpreter.Execution.VM.Processor/DebugContext MoonSharp.Interpreter.Execution.VM.Processor::m_Debug
	DebugContext_t2025408788 * ___m_Debug_10;
	// System.Int32 MoonSharp.Interpreter.Execution.VM.Processor::m_OwningThreadID
	int32_t ___m_OwningThreadID_11;
	// System.Int32 MoonSharp.Interpreter.Execution.VM.Processor::m_ExecutionNesting
	int32_t ___m_ExecutionNesting_12;
	// MoonSharp.Interpreter.Coroutine MoonSharp.Interpreter.Execution.VM.Processor::<AssociatedCoroutine>k__BackingField
	Coroutine_t2598270305 * ___U3CAssociatedCoroutineU3Ek__BackingField_15;
	// System.Int64 MoonSharp.Interpreter.Execution.VM.Processor::AutoYieldCounter
	int64_t ___AutoYieldCounter_17;

public:
	inline static int32_t get_offset_of_m_RootChunk_0() { return static_cast<int32_t>(offsetof(Processor_t733572553, ___m_RootChunk_0)); }
	inline ByteCode_t218744739 * get_m_RootChunk_0() const { return ___m_RootChunk_0; }
	inline ByteCode_t218744739 ** get_address_of_m_RootChunk_0() { return &___m_RootChunk_0; }
	inline void set_m_RootChunk_0(ByteCode_t218744739 * value)
	{
		___m_RootChunk_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_RootChunk_0), value);
	}

	inline static int32_t get_offset_of_m_ValueStack_1() { return static_cast<int32_t>(offsetof(Processor_t733572553, ___m_ValueStack_1)); }
	inline FastStack_1_t3979991217 * get_m_ValueStack_1() const { return ___m_ValueStack_1; }
	inline FastStack_1_t3979991217 ** get_address_of_m_ValueStack_1() { return &___m_ValueStack_1; }
	inline void set_m_ValueStack_1(FastStack_1_t3979991217 * value)
	{
		___m_ValueStack_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_ValueStack_1), value);
	}

	inline static int32_t get_offset_of_m_ExecutionStack_2() { return static_cast<int32_t>(offsetof(Processor_t733572553, ___m_ExecutionStack_2)); }
	inline FastStack_1_t1230810114 * get_m_ExecutionStack_2() const { return ___m_ExecutionStack_2; }
	inline FastStack_1_t1230810114 ** get_address_of_m_ExecutionStack_2() { return &___m_ExecutionStack_2; }
	inline void set_m_ExecutionStack_2(FastStack_1_t1230810114 * value)
	{
		___m_ExecutionStack_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_ExecutionStack_2), value);
	}

	inline static int32_t get_offset_of_m_CoroutinesStack_3() { return static_cast<int32_t>(offsetof(Processor_t733572553, ___m_CoroutinesStack_3)); }
	inline List_1_t2205647295 * get_m_CoroutinesStack_3() const { return ___m_CoroutinesStack_3; }
	inline List_1_t2205647295 ** get_address_of_m_CoroutinesStack_3() { return &___m_CoroutinesStack_3; }
	inline void set_m_CoroutinesStack_3(List_1_t2205647295 * value)
	{
		___m_CoroutinesStack_3 = value;
		Il2CppCodeGenWriteBarrier((&___m_CoroutinesStack_3), value);
	}

	inline static int32_t get_offset_of_m_GlobalTable_4() { return static_cast<int32_t>(offsetof(Processor_t733572553, ___m_GlobalTable_4)); }
	inline Table_t1500596475 * get_m_GlobalTable_4() const { return ___m_GlobalTable_4; }
	inline Table_t1500596475 ** get_address_of_m_GlobalTable_4() { return &___m_GlobalTable_4; }
	inline void set_m_GlobalTable_4(Table_t1500596475 * value)
	{
		___m_GlobalTable_4 = value;
		Il2CppCodeGenWriteBarrier((&___m_GlobalTable_4), value);
	}

	inline static int32_t get_offset_of_m_Script_5() { return static_cast<int32_t>(offsetof(Processor_t733572553, ___m_Script_5)); }
	inline Script_t154231481 * get_m_Script_5() const { return ___m_Script_5; }
	inline Script_t154231481 ** get_address_of_m_Script_5() { return &___m_Script_5; }
	inline void set_m_Script_5(Script_t154231481 * value)
	{
		___m_Script_5 = value;
		Il2CppCodeGenWriteBarrier((&___m_Script_5), value);
	}

	inline static int32_t get_offset_of_m_Parent_6() { return static_cast<int32_t>(offsetof(Processor_t733572553, ___m_Parent_6)); }
	inline Processor_t733572553 * get_m_Parent_6() const { return ___m_Parent_6; }
	inline Processor_t733572553 ** get_address_of_m_Parent_6() { return &___m_Parent_6; }
	inline void set_m_Parent_6(Processor_t733572553 * value)
	{
		___m_Parent_6 = value;
		Il2CppCodeGenWriteBarrier((&___m_Parent_6), value);
	}

	inline static int32_t get_offset_of_m_State_7() { return static_cast<int32_t>(offsetof(Processor_t733572553, ___m_State_7)); }
	inline int32_t get_m_State_7() const { return ___m_State_7; }
	inline int32_t* get_address_of_m_State_7() { return &___m_State_7; }
	inline void set_m_State_7(int32_t value)
	{
		___m_State_7 = value;
	}

	inline static int32_t get_offset_of_m_CanYield_8() { return static_cast<int32_t>(offsetof(Processor_t733572553, ___m_CanYield_8)); }
	inline bool get_m_CanYield_8() const { return ___m_CanYield_8; }
	inline bool* get_address_of_m_CanYield_8() { return &___m_CanYield_8; }
	inline void set_m_CanYield_8(bool value)
	{
		___m_CanYield_8 = value;
	}

	inline static int32_t get_offset_of_m_SavedInstructionPtr_9() { return static_cast<int32_t>(offsetof(Processor_t733572553, ___m_SavedInstructionPtr_9)); }
	inline int32_t get_m_SavedInstructionPtr_9() const { return ___m_SavedInstructionPtr_9; }
	inline int32_t* get_address_of_m_SavedInstructionPtr_9() { return &___m_SavedInstructionPtr_9; }
	inline void set_m_SavedInstructionPtr_9(int32_t value)
	{
		___m_SavedInstructionPtr_9 = value;
	}

	inline static int32_t get_offset_of_m_Debug_10() { return static_cast<int32_t>(offsetof(Processor_t733572553, ___m_Debug_10)); }
	inline DebugContext_t2025408788 * get_m_Debug_10() const { return ___m_Debug_10; }
	inline DebugContext_t2025408788 ** get_address_of_m_Debug_10() { return &___m_Debug_10; }
	inline void set_m_Debug_10(DebugContext_t2025408788 * value)
	{
		___m_Debug_10 = value;
		Il2CppCodeGenWriteBarrier((&___m_Debug_10), value);
	}

	inline static int32_t get_offset_of_m_OwningThreadID_11() { return static_cast<int32_t>(offsetof(Processor_t733572553, ___m_OwningThreadID_11)); }
	inline int32_t get_m_OwningThreadID_11() const { return ___m_OwningThreadID_11; }
	inline int32_t* get_address_of_m_OwningThreadID_11() { return &___m_OwningThreadID_11; }
	inline void set_m_OwningThreadID_11(int32_t value)
	{
		___m_OwningThreadID_11 = value;
	}

	inline static int32_t get_offset_of_m_ExecutionNesting_12() { return static_cast<int32_t>(offsetof(Processor_t733572553, ___m_ExecutionNesting_12)); }
	inline int32_t get_m_ExecutionNesting_12() const { return ___m_ExecutionNesting_12; }
	inline int32_t* get_address_of_m_ExecutionNesting_12() { return &___m_ExecutionNesting_12; }
	inline void set_m_ExecutionNesting_12(int32_t value)
	{
		___m_ExecutionNesting_12 = value;
	}

	inline static int32_t get_offset_of_U3CAssociatedCoroutineU3Ek__BackingField_15() { return static_cast<int32_t>(offsetof(Processor_t733572553, ___U3CAssociatedCoroutineU3Ek__BackingField_15)); }
	inline Coroutine_t2598270305 * get_U3CAssociatedCoroutineU3Ek__BackingField_15() const { return ___U3CAssociatedCoroutineU3Ek__BackingField_15; }
	inline Coroutine_t2598270305 ** get_address_of_U3CAssociatedCoroutineU3Ek__BackingField_15() { return &___U3CAssociatedCoroutineU3Ek__BackingField_15; }
	inline void set_U3CAssociatedCoroutineU3Ek__BackingField_15(Coroutine_t2598270305 * value)
	{
		___U3CAssociatedCoroutineU3Ek__BackingField_15 = value;
		Il2CppCodeGenWriteBarrier((&___U3CAssociatedCoroutineU3Ek__BackingField_15), value);
	}

	inline static int32_t get_offset_of_AutoYieldCounter_17() { return static_cast<int32_t>(offsetof(Processor_t733572553, ___AutoYieldCounter_17)); }
	inline int64_t get_AutoYieldCounter_17() const { return ___AutoYieldCounter_17; }
	inline int64_t* get_address_of_AutoYieldCounter_17() { return &___AutoYieldCounter_17; }
	inline void set_AutoYieldCounter_17(int64_t value)
	{
		___AutoYieldCounter_17 = value;
	}
};

struct Processor_t733572553_StaticFields
{
public:
	// System.Func`2<MoonSharp.Interpreter.Execution.VM.Processor,MoonSharp.Interpreter.Debugging.WatchItem> MoonSharp.Interpreter.Execution.VM.Processor::<>f__am$cache0
	Func_2_t2363718101 * ___U3CU3Ef__amU24cache0_18;

public:
	inline static int32_t get_offset_of_U3CU3Ef__amU24cache0_18() { return static_cast<int32_t>(offsetof(Processor_t733572553_StaticFields, ___U3CU3Ef__amU24cache0_18)); }
	inline Func_2_t2363718101 * get_U3CU3Ef__amU24cache0_18() const { return ___U3CU3Ef__amU24cache0_18; }
	inline Func_2_t2363718101 ** get_address_of_U3CU3Ef__amU24cache0_18() { return &___U3CU3Ef__amU24cache0_18; }
	inline void set_U3CU3Ef__amU24cache0_18(Func_2_t2363718101 * value)
	{
		___U3CU3Ef__amU24cache0_18 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__amU24cache0_18), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PROCESSOR_T733572553_H
#ifndef DATETIME_T3738529785_H
#define DATETIME_T3738529785_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.DateTime
struct  DateTime_t3738529785 
{
public:
	// System.TimeSpan System.DateTime::ticks
	TimeSpan_t881159249  ___ticks_10;
	// System.DateTimeKind System.DateTime::kind
	int32_t ___kind_11;

public:
	inline static int32_t get_offset_of_ticks_10() { return static_cast<int32_t>(offsetof(DateTime_t3738529785, ___ticks_10)); }
	inline TimeSpan_t881159249  get_ticks_10() const { return ___ticks_10; }
	inline TimeSpan_t881159249 * get_address_of_ticks_10() { return &___ticks_10; }
	inline void set_ticks_10(TimeSpan_t881159249  value)
	{
		___ticks_10 = value;
	}

	inline static int32_t get_offset_of_kind_11() { return static_cast<int32_t>(offsetof(DateTime_t3738529785, ___kind_11)); }
	inline int32_t get_kind_11() const { return ___kind_11; }
	inline int32_t* get_address_of_kind_11() { return &___kind_11; }
	inline void set_kind_11(int32_t value)
	{
		___kind_11 = value;
	}
};

struct DateTime_t3738529785_StaticFields
{
public:
	// System.DateTime System.DateTime::MaxValue
	DateTime_t3738529785  ___MaxValue_12;
	// System.DateTime System.DateTime::MinValue
	DateTime_t3738529785  ___MinValue_13;
	// System.String[] System.DateTime::ParseTimeFormats
	StringU5BU5D_t1281789340* ___ParseTimeFormats_14;
	// System.String[] System.DateTime::ParseYearDayMonthFormats
	StringU5BU5D_t1281789340* ___ParseYearDayMonthFormats_15;
	// System.String[] System.DateTime::ParseYearMonthDayFormats
	StringU5BU5D_t1281789340* ___ParseYearMonthDayFormats_16;
	// System.String[] System.DateTime::ParseDayMonthYearFormats
	StringU5BU5D_t1281789340* ___ParseDayMonthYearFormats_17;
	// System.String[] System.DateTime::ParseMonthDayYearFormats
	StringU5BU5D_t1281789340* ___ParseMonthDayYearFormats_18;
	// System.String[] System.DateTime::MonthDayShortFormats
	StringU5BU5D_t1281789340* ___MonthDayShortFormats_19;
	// System.String[] System.DateTime::DayMonthShortFormats
	StringU5BU5D_t1281789340* ___DayMonthShortFormats_20;
	// System.Int32[] System.DateTime::daysmonth
	Int32U5BU5D_t385246372* ___daysmonth_21;
	// System.Int32[] System.DateTime::daysmonthleap
	Int32U5BU5D_t385246372* ___daysmonthleap_22;
	// System.Object System.DateTime::to_local_time_span_object
	RuntimeObject * ___to_local_time_span_object_23;
	// System.Int64 System.DateTime::last_now
	int64_t ___last_now_24;

public:
	inline static int32_t get_offset_of_MaxValue_12() { return static_cast<int32_t>(offsetof(DateTime_t3738529785_StaticFields, ___MaxValue_12)); }
	inline DateTime_t3738529785  get_MaxValue_12() const { return ___MaxValue_12; }
	inline DateTime_t3738529785 * get_address_of_MaxValue_12() { return &___MaxValue_12; }
	inline void set_MaxValue_12(DateTime_t3738529785  value)
	{
		___MaxValue_12 = value;
	}

	inline static int32_t get_offset_of_MinValue_13() { return static_cast<int32_t>(offsetof(DateTime_t3738529785_StaticFields, ___MinValue_13)); }
	inline DateTime_t3738529785  get_MinValue_13() const { return ___MinValue_13; }
	inline DateTime_t3738529785 * get_address_of_MinValue_13() { return &___MinValue_13; }
	inline void set_MinValue_13(DateTime_t3738529785  value)
	{
		___MinValue_13 = value;
	}

	inline static int32_t get_offset_of_ParseTimeFormats_14() { return static_cast<int32_t>(offsetof(DateTime_t3738529785_StaticFields, ___ParseTimeFormats_14)); }
	inline StringU5BU5D_t1281789340* get_ParseTimeFormats_14() const { return ___ParseTimeFormats_14; }
	inline StringU5BU5D_t1281789340** get_address_of_ParseTimeFormats_14() { return &___ParseTimeFormats_14; }
	inline void set_ParseTimeFormats_14(StringU5BU5D_t1281789340* value)
	{
		___ParseTimeFormats_14 = value;
		Il2CppCodeGenWriteBarrier((&___ParseTimeFormats_14), value);
	}

	inline static int32_t get_offset_of_ParseYearDayMonthFormats_15() { return static_cast<int32_t>(offsetof(DateTime_t3738529785_StaticFields, ___ParseYearDayMonthFormats_15)); }
	inline StringU5BU5D_t1281789340* get_ParseYearDayMonthFormats_15() const { return ___ParseYearDayMonthFormats_15; }
	inline StringU5BU5D_t1281789340** get_address_of_ParseYearDayMonthFormats_15() { return &___ParseYearDayMonthFormats_15; }
	inline void set_ParseYearDayMonthFormats_15(StringU5BU5D_t1281789340* value)
	{
		___ParseYearDayMonthFormats_15 = value;
		Il2CppCodeGenWriteBarrier((&___ParseYearDayMonthFormats_15), value);
	}

	inline static int32_t get_offset_of_ParseYearMonthDayFormats_16() { return static_cast<int32_t>(offsetof(DateTime_t3738529785_StaticFields, ___ParseYearMonthDayFormats_16)); }
	inline StringU5BU5D_t1281789340* get_ParseYearMonthDayFormats_16() const { return ___ParseYearMonthDayFormats_16; }
	inline StringU5BU5D_t1281789340** get_address_of_ParseYearMonthDayFormats_16() { return &___ParseYearMonthDayFormats_16; }
	inline void set_ParseYearMonthDayFormats_16(StringU5BU5D_t1281789340* value)
	{
		___ParseYearMonthDayFormats_16 = value;
		Il2CppCodeGenWriteBarrier((&___ParseYearMonthDayFormats_16), value);
	}

	inline static int32_t get_offset_of_ParseDayMonthYearFormats_17() { return static_cast<int32_t>(offsetof(DateTime_t3738529785_StaticFields, ___ParseDayMonthYearFormats_17)); }
	inline StringU5BU5D_t1281789340* get_ParseDayMonthYearFormats_17() const { return ___ParseDayMonthYearFormats_17; }
	inline StringU5BU5D_t1281789340** get_address_of_ParseDayMonthYearFormats_17() { return &___ParseDayMonthYearFormats_17; }
	inline void set_ParseDayMonthYearFormats_17(StringU5BU5D_t1281789340* value)
	{
		___ParseDayMonthYearFormats_17 = value;
		Il2CppCodeGenWriteBarrier((&___ParseDayMonthYearFormats_17), value);
	}

	inline static int32_t get_offset_of_ParseMonthDayYearFormats_18() { return static_cast<int32_t>(offsetof(DateTime_t3738529785_StaticFields, ___ParseMonthDayYearFormats_18)); }
	inline StringU5BU5D_t1281789340* get_ParseMonthDayYearFormats_18() const { return ___ParseMonthDayYearFormats_18; }
	inline StringU5BU5D_t1281789340** get_address_of_ParseMonthDayYearFormats_18() { return &___ParseMonthDayYearFormats_18; }
	inline void set_ParseMonthDayYearFormats_18(StringU5BU5D_t1281789340* value)
	{
		___ParseMonthDayYearFormats_18 = value;
		Il2CppCodeGenWriteBarrier((&___ParseMonthDayYearFormats_18), value);
	}

	inline static int32_t get_offset_of_MonthDayShortFormats_19() { return static_cast<int32_t>(offsetof(DateTime_t3738529785_StaticFields, ___MonthDayShortFormats_19)); }
	inline StringU5BU5D_t1281789340* get_MonthDayShortFormats_19() const { return ___MonthDayShortFormats_19; }
	inline StringU5BU5D_t1281789340** get_address_of_MonthDayShortFormats_19() { return &___MonthDayShortFormats_19; }
	inline void set_MonthDayShortFormats_19(StringU5BU5D_t1281789340* value)
	{
		___MonthDayShortFormats_19 = value;
		Il2CppCodeGenWriteBarrier((&___MonthDayShortFormats_19), value);
	}

	inline static int32_t get_offset_of_DayMonthShortFormats_20() { return static_cast<int32_t>(offsetof(DateTime_t3738529785_StaticFields, ___DayMonthShortFormats_20)); }
	inline StringU5BU5D_t1281789340* get_DayMonthShortFormats_20() const { return ___DayMonthShortFormats_20; }
	inline StringU5BU5D_t1281789340** get_address_of_DayMonthShortFormats_20() { return &___DayMonthShortFormats_20; }
	inline void set_DayMonthShortFormats_20(StringU5BU5D_t1281789340* value)
	{
		___DayMonthShortFormats_20 = value;
		Il2CppCodeGenWriteBarrier((&___DayMonthShortFormats_20), value);
	}

	inline static int32_t get_offset_of_daysmonth_21() { return static_cast<int32_t>(offsetof(DateTime_t3738529785_StaticFields, ___daysmonth_21)); }
	inline Int32U5BU5D_t385246372* get_daysmonth_21() const { return ___daysmonth_21; }
	inline Int32U5BU5D_t385246372** get_address_of_daysmonth_21() { return &___daysmonth_21; }
	inline void set_daysmonth_21(Int32U5BU5D_t385246372* value)
	{
		___daysmonth_21 = value;
		Il2CppCodeGenWriteBarrier((&___daysmonth_21), value);
	}

	inline static int32_t get_offset_of_daysmonthleap_22() { return static_cast<int32_t>(offsetof(DateTime_t3738529785_StaticFields, ___daysmonthleap_22)); }
	inline Int32U5BU5D_t385246372* get_daysmonthleap_22() const { return ___daysmonthleap_22; }
	inline Int32U5BU5D_t385246372** get_address_of_daysmonthleap_22() { return &___daysmonthleap_22; }
	inline void set_daysmonthleap_22(Int32U5BU5D_t385246372* value)
	{
		___daysmonthleap_22 = value;
		Il2CppCodeGenWriteBarrier((&___daysmonthleap_22), value);
	}

	inline static int32_t get_offset_of_to_local_time_span_object_23() { return static_cast<int32_t>(offsetof(DateTime_t3738529785_StaticFields, ___to_local_time_span_object_23)); }
	inline RuntimeObject * get_to_local_time_span_object_23() const { return ___to_local_time_span_object_23; }
	inline RuntimeObject ** get_address_of_to_local_time_span_object_23() { return &___to_local_time_span_object_23; }
	inline void set_to_local_time_span_object_23(RuntimeObject * value)
	{
		___to_local_time_span_object_23 = value;
		Il2CppCodeGenWriteBarrier((&___to_local_time_span_object_23), value);
	}

	inline static int32_t get_offset_of_last_now_24() { return static_cast<int32_t>(offsetof(DateTime_t3738529785_StaticFields, ___last_now_24)); }
	inline int64_t get_last_now_24() const { return ___last_now_24; }
	inline int64_t* get_address_of_last_now_24() { return &___last_now_24; }
	inline void set_last_now_24(int64_t value)
	{
		___last_now_24 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DATETIME_T3738529785_H
#ifndef COROUTINE_T2598270305_H
#define COROUTINE_T2598270305_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MoonSharp.Interpreter.Coroutine
struct  Coroutine_t2598270305  : public RefIdObject_t1123467269
{
public:
	// MoonSharp.Interpreter.Coroutine/CoroutineType MoonSharp.Interpreter.Coroutine::<Type>k__BackingField
	int32_t ___U3CTypeU3Ek__BackingField_2;
	// MoonSharp.Interpreter.CallbackFunction MoonSharp.Interpreter.Coroutine::m_ClrCallback
	CallbackFunction_t350661728 * ___m_ClrCallback_3;
	// MoonSharp.Interpreter.Execution.VM.Processor MoonSharp.Interpreter.Coroutine::m_Processor
	Processor_t733572553 * ___m_Processor_4;
	// MoonSharp.Interpreter.Script MoonSharp.Interpreter.Coroutine::<OwnerScript>k__BackingField
	Script_t154231481 * ___U3COwnerScriptU3Ek__BackingField_5;

public:
	inline static int32_t get_offset_of_U3CTypeU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(Coroutine_t2598270305, ___U3CTypeU3Ek__BackingField_2)); }
	inline int32_t get_U3CTypeU3Ek__BackingField_2() const { return ___U3CTypeU3Ek__BackingField_2; }
	inline int32_t* get_address_of_U3CTypeU3Ek__BackingField_2() { return &___U3CTypeU3Ek__BackingField_2; }
	inline void set_U3CTypeU3Ek__BackingField_2(int32_t value)
	{
		___U3CTypeU3Ek__BackingField_2 = value;
	}

	inline static int32_t get_offset_of_m_ClrCallback_3() { return static_cast<int32_t>(offsetof(Coroutine_t2598270305, ___m_ClrCallback_3)); }
	inline CallbackFunction_t350661728 * get_m_ClrCallback_3() const { return ___m_ClrCallback_3; }
	inline CallbackFunction_t350661728 ** get_address_of_m_ClrCallback_3() { return &___m_ClrCallback_3; }
	inline void set_m_ClrCallback_3(CallbackFunction_t350661728 * value)
	{
		___m_ClrCallback_3 = value;
		Il2CppCodeGenWriteBarrier((&___m_ClrCallback_3), value);
	}

	inline static int32_t get_offset_of_m_Processor_4() { return static_cast<int32_t>(offsetof(Coroutine_t2598270305, ___m_Processor_4)); }
	inline Processor_t733572553 * get_m_Processor_4() const { return ___m_Processor_4; }
	inline Processor_t733572553 ** get_address_of_m_Processor_4() { return &___m_Processor_4; }
	inline void set_m_Processor_4(Processor_t733572553 * value)
	{
		___m_Processor_4 = value;
		Il2CppCodeGenWriteBarrier((&___m_Processor_4), value);
	}

	inline static int32_t get_offset_of_U3COwnerScriptU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(Coroutine_t2598270305, ___U3COwnerScriptU3Ek__BackingField_5)); }
	inline Script_t154231481 * get_U3COwnerScriptU3Ek__BackingField_5() const { return ___U3COwnerScriptU3Ek__BackingField_5; }
	inline Script_t154231481 ** get_address_of_U3COwnerScriptU3Ek__BackingField_5() { return &___U3COwnerScriptU3Ek__BackingField_5; }
	inline void set_U3COwnerScriptU3Ek__BackingField_5(Script_t154231481 * value)
	{
		___U3COwnerScriptU3Ek__BackingField_5 = value;
		Il2CppCodeGenWriteBarrier((&___U3COwnerScriptU3Ek__BackingField_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COROUTINE_T2598270305_H
#ifndef DYNAMICEXPRESSIONEXCEPTION_T2565968832_H
#define DYNAMICEXPRESSIONEXCEPTION_T2565968832_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MoonSharp.Interpreter.DynamicExpressionException
struct  DynamicExpressionException_t2565968832  : public ScriptRuntimeException_t501315205
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DYNAMICEXPRESSIONEXCEPTION_T2565968832_H
#ifndef CALLBACKFUNCTION_T350661728_H
#define CALLBACKFUNCTION_T350661728_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MoonSharp.Interpreter.CallbackFunction
struct  CallbackFunction_t350661728  : public RefIdObject_t1123467269
{
public:
	// System.String MoonSharp.Interpreter.CallbackFunction::<Name>k__BackingField
	String_t* ___U3CNameU3Ek__BackingField_3;
	// System.Func`3<MoonSharp.Interpreter.ScriptExecutionContext,MoonSharp.Interpreter.CallbackArguments,MoonSharp.Interpreter.DynValue> MoonSharp.Interpreter.CallbackFunction::<ClrCallback>k__BackingField
	Func_3_t241411922 * ___U3CClrCallbackU3Ek__BackingField_4;
	// System.Object MoonSharp.Interpreter.CallbackFunction::<AdditionalData>k__BackingField
	RuntimeObject * ___U3CAdditionalDataU3Ek__BackingField_5;

public:
	inline static int32_t get_offset_of_U3CNameU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(CallbackFunction_t350661728, ___U3CNameU3Ek__BackingField_3)); }
	inline String_t* get_U3CNameU3Ek__BackingField_3() const { return ___U3CNameU3Ek__BackingField_3; }
	inline String_t** get_address_of_U3CNameU3Ek__BackingField_3() { return &___U3CNameU3Ek__BackingField_3; }
	inline void set_U3CNameU3Ek__BackingField_3(String_t* value)
	{
		___U3CNameU3Ek__BackingField_3 = value;
		Il2CppCodeGenWriteBarrier((&___U3CNameU3Ek__BackingField_3), value);
	}

	inline static int32_t get_offset_of_U3CClrCallbackU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(CallbackFunction_t350661728, ___U3CClrCallbackU3Ek__BackingField_4)); }
	inline Func_3_t241411922 * get_U3CClrCallbackU3Ek__BackingField_4() const { return ___U3CClrCallbackU3Ek__BackingField_4; }
	inline Func_3_t241411922 ** get_address_of_U3CClrCallbackU3Ek__BackingField_4() { return &___U3CClrCallbackU3Ek__BackingField_4; }
	inline void set_U3CClrCallbackU3Ek__BackingField_4(Func_3_t241411922 * value)
	{
		___U3CClrCallbackU3Ek__BackingField_4 = value;
		Il2CppCodeGenWriteBarrier((&___U3CClrCallbackU3Ek__BackingField_4), value);
	}

	inline static int32_t get_offset_of_U3CAdditionalDataU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(CallbackFunction_t350661728, ___U3CAdditionalDataU3Ek__BackingField_5)); }
	inline RuntimeObject * get_U3CAdditionalDataU3Ek__BackingField_5() const { return ___U3CAdditionalDataU3Ek__BackingField_5; }
	inline RuntimeObject ** get_address_of_U3CAdditionalDataU3Ek__BackingField_5() { return &___U3CAdditionalDataU3Ek__BackingField_5; }
	inline void set_U3CAdditionalDataU3Ek__BackingField_5(RuntimeObject * value)
	{
		___U3CAdditionalDataU3Ek__BackingField_5 = value;
		Il2CppCodeGenWriteBarrier((&___U3CAdditionalDataU3Ek__BackingField_5), value);
	}
};

struct CallbackFunction_t350661728_StaticFields
{
public:
	// MoonSharp.Interpreter.InteropAccessMode MoonSharp.Interpreter.CallbackFunction::m_DefaultAccessMode
	int32_t ___m_DefaultAccessMode_2;

public:
	inline static int32_t get_offset_of_m_DefaultAccessMode_2() { return static_cast<int32_t>(offsetof(CallbackFunction_t350661728_StaticFields, ___m_DefaultAccessMode_2)); }
	inline int32_t get_m_DefaultAccessMode_2() const { return ___m_DefaultAccessMode_2; }
	inline int32_t* get_address_of_m_DefaultAccessMode_2() { return &___m_DefaultAccessMode_2; }
	inline void set_m_DefaultAccessMode_2(int32_t value)
	{
		___m_DefaultAccessMode_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CALLBACKFUNCTION_T350661728_H
#ifndef PERFORMANCESTOPWATCH_T377456844_H
#define PERFORMANCESTOPWATCH_T377456844_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MoonSharp.Interpreter.Diagnostics.PerformanceCounters.PerformanceStopwatch
struct  PerformanceStopwatch_t377456844  : public RuntimeObject
{
public:
	// System.Diagnostics.Stopwatch MoonSharp.Interpreter.Diagnostics.PerformanceCounters.PerformanceStopwatch::m_Stopwatch
	Stopwatch_t305734070 * ___m_Stopwatch_0;
	// System.Int32 MoonSharp.Interpreter.Diagnostics.PerformanceCounters.PerformanceStopwatch::m_Count
	int32_t ___m_Count_1;
	// System.Int32 MoonSharp.Interpreter.Diagnostics.PerformanceCounters.PerformanceStopwatch::m_Reentrant
	int32_t ___m_Reentrant_2;
	// MoonSharp.Interpreter.Diagnostics.PerformanceCounter MoonSharp.Interpreter.Diagnostics.PerformanceCounters.PerformanceStopwatch::m_Counter
	int32_t ___m_Counter_3;

public:
	inline static int32_t get_offset_of_m_Stopwatch_0() { return static_cast<int32_t>(offsetof(PerformanceStopwatch_t377456844, ___m_Stopwatch_0)); }
	inline Stopwatch_t305734070 * get_m_Stopwatch_0() const { return ___m_Stopwatch_0; }
	inline Stopwatch_t305734070 ** get_address_of_m_Stopwatch_0() { return &___m_Stopwatch_0; }
	inline void set_m_Stopwatch_0(Stopwatch_t305734070 * value)
	{
		___m_Stopwatch_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_Stopwatch_0), value);
	}

	inline static int32_t get_offset_of_m_Count_1() { return static_cast<int32_t>(offsetof(PerformanceStopwatch_t377456844, ___m_Count_1)); }
	inline int32_t get_m_Count_1() const { return ___m_Count_1; }
	inline int32_t* get_address_of_m_Count_1() { return &___m_Count_1; }
	inline void set_m_Count_1(int32_t value)
	{
		___m_Count_1 = value;
	}

	inline static int32_t get_offset_of_m_Reentrant_2() { return static_cast<int32_t>(offsetof(PerformanceStopwatch_t377456844, ___m_Reentrant_2)); }
	inline int32_t get_m_Reentrant_2() const { return ___m_Reentrant_2; }
	inline int32_t* get_address_of_m_Reentrant_2() { return &___m_Reentrant_2; }
	inline void set_m_Reentrant_2(int32_t value)
	{
		___m_Reentrant_2 = value;
	}

	inline static int32_t get_offset_of_m_Counter_3() { return static_cast<int32_t>(offsetof(PerformanceStopwatch_t377456844, ___m_Counter_3)); }
	inline int32_t get_m_Counter_3() const { return ___m_Counter_3; }
	inline int32_t* get_address_of_m_Counter_3() { return &___m_Counter_3; }
	inline void set_m_Counter_3(int32_t value)
	{
		___m_Counter_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PERFORMANCESTOPWATCH_T377456844_H
#ifndef DEBUGCONTEXT_T2025408788_H
#define DEBUGCONTEXT_T2025408788_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MoonSharp.Interpreter.Execution.VM.Processor/DebugContext
struct  DebugContext_t2025408788  : public RuntimeObject
{
public:
	// System.Boolean MoonSharp.Interpreter.Execution.VM.Processor/DebugContext::DebuggerEnabled
	bool ___DebuggerEnabled_0;
	// MoonSharp.Interpreter.Debugging.IDebugger MoonSharp.Interpreter.Execution.VM.Processor/DebugContext::DebuggerAttached
	RuntimeObject* ___DebuggerAttached_1;
	// MoonSharp.Interpreter.Debugging.DebuggerAction/ActionType MoonSharp.Interpreter.Execution.VM.Processor/DebugContext::DebuggerCurrentAction
	int32_t ___DebuggerCurrentAction_2;
	// System.Int32 MoonSharp.Interpreter.Execution.VM.Processor/DebugContext::DebuggerCurrentActionTarget
	int32_t ___DebuggerCurrentActionTarget_3;
	// MoonSharp.Interpreter.Debugging.SourceRef MoonSharp.Interpreter.Execution.VM.Processor/DebugContext::LastHlRef
	SourceRef_t3386753787 * ___LastHlRef_4;
	// System.Int32 MoonSharp.Interpreter.Execution.VM.Processor/DebugContext::ExStackDepthAtStep
	int32_t ___ExStackDepthAtStep_5;
	// System.Collections.Generic.List`1<MoonSharp.Interpreter.Debugging.SourceRef> MoonSharp.Interpreter.Execution.VM.Processor/DebugContext::BreakPoints
	List_1_t563861233 * ___BreakPoints_6;
	// System.Boolean MoonSharp.Interpreter.Execution.VM.Processor/DebugContext::LineBasedBreakPoints
	bool ___LineBasedBreakPoints_7;

public:
	inline static int32_t get_offset_of_DebuggerEnabled_0() { return static_cast<int32_t>(offsetof(DebugContext_t2025408788, ___DebuggerEnabled_0)); }
	inline bool get_DebuggerEnabled_0() const { return ___DebuggerEnabled_0; }
	inline bool* get_address_of_DebuggerEnabled_0() { return &___DebuggerEnabled_0; }
	inline void set_DebuggerEnabled_0(bool value)
	{
		___DebuggerEnabled_0 = value;
	}

	inline static int32_t get_offset_of_DebuggerAttached_1() { return static_cast<int32_t>(offsetof(DebugContext_t2025408788, ___DebuggerAttached_1)); }
	inline RuntimeObject* get_DebuggerAttached_1() const { return ___DebuggerAttached_1; }
	inline RuntimeObject** get_address_of_DebuggerAttached_1() { return &___DebuggerAttached_1; }
	inline void set_DebuggerAttached_1(RuntimeObject* value)
	{
		___DebuggerAttached_1 = value;
		Il2CppCodeGenWriteBarrier((&___DebuggerAttached_1), value);
	}

	inline static int32_t get_offset_of_DebuggerCurrentAction_2() { return static_cast<int32_t>(offsetof(DebugContext_t2025408788, ___DebuggerCurrentAction_2)); }
	inline int32_t get_DebuggerCurrentAction_2() const { return ___DebuggerCurrentAction_2; }
	inline int32_t* get_address_of_DebuggerCurrentAction_2() { return &___DebuggerCurrentAction_2; }
	inline void set_DebuggerCurrentAction_2(int32_t value)
	{
		___DebuggerCurrentAction_2 = value;
	}

	inline static int32_t get_offset_of_DebuggerCurrentActionTarget_3() { return static_cast<int32_t>(offsetof(DebugContext_t2025408788, ___DebuggerCurrentActionTarget_3)); }
	inline int32_t get_DebuggerCurrentActionTarget_3() const { return ___DebuggerCurrentActionTarget_3; }
	inline int32_t* get_address_of_DebuggerCurrentActionTarget_3() { return &___DebuggerCurrentActionTarget_3; }
	inline void set_DebuggerCurrentActionTarget_3(int32_t value)
	{
		___DebuggerCurrentActionTarget_3 = value;
	}

	inline static int32_t get_offset_of_LastHlRef_4() { return static_cast<int32_t>(offsetof(DebugContext_t2025408788, ___LastHlRef_4)); }
	inline SourceRef_t3386753787 * get_LastHlRef_4() const { return ___LastHlRef_4; }
	inline SourceRef_t3386753787 ** get_address_of_LastHlRef_4() { return &___LastHlRef_4; }
	inline void set_LastHlRef_4(SourceRef_t3386753787 * value)
	{
		___LastHlRef_4 = value;
		Il2CppCodeGenWriteBarrier((&___LastHlRef_4), value);
	}

	inline static int32_t get_offset_of_ExStackDepthAtStep_5() { return static_cast<int32_t>(offsetof(DebugContext_t2025408788, ___ExStackDepthAtStep_5)); }
	inline int32_t get_ExStackDepthAtStep_5() const { return ___ExStackDepthAtStep_5; }
	inline int32_t* get_address_of_ExStackDepthAtStep_5() { return &___ExStackDepthAtStep_5; }
	inline void set_ExStackDepthAtStep_5(int32_t value)
	{
		___ExStackDepthAtStep_5 = value;
	}

	inline static int32_t get_offset_of_BreakPoints_6() { return static_cast<int32_t>(offsetof(DebugContext_t2025408788, ___BreakPoints_6)); }
	inline List_1_t563861233 * get_BreakPoints_6() const { return ___BreakPoints_6; }
	inline List_1_t563861233 ** get_address_of_BreakPoints_6() { return &___BreakPoints_6; }
	inline void set_BreakPoints_6(List_1_t563861233 * value)
	{
		___BreakPoints_6 = value;
		Il2CppCodeGenWriteBarrier((&___BreakPoints_6), value);
	}

	inline static int32_t get_offset_of_LineBasedBreakPoints_7() { return static_cast<int32_t>(offsetof(DebugContext_t2025408788, ___LineBasedBreakPoints_7)); }
	inline bool get_LineBasedBreakPoints_7() const { return ___LineBasedBreakPoints_7; }
	inline bool* get_address_of_LineBasedBreakPoints_7() { return &___LineBasedBreakPoints_7; }
	inline void set_LineBasedBreakPoints_7(bool value)
	{
		___LineBasedBreakPoints_7 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DEBUGCONTEXT_T2025408788_H
#ifndef INSTRUCTION_T3290677225_H
#define INSTRUCTION_T3290677225_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MoonSharp.Interpreter.Execution.VM.Instruction
struct  Instruction_t3290677225  : public RuntimeObject
{
public:
	// MoonSharp.Interpreter.Execution.VM.OpCode MoonSharp.Interpreter.Execution.VM.Instruction::OpCode
	int32_t ___OpCode_0;
	// MoonSharp.Interpreter.SymbolRef MoonSharp.Interpreter.Execution.VM.Instruction::Symbol
	SymbolRef_t2926262290 * ___Symbol_1;
	// MoonSharp.Interpreter.SymbolRef[] MoonSharp.Interpreter.Execution.VM.Instruction::SymbolList
	SymbolRefU5BU5D_t3368573799* ___SymbolList_2;
	// System.String MoonSharp.Interpreter.Execution.VM.Instruction::Name
	String_t* ___Name_3;
	// MoonSharp.Interpreter.DynValue MoonSharp.Interpreter.Execution.VM.Instruction::Value
	DynValue_t548152748 * ___Value_4;
	// System.Int32 MoonSharp.Interpreter.Execution.VM.Instruction::NumVal
	int32_t ___NumVal_5;
	// System.Int32 MoonSharp.Interpreter.Execution.VM.Instruction::NumVal2
	int32_t ___NumVal2_6;
	// MoonSharp.Interpreter.Debugging.SourceRef MoonSharp.Interpreter.Execution.VM.Instruction::SourceCodeRef
	SourceRef_t3386753787 * ___SourceCodeRef_7;

public:
	inline static int32_t get_offset_of_OpCode_0() { return static_cast<int32_t>(offsetof(Instruction_t3290677225, ___OpCode_0)); }
	inline int32_t get_OpCode_0() const { return ___OpCode_0; }
	inline int32_t* get_address_of_OpCode_0() { return &___OpCode_0; }
	inline void set_OpCode_0(int32_t value)
	{
		___OpCode_0 = value;
	}

	inline static int32_t get_offset_of_Symbol_1() { return static_cast<int32_t>(offsetof(Instruction_t3290677225, ___Symbol_1)); }
	inline SymbolRef_t2926262290 * get_Symbol_1() const { return ___Symbol_1; }
	inline SymbolRef_t2926262290 ** get_address_of_Symbol_1() { return &___Symbol_1; }
	inline void set_Symbol_1(SymbolRef_t2926262290 * value)
	{
		___Symbol_1 = value;
		Il2CppCodeGenWriteBarrier((&___Symbol_1), value);
	}

	inline static int32_t get_offset_of_SymbolList_2() { return static_cast<int32_t>(offsetof(Instruction_t3290677225, ___SymbolList_2)); }
	inline SymbolRefU5BU5D_t3368573799* get_SymbolList_2() const { return ___SymbolList_2; }
	inline SymbolRefU5BU5D_t3368573799** get_address_of_SymbolList_2() { return &___SymbolList_2; }
	inline void set_SymbolList_2(SymbolRefU5BU5D_t3368573799* value)
	{
		___SymbolList_2 = value;
		Il2CppCodeGenWriteBarrier((&___SymbolList_2), value);
	}

	inline static int32_t get_offset_of_Name_3() { return static_cast<int32_t>(offsetof(Instruction_t3290677225, ___Name_3)); }
	inline String_t* get_Name_3() const { return ___Name_3; }
	inline String_t** get_address_of_Name_3() { return &___Name_3; }
	inline void set_Name_3(String_t* value)
	{
		___Name_3 = value;
		Il2CppCodeGenWriteBarrier((&___Name_3), value);
	}

	inline static int32_t get_offset_of_Value_4() { return static_cast<int32_t>(offsetof(Instruction_t3290677225, ___Value_4)); }
	inline DynValue_t548152748 * get_Value_4() const { return ___Value_4; }
	inline DynValue_t548152748 ** get_address_of_Value_4() { return &___Value_4; }
	inline void set_Value_4(DynValue_t548152748 * value)
	{
		___Value_4 = value;
		Il2CppCodeGenWriteBarrier((&___Value_4), value);
	}

	inline static int32_t get_offset_of_NumVal_5() { return static_cast<int32_t>(offsetof(Instruction_t3290677225, ___NumVal_5)); }
	inline int32_t get_NumVal_5() const { return ___NumVal_5; }
	inline int32_t* get_address_of_NumVal_5() { return &___NumVal_5; }
	inline void set_NumVal_5(int32_t value)
	{
		___NumVal_5 = value;
	}

	inline static int32_t get_offset_of_NumVal2_6() { return static_cast<int32_t>(offsetof(Instruction_t3290677225, ___NumVal2_6)); }
	inline int32_t get_NumVal2_6() const { return ___NumVal2_6; }
	inline int32_t* get_address_of_NumVal2_6() { return &___NumVal2_6; }
	inline void set_NumVal2_6(int32_t value)
	{
		___NumVal2_6 = value;
	}

	inline static int32_t get_offset_of_SourceCodeRef_7() { return static_cast<int32_t>(offsetof(Instruction_t3290677225, ___SourceCodeRef_7)); }
	inline SourceRef_t3386753787 * get_SourceCodeRef_7() const { return ___SourceCodeRef_7; }
	inline SourceRef_t3386753787 ** get_address_of_SourceCodeRef_7() { return &___SourceCodeRef_7; }
	inline void set_SourceCodeRef_7(SourceRef_t3386753787 * value)
	{
		___SourceCodeRef_7 = value;
		Il2CppCodeGenWriteBarrier((&___SourceCodeRef_7), value);
	}
};

struct Instruction_t3290677225_StaticFields
{
public:
	// System.Func`2<MoonSharp.Interpreter.SymbolRef,System.String> MoonSharp.Interpreter.Execution.VM.Instruction::<>f__am$cache0
	Func_2_t1739109373 * ___U3CU3Ef__amU24cache0_8;

public:
	inline static int32_t get_offset_of_U3CU3Ef__amU24cache0_8() { return static_cast<int32_t>(offsetof(Instruction_t3290677225_StaticFields, ___U3CU3Ef__amU24cache0_8)); }
	inline Func_2_t1739109373 * get_U3CU3Ef__amU24cache0_8() const { return ___U3CU3Ef__amU24cache0_8; }
	inline Func_2_t1739109373 ** get_address_of_U3CU3Ef__amU24cache0_8() { return &___U3CU3Ef__amU24cache0_8; }
	inline void set_U3CU3Ef__amU24cache0_8(Func_2_t1739109373 * value)
	{
		___U3CU3Ef__amU24cache0_8 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__amU24cache0_8), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INSTRUCTION_T3290677225_H
#ifndef EXECUTIONSTATE_T617798350_H
#define EXECUTIONSTATE_T617798350_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MoonSharp.Interpreter.Execution.VM.ExecutionState
struct  ExecutionState_t617798350  : public RuntimeObject
{
public:
	// MoonSharp.Interpreter.DataStructs.FastStack`1<MoonSharp.Interpreter.DynValue> MoonSharp.Interpreter.Execution.VM.ExecutionState::ValueStack
	FastStack_1_t3979991217 * ___ValueStack_0;
	// MoonSharp.Interpreter.DataStructs.FastStack`1<MoonSharp.Interpreter.Execution.VM.CallStackItem> MoonSharp.Interpreter.Execution.VM.ExecutionState::ExecutionStack
	FastStack_1_t1230810114 * ___ExecutionStack_1;
	// System.Int32 MoonSharp.Interpreter.Execution.VM.ExecutionState::InstructionPtr
	int32_t ___InstructionPtr_2;
	// MoonSharp.Interpreter.CoroutineState MoonSharp.Interpreter.Execution.VM.ExecutionState::State
	int32_t ___State_3;

public:
	inline static int32_t get_offset_of_ValueStack_0() { return static_cast<int32_t>(offsetof(ExecutionState_t617798350, ___ValueStack_0)); }
	inline FastStack_1_t3979991217 * get_ValueStack_0() const { return ___ValueStack_0; }
	inline FastStack_1_t3979991217 ** get_address_of_ValueStack_0() { return &___ValueStack_0; }
	inline void set_ValueStack_0(FastStack_1_t3979991217 * value)
	{
		___ValueStack_0 = value;
		Il2CppCodeGenWriteBarrier((&___ValueStack_0), value);
	}

	inline static int32_t get_offset_of_ExecutionStack_1() { return static_cast<int32_t>(offsetof(ExecutionState_t617798350, ___ExecutionStack_1)); }
	inline FastStack_1_t1230810114 * get_ExecutionStack_1() const { return ___ExecutionStack_1; }
	inline FastStack_1_t1230810114 ** get_address_of_ExecutionStack_1() { return &___ExecutionStack_1; }
	inline void set_ExecutionStack_1(FastStack_1_t1230810114 * value)
	{
		___ExecutionStack_1 = value;
		Il2CppCodeGenWriteBarrier((&___ExecutionStack_1), value);
	}

	inline static int32_t get_offset_of_InstructionPtr_2() { return static_cast<int32_t>(offsetof(ExecutionState_t617798350, ___InstructionPtr_2)); }
	inline int32_t get_InstructionPtr_2() const { return ___InstructionPtr_2; }
	inline int32_t* get_address_of_InstructionPtr_2() { return &___InstructionPtr_2; }
	inline void set_InstructionPtr_2(int32_t value)
	{
		___InstructionPtr_2 = value;
	}

	inline static int32_t get_offset_of_State_3() { return static_cast<int32_t>(offsetof(ExecutionState_t617798350, ___State_3)); }
	inline int32_t get_State_3() const { return ___State_3; }
	inline int32_t* get_address_of_State_3() { return &___State_3; }
	inline void set_State_3(int32_t value)
	{
		___State_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EXECUTIONSTATE_T617798350_H
#ifndef MOONSHARPUSERDATAATTRIBUTE_T2195270132_H
#define MOONSHARPUSERDATAATTRIBUTE_T2195270132_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MoonSharp.Interpreter.MoonSharpUserDataAttribute
struct  MoonSharpUserDataAttribute_t2195270132  : public Attribute_t861562559
{
public:
	// MoonSharp.Interpreter.InteropAccessMode MoonSharp.Interpreter.MoonSharpUserDataAttribute::<AccessMode>k__BackingField
	int32_t ___U3CAccessModeU3Ek__BackingField_0;

public:
	inline static int32_t get_offset_of_U3CAccessModeU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(MoonSharpUserDataAttribute_t2195270132, ___U3CAccessModeU3Ek__BackingField_0)); }
	inline int32_t get_U3CAccessModeU3Ek__BackingField_0() const { return ___U3CAccessModeU3Ek__BackingField_0; }
	inline int32_t* get_address_of_U3CAccessModeU3Ek__BackingField_0() { return &___U3CAccessModeU3Ek__BackingField_0; }
	inline void set_U3CAccessModeU3Ek__BackingField_0(int32_t value)
	{
		___U3CAccessModeU3Ek__BackingField_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MOONSHARPUSERDATAATTRIBUTE_T2195270132_H
#ifndef CALLSTACKITEM_T2093938941_H
#define CALLSTACKITEM_T2093938941_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MoonSharp.Interpreter.Execution.VM.CallStackItem
struct  CallStackItem_t2093938941  : public RuntimeObject
{
public:
	// System.Int32 MoonSharp.Interpreter.Execution.VM.CallStackItem::Debug_EntryPoint
	int32_t ___Debug_EntryPoint_0;
	// MoonSharp.Interpreter.SymbolRef[] MoonSharp.Interpreter.Execution.VM.CallStackItem::Debug_Symbols
	SymbolRefU5BU5D_t3368573799* ___Debug_Symbols_1;
	// MoonSharp.Interpreter.Debugging.SourceRef MoonSharp.Interpreter.Execution.VM.CallStackItem::CallingSourceRef
	SourceRef_t3386753787 * ___CallingSourceRef_2;
	// MoonSharp.Interpreter.CallbackFunction MoonSharp.Interpreter.Execution.VM.CallStackItem::ClrFunction
	CallbackFunction_t350661728 * ___ClrFunction_3;
	// MoonSharp.Interpreter.CallbackFunction MoonSharp.Interpreter.Execution.VM.CallStackItem::Continuation
	CallbackFunction_t350661728 * ___Continuation_4;
	// MoonSharp.Interpreter.CallbackFunction MoonSharp.Interpreter.Execution.VM.CallStackItem::ErrorHandler
	CallbackFunction_t350661728 * ___ErrorHandler_5;
	// MoonSharp.Interpreter.DynValue MoonSharp.Interpreter.Execution.VM.CallStackItem::ErrorHandlerBeforeUnwind
	DynValue_t548152748 * ___ErrorHandlerBeforeUnwind_6;
	// System.Int32 MoonSharp.Interpreter.Execution.VM.CallStackItem::BasePointer
	int32_t ___BasePointer_7;
	// System.Int32 MoonSharp.Interpreter.Execution.VM.CallStackItem::ReturnAddress
	int32_t ___ReturnAddress_8;
	// MoonSharp.Interpreter.DynValue[] MoonSharp.Interpreter.Execution.VM.CallStackItem::LocalScope
	DynValueU5BU5D_t2098401829* ___LocalScope_9;
	// MoonSharp.Interpreter.Execution.ClosureContext MoonSharp.Interpreter.Execution.VM.CallStackItem::ClosureScope
	ClosureContext_t772623181 * ___ClosureScope_10;
	// MoonSharp.Interpreter.Execution.VM.CallStackItemFlags MoonSharp.Interpreter.Execution.VM.CallStackItem::Flags
	int32_t ___Flags_11;

public:
	inline static int32_t get_offset_of_Debug_EntryPoint_0() { return static_cast<int32_t>(offsetof(CallStackItem_t2093938941, ___Debug_EntryPoint_0)); }
	inline int32_t get_Debug_EntryPoint_0() const { return ___Debug_EntryPoint_0; }
	inline int32_t* get_address_of_Debug_EntryPoint_0() { return &___Debug_EntryPoint_0; }
	inline void set_Debug_EntryPoint_0(int32_t value)
	{
		___Debug_EntryPoint_0 = value;
	}

	inline static int32_t get_offset_of_Debug_Symbols_1() { return static_cast<int32_t>(offsetof(CallStackItem_t2093938941, ___Debug_Symbols_1)); }
	inline SymbolRefU5BU5D_t3368573799* get_Debug_Symbols_1() const { return ___Debug_Symbols_1; }
	inline SymbolRefU5BU5D_t3368573799** get_address_of_Debug_Symbols_1() { return &___Debug_Symbols_1; }
	inline void set_Debug_Symbols_1(SymbolRefU5BU5D_t3368573799* value)
	{
		___Debug_Symbols_1 = value;
		Il2CppCodeGenWriteBarrier((&___Debug_Symbols_1), value);
	}

	inline static int32_t get_offset_of_CallingSourceRef_2() { return static_cast<int32_t>(offsetof(CallStackItem_t2093938941, ___CallingSourceRef_2)); }
	inline SourceRef_t3386753787 * get_CallingSourceRef_2() const { return ___CallingSourceRef_2; }
	inline SourceRef_t3386753787 ** get_address_of_CallingSourceRef_2() { return &___CallingSourceRef_2; }
	inline void set_CallingSourceRef_2(SourceRef_t3386753787 * value)
	{
		___CallingSourceRef_2 = value;
		Il2CppCodeGenWriteBarrier((&___CallingSourceRef_2), value);
	}

	inline static int32_t get_offset_of_ClrFunction_3() { return static_cast<int32_t>(offsetof(CallStackItem_t2093938941, ___ClrFunction_3)); }
	inline CallbackFunction_t350661728 * get_ClrFunction_3() const { return ___ClrFunction_3; }
	inline CallbackFunction_t350661728 ** get_address_of_ClrFunction_3() { return &___ClrFunction_3; }
	inline void set_ClrFunction_3(CallbackFunction_t350661728 * value)
	{
		___ClrFunction_3 = value;
		Il2CppCodeGenWriteBarrier((&___ClrFunction_3), value);
	}

	inline static int32_t get_offset_of_Continuation_4() { return static_cast<int32_t>(offsetof(CallStackItem_t2093938941, ___Continuation_4)); }
	inline CallbackFunction_t350661728 * get_Continuation_4() const { return ___Continuation_4; }
	inline CallbackFunction_t350661728 ** get_address_of_Continuation_4() { return &___Continuation_4; }
	inline void set_Continuation_4(CallbackFunction_t350661728 * value)
	{
		___Continuation_4 = value;
		Il2CppCodeGenWriteBarrier((&___Continuation_4), value);
	}

	inline static int32_t get_offset_of_ErrorHandler_5() { return static_cast<int32_t>(offsetof(CallStackItem_t2093938941, ___ErrorHandler_5)); }
	inline CallbackFunction_t350661728 * get_ErrorHandler_5() const { return ___ErrorHandler_5; }
	inline CallbackFunction_t350661728 ** get_address_of_ErrorHandler_5() { return &___ErrorHandler_5; }
	inline void set_ErrorHandler_5(CallbackFunction_t350661728 * value)
	{
		___ErrorHandler_5 = value;
		Il2CppCodeGenWriteBarrier((&___ErrorHandler_5), value);
	}

	inline static int32_t get_offset_of_ErrorHandlerBeforeUnwind_6() { return static_cast<int32_t>(offsetof(CallStackItem_t2093938941, ___ErrorHandlerBeforeUnwind_6)); }
	inline DynValue_t548152748 * get_ErrorHandlerBeforeUnwind_6() const { return ___ErrorHandlerBeforeUnwind_6; }
	inline DynValue_t548152748 ** get_address_of_ErrorHandlerBeforeUnwind_6() { return &___ErrorHandlerBeforeUnwind_6; }
	inline void set_ErrorHandlerBeforeUnwind_6(DynValue_t548152748 * value)
	{
		___ErrorHandlerBeforeUnwind_6 = value;
		Il2CppCodeGenWriteBarrier((&___ErrorHandlerBeforeUnwind_6), value);
	}

	inline static int32_t get_offset_of_BasePointer_7() { return static_cast<int32_t>(offsetof(CallStackItem_t2093938941, ___BasePointer_7)); }
	inline int32_t get_BasePointer_7() const { return ___BasePointer_7; }
	inline int32_t* get_address_of_BasePointer_7() { return &___BasePointer_7; }
	inline void set_BasePointer_7(int32_t value)
	{
		___BasePointer_7 = value;
	}

	inline static int32_t get_offset_of_ReturnAddress_8() { return static_cast<int32_t>(offsetof(CallStackItem_t2093938941, ___ReturnAddress_8)); }
	inline int32_t get_ReturnAddress_8() const { return ___ReturnAddress_8; }
	inline int32_t* get_address_of_ReturnAddress_8() { return &___ReturnAddress_8; }
	inline void set_ReturnAddress_8(int32_t value)
	{
		___ReturnAddress_8 = value;
	}

	inline static int32_t get_offset_of_LocalScope_9() { return static_cast<int32_t>(offsetof(CallStackItem_t2093938941, ___LocalScope_9)); }
	inline DynValueU5BU5D_t2098401829* get_LocalScope_9() const { return ___LocalScope_9; }
	inline DynValueU5BU5D_t2098401829** get_address_of_LocalScope_9() { return &___LocalScope_9; }
	inline void set_LocalScope_9(DynValueU5BU5D_t2098401829* value)
	{
		___LocalScope_9 = value;
		Il2CppCodeGenWriteBarrier((&___LocalScope_9), value);
	}

	inline static int32_t get_offset_of_ClosureScope_10() { return static_cast<int32_t>(offsetof(CallStackItem_t2093938941, ___ClosureScope_10)); }
	inline ClosureContext_t772623181 * get_ClosureScope_10() const { return ___ClosureScope_10; }
	inline ClosureContext_t772623181 ** get_address_of_ClosureScope_10() { return &___ClosureScope_10; }
	inline void set_ClosureScope_10(ClosureContext_t772623181 * value)
	{
		___ClosureScope_10 = value;
		Il2CppCodeGenWriteBarrier((&___ClosureScope_10), value);
	}

	inline static int32_t get_offset_of_Flags_11() { return static_cast<int32_t>(offsetof(CallStackItem_t2093938941, ___Flags_11)); }
	inline int32_t get_Flags_11() const { return ___Flags_11; }
	inline int32_t* get_address_of_Flags_11() { return &___Flags_11; }
	inline void set_Flags_11(int32_t value)
	{
		___Flags_11 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CALLSTACKITEM_T2093938941_H
#ifndef SYMBOLREF_T2926262290_H
#define SYMBOLREF_T2926262290_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MoonSharp.Interpreter.SymbolRef
struct  SymbolRef_t2926262290  : public RuntimeObject
{
public:
	// MoonSharp.Interpreter.SymbolRefType MoonSharp.Interpreter.SymbolRef::i_Type
	int32_t ___i_Type_1;
	// MoonSharp.Interpreter.SymbolRef MoonSharp.Interpreter.SymbolRef::i_Env
	SymbolRef_t2926262290 * ___i_Env_2;
	// System.Int32 MoonSharp.Interpreter.SymbolRef::i_Index
	int32_t ___i_Index_3;
	// System.String MoonSharp.Interpreter.SymbolRef::i_Name
	String_t* ___i_Name_4;

public:
	inline static int32_t get_offset_of_i_Type_1() { return static_cast<int32_t>(offsetof(SymbolRef_t2926262290, ___i_Type_1)); }
	inline int32_t get_i_Type_1() const { return ___i_Type_1; }
	inline int32_t* get_address_of_i_Type_1() { return &___i_Type_1; }
	inline void set_i_Type_1(int32_t value)
	{
		___i_Type_1 = value;
	}

	inline static int32_t get_offset_of_i_Env_2() { return static_cast<int32_t>(offsetof(SymbolRef_t2926262290, ___i_Env_2)); }
	inline SymbolRef_t2926262290 * get_i_Env_2() const { return ___i_Env_2; }
	inline SymbolRef_t2926262290 ** get_address_of_i_Env_2() { return &___i_Env_2; }
	inline void set_i_Env_2(SymbolRef_t2926262290 * value)
	{
		___i_Env_2 = value;
		Il2CppCodeGenWriteBarrier((&___i_Env_2), value);
	}

	inline static int32_t get_offset_of_i_Index_3() { return static_cast<int32_t>(offsetof(SymbolRef_t2926262290, ___i_Index_3)); }
	inline int32_t get_i_Index_3() const { return ___i_Index_3; }
	inline int32_t* get_address_of_i_Index_3() { return &___i_Index_3; }
	inline void set_i_Index_3(int32_t value)
	{
		___i_Index_3 = value;
	}

	inline static int32_t get_offset_of_i_Name_4() { return static_cast<int32_t>(offsetof(SymbolRef_t2926262290, ___i_Name_4)); }
	inline String_t* get_i_Name_4() const { return ___i_Name_4; }
	inline String_t** get_address_of_i_Name_4() { return &___i_Name_4; }
	inline void set_i_Name_4(String_t* value)
	{
		___i_Name_4 = value;
		Il2CppCodeGenWriteBarrier((&___i_Name_4), value);
	}
};

struct SymbolRef_t2926262290_StaticFields
{
public:
	// MoonSharp.Interpreter.SymbolRef MoonSharp.Interpreter.SymbolRef::s_DefaultEnv
	SymbolRef_t2926262290 * ___s_DefaultEnv_0;

public:
	inline static int32_t get_offset_of_s_DefaultEnv_0() { return static_cast<int32_t>(offsetof(SymbolRef_t2926262290_StaticFields, ___s_DefaultEnv_0)); }
	inline SymbolRef_t2926262290 * get_s_DefaultEnv_0() const { return ___s_DefaultEnv_0; }
	inline SymbolRef_t2926262290 ** get_address_of_s_DefaultEnv_0() { return &___s_DefaultEnv_0; }
	inline void set_s_DefaultEnv_0(SymbolRef_t2926262290 * value)
	{
		___s_DefaultEnv_0 = value;
		Il2CppCodeGenWriteBarrier((&___s_DefaultEnv_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SYMBOLREF_T2926262290_H
#ifndef DYNVALUE_T548152748_H
#define DYNVALUE_T548152748_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MoonSharp.Interpreter.DynValue
struct  DynValue_t548152748  : public RuntimeObject
{
public:
	// System.Int32 MoonSharp.Interpreter.DynValue::m_RefID
	int32_t ___m_RefID_1;
	// System.Int32 MoonSharp.Interpreter.DynValue::m_HashCode
	int32_t ___m_HashCode_2;
	// System.Boolean MoonSharp.Interpreter.DynValue::m_ReadOnly
	bool ___m_ReadOnly_3;
	// System.Double MoonSharp.Interpreter.DynValue::m_Number
	double ___m_Number_4;
	// System.Object MoonSharp.Interpreter.DynValue::m_Object
	RuntimeObject * ___m_Object_5;
	// MoonSharp.Interpreter.DataType MoonSharp.Interpreter.DynValue::m_Type
	int32_t ___m_Type_6;

public:
	inline static int32_t get_offset_of_m_RefID_1() { return static_cast<int32_t>(offsetof(DynValue_t548152748, ___m_RefID_1)); }
	inline int32_t get_m_RefID_1() const { return ___m_RefID_1; }
	inline int32_t* get_address_of_m_RefID_1() { return &___m_RefID_1; }
	inline void set_m_RefID_1(int32_t value)
	{
		___m_RefID_1 = value;
	}

	inline static int32_t get_offset_of_m_HashCode_2() { return static_cast<int32_t>(offsetof(DynValue_t548152748, ___m_HashCode_2)); }
	inline int32_t get_m_HashCode_2() const { return ___m_HashCode_2; }
	inline int32_t* get_address_of_m_HashCode_2() { return &___m_HashCode_2; }
	inline void set_m_HashCode_2(int32_t value)
	{
		___m_HashCode_2 = value;
	}

	inline static int32_t get_offset_of_m_ReadOnly_3() { return static_cast<int32_t>(offsetof(DynValue_t548152748, ___m_ReadOnly_3)); }
	inline bool get_m_ReadOnly_3() const { return ___m_ReadOnly_3; }
	inline bool* get_address_of_m_ReadOnly_3() { return &___m_ReadOnly_3; }
	inline void set_m_ReadOnly_3(bool value)
	{
		___m_ReadOnly_3 = value;
	}

	inline static int32_t get_offset_of_m_Number_4() { return static_cast<int32_t>(offsetof(DynValue_t548152748, ___m_Number_4)); }
	inline double get_m_Number_4() const { return ___m_Number_4; }
	inline double* get_address_of_m_Number_4() { return &___m_Number_4; }
	inline void set_m_Number_4(double value)
	{
		___m_Number_4 = value;
	}

	inline static int32_t get_offset_of_m_Object_5() { return static_cast<int32_t>(offsetof(DynValue_t548152748, ___m_Object_5)); }
	inline RuntimeObject * get_m_Object_5() const { return ___m_Object_5; }
	inline RuntimeObject ** get_address_of_m_Object_5() { return &___m_Object_5; }
	inline void set_m_Object_5(RuntimeObject * value)
	{
		___m_Object_5 = value;
		Il2CppCodeGenWriteBarrier((&___m_Object_5), value);
	}

	inline static int32_t get_offset_of_m_Type_6() { return static_cast<int32_t>(offsetof(DynValue_t548152748, ___m_Type_6)); }
	inline int32_t get_m_Type_6() const { return ___m_Type_6; }
	inline int32_t* get_address_of_m_Type_6() { return &___m_Type_6; }
	inline void set_m_Type_6(int32_t value)
	{
		___m_Type_6 = value;
	}
};

struct DynValue_t548152748_StaticFields
{
public:
	// System.Int32 MoonSharp.Interpreter.DynValue::s_RefIDCounter
	int32_t ___s_RefIDCounter_0;
	// MoonSharp.Interpreter.DynValue MoonSharp.Interpreter.DynValue::<Void>k__BackingField
	DynValue_t548152748 * ___U3CVoidU3Ek__BackingField_7;
	// MoonSharp.Interpreter.DynValue MoonSharp.Interpreter.DynValue::<Nil>k__BackingField
	DynValue_t548152748 * ___U3CNilU3Ek__BackingField_8;
	// MoonSharp.Interpreter.DynValue MoonSharp.Interpreter.DynValue::<True>k__BackingField
	DynValue_t548152748 * ___U3CTrueU3Ek__BackingField_9;
	// MoonSharp.Interpreter.DynValue MoonSharp.Interpreter.DynValue::<False>k__BackingField
	DynValue_t548152748 * ___U3CFalseU3Ek__BackingField_10;
	// System.Func`2<MoonSharp.Interpreter.DynValue,System.Boolean> MoonSharp.Interpreter.DynValue::<>f__am$cache0
	Func_2_t3013741975 * ___U3CU3Ef__amU24cache0_11;
	// System.Func`2<MoonSharp.Interpreter.DynValue,System.String> MoonSharp.Interpreter.DynValue::<>f__am$cache1
	Func_2_t468937403 * ___U3CU3Ef__amU24cache1_12;
	// System.Func`2<MoonSharp.Interpreter.DynValue,System.String> MoonSharp.Interpreter.DynValue::<>f__am$cache2
	Func_2_t468937403 * ___U3CU3Ef__amU24cache2_13;
	// System.Func`2<MoonSharp.Interpreter.DynValue,System.String> MoonSharp.Interpreter.DynValue::<>f__am$cache3
	Func_2_t468937403 * ___U3CU3Ef__amU24cache3_14;
	// System.Func`2<MoonSharp.Interpreter.DynValue,System.String> MoonSharp.Interpreter.DynValue::<>f__am$cache4
	Func_2_t468937403 * ___U3CU3Ef__amU24cache4_15;

public:
	inline static int32_t get_offset_of_s_RefIDCounter_0() { return static_cast<int32_t>(offsetof(DynValue_t548152748_StaticFields, ___s_RefIDCounter_0)); }
	inline int32_t get_s_RefIDCounter_0() const { return ___s_RefIDCounter_0; }
	inline int32_t* get_address_of_s_RefIDCounter_0() { return &___s_RefIDCounter_0; }
	inline void set_s_RefIDCounter_0(int32_t value)
	{
		___s_RefIDCounter_0 = value;
	}

	inline static int32_t get_offset_of_U3CVoidU3Ek__BackingField_7() { return static_cast<int32_t>(offsetof(DynValue_t548152748_StaticFields, ___U3CVoidU3Ek__BackingField_7)); }
	inline DynValue_t548152748 * get_U3CVoidU3Ek__BackingField_7() const { return ___U3CVoidU3Ek__BackingField_7; }
	inline DynValue_t548152748 ** get_address_of_U3CVoidU3Ek__BackingField_7() { return &___U3CVoidU3Ek__BackingField_7; }
	inline void set_U3CVoidU3Ek__BackingField_7(DynValue_t548152748 * value)
	{
		___U3CVoidU3Ek__BackingField_7 = value;
		Il2CppCodeGenWriteBarrier((&___U3CVoidU3Ek__BackingField_7), value);
	}

	inline static int32_t get_offset_of_U3CNilU3Ek__BackingField_8() { return static_cast<int32_t>(offsetof(DynValue_t548152748_StaticFields, ___U3CNilU3Ek__BackingField_8)); }
	inline DynValue_t548152748 * get_U3CNilU3Ek__BackingField_8() const { return ___U3CNilU3Ek__BackingField_8; }
	inline DynValue_t548152748 ** get_address_of_U3CNilU3Ek__BackingField_8() { return &___U3CNilU3Ek__BackingField_8; }
	inline void set_U3CNilU3Ek__BackingField_8(DynValue_t548152748 * value)
	{
		___U3CNilU3Ek__BackingField_8 = value;
		Il2CppCodeGenWriteBarrier((&___U3CNilU3Ek__BackingField_8), value);
	}

	inline static int32_t get_offset_of_U3CTrueU3Ek__BackingField_9() { return static_cast<int32_t>(offsetof(DynValue_t548152748_StaticFields, ___U3CTrueU3Ek__BackingField_9)); }
	inline DynValue_t548152748 * get_U3CTrueU3Ek__BackingField_9() const { return ___U3CTrueU3Ek__BackingField_9; }
	inline DynValue_t548152748 ** get_address_of_U3CTrueU3Ek__BackingField_9() { return &___U3CTrueU3Ek__BackingField_9; }
	inline void set_U3CTrueU3Ek__BackingField_9(DynValue_t548152748 * value)
	{
		___U3CTrueU3Ek__BackingField_9 = value;
		Il2CppCodeGenWriteBarrier((&___U3CTrueU3Ek__BackingField_9), value);
	}

	inline static int32_t get_offset_of_U3CFalseU3Ek__BackingField_10() { return static_cast<int32_t>(offsetof(DynValue_t548152748_StaticFields, ___U3CFalseU3Ek__BackingField_10)); }
	inline DynValue_t548152748 * get_U3CFalseU3Ek__BackingField_10() const { return ___U3CFalseU3Ek__BackingField_10; }
	inline DynValue_t548152748 ** get_address_of_U3CFalseU3Ek__BackingField_10() { return &___U3CFalseU3Ek__BackingField_10; }
	inline void set_U3CFalseU3Ek__BackingField_10(DynValue_t548152748 * value)
	{
		___U3CFalseU3Ek__BackingField_10 = value;
		Il2CppCodeGenWriteBarrier((&___U3CFalseU3Ek__BackingField_10), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache0_11() { return static_cast<int32_t>(offsetof(DynValue_t548152748_StaticFields, ___U3CU3Ef__amU24cache0_11)); }
	inline Func_2_t3013741975 * get_U3CU3Ef__amU24cache0_11() const { return ___U3CU3Ef__amU24cache0_11; }
	inline Func_2_t3013741975 ** get_address_of_U3CU3Ef__amU24cache0_11() { return &___U3CU3Ef__amU24cache0_11; }
	inline void set_U3CU3Ef__amU24cache0_11(Func_2_t3013741975 * value)
	{
		___U3CU3Ef__amU24cache0_11 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__amU24cache0_11), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache1_12() { return static_cast<int32_t>(offsetof(DynValue_t548152748_StaticFields, ___U3CU3Ef__amU24cache1_12)); }
	inline Func_2_t468937403 * get_U3CU3Ef__amU24cache1_12() const { return ___U3CU3Ef__amU24cache1_12; }
	inline Func_2_t468937403 ** get_address_of_U3CU3Ef__amU24cache1_12() { return &___U3CU3Ef__amU24cache1_12; }
	inline void set_U3CU3Ef__amU24cache1_12(Func_2_t468937403 * value)
	{
		___U3CU3Ef__amU24cache1_12 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__amU24cache1_12), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache2_13() { return static_cast<int32_t>(offsetof(DynValue_t548152748_StaticFields, ___U3CU3Ef__amU24cache2_13)); }
	inline Func_2_t468937403 * get_U3CU3Ef__amU24cache2_13() const { return ___U3CU3Ef__amU24cache2_13; }
	inline Func_2_t468937403 ** get_address_of_U3CU3Ef__amU24cache2_13() { return &___U3CU3Ef__amU24cache2_13; }
	inline void set_U3CU3Ef__amU24cache2_13(Func_2_t468937403 * value)
	{
		___U3CU3Ef__amU24cache2_13 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__amU24cache2_13), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache3_14() { return static_cast<int32_t>(offsetof(DynValue_t548152748_StaticFields, ___U3CU3Ef__amU24cache3_14)); }
	inline Func_2_t468937403 * get_U3CU3Ef__amU24cache3_14() const { return ___U3CU3Ef__amU24cache3_14; }
	inline Func_2_t468937403 ** get_address_of_U3CU3Ef__amU24cache3_14() { return &___U3CU3Ef__amU24cache3_14; }
	inline void set_U3CU3Ef__amU24cache3_14(Func_2_t468937403 * value)
	{
		___U3CU3Ef__amU24cache3_14 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__amU24cache3_14), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache4_15() { return static_cast<int32_t>(offsetof(DynValue_t548152748_StaticFields, ___U3CU3Ef__amU24cache4_15)); }
	inline Func_2_t468937403 * get_U3CU3Ef__amU24cache4_15() const { return ___U3CU3Ef__amU24cache4_15; }
	inline Func_2_t468937403 ** get_address_of_U3CU3Ef__amU24cache4_15() { return &___U3CU3Ef__amU24cache4_15; }
	inline void set_U3CU3Ef__amU24cache4_15(Func_2_t468937403 * value)
	{
		___U3CU3Ef__amU24cache4_15 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__amU24cache4_15), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DYNVALUE_T548152748_H
#ifndef LUATYPEEXTENSIONS_T2205654927_H
#define LUATYPEEXTENSIONS_T2205654927_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MoonSharp.Interpreter.LuaTypeExtensions
struct  LuaTypeExtensions_t2205654927  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LUATYPEEXTENSIONS_T2205654927_H
#ifndef GLOBALPERFORMANCESTOPWATCH_T2074566713_H
#define GLOBALPERFORMANCESTOPWATCH_T2074566713_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MoonSharp.Interpreter.Diagnostics.PerformanceCounters.GlobalPerformanceStopwatch
struct  GlobalPerformanceStopwatch_t2074566713  : public RuntimeObject
{
public:
	// System.Int32 MoonSharp.Interpreter.Diagnostics.PerformanceCounters.GlobalPerformanceStopwatch::m_Count
	int32_t ___m_Count_0;
	// System.Int64 MoonSharp.Interpreter.Diagnostics.PerformanceCounters.GlobalPerformanceStopwatch::m_Elapsed
	int64_t ___m_Elapsed_1;
	// MoonSharp.Interpreter.Diagnostics.PerformanceCounter MoonSharp.Interpreter.Diagnostics.PerformanceCounters.GlobalPerformanceStopwatch::m_Counter
	int32_t ___m_Counter_2;

public:
	inline static int32_t get_offset_of_m_Count_0() { return static_cast<int32_t>(offsetof(GlobalPerformanceStopwatch_t2074566713, ___m_Count_0)); }
	inline int32_t get_m_Count_0() const { return ___m_Count_0; }
	inline int32_t* get_address_of_m_Count_0() { return &___m_Count_0; }
	inline void set_m_Count_0(int32_t value)
	{
		___m_Count_0 = value;
	}

	inline static int32_t get_offset_of_m_Elapsed_1() { return static_cast<int32_t>(offsetof(GlobalPerformanceStopwatch_t2074566713, ___m_Elapsed_1)); }
	inline int64_t get_m_Elapsed_1() const { return ___m_Elapsed_1; }
	inline int64_t* get_address_of_m_Elapsed_1() { return &___m_Elapsed_1; }
	inline void set_m_Elapsed_1(int64_t value)
	{
		___m_Elapsed_1 = value;
	}

	inline static int32_t get_offset_of_m_Counter_2() { return static_cast<int32_t>(offsetof(GlobalPerformanceStopwatch_t2074566713, ___m_Counter_2)); }
	inline int32_t get_m_Counter_2() const { return ___m_Counter_2; }
	inline int32_t* get_address_of_m_Counter_2() { return &___m_Counter_2; }
	inline void set_m_Counter_2(int32_t value)
	{
		___m_Counter_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GLOBALPERFORMANCESTOPWATCH_T2074566713_H
#ifndef SCRIPTFUNCTIONDELEGATE_T2178596474_H
#define SCRIPTFUNCTIONDELEGATE_T2178596474_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MoonSharp.Interpreter.ScriptFunctionDelegate
struct  ScriptFunctionDelegate_t2178596474  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SCRIPTFUNCTIONDELEGATE_T2178596474_H
#ifndef DEBUGGERACTION_T3408717151_H
#define DEBUGGERACTION_T3408717151_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MoonSharp.Interpreter.Debugging.DebuggerAction
struct  DebuggerAction_t3408717151  : public RuntimeObject
{
public:
	// MoonSharp.Interpreter.Debugging.DebuggerAction/ActionType MoonSharp.Interpreter.Debugging.DebuggerAction::<Action>k__BackingField
	int32_t ___U3CActionU3Ek__BackingField_0;
	// System.DateTime MoonSharp.Interpreter.Debugging.DebuggerAction::<TimeStampUTC>k__BackingField
	DateTime_t3738529785  ___U3CTimeStampUTCU3Ek__BackingField_1;
	// System.Int32 MoonSharp.Interpreter.Debugging.DebuggerAction::<SourceID>k__BackingField
	int32_t ___U3CSourceIDU3Ek__BackingField_2;
	// System.Int32 MoonSharp.Interpreter.Debugging.DebuggerAction::<SourceLine>k__BackingField
	int32_t ___U3CSourceLineU3Ek__BackingField_3;
	// System.Int32 MoonSharp.Interpreter.Debugging.DebuggerAction::<SourceCol>k__BackingField
	int32_t ___U3CSourceColU3Ek__BackingField_4;
	// System.Int32[] MoonSharp.Interpreter.Debugging.DebuggerAction::<Lines>k__BackingField
	Int32U5BU5D_t385246372* ___U3CLinesU3Ek__BackingField_5;

public:
	inline static int32_t get_offset_of_U3CActionU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(DebuggerAction_t3408717151, ___U3CActionU3Ek__BackingField_0)); }
	inline int32_t get_U3CActionU3Ek__BackingField_0() const { return ___U3CActionU3Ek__BackingField_0; }
	inline int32_t* get_address_of_U3CActionU3Ek__BackingField_0() { return &___U3CActionU3Ek__BackingField_0; }
	inline void set_U3CActionU3Ek__BackingField_0(int32_t value)
	{
		___U3CActionU3Ek__BackingField_0 = value;
	}

	inline static int32_t get_offset_of_U3CTimeStampUTCU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(DebuggerAction_t3408717151, ___U3CTimeStampUTCU3Ek__BackingField_1)); }
	inline DateTime_t3738529785  get_U3CTimeStampUTCU3Ek__BackingField_1() const { return ___U3CTimeStampUTCU3Ek__BackingField_1; }
	inline DateTime_t3738529785 * get_address_of_U3CTimeStampUTCU3Ek__BackingField_1() { return &___U3CTimeStampUTCU3Ek__BackingField_1; }
	inline void set_U3CTimeStampUTCU3Ek__BackingField_1(DateTime_t3738529785  value)
	{
		___U3CTimeStampUTCU3Ek__BackingField_1 = value;
	}

	inline static int32_t get_offset_of_U3CSourceIDU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(DebuggerAction_t3408717151, ___U3CSourceIDU3Ek__BackingField_2)); }
	inline int32_t get_U3CSourceIDU3Ek__BackingField_2() const { return ___U3CSourceIDU3Ek__BackingField_2; }
	inline int32_t* get_address_of_U3CSourceIDU3Ek__BackingField_2() { return &___U3CSourceIDU3Ek__BackingField_2; }
	inline void set_U3CSourceIDU3Ek__BackingField_2(int32_t value)
	{
		___U3CSourceIDU3Ek__BackingField_2 = value;
	}

	inline static int32_t get_offset_of_U3CSourceLineU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(DebuggerAction_t3408717151, ___U3CSourceLineU3Ek__BackingField_3)); }
	inline int32_t get_U3CSourceLineU3Ek__BackingField_3() const { return ___U3CSourceLineU3Ek__BackingField_3; }
	inline int32_t* get_address_of_U3CSourceLineU3Ek__BackingField_3() { return &___U3CSourceLineU3Ek__BackingField_3; }
	inline void set_U3CSourceLineU3Ek__BackingField_3(int32_t value)
	{
		___U3CSourceLineU3Ek__BackingField_3 = value;
	}

	inline static int32_t get_offset_of_U3CSourceColU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(DebuggerAction_t3408717151, ___U3CSourceColU3Ek__BackingField_4)); }
	inline int32_t get_U3CSourceColU3Ek__BackingField_4() const { return ___U3CSourceColU3Ek__BackingField_4; }
	inline int32_t* get_address_of_U3CSourceColU3Ek__BackingField_4() { return &___U3CSourceColU3Ek__BackingField_4; }
	inline void set_U3CSourceColU3Ek__BackingField_4(int32_t value)
	{
		___U3CSourceColU3Ek__BackingField_4 = value;
	}

	inline static int32_t get_offset_of_U3CLinesU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(DebuggerAction_t3408717151, ___U3CLinesU3Ek__BackingField_5)); }
	inline Int32U5BU5D_t385246372* get_U3CLinesU3Ek__BackingField_5() const { return ___U3CLinesU3Ek__BackingField_5; }
	inline Int32U5BU5D_t385246372** get_address_of_U3CLinesU3Ek__BackingField_5() { return &___U3CLinesU3Ek__BackingField_5; }
	inline void set_U3CLinesU3Ek__BackingField_5(Int32U5BU5D_t385246372* value)
	{
		___U3CLinesU3Ek__BackingField_5 = value;
		Il2CppCodeGenWriteBarrier((&___U3CLinesU3Ek__BackingField_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DEBUGGERACTION_T3408717151_H





#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2500 = { sizeof (Extension_Methods_t2367104102), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2501 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable2501[2] = 
{
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2502 = { 0, 0, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2503 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable2503[2] = 
{
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2504 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable2504[2] = 
{
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2505 = { sizeof (ReferenceEqualityComparer_t3730594676), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2506 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable2506[4] = 
{
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2507 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable2507[5] = 
{
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2508 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable2508[5] = 
{
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2509 = { sizeof (CallbackArguments_t758669439), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2509[4] = 
{
	CallbackArguments_t758669439::get_offset_of_m_Args_0(),
	CallbackArguments_t758669439::get_offset_of_m_Count_1(),
	CallbackArguments_t758669439::get_offset_of_m_LastIsTuple_2(),
	CallbackArguments_t758669439::get_offset_of_U3CIsMethodCallU3Ek__BackingField_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2510 = { sizeof (CallbackFunction_t350661728), -1, sizeof(CallbackFunction_t350661728_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2510[4] = 
{
	CallbackFunction_t350661728_StaticFields::get_offset_of_m_DefaultAccessMode_2(),
	CallbackFunction_t350661728::get_offset_of_U3CNameU3Ek__BackingField_3(),
	CallbackFunction_t350661728::get_offset_of_U3CClrCallbackU3Ek__BackingField_4(),
	CallbackFunction_t350661728::get_offset_of_U3CAdditionalDataU3Ek__BackingField_5(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2511 = { sizeof (Closure_t2323531620), -1, sizeof(Closure_t2323531620_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2511[4] = 
{
	Closure_t2323531620::get_offset_of_U3CEntryPointByteCodeLocationU3Ek__BackingField_2(),
	Closure_t2323531620::get_offset_of_U3COwnerScriptU3Ek__BackingField_3(),
	Closure_t2323531620_StaticFields::get_offset_of_emptyClosure_4(),
	Closure_t2323531620::get_offset_of_U3CClosureContextU3Ek__BackingField_5(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2512 = { sizeof (UpvaluesType_t970504965)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable2512[4] = 
{
	UpvaluesType_t970504965::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2513 = { sizeof (Coroutine_t2598270305), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2513[4] = 
{
	Coroutine_t2598270305::get_offset_of_U3CTypeU3Ek__BackingField_2(),
	Coroutine_t2598270305::get_offset_of_m_ClrCallback_3(),
	Coroutine_t2598270305::get_offset_of_m_Processor_4(),
	Coroutine_t2598270305::get_offset_of_U3COwnerScriptU3Ek__BackingField_5(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2514 = { sizeof (CoroutineType_t1889443180)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable2514[4] = 
{
	CoroutineType_t1889443180::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2515 = { sizeof (U3CAsTypedEnumerableU3Ec__Iterator0_t3883737723), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2515[4] = 
{
	U3CAsTypedEnumerableU3Ec__Iterator0_t3883737723::get_offset_of_U24this_0(),
	U3CAsTypedEnumerableU3Ec__Iterator0_t3883737723::get_offset_of_U24current_1(),
	U3CAsTypedEnumerableU3Ec__Iterator0_t3883737723::get_offset_of_U24disposing_2(),
	U3CAsTypedEnumerableU3Ec__Iterator0_t3883737723::get_offset_of_U24PC_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2516 = { sizeof (U3CAsEnumerableU3Ec__Iterator1_t413804840), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2516[6] = 
{
	U3CAsEnumerableU3Ec__Iterator1_t413804840::get_offset_of_U24locvar0_0(),
	U3CAsEnumerableU3Ec__Iterator1_t413804840::get_offset_of_U3CvU3E__1_1(),
	U3CAsEnumerableU3Ec__Iterator1_t413804840::get_offset_of_U24this_2(),
	U3CAsEnumerableU3Ec__Iterator1_t413804840::get_offset_of_U24current_3(),
	U3CAsEnumerableU3Ec__Iterator1_t413804840::get_offset_of_U24disposing_4(),
	U3CAsEnumerableU3Ec__Iterator1_t413804840::get_offset_of_U24PC_5(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2517 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable2517[6] = 
{
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2518 = { sizeof (U3CAsUnityCoroutineU3Ec__Iterator3_t156915770), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2518[6] = 
{
	U3CAsUnityCoroutineU3Ec__Iterator3_t156915770::get_offset_of_U24locvar0_0(),
	U3CAsUnityCoroutineU3Ec__Iterator3_t156915770::get_offset_of_U3CvU3E__1_1(),
	U3CAsUnityCoroutineU3Ec__Iterator3_t156915770::get_offset_of_U24this_2(),
	U3CAsUnityCoroutineU3Ec__Iterator3_t156915770::get_offset_of_U24current_3(),
	U3CAsUnityCoroutineU3Ec__Iterator3_t156915770::get_offset_of_U24disposing_4(),
	U3CAsUnityCoroutineU3Ec__Iterator3_t156915770::get_offset_of_U24PC_5(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2519 = { sizeof (CoroutineState_t1502853016)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable2519[7] = 
{
	CoroutineState_t1502853016::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2520 = { sizeof (DataType_t638853460)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable2520[14] = 
{
	DataType_t638853460::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
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
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2521 = { sizeof (LuaTypeExtensions_t2205654927), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2521[2] = 
{
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2522 = { sizeof (DynValue_t548152748), -1, sizeof(DynValue_t548152748_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2522[16] = 
{
	DynValue_t548152748_StaticFields::get_offset_of_s_RefIDCounter_0(),
	DynValue_t548152748::get_offset_of_m_RefID_1(),
	DynValue_t548152748::get_offset_of_m_HashCode_2(),
	DynValue_t548152748::get_offset_of_m_ReadOnly_3(),
	DynValue_t548152748::get_offset_of_m_Number_4(),
	DynValue_t548152748::get_offset_of_m_Object_5(),
	DynValue_t548152748::get_offset_of_m_Type_6(),
	DynValue_t548152748_StaticFields::get_offset_of_U3CVoidU3Ek__BackingField_7(),
	DynValue_t548152748_StaticFields::get_offset_of_U3CNilU3Ek__BackingField_8(),
	DynValue_t548152748_StaticFields::get_offset_of_U3CTrueU3Ek__BackingField_9(),
	DynValue_t548152748_StaticFields::get_offset_of_U3CFalseU3Ek__BackingField_10(),
	DynValue_t548152748_StaticFields::get_offset_of_U3CU3Ef__amU24cache0_11(),
	DynValue_t548152748_StaticFields::get_offset_of_U3CU3Ef__amU24cache1_12(),
	DynValue_t548152748_StaticFields::get_offset_of_U3CU3Ef__amU24cache2_13(),
	DynValue_t548152748_StaticFields::get_offset_of_U3CU3Ef__amU24cache3_14(),
	DynValue_t548152748_StaticFields::get_offset_of_U3CU3Ef__amU24cache4_15(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2523 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2524 = { sizeof (ScriptPrivateResource_Extension_t1646673236), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2525 = { sizeof (RefIdObject_t1123467269), -1, sizeof(RefIdObject_t1123467269_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2525[2] = 
{
	RefIdObject_t1123467269_StaticFields::get_offset_of_s_RefIDCounter_0(),
	RefIdObject_t1123467269::get_offset_of_m_RefID_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2526 = { sizeof (ScriptFunctionDelegate_t2178596474), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2527 = { 0, 0, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2528 = { sizeof (SymbolRef_t2926262290), -1, sizeof(SymbolRef_t2926262290_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2528[5] = 
{
	SymbolRef_t2926262290_StaticFields::get_offset_of_s_DefaultEnv_0(),
	SymbolRef_t2926262290::get_offset_of_i_Type_1(),
	SymbolRef_t2926262290::get_offset_of_i_Env_2(),
	SymbolRef_t2926262290::get_offset_of_i_Index_3(),
	SymbolRef_t2926262290::get_offset_of_i_Name_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2529 = { sizeof (SymbolRefType_t1687795071)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable2529[5] = 
{
	SymbolRefType_t1687795071::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2530 = { sizeof (Table_t1500596475), -1, sizeof(Table_t1500596475_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2530[12] = 
{
	Table_t1500596475::get_offset_of_m_Values_2(),
	Table_t1500596475::get_offset_of_m_ValueMap_3(),
	Table_t1500596475::get_offset_of_m_StringMap_4(),
	Table_t1500596475::get_offset_of_m_ArrayMap_5(),
	Table_t1500596475::get_offset_of_m_Owner_6(),
	Table_t1500596475::get_offset_of_m_InitArray_7(),
	Table_t1500596475::get_offset_of_m_CachedLength_8(),
	Table_t1500596475::get_offset_of_m_ContainsNilEntries_9(),
	Table_t1500596475::get_offset_of_m_MetaTable_10(),
	Table_t1500596475_StaticFields::get_offset_of_U3CU3Ef__amU24cache0_11(),
	Table_t1500596475_StaticFields::get_offset_of_U3CU3Ef__amU24cache1_12(),
	Table_t1500596475_StaticFields::get_offset_of_U3CU3Ef__amU24cache2_13(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2531 = { sizeof (TablePair_t1458565711)+ sizeof (RuntimeObject), -1, sizeof(TablePair_t1458565711_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2531[3] = 
{
	TablePair_t1458565711_StaticFields::get_offset_of_s_NilNode_0(),
	TablePair_t1458565711::get_offset_of_key_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	TablePair_t1458565711::get_offset_of_value_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2532 = { sizeof (TailCallData_t733779567), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2532[5] = 
{
	TailCallData_t733779567::get_offset_of_U3CFunctionU3Ek__BackingField_0(),
	TailCallData_t733779567::get_offset_of_U3CArgsU3Ek__BackingField_1(),
	TailCallData_t733779567::get_offset_of_U3CContinuationU3Ek__BackingField_2(),
	TailCallData_t733779567::get_offset_of_U3CErrorHandlerU3Ek__BackingField_3(),
	TailCallData_t733779567::get_offset_of_U3CErrorHandlerBeforeUnwindU3Ek__BackingField_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2533 = { sizeof (TypeValidationFlags_t3849279478)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable2533[5] = 
{
	TypeValidationFlags_t3849279478::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2534 = { sizeof (UserData_t2270692526), -1, sizeof(UserData_t2270692526_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2534[4] = 
{
	UserData_t2270692526::get_offset_of_U3CUserValueU3Ek__BackingField_2(),
	UserData_t2270692526::get_offset_of_U3CObjectU3Ek__BackingField_3(),
	UserData_t2270692526::get_offset_of_U3CDescriptorU3Ek__BackingField_4(),
	UserData_t2270692526_StaticFields::get_offset_of_U3CU3Ef__amU24cache0_5(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2535 = { sizeof (WellKnownSymbols_t3251118689), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2535[2] = 
{
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2536 = { sizeof (YieldRequest_t604574644), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2536[2] = 
{
	YieldRequest_t604574644::get_offset_of_ReturnValues_0(),
	YieldRequest_t604574644::get_offset_of_U3CForcedU3Ek__BackingField_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2537 = { sizeof (DebuggerAction_t3408717151), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2537[6] = 
{
	DebuggerAction_t3408717151::get_offset_of_U3CActionU3Ek__BackingField_0(),
	DebuggerAction_t3408717151::get_offset_of_U3CTimeStampUTCU3Ek__BackingField_1(),
	DebuggerAction_t3408717151::get_offset_of_U3CSourceIDU3Ek__BackingField_2(),
	DebuggerAction_t3408717151::get_offset_of_U3CSourceLineU3Ek__BackingField_3(),
	DebuggerAction_t3408717151::get_offset_of_U3CSourceColU3Ek__BackingField_4(),
	DebuggerAction_t3408717151::get_offset_of_U3CLinesU3Ek__BackingField_5(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2538 = { sizeof (ActionType_t3783648257)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable2538[15] = 
{
	ActionType_t3783648257::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
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
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2539 = { sizeof (DebuggerCaps_t3161035045)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable2539[4] = 
{
	DebuggerCaps_t3161035045::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2540 = { sizeof (DebugService_t1299096851), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2540[2] = 
{
	DebugService_t1299096851::get_offset_of_m_Processor_0(),
	DebugService_t1299096851::get_offset_of_U3COwnerScriptU3Ek__BackingField_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2541 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2542 = { sizeof (SourceCode_t1392738632), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2542[6] = 
{
	SourceCode_t1392738632::get_offset_of_U3CNameU3Ek__BackingField_0(),
	SourceCode_t1392738632::get_offset_of_U3CCodeU3Ek__BackingField_1(),
	SourceCode_t1392738632::get_offset_of_U3CLinesU3Ek__BackingField_2(),
	SourceCode_t1392738632::get_offset_of_U3COwnerScriptU3Ek__BackingField_3(),
	SourceCode_t1392738632::get_offset_of_U3CSourceIDU3Ek__BackingField_4(),
	SourceCode_t1392738632::get_offset_of_U3CRefsU3Ek__BackingField_5(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2543 = { sizeof (SourceRef_t3386753787), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2543[9] = 
{
	SourceRef_t3386753787::get_offset_of_U3CIsClrLocationU3Ek__BackingField_0(),
	SourceRef_t3386753787::get_offset_of_U3CSourceIdxU3Ek__BackingField_1(),
	SourceRef_t3386753787::get_offset_of_U3CFromCharU3Ek__BackingField_2(),
	SourceRef_t3386753787::get_offset_of_U3CToCharU3Ek__BackingField_3(),
	SourceRef_t3386753787::get_offset_of_U3CFromLineU3Ek__BackingField_4(),
	SourceRef_t3386753787::get_offset_of_U3CToLineU3Ek__BackingField_5(),
	SourceRef_t3386753787::get_offset_of_U3CIsStepStopU3Ek__BackingField_6(),
	SourceRef_t3386753787::get_offset_of_Breakpoint_7(),
	SourceRef_t3386753787::get_offset_of_U3CCannotBreakpointU3Ek__BackingField_8(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2544 = { sizeof (WatchItem_t1790763148), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2544[8] = 
{
	WatchItem_t1790763148::get_offset_of_U3CAddressU3Ek__BackingField_0(),
	WatchItem_t1790763148::get_offset_of_U3CBasePtrU3Ek__BackingField_1(),
	WatchItem_t1790763148::get_offset_of_U3CRetAddressU3Ek__BackingField_2(),
	WatchItem_t1790763148::get_offset_of_U3CNameU3Ek__BackingField_3(),
	WatchItem_t1790763148::get_offset_of_U3CValueU3Ek__BackingField_4(),
	WatchItem_t1790763148::get_offset_of_U3CLValueU3Ek__BackingField_5(),
	WatchItem_t1790763148::get_offset_of_U3CIsErrorU3Ek__BackingField_6(),
	WatchItem_t1790763148::get_offset_of_U3CLocationU3Ek__BackingField_7(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2545 = { sizeof (WatchType_t1405566565)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable2545[8] = 
{
	WatchType_t1405566565::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2546 = { sizeof (PerformanceCounter_t82117261)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable2546[6] = 
{
	PerformanceCounter_t82117261::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2547 = { sizeof (DummyPerformanceStopwatch_t1084872175), -1, sizeof(DummyPerformanceStopwatch_t1084872175_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2547[2] = 
{
	DummyPerformanceStopwatch_t1084872175_StaticFields::get_offset_of_Instance_0(),
	DummyPerformanceStopwatch_t1084872175::get_offset_of_m_Result_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2548 = { sizeof (GlobalPerformanceStopwatch_t2074566713), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2548[3] = 
{
	GlobalPerformanceStopwatch_t2074566713::get_offset_of_m_Count_0(),
	GlobalPerformanceStopwatch_t2074566713::get_offset_of_m_Elapsed_1(),
	GlobalPerformanceStopwatch_t2074566713::get_offset_of_m_Counter_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2549 = { sizeof (GlobalPerformanceStopwatch_StopwatchObject_t2533882312), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2549[2] = 
{
	GlobalPerformanceStopwatch_StopwatchObject_t2533882312::get_offset_of_m_Stopwatch_0(),
	GlobalPerformanceStopwatch_StopwatchObject_t2533882312::get_offset_of_m_Parent_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2550 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2551 = { sizeof (PerformanceStopwatch_t377456844), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2551[4] = 
{
	PerformanceStopwatch_t377456844::get_offset_of_m_Stopwatch_0(),
	PerformanceStopwatch_t377456844::get_offset_of_m_Count_1(),
	PerformanceStopwatch_t377456844::get_offset_of_m_Reentrant_2(),
	PerformanceStopwatch_t377456844::get_offset_of_m_Counter_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2552 = { sizeof (PerformanceCounterType_t164443786)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable2552[3] = 
{
	PerformanceCounterType_t164443786::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2553 = { sizeof (PerformanceResult_t2520541359), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2553[5] = 
{
	PerformanceResult_t2520541359::get_offset_of_U3CNameU3Ek__BackingField_0(),
	PerformanceResult_t2520541359::get_offset_of_U3CCounterU3Ek__BackingField_1(),
	PerformanceResult_t2520541359::get_offset_of_U3CInstancesU3Ek__BackingField_2(),
	PerformanceResult_t2520541359::get_offset_of_U3CGlobalU3Ek__BackingField_3(),
	PerformanceResult_t2520541359::get_offset_of_U3CTypeU3Ek__BackingField_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2554 = { sizeof (PerformanceStatistics_t262909997), -1, sizeof(PerformanceStatistics_t262909997_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2554[3] = 
{
	PerformanceStatistics_t262909997::get_offset_of_m_Stopwatches_0(),
	PerformanceStatistics_t262909997_StaticFields::get_offset_of_m_GlobalStopwatches_1(),
	PerformanceStatistics_t262909997::get_offset_of_m_Enabled_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2555 = { sizeof (DynamicExpressionException_t2565968832), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2556 = { sizeof (InternalErrorException_t1172924431), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2557 = { sizeof (InterpreterException_t1792992816), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2557[4] = 
{
	InterpreterException_t1792992816::get_offset_of_U3CInstructionPtrU3Ek__BackingField_11(),
	InterpreterException_t1792992816::get_offset_of_U3CCallStackU3Ek__BackingField_12(),
	InterpreterException_t1792992816::get_offset_of_U3CDecoratedMessageU3Ek__BackingField_13(),
	InterpreterException_t1792992816::get_offset_of_U3CDoNotDecorateMessageU3Ek__BackingField_14(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2558 = { sizeof (ScriptRuntimeException_t501315205), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2559 = { sizeof (SyntaxErrorException_t3494522607), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2559[2] = 
{
	SyntaxErrorException_t3494522607::get_offset_of_U3CTokenU3Ek__BackingField_15(),
	SyntaxErrorException_t3494522607::get_offset_of_U3CIsPrematureStreamTerminationU3Ek__BackingField_16(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2560 = { sizeof (DynamicExpression_t4193116082), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2560[4] = 
{
	DynamicExpression_t4193116082::get_offset_of_m_Exp_0(),
	DynamicExpression_t4193116082::get_offset_of_m_Constant_1(),
	DynamicExpression_t4193116082::get_offset_of_ExpressionCode_2(),
	DynamicExpression_t4193116082::get_offset_of_U3COwnerScriptU3Ek__BackingField_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2561 = { sizeof (InstructionFieldUsage_t1363328296)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable2561[9] = 
{
	InstructionFieldUsage_t1363328296::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2562 = { sizeof (InstructionFieldUsage_Extensions_t793826415), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2563 = { sizeof (BuildTimeScope_t3047810466), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2563[2] = 
{
	BuildTimeScope_t3047810466::get_offset_of_m_Frames_0(),
	BuildTimeScope_t3047810466::get_offset_of_m_ClosureBuilders_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2564 = { sizeof (BuildTimeScopeBlock_t4233616674), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2564[7] = 
{
	BuildTimeScopeBlock_t4233616674::get_offset_of_U3CParentU3Ek__BackingField_0(),
	BuildTimeScopeBlock_t4233616674::get_offset_of_U3CChildNodesU3Ek__BackingField_1(),
	BuildTimeScopeBlock_t4233616674::get_offset_of_U3CScopeBlockU3Ek__BackingField_2(),
	BuildTimeScopeBlock_t4233616674::get_offset_of_m_DefinedNames_3(),
	BuildTimeScopeBlock_t4233616674::get_offset_of_m_PendingGotos_4(),
	BuildTimeScopeBlock_t4233616674::get_offset_of_m_LocalLabels_5(),
	BuildTimeScopeBlock_t4233616674::get_offset_of_m_LastDefinedName_6(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2565 = { sizeof (BuildTimeScopeFrame_t3528424626), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2565[4] = 
{
	BuildTimeScopeFrame_t3528424626::get_offset_of_m_ScopeTreeRoot_0(),
	BuildTimeScopeFrame_t3528424626::get_offset_of_m_ScopeTreeHead_1(),
	BuildTimeScopeFrame_t3528424626::get_offset_of_m_ScopeFrame_2(),
	BuildTimeScopeFrame_t3528424626::get_offset_of_U3CHasVarArgsU3Ek__BackingField_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2566 = { sizeof (ClosureContext_t772623181), -1, sizeof(ClosureContext_t772623181_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2566[2] = 
{
	ClosureContext_t772623181::get_offset_of_U3CSymbolsU3Ek__BackingField_5(),
	ClosureContext_t772623181_StaticFields::get_offset_of_U3CU3Ef__amU24cache0_6(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2567 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2568 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2569 = { sizeof (LoopTracker_t2759355568), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2569[1] = 
{
	LoopTracker_t2759355568::get_offset_of_Loops_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2570 = { sizeof (RuntimeScopeBlock_t1116835061), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2570[3] = 
{
	RuntimeScopeBlock_t1116835061::get_offset_of_U3CFromU3Ek__BackingField_0(),
	RuntimeScopeBlock_t1116835061::get_offset_of_U3CToU3Ek__BackingField_1(),
	RuntimeScopeBlock_t1116835061::get_offset_of_U3CToInclusiveU3Ek__BackingField_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2571 = { sizeof (RuntimeScopeFrame_t1870046025), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2571[2] = 
{
	RuntimeScopeFrame_t1870046025::get_offset_of_U3CDebugSymbolsU3Ek__BackingField_0(),
	RuntimeScopeFrame_t1870046025::get_offset_of_U3CToFirstBlockU3Ek__BackingField_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2572 = { sizeof (ScriptExecutionContext_t1593241952), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2572[4] = 
{
	ScriptExecutionContext_t1593241952::get_offset_of_m_Processor_0(),
	ScriptExecutionContext_t1593241952::get_offset_of_m_Callback_1(),
	ScriptExecutionContext_t1593241952::get_offset_of_U3CIsDynamicExecutionU3Ek__BackingField_2(),
	ScriptExecutionContext_t1593241952::get_offset_of_U3CCallingLocationU3Ek__BackingField_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2573 = { sizeof (ScriptLoadingContext_t2755804994), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2573[6] = 
{
	ScriptLoadingContext_t2755804994::get_offset_of_U3CScriptU3Ek__BackingField_0(),
	ScriptLoadingContext_t2755804994::get_offset_of_U3CScopeU3Ek__BackingField_1(),
	ScriptLoadingContext_t2755804994::get_offset_of_U3CSourceU3Ek__BackingField_2(),
	ScriptLoadingContext_t2755804994::get_offset_of_U3CAnonymousU3Ek__BackingField_3(),
	ScriptLoadingContext_t2755804994::get_offset_of_U3CIsDynamicExpressionU3Ek__BackingField_4(),
	ScriptLoadingContext_t2755804994::get_offset_of_U3CLexerU3Ek__BackingField_5(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2574 = { sizeof (ByteCode_t218744739), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2574[5] = 
{
	ByteCode_t218744739::get_offset_of_Code_2(),
	ByteCode_t218744739::get_offset_of_U3CScriptU3Ek__BackingField_3(),
	ByteCode_t218744739::get_offset_of_m_SourceRefStack_4(),
	ByteCode_t218744739::get_offset_of_m_CurrentSourceRef_5(),
	ByteCode_t218744739::get_offset_of_LoopTracker_6(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2575 = { sizeof (SourceCodeStackGuard_t2746434502), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2575[1] = 
{
	SourceCodeStackGuard_t2746434502::get_offset_of_m_Bc_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2576 = { sizeof (CallStackItem_t2093938941), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2576[12] = 
{
	CallStackItem_t2093938941::get_offset_of_Debug_EntryPoint_0(),
	CallStackItem_t2093938941::get_offset_of_Debug_Symbols_1(),
	CallStackItem_t2093938941::get_offset_of_CallingSourceRef_2(),
	CallStackItem_t2093938941::get_offset_of_ClrFunction_3(),
	CallStackItem_t2093938941::get_offset_of_Continuation_4(),
	CallStackItem_t2093938941::get_offset_of_ErrorHandler_5(),
	CallStackItem_t2093938941::get_offset_of_ErrorHandlerBeforeUnwind_6(),
	CallStackItem_t2093938941::get_offset_of_BasePointer_7(),
	CallStackItem_t2093938941::get_offset_of_ReturnAddress_8(),
	CallStackItem_t2093938941::get_offset_of_LocalScope_9(),
	CallStackItem_t2093938941::get_offset_of_ClosureScope_10(),
	CallStackItem_t2093938941::get_offset_of_Flags_11(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2577 = { sizeof (CallStackItemFlags_t1669054736)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable2577[7] = 
{
	CallStackItemFlags_t1669054736::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2578 = { sizeof (ExecutionState_t617798350), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2578[4] = 
{
	ExecutionState_t617798350::get_offset_of_ValueStack_0(),
	ExecutionState_t617798350::get_offset_of_ExecutionStack_1(),
	ExecutionState_t617798350::get_offset_of_InstructionPtr_2(),
	ExecutionState_t617798350::get_offset_of_State_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2579 = { sizeof (Instruction_t3290677225), -1, sizeof(Instruction_t3290677225_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2579[9] = 
{
	Instruction_t3290677225::get_offset_of_OpCode_0(),
	Instruction_t3290677225::get_offset_of_Symbol_1(),
	Instruction_t3290677225::get_offset_of_SymbolList_2(),
	Instruction_t3290677225::get_offset_of_Name_3(),
	Instruction_t3290677225::get_offset_of_Value_4(),
	Instruction_t3290677225::get_offset_of_NumVal_5(),
	Instruction_t3290677225::get_offset_of_NumVal2_6(),
	Instruction_t3290677225::get_offset_of_SourceCodeRef_7(),
	Instruction_t3290677225_StaticFields::get_offset_of_U3CU3Ef__amU24cache0_8(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2580 = { sizeof (OpCode_t2095194683)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable2580[57] = 
{
	OpCode_t2095194683::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
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
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2581 = { sizeof (OpCodeMetadataType_t3910395355)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable2581[3] = 
{
	OpCodeMetadataType_t3910395355::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2582 = { sizeof (Processor_t733572553), -1, sizeof(Processor_t733572553_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2582[19] = 
{
	Processor_t733572553::get_offset_of_m_RootChunk_0(),
	Processor_t733572553::get_offset_of_m_ValueStack_1(),
	Processor_t733572553::get_offset_of_m_ExecutionStack_2(),
	Processor_t733572553::get_offset_of_m_CoroutinesStack_3(),
	Processor_t733572553::get_offset_of_m_GlobalTable_4(),
	Processor_t733572553::get_offset_of_m_Script_5(),
	Processor_t733572553::get_offset_of_m_Parent_6(),
	Processor_t733572553::get_offset_of_m_State_7(),
	Processor_t733572553::get_offset_of_m_CanYield_8(),
	Processor_t733572553::get_offset_of_m_SavedInstructionPtr_9(),
	Processor_t733572553::get_offset_of_m_Debug_10(),
	Processor_t733572553::get_offset_of_m_OwningThreadID_11(),
	Processor_t733572553::get_offset_of_m_ExecutionNesting_12(),
	0,
	0,
	Processor_t733572553::get_offset_of_U3CAssociatedCoroutineU3Ek__BackingField_15(),
	0,
	Processor_t733572553::get_offset_of_AutoYieldCounter_17(),
	Processor_t733572553_StaticFields::get_offset_of_U3CU3Ef__amU24cache0_18(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2583 = { sizeof (DebugContext_t2025408788), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2583[8] = 
{
	DebugContext_t2025408788::get_offset_of_DebuggerEnabled_0(),
	DebugContext_t2025408788::get_offset_of_DebuggerAttached_1(),
	DebugContext_t2025408788::get_offset_of_DebuggerCurrentAction_2(),
	DebugContext_t2025408788::get_offset_of_DebuggerCurrentActionTarget_3(),
	DebugContext_t2025408788::get_offset_of_LastHlRef_4(),
	DebugContext_t2025408788::get_offset_of_ExStackDepthAtStep_5(),
	DebugContext_t2025408788::get_offset_of_BreakPoints_6(),
	DebugContext_t2025408788::get_offset_of_LineBasedBreakPoints_7(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2584 = { sizeof (U3CDebugger_RefreshWatchesU3Ec__AnonStorey0_t1061094221), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2584[2] = 
{
	U3CDebugger_RefreshWatchesU3Ec__AnonStorey0_t1061094221::get_offset_of_context_0(),
	U3CDebugger_RefreshWatchesU3Ec__AnonStorey0_t1061094221::get_offset_of_U24this_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2585 = { sizeof (MoonSharpHiddenAttribute_t2482276435), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2586 = { sizeof (MoonSharpHideMemberAttribute_t3895257771), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2586[1] = 
{
	MoonSharpHideMemberAttribute_t3895257771::get_offset_of_U3CMemberNameU3Ek__BackingField_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2587 = { sizeof (MoonSharpPropertyAttribute_t2309983121), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2587[1] = 
{
	MoonSharpPropertyAttribute_t2309983121::get_offset_of_U3CNameU3Ek__BackingField_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2588 = { sizeof (MoonSharpUserDataAttribute_t2195270132), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2588[1] = 
{
	MoonSharpUserDataAttribute_t2195270132::get_offset_of_U3CAccessModeU3Ek__BackingField_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2589 = { sizeof (MoonSharpUserDataMetamethodAttribute_t1660890698), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2589[1] = 
{
	MoonSharpUserDataMetamethodAttribute_t1660890698::get_offset_of_U3CNameU3Ek__BackingField_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2590 = { sizeof (MoonSharpVisibleAttribute_t2835884365), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2590[1] = 
{
	MoonSharpVisibleAttribute_t2835884365::get_offset_of_U3CVisibleU3Ek__BackingField_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2591 = { sizeof (DispatchingUserDataDescriptor_t4246933607), -1, sizeof(DispatchingUserDataDescriptor_t4246933607_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2591[11] = 
{
	DispatchingUserDataDescriptor_t4246933607::get_offset_of_m_ExtMethodsVersion_0(),
	DispatchingUserDataDescriptor_t4246933607::get_offset_of_m_MetaMembers_1(),
	DispatchingUserDataDescriptor_t4246933607::get_offset_of_m_Members_2(),
	0,
	0,
	0,
	0,
	DispatchingUserDataDescriptor_t4246933607::get_offset_of_U3CNameU3Ek__BackingField_7(),
	DispatchingUserDataDescriptor_t4246933607::get_offset_of_U3CTypeU3Ek__BackingField_8(),
	DispatchingUserDataDescriptor_t4246933607::get_offset_of_U3CFriendlyNameU3Ek__BackingField_9(),
	DispatchingUserDataDescriptor_t4246933607_StaticFields::get_offset_of_U3CU3Ef__switchU24map4_10(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2592 = { sizeof (U3CMultiDispatchLessThanOrEqualU3Ec__AnonStorey0_t4066408643), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2592[2] = 
{
	U3CMultiDispatchLessThanOrEqualU3Ec__AnonStorey0_t4066408643::get_offset_of_obj_0(),
	U3CMultiDispatchLessThanOrEqualU3Ec__AnonStorey0_t4066408643::get_offset_of_U24this_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2593 = { sizeof (U3CMultiDispatchLessThanU3Ec__AnonStorey1_t2966779943), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2593[2] = 
{
	U3CMultiDispatchLessThanU3Ec__AnonStorey1_t2966779943::get_offset_of_obj_0(),
	U3CMultiDispatchLessThanU3Ec__AnonStorey1_t2966779943::get_offset_of_U24this_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2594 = { sizeof (U3CMultiDispatchEqualU3Ec__AnonStorey2_t2335897924), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2594[2] = 
{
	U3CMultiDispatchEqualU3Ec__AnonStorey2_t2335897924::get_offset_of_obj_0(),
	U3CMultiDispatchEqualU3Ec__AnonStorey2_t2335897924::get_offset_of_U24this_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2595 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2596 = { sizeof (MemberDescriptor_t1636821019), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2597 = { sizeof (U3CGetGetterCallbackAsDynValueU3Ec__AnonStorey0_t2735016947), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2597[3] = 
{
	U3CGetGetterCallbackAsDynValueU3Ec__AnonStorey0_t2735016947::get_offset_of_desc_0(),
	U3CGetGetterCallbackAsDynValueU3Ec__AnonStorey0_t2735016947::get_offset_of_script_1(),
	U3CGetGetterCallbackAsDynValueU3Ec__AnonStorey0_t2735016947::get_offset_of_obj_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2598 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2599 = { 0, -1, 0, 0 };
#ifdef __clang__
#pragma clang diagnostic pop
#endif
