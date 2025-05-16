// generated on: Mon Nov 18 16:22:34 2024
#ifndef SDK_SCHEMA_pulse_runtime_lib_H
#define SDK_SCHEMA_pulse_runtime_lib_H

#include <cstdint>

#include <sdk/schema/pulse_runtime_lib.h>
#include <sdk/schema/resourcesystem.h>
#include <sdk/schema/entity2.h>
namespace sdk {
	namespace schema {
		namespace pulse_runtime_lib {
			class PulseRuntimeStateOffset_t;
			class CPulseRuntimeMethodArg;
			class PulseRuntimeChunkIndex_t;
			class PulseRuntimeCallInfoIndex_t;
			class CPulse_Constant;
			class CPulseGraphDef;
			class PulseGraphInstanceID_t;
			class CPulse_RegisterInfo;
			class CPulse_CallInfo;
			class CPulseCell_LimitCount_InstanceState_t;
			class PulseDocNodeID_t;
			class PulseRuntimeConstantIndex_t;
			class PulseRuntimeBlackboardReferenceIndex_t;
			class CPulseMathlib;
			class CPulseCell_TestWaitWithCursorState_CursorState_t;
			class PulseRuntimeOutputIndex_t;
			class FakeEntityDerivedA_tAPI;
			class PGDInstruction_t;
			class CPulse_InvokeBinding;
			class CPulse_BlackboardReference;
			class PulseCursorYieldToken_t;
			class PulseRuntimeCellIndex_t;
			class PulseGraphExecutionHistoryEntry_t;
			class CPulse_Variable;
			class PulseGraphExecutionHistoryNodeDesc_t;
			class CPulse_PublicOutput;
			class CPulseCell_BaseLerp_CursorState_t;
			class CPulseCell_Outflow_CycleShuffled_InstanceState_t;
			class CPulse_OutputConnection;
			class CPulse_DomainValue;
			class FakeEntity_tAPI;
			class CPulseTestGapTypeQueryRegistration;
			class FakeEntityDerivedB_tAPI;
			class IGapHost_ExecLog;
			class IGapHost_Cursor;
			class IGapHost_YieldingCursor;
			class CPulseExecCursor;
			class CPulseTurtleGraphicsCursor;
			class CTestDomainDerived_Cursor;
			class PulseNodeDynamicOutflows_t_DynamicOutflow_t;
			class PulseNodeDynamicOutflows_t;
			class PulseRegisterMap_t;
			class PulseGraphExecutionHistoryCursorDesc_t;
			class CPulseCell_Test_MultiOutflow_WithParams_Yielding_CursorState_t;
			class CPulseCell_Base;
			class CPulseCell_BaseFlow;
			class CPulseCell_Outflow_CycleOrdered;
			class CPulseCell_Step_DebugLog;
			class CPulseCell_Outflow_TestRandomYesNo;
			class CPulseCell_Outflow_TestExplicitYesNo;
			class CPulseCell_Inflow_BaseEntrypoint;
			class CPulseCell_Inflow_EntOutputHandler;
			class CPulseCell_Inflow_ObservableVariableListener;
			class CPulseCell_Inflow_EventHandler;
			class CPulseCell_Inflow_GraphHook;
			class CPulseCell_Inflow_Method;
			class CPulseCell_Test_MultiInflow_NoDefault;
			class CPulseCell_Outflow_IntSwitch;
			class CPulseCell_Step_TestDomainTracepoint;
			class CPulseCell_Step_TestDomainEntFire;
			class CPulseCell_Step_TestDomainCreateFakeEntity;
			class CPulseCell_Outflow_CycleShuffled;
			class CPulseCell_Outflow_CycleRandom;
			class CPulseCell_Test_NoInflow;
			class CPulseCell_Outflow_StringSwitch;
			class CPulseCell_Test_MultiInflow_WithDefault;
			class CPulseCell_BaseYieldingInflow;
			class CPulseCell_Test_MultiOutflow_WithParams_Yielding;
			class CPulseCell_TestWaitWithCursorState;
			class CPulseCell_Step_CallExternalMethod;
			class CPulseCell_Timeline;
			class CPulseCell_FireCursors;
			class CPulseCell_Inflow_Wait;
			class CPulseCell_Inflow_Yield;
			class CPulseCell_BaseLerp;
			class CPulseCell_Test_MultiOutflow_WithParams;
			class CPulseCell_Step_TestDomainDestroyFakeEntity;
			class CPulseCell_Step_PublicOutput;
			class CPulseCell_BaseValue;
			class CPulseCell_Value_RandomInt;
			class CPulseCell_Value_RandomFloat;
			class CPulseCell_Val_TestDomainGetEntityName;
			class CPulseCell_Value_TestValue50;
			class CPulseCell_Val_TestDomainFindEntityByName;
			class CPulseCell_Unknown;
			class CPulseCell_BaseRequirement;
			class CPulseCell_LimitCount;
			class PulseCursorID_t;
			class CPulse_OutflowConnection;
			class SignatureOutflow_Continue;
			class CPulse_ResumePoint;
			class SignatureOutflow_Resume;
			class PulseRuntimeRegisterIndex_t;
			class CBasePulseGraphInstance;
			class CPulseGraphInstance_TestDomain;
			class CPulseGraphInstance_TestDomain_Derived;
			class CPulseGraphInstance_TurtleGraphics;
			class CPulseTestScriptLib;
			class CPulseCell_Outflow_CycleOrdered_InstanceState_t;
			class CPulseCell_Timeline_TimelineEvent_t;
			class PulseRuntimeInvokeIndex_t;
			class PulseRuntimeDomainValueIndex_t;
			class CPulse_Chunk;
			class CPulseGraphExecutionHistory;
			class PulseRuntimeVarIndex_t;
			class PulseRuntimeEntrypointIndex_t;
			// Enumerator count: 6
			// Alignment: 
			// Size: 0x4
			enum class EPulseGraphExecutionHistoryFlag : std::uint32_t {
				// MPropertySuppressEnumerator
				// MEnumeratorIsNotAFlag
				NO_FLAGS = 0x0,
				CURSOR_ADD_TAG = 0x1,
				CURSOR_REMOVE_TAG = 0x2,
				CURSOR_RETIRED = 0x4,
				REQUIREMENT_PASS = 0x8,
				REQUIREMENT_FAIL = 0x10,
			};
			// Enumerator count: 3
			// Alignment: 
			// Size: 0x4
			enum class PulseTestEnumShape_t : std::uint32_t {
				// MPropertyFriendlyName "Circle"
				CIRCLE = 0x64,
				// MPropertyFriendlyName "Square"
				SQUARE = 0xc8,
				// MPropertyFriendlyName "Triangle"
				TRIANGLE = 0x12c,
			};
			// Enumerator count: 5
			// Alignment: 
			// Size: 0x4
			enum class PulseTestEnumColor_t : std::uint32_t {
				// MPropertyFriendlyName "Black"
				BLACK = 0x0,
				// MPropertyFriendlyName "White"
				WHITE = 0x1,
				// MPropertyFriendlyName "Red"
				RED = 0x2,
				// MPropertyFriendlyName "Green"
				GREEN = 0x3,
				// MPropertyFriendlyName "Blue"
				BLUE = 0x4,
			};
			// Enumerator count: 2
			// Alignment: 
			// Size: 0x4
			enum class PulseMethodCallMode_t : std::uint32_t {
				// MPropertyFriendlyName "Wait For Completion"
				// MPropertyDescription "Synchronous - wait for the method to fully complete before returning"
				SYNC_WAIT_FOR_COMPLETION = 0x0,
				// MPropertyFriendlyName "Fire And Forget"
				// MPropertyDescription "Asynchronous - returns and continues despite the called method yielding"
				ASYNC_FIRE_AND_FORGET = 0x1,
			};
			// Enumerator count: 75
			// Alignment: 
			// Size: 0x2
			enum class PulseInstructionCode_t : std::uint16_t {
				INVALID = 0x0,
				IMMEDIATE_HALT = 0x1,
				RETURN_VOID = 0x2,
				RETURN_VALUE = 0x3,
				NOP = 0x4,
				JUMP = 0x5,
				JUMP_COND = 0x6,
				CHUNK_LEAP = 0x7,
				CHUNK_LEAP_COND = 0x8,
				PULSE_CALL_SYNC = 0x9,
				PULSE_CALL_ASYNC_FIRE = 0xa,
				CELL_INVOKE = 0xb,
				LIBRARY_INVOKE = 0xc,
				SET_VAR = 0xd,
				GET_VAR = 0xe,
				GET_CONST = 0xf,
				GET_DOMAIN_VALUE = 0x10,
				COPY = 0x11,
				NOT = 0x12,
				NEGATE = 0x13,
				ADD = 0x14,
				SUB = 0x15,
				MUL = 0x16,
				DIV = 0x17,
				MOD = 0x18,
				LT = 0x19,
				LTE = 0x1a,
				EQ = 0x1b,
				NE = 0x1c,
				AND = 0x1d,
				OR = 0x1e,
				CONVERT_VALUE = 0x1f,
				REINTERPRET_INSTANCE = 0x20,
				GET_BLACKBOARD_REFERENCE = 0x21,
				SET_BLACKBOARD_REFERENCE = 0x22,
				REQUIREMENT_RESULT = 0x23,
				LAST_SERIALIZED_CODE = 0x24,
				NEGATE_INT = 0x25,
				NEGATE_FLOAT = 0x26,
				ADD_INT = 0x27,
				ADD_FLOAT = 0x28,
				ADD_STRING = 0x29,
				SUB_INT = 0x2a,
				SUB_FLOAT = 0x2b,
				MUL_INT = 0x2c,
				MUL_FLOAT = 0x2d,
				DIV_INT = 0x2e,
				DIV_FLOAT = 0x2f,
				MOD_INT = 0x30,
				MOD_FLOAT = 0x31,
				LT_INT = 0x32,
				LT_FLOAT = 0x33,
				LTE_INT = 0x34,
				LTE_FLOAT = 0x35,
				EQ_BOOL = 0x36,
				EQ_INT = 0x37,
				EQ_FLOAT = 0x38,
				EQ_STRING = 0x39,
				EQ_ENTITY_NAME = 0x3a,
				EQ_SCHEMA_ENUM = 0x3b,
				EQ_EHANDLE = 0x3c,
				EQ_PANEL_HANDLE = 0x3d,
				EQ_OPAQUE_HANDLE = 0x3e,
				EQ_TEST_HANDLE = 0x3f,
				NE_BOOL = 0x40,
				NE_INT = 0x41,
				NE_FLOAT = 0x42,
				NE_STRING = 0x43,
				NE_ENTITY_NAME = 0x44,
				NE_SCHEMA_ENUM = 0x45,
				NE_EHANDLE = 0x46,
				NE_PANEL_HANDLE = 0x47,
				NE_OPAQUE_HANDLE = 0x48,
				NE_TEST_HANDLE = 0x49,
				GET_CONST_INLINE_STORAGE = 0x4a,
			};
			// Enumerator count: 4
			// Alignment: 
			// Size: 0x4
			enum class PulseCursorExecResult_t : std::uint32_t {
				Succeeded = 0x0,
				Canceled = 0x1,
				Failed = 0x2,
				OngoingNotify = 0x3,
			};
			// Enumerator count: 21
			// Alignment: 
			// Size: 0x4
			enum class PulseValueType_t : std::uint32_t {
				// MPropertyFriendlyName "Void"
				PVAL_INVALID = 0xffffffff,
				// MPropertyFriendlyName "Boolean"
				PVAL_BOOL = 0x0,
				// MPropertyFriendlyName "Integer"
				PVAL_INT = 0x1,
				// MPropertyFriendlyName "Float"
				PVAL_FLOAT = 0x2,
				// MPropertyFriendlyName "String"
				PVAL_STRING = 0x3,
				// MPropertyFriendlyName "Vector3"
				PVAL_VEC3 = 0x4,
				// MPropertyFriendlyName "Transform"
				PVAL_TRANSFORM = 0x5,
				// MPropertyFriendlyName "Color"
				PVAL_COLOR_RGB = 0x6,
				// MPropertyFriendlyName "Entity Handle"
				PVAL_EHANDLE = 0x7,
				// MPropertyFriendlyName "Resource"
				PVAL_RESOURCE = 0x8,
				// MPropertyFriendlyName "SoundEvent Instance Handle"
				PVAL_SNDEVT_GUID = 0x9,
				// MPropertyFriendlyName "SoundEvent"
				PVAL_SNDEVT_NAME = 0xa,
				// MPropertyFriendlyName "Entity Name"
				PVAL_ENTITY_NAME = 0xb,
				// MPropertyFriendlyName "Opaque Handle"
				PVAL_OPAQUE_HANDLE = 0xc,
				// MPropertyFriendlyName "Typesafe Int"
				PVAL_TYPESAFE_INT = 0xd,
				// MPropertySuppressEnumerator
				PVAL_CURSOR_FLOW = 0xe,
				// MPropertyFriendlyName "Any"
				PVAL_ANY = 0xf,
				// MPropertyFriendlyName "Schema Enum"
				PVAL_SCHEMA_ENUM = 0x10,
				// MPropertyFriendlyName "Panorama Panel Handle"
				PVAL_PANORAMA_PANEL_HANDLE = 0x11,
				// MPropertyFriendlyName "Test Handle"
				PVAL_TEST_HANDLE = 0x12,
				// MPropertySuppressEnumerator
				PVAL_COUNT = 0x13,
			};
			// Enumerator count: 4
			// Alignment: 
			// Size: 0x4
			enum class PulseCursorCancelPriority_t : std::uint32_t {
				// MPropertyFriendlyName "Keep running normally."
				None = 0x0,
				// MPropertyFriendlyName "Kill after current node."
				// MPropertyDescription "Do not stop the current yielding node, but do not continue to the next node afterwards."
				CancelOnSucceeded = 0x1,
				// MPropertyFriendlyName "Kill elegantly."
				// MPropertyDescription "Request elegant wind-down of any associated work (e.g. vcd interrupt)."
				SoftCancel = 0x2,
				// MPropertyFriendlyName "Kill immediately."
				// MPropertyDescription "Stop without any wind-down."
				HardCancel = 0x3,
			};
			// Enumerator count: 4
			// Alignment: 
			// Size: 0x4
			enum class PulseDomainValueType_t : std::uint32_t {
				// MPropertyFriendlyName "Invalid"
				INVALID = 0xffffffff,
				// MPropertyFriendlyName "Parent Map Entity"
				ENTITY_NAME = 0x0,
				// MPropertyFriendlyName "Parent XML Panel"
				PANEL_ID = 0x1,
				COUNT = 0x2,
			};
			struct PulseRuntimeStateOffset_t {
				MEMBER(value, pulse_runtime_lib::PulseRuntimeStateOffset_t, uint16_t);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // struct PulseRuntimeStateOffset_t

			class CPulseRuntimeMethodArg {
				MEMBER(name, pulse_runtime_lib::CPulseRuntimeMethodArg, CKV3MemberNameWithStorage);
				MEMBER(description, pulse_runtime_lib::CPulseRuntimeMethodArg, cutl_string);
				MEMBER(type, pulse_runtime_lib::CPulseRuntimeMethodArg, CPulseValueFullType);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CPulseRuntimeMethodArg

			struct PulseRuntimeChunkIndex_t {
				MEMBER(value, pulse_runtime_lib::PulseRuntimeChunkIndex_t, int32_t);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // struct PulseRuntimeChunkIndex_t

			struct PulseRuntimeCallInfoIndex_t {
				MEMBER(value, pulse_runtime_lib::PulseRuntimeCallInfoIndex_t, int32_t);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // struct PulseRuntimeCallInfoIndex_t

			class CPulse_Constant {
				MEMBER(type, pulse_runtime_lib::CPulse_Constant, CPulseValueFullType);
				MEMBER(value, pulse_runtime_lib::CPulse_Constant, KeyValues3);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CPulse_Constant

			class CPulseGraphDef {
				MEMBER(domain_identifier, pulse_runtime_lib::CPulseGraphDef, CUtlSymbolLarge);
				MEMBER(parent_map_name, pulse_runtime_lib::CPulseGraphDef, CUtlSymbolLarge);
				MEMBER(parent_xml_name, pulse_runtime_lib::CPulseGraphDef, CUtlSymbolLarge);
				MEMBER(vec_game_blackboards, pulse_runtime_lib::CPulseGraphDef, cutl_vector<CUtlSymbolLarge>);
				MEMBER(chunks, pulse_runtime_lib::CPulseGraphDef, cutl_vector<pulse_runtime_lib::CPulse_Chunk*>);
				MEMBER(cells, pulse_runtime_lib::CPulseGraphDef, cutl_vector<pulse_runtime_lib::CPulseCell_Base*>);
				MEMBER(vars, pulse_runtime_lib::CPulseGraphDef, cutl_vector<pulse_runtime_lib::CPulse_Variable>);
				MEMBER(public_outputs, pulse_runtime_lib::CPulseGraphDef, cutl_vector<pulse_runtime_lib::CPulse_PublicOutput>);
				MEMBER(invoke_bindings, pulse_runtime_lib::CPulseGraphDef, cutl_vector<pulse_runtime_lib::CPulse_InvokeBinding*>);
				MEMBER(call_infos, pulse_runtime_lib::CPulseGraphDef, cutl_vector<pulse_runtime_lib::CPulse_CallInfo*>);
				MEMBER(constants, pulse_runtime_lib::CPulseGraphDef, cutl_vector<pulse_runtime_lib::CPulse_Constant>);
				MEMBER(domain_values, pulse_runtime_lib::CPulseGraphDef, cutl_vector<pulse_runtime_lib::CPulse_DomainValue>);
				MEMBER(blackboard_references, pulse_runtime_lib::CPulseGraphDef, cutl_vector<pulse_runtime_lib::CPulse_BlackboardReference>);
				MEMBER(output_connections, pulse_runtime_lib::CPulseGraphDef, cutl_vector<pulse_runtime_lib::CPulse_OutputConnection*>);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CPulseGraphDef

			struct PulseGraphInstanceID_t {
				MEMBER(value, pulse_runtime_lib::PulseGraphInstanceID_t, uint32_t);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // struct PulseGraphInstanceID_t

			class CPulse_RegisterInfo {
				MEMBER(n_reg, pulse_runtime_lib::CPulse_RegisterInfo, pulse_runtime_lib::PulseRuntimeRegisterIndex_t);
				MEMBER(type, pulse_runtime_lib::CPulse_RegisterInfo, CPulseValueFullType);
				MEMBER(origin_name, pulse_runtime_lib::CPulse_RegisterInfo, CKV3MemberNameWithStorage);
				MEMBER(n_written_by_instruction, pulse_runtime_lib::CPulse_RegisterInfo, int32_t);
				MEMBER(n_last_read_by_instruction, pulse_runtime_lib::CPulse_RegisterInfo, int32_t);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CPulse_RegisterInfo

			class CPulse_CallInfo {
				MEMBER(port_name, pulse_runtime_lib::CPulse_CallInfo, CUtlSymbolLarge);
				MEMBER(n_editor_node_id, pulse_runtime_lib::CPulse_CallInfo, pulse_runtime_lib::PulseDocNodeID_t);
				MEMBER(register_map, pulse_runtime_lib::CPulse_CallInfo, pulse_runtime_lib::PulseRegisterMap_t);
				MEMBER(call_method_id, pulse_runtime_lib::CPulse_CallInfo, pulse_runtime_lib::PulseDocNodeID_t);
				MEMBER(n_src_chunk, pulse_runtime_lib::CPulse_CallInfo, pulse_runtime_lib::PulseRuntimeChunkIndex_t);
				MEMBER(n_src_instruction, pulse_runtime_lib::CPulse_CallInfo, int32_t);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CPulse_CallInfo

			struct CPulseCell_LimitCount_InstanceState_t {
				MEMBER(n_current_count, pulse_runtime_lib::CPulseCell_LimitCount_InstanceState_t, int32_t);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // struct CPulseCell_LimitCount_InstanceState_t

			struct PulseDocNodeID_t {
				MEMBER(value, pulse_runtime_lib::PulseDocNodeID_t, int32_t);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // struct PulseDocNodeID_t

			struct PulseRuntimeConstantIndex_t {
				MEMBER(value, pulse_runtime_lib::PulseRuntimeConstantIndex_t, int16_t);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // struct PulseRuntimeConstantIndex_t

			struct PulseRuntimeBlackboardReferenceIndex_t {
				MEMBER(value, pulse_runtime_lib::PulseRuntimeBlackboardReferenceIndex_t, int16_t);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // struct PulseRuntimeBlackboardReferenceIndex_t

			class CPulseMathlib {

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CPulseMathlib

			struct CPulseCell_TestWaitWithCursorState_CursorState_t {
				MEMBER(fl_wait_value, pulse_runtime_lib::CPulseCell_TestWaitWithCursorState_CursorState_t, float);
				MEMBER(b_fail_on_cancel, pulse_runtime_lib::CPulseCell_TestWaitWithCursorState_CursorState_t, bool);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // struct CPulseCell_TestWaitWithCursorState_CursorState_t

			struct PulseRuntimeOutputIndex_t {
				MEMBER(value, pulse_runtime_lib::PulseRuntimeOutputIndex_t, int32_t);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // struct PulseRuntimeOutputIndex_t

			class FakeEntityDerivedA_tAPI {

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class FakeEntityDerivedA_tAPI

			struct PGDInstruction_t {
				MEMBER(n_code, pulse_runtime_lib::PGDInstruction_t, pulse_runtime_lib::PulseInstructionCode_t);
				MEMBER(n_var, pulse_runtime_lib::PGDInstruction_t, pulse_runtime_lib::PulseRuntimeVarIndex_t);
				MEMBER(n_reg0, pulse_runtime_lib::PGDInstruction_t, pulse_runtime_lib::PulseRuntimeRegisterIndex_t);
				MEMBER(n_reg1, pulse_runtime_lib::PGDInstruction_t, pulse_runtime_lib::PulseRuntimeRegisterIndex_t);
				MEMBER(n_reg2, pulse_runtime_lib::PGDInstruction_t, pulse_runtime_lib::PulseRuntimeRegisterIndex_t);
				MEMBER(n_invoke_binding_index, pulse_runtime_lib::PGDInstruction_t, pulse_runtime_lib::PulseRuntimeInvokeIndex_t);
				MEMBER(n_chunk, pulse_runtime_lib::PGDInstruction_t, pulse_runtime_lib::PulseRuntimeChunkIndex_t);
				MEMBER(n_dest_instruction, pulse_runtime_lib::PGDInstruction_t, int32_t);
				MEMBER(n_call_info_index, pulse_runtime_lib::PGDInstruction_t, pulse_runtime_lib::PulseRuntimeCallInfoIndex_t);
				MEMBER(n_const_idx, pulse_runtime_lib::PGDInstruction_t, pulse_runtime_lib::PulseRuntimeConstantIndex_t);
				MEMBER(n_domain_value_idx, pulse_runtime_lib::PGDInstruction_t, pulse_runtime_lib::PulseRuntimeDomainValueIndex_t);
				MEMBER(n_blackboard_reference_idx, pulse_runtime_lib::PGDInstruction_t, pulse_runtime_lib::PulseRuntimeBlackboardReferenceIndex_t);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // struct PGDInstruction_t

			class CPulse_InvokeBinding {
				MEMBER(register_map, pulse_runtime_lib::CPulse_InvokeBinding, pulse_runtime_lib::PulseRegisterMap_t);
				MEMBER(func_name, pulse_runtime_lib::CPulse_InvokeBinding, CUtlSymbolLarge);
				MEMBER(n_cell_index, pulse_runtime_lib::CPulse_InvokeBinding, pulse_runtime_lib::PulseRuntimeCellIndex_t);
				MEMBER(n_src_chunk, pulse_runtime_lib::CPulse_InvokeBinding, pulse_runtime_lib::PulseRuntimeChunkIndex_t);
				MEMBER(n_src_instruction, pulse_runtime_lib::CPulse_InvokeBinding, int32_t);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CPulse_InvokeBinding

			class CPulse_BlackboardReference {
				MEMBER(h_blackboard_resource, pulse_runtime_lib::CPulse_BlackboardReference, CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIPulseGraphDef>>);
				MEMBER(blackboard_resource, pulse_runtime_lib::CPulse_BlackboardReference, CUtlSymbolLarge);
				MEMBER(n_node_id, pulse_runtime_lib::CPulse_BlackboardReference, pulse_runtime_lib::PulseDocNodeID_t);
				MEMBER(node_name, pulse_runtime_lib::CPulse_BlackboardReference, CGlobalSymbol);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CPulse_BlackboardReference

			struct PulseCursorYieldToken_t {
				MEMBER(value, pulse_runtime_lib::PulseCursorYieldToken_t, int32_t);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // struct PulseCursorYieldToken_t

			struct PulseRuntimeCellIndex_t {
				MEMBER(value, pulse_runtime_lib::PulseRuntimeCellIndex_t, int32_t);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // struct PulseRuntimeCellIndex_t

			struct PulseGraphExecutionHistoryEntry_t {
				MEMBER(n_cursor_id, pulse_runtime_lib::PulseGraphExecutionHistoryEntry_t, pulse_runtime_lib::PulseCursorID_t);
				MEMBER(n_editor_id, pulse_runtime_lib::PulseGraphExecutionHistoryEntry_t, pulse_runtime_lib::PulseDocNodeID_t);
				MEMBER(fl_exec_time, pulse_runtime_lib::PulseGraphExecutionHistoryEntry_t, float);
				MEMBER(un_flags, pulse_runtime_lib::PulseGraphExecutionHistoryEntry_t, uint32_t);
				MEMBER(tag_name, pulse_runtime_lib::PulseGraphExecutionHistoryEntry_t, CUtlSymbolLarge);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // struct PulseGraphExecutionHistoryEntry_t

			class CPulse_Variable {
				MEMBER(name, pulse_runtime_lib::CPulse_Variable, CUtlSymbolLarge);
				MEMBER(description, pulse_runtime_lib::CPulse_Variable, cutl_string);
				MEMBER(type, pulse_runtime_lib::CPulse_Variable, CPulseValueFullType);
				MEMBER(default_value, pulse_runtime_lib::CPulse_Variable, KeyValues3);
				MEMBER(b_is_public, pulse_runtime_lib::CPulse_Variable, bool);
				MEMBER(b_is_observable, pulse_runtime_lib::CPulse_Variable, bool);
				MEMBER(n_editor_node_id, pulse_runtime_lib::CPulse_Variable, pulse_runtime_lib::PulseDocNodeID_t);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CPulse_Variable

			struct PulseGraphExecutionHistoryNodeDesc_t {
				MEMBER(str_cell_desc, pulse_runtime_lib::PulseGraphExecutionHistoryNodeDesc_t, CBufferString);
				MEMBER(str_binding_name, pulse_runtime_lib::PulseGraphExecutionHistoryNodeDesc_t, CUtlSymbolLarge);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // struct PulseGraphExecutionHistoryNodeDesc_t

			class CPulse_PublicOutput {
				MEMBER(name, pulse_runtime_lib::CPulse_PublicOutput, CUtlSymbolLarge);
				MEMBER(description, pulse_runtime_lib::CPulse_PublicOutput, cutl_string);
				MEMBER(param_type, pulse_runtime_lib::CPulse_PublicOutput, CPulseValueFullType);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CPulse_PublicOutput

			struct CPulseCell_BaseLerp_CursorState_t {
				MEMBER(start_time, pulse_runtime_lib::CPulseCell_BaseLerp_CursorState_t, entity2::GameTime_t);
				MEMBER(end_time, pulse_runtime_lib::CPulseCell_BaseLerp_CursorState_t, entity2::GameTime_t);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // struct CPulseCell_BaseLerp_CursorState_t

			struct CPulseCell_Outflow_CycleShuffled_InstanceState_t {
				///MEMBER(shuffle, pulse_runtime_lib::CPulseCell_Outflow_CycleShuffled_InstanceState_t, CUtlVectorFixedGrowable<uint8_t,8>);
				MEMBER(n_next_shuffle, pulse_runtime_lib::CPulseCell_Outflow_CycleShuffled_InstanceState_t, int32_t);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // struct CPulseCell_Outflow_CycleShuffled_InstanceState_t

			class CPulse_OutputConnection {
				MEMBER(source_output, pulse_runtime_lib::CPulse_OutputConnection, CUtlSymbolLarge);
				MEMBER(target_entity, pulse_runtime_lib::CPulse_OutputConnection, CUtlSymbolLarge);
				MEMBER(target_input, pulse_runtime_lib::CPulse_OutputConnection, CUtlSymbolLarge);
				MEMBER(param, pulse_runtime_lib::CPulse_OutputConnection, CUtlSymbolLarge);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CPulse_OutputConnection

			class CPulse_DomainValue {
				MEMBER(n_type, pulse_runtime_lib::CPulse_DomainValue, pulse_runtime_lib::PulseDomainValueType_t);
				MEMBER(value, pulse_runtime_lib::CPulse_DomainValue, CGlobalSymbol);
				MEMBER(expected_runtime_type, pulse_runtime_lib::CPulse_DomainValue, CGlobalSymbol);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CPulse_DomainValue

			class FakeEntity_tAPI {

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class FakeEntity_tAPI

			class CPulseTestGapTypeQueryRegistration {

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CPulseTestGapTypeQueryRegistration

			class FakeEntityDerivedB_tAPI {

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class FakeEntityDerivedB_tAPI

			class IGapHost_ExecLog {

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class IGapHost_ExecLog

			class IGapHost_Cursor : public pulse_runtime_lib::IGapHost_ExecLog {

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class IGapHost_Cursor

			class IGapHost_YieldingCursor : public pulse_runtime_lib::IGapHost_Cursor {

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class IGapHost_YieldingCursor

			class CPulseExecCursor : public pulse_runtime_lib::IGapHost_YieldingCursor {

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CPulseExecCursor

			class CPulseTurtleGraphicsCursor : public pulse_runtime_lib::CPulseExecCursor {
				MEMBER(color, pulse_runtime_lib::CPulseTurtleGraphicsCursor, color);
				MEMBER(v_pos, pulse_runtime_lib::CPulseTurtleGraphicsCursor, vector2d);
				MEMBER(fl_heading_deg, pulse_runtime_lib::CPulseTurtleGraphicsCursor, float);
				MEMBER(b_pen_up, pulse_runtime_lib::CPulseTurtleGraphicsCursor, bool);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CPulseTurtleGraphicsCursor

			class CTestDomainDerived_Cursor : public pulse_runtime_lib::CPulseExecCursor {
				MEMBER(n_cursor_value_a, pulse_runtime_lib::CTestDomainDerived_Cursor, int32_t);
				MEMBER(n_cursor_value_b, pulse_runtime_lib::CTestDomainDerived_Cursor, int32_t);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CTestDomainDerived_Cursor

			struct PulseNodeDynamicOutflows_t_DynamicOutflow_t {
				MEMBER(outflow_id, pulse_runtime_lib::PulseNodeDynamicOutflows_t_DynamicOutflow_t, CGlobalSymbol);
				MEMBER(connection, pulse_runtime_lib::PulseNodeDynamicOutflows_t_DynamicOutflow_t, pulse_runtime_lib::CPulse_OutflowConnection);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // struct PulseNodeDynamicOutflows_t_DynamicOutflow_t

			struct PulseNodeDynamicOutflows_t {
				MEMBER(outflows, pulse_runtime_lib::PulseNodeDynamicOutflows_t, cutl_vector<pulse_runtime_lib::PulseNodeDynamicOutflows_t_DynamicOutflow_t>);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // struct PulseNodeDynamicOutflows_t

			struct PulseRegisterMap_t {
				MEMBER(inparams, pulse_runtime_lib::PulseRegisterMap_t, KeyValues3);
				MEMBER(outparams, pulse_runtime_lib::PulseRegisterMap_t, KeyValues3);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // struct PulseRegisterMap_t

			struct PulseGraphExecutionHistoryCursorDesc_t {
				MEMBER(vec_ancestor_cursor_ids, pulse_runtime_lib::PulseGraphExecutionHistoryCursorDesc_t, cutl_vector<pulse_runtime_lib::PulseCursorID_t>);
				MEMBER(n_spawn_node_id, pulse_runtime_lib::PulseGraphExecutionHistoryCursorDesc_t, pulse_runtime_lib::PulseDocNodeID_t);
				MEMBER(n_retired_at_node_id, pulse_runtime_lib::PulseGraphExecutionHistoryCursorDesc_t, pulse_runtime_lib::PulseDocNodeID_t);
				MEMBER(fl_last_referenced, pulse_runtime_lib::PulseGraphExecutionHistoryCursorDesc_t, float);
				MEMBER(n_last_valid_entry_idx, pulse_runtime_lib::PulseGraphExecutionHistoryCursorDesc_t, int32_t);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // struct PulseGraphExecutionHistoryCursorDesc_t

			struct CPulseCell_Test_MultiOutflow_WithParams_Yielding_CursorState_t {
				MEMBER(n_test_step, pulse_runtime_lib::CPulseCell_Test_MultiOutflow_WithParams_Yielding_CursorState_t, int32_t);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // struct CPulseCell_Test_MultiOutflow_WithParams_Yielding_CursorState_t

			class CPulseCell_Base {
				MEMBER(n_editor_node_id, pulse_runtime_lib::CPulseCell_Base, pulse_runtime_lib::PulseDocNodeID_t);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CPulseCell_Base

			class CPulseCell_BaseFlow : public pulse_runtime_lib::CPulseCell_Base {

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CPulseCell_BaseFlow

			class CPulseCell_Outflow_CycleOrdered : public pulse_runtime_lib::CPulseCell_BaseFlow {
				MEMBER(outputs, pulse_runtime_lib::CPulseCell_Outflow_CycleOrdered, cutl_vector<pulse_runtime_lib::CPulse_OutflowConnection>);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CPulseCell_Outflow_CycleOrdered

			class CPulseCell_Step_DebugLog : public pulse_runtime_lib::CPulseCell_BaseFlow {

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CPulseCell_Step_DebugLog

			class CPulseCell_Outflow_TestRandomYesNo : public pulse_runtime_lib::CPulseCell_BaseFlow {
				MEMBER(yes, pulse_runtime_lib::CPulseCell_Outflow_TestRandomYesNo, pulse_runtime_lib::CPulse_OutflowConnection);
				MEMBER(no, pulse_runtime_lib::CPulseCell_Outflow_TestRandomYesNo, pulse_runtime_lib::CPulse_OutflowConnection);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CPulseCell_Outflow_TestRandomYesNo

			class CPulseCell_Outflow_TestExplicitYesNo : public pulse_runtime_lib::CPulseCell_BaseFlow {
				MEMBER(yes, pulse_runtime_lib::CPulseCell_Outflow_TestExplicitYesNo, pulse_runtime_lib::CPulse_OutflowConnection);
				MEMBER(no, pulse_runtime_lib::CPulseCell_Outflow_TestExplicitYesNo, pulse_runtime_lib::CPulse_OutflowConnection);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CPulseCell_Outflow_TestExplicitYesNo

			class CPulseCell_Inflow_BaseEntrypoint : public pulse_runtime_lib::CPulseCell_BaseFlow {
				MEMBER(entry_chunk, pulse_runtime_lib::CPulseCell_Inflow_BaseEntrypoint, pulse_runtime_lib::PulseRuntimeChunkIndex_t);
				MEMBER(register_map, pulse_runtime_lib::CPulseCell_Inflow_BaseEntrypoint, pulse_runtime_lib::PulseRegisterMap_t);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CPulseCell_Inflow_BaseEntrypoint

			class CPulseCell_Inflow_EntOutputHandler : public pulse_runtime_lib::CPulseCell_Inflow_BaseEntrypoint {
				MEMBER(source_entity, pulse_runtime_lib::CPulseCell_Inflow_EntOutputHandler, CUtlSymbolLarge);
				MEMBER(source_output, pulse_runtime_lib::CPulseCell_Inflow_EntOutputHandler, CUtlSymbolLarge);
				MEMBER(target_input, pulse_runtime_lib::CPulseCell_Inflow_EntOutputHandler, CUtlSymbolLarge);
				MEMBER(expected_param_type, pulse_runtime_lib::CPulseCell_Inflow_EntOutputHandler, CPulseValueFullType);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CPulseCell_Inflow_EntOutputHandler

			class CPulseCell_Inflow_ObservableVariableListener : public pulse_runtime_lib::CPulseCell_Inflow_BaseEntrypoint {
				MEMBER(blackboard_reference, pulse_runtime_lib::CPulseCell_Inflow_ObservableVariableListener, pulse_runtime_lib::CPulse_BlackboardReference);
				MEMBER(b_self_reference, pulse_runtime_lib::CPulseCell_Inflow_ObservableVariableListener, bool);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CPulseCell_Inflow_ObservableVariableListener

			class CPulseCell_Inflow_EventHandler : public pulse_runtime_lib::CPulseCell_Inflow_BaseEntrypoint {
				MEMBER(event_name, pulse_runtime_lib::CPulseCell_Inflow_EventHandler, CUtlSymbolLarge);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CPulseCell_Inflow_EventHandler

			class CPulseCell_Inflow_GraphHook : public pulse_runtime_lib::CPulseCell_Inflow_BaseEntrypoint {
				MEMBER(hook_name, pulse_runtime_lib::CPulseCell_Inflow_GraphHook, CUtlSymbolLarge);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CPulseCell_Inflow_GraphHook

			class CPulseCell_Inflow_Method : public pulse_runtime_lib::CPulseCell_Inflow_BaseEntrypoint {
				MEMBER(method_name, pulse_runtime_lib::CPulseCell_Inflow_Method, CUtlSymbolLarge);
				MEMBER(description, pulse_runtime_lib::CPulseCell_Inflow_Method, cutl_string);
				MEMBER(b_is_public, pulse_runtime_lib::CPulseCell_Inflow_Method, bool);
				MEMBER(return_type, pulse_runtime_lib::CPulseCell_Inflow_Method, CPulseValueFullType);
				MEMBER(args, pulse_runtime_lib::CPulseCell_Inflow_Method, CUtlLeanVector<pulse_runtime_lib::CPulseRuntimeMethodArg>);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CPulseCell_Inflow_Method

			class CPulseCell_Test_MultiInflow_NoDefault : public pulse_runtime_lib::CPulseCell_BaseFlow {

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CPulseCell_Test_MultiInflow_NoDefault

			class CPulseCell_Outflow_IntSwitch : public pulse_runtime_lib::CPulseCell_BaseFlow {
				MEMBER(default_case_outflow, pulse_runtime_lib::CPulseCell_Outflow_IntSwitch, pulse_runtime_lib::CPulse_OutflowConnection);
				MEMBER(case_outflows, pulse_runtime_lib::CPulseCell_Outflow_IntSwitch, cutl_vector<pulse_runtime_lib::CPulse_OutflowConnection>);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CPulseCell_Outflow_IntSwitch

			class CPulseCell_Step_TestDomainTracepoint : public pulse_runtime_lib::CPulseCell_BaseFlow {

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CPulseCell_Step_TestDomainTracepoint

			class CPulseCell_Step_TestDomainEntFire : public pulse_runtime_lib::CPulseCell_BaseFlow {
				MEMBER(input, pulse_runtime_lib::CPulseCell_Step_TestDomainEntFire, cutl_string);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CPulseCell_Step_TestDomainEntFire

			class CPulseCell_Step_TestDomainCreateFakeEntity : public pulse_runtime_lib::CPulseCell_BaseFlow {

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CPulseCell_Step_TestDomainCreateFakeEntity

			class CPulseCell_Outflow_CycleShuffled : public pulse_runtime_lib::CPulseCell_BaseFlow {
				MEMBER(outputs, pulse_runtime_lib::CPulseCell_Outflow_CycleShuffled, cutl_vector<pulse_runtime_lib::CPulse_OutflowConnection>);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CPulseCell_Outflow_CycleShuffled

			class CPulseCell_Outflow_CycleRandom : public pulse_runtime_lib::CPulseCell_BaseFlow {
				MEMBER(outputs, pulse_runtime_lib::CPulseCell_Outflow_CycleRandom, cutl_vector<pulse_runtime_lib::CPulse_OutflowConnection>);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CPulseCell_Outflow_CycleRandom

			class CPulseCell_Test_NoInflow : public pulse_runtime_lib::CPulseCell_BaseFlow {

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CPulseCell_Test_NoInflow

			class CPulseCell_Outflow_StringSwitch : public pulse_runtime_lib::CPulseCell_BaseFlow {
				MEMBER(default_case_outflow, pulse_runtime_lib::CPulseCell_Outflow_StringSwitch, pulse_runtime_lib::CPulse_OutflowConnection);
				MEMBER(case_outflows, pulse_runtime_lib::CPulseCell_Outflow_StringSwitch, cutl_vector<pulse_runtime_lib::CPulse_OutflowConnection>);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CPulseCell_Outflow_StringSwitch

			class CPulseCell_Test_MultiInflow_WithDefault : public pulse_runtime_lib::CPulseCell_BaseFlow {

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CPulseCell_Test_MultiInflow_WithDefault

			class CPulseCell_BaseYieldingInflow : public pulse_runtime_lib::CPulseCell_BaseFlow {

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CPulseCell_BaseYieldingInflow

			class CPulseCell_Test_MultiOutflow_WithParams_Yielding : public pulse_runtime_lib::CPulseCell_BaseYieldingInflow {
				MEMBER(out1, pulse_runtime_lib::CPulseCell_Test_MultiOutflow_WithParams_Yielding, pulse_runtime_lib::SignatureOutflow_Continue);
				MEMBER(async_child1, pulse_runtime_lib::CPulseCell_Test_MultiOutflow_WithParams_Yielding, pulse_runtime_lib::SignatureOutflow_Continue);
				MEMBER(async_child2, pulse_runtime_lib::CPulseCell_Test_MultiOutflow_WithParams_Yielding, pulse_runtime_lib::SignatureOutflow_Continue);
				MEMBER(yield_resume1, pulse_runtime_lib::CPulseCell_Test_MultiOutflow_WithParams_Yielding, pulse_runtime_lib::SignatureOutflow_Resume);
				MEMBER(yield_resume2, pulse_runtime_lib::CPulseCell_Test_MultiOutflow_WithParams_Yielding, pulse_runtime_lib::SignatureOutflow_Resume);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CPulseCell_Test_MultiOutflow_WithParams_Yielding

			class CPulseCell_TestWaitWithCursorState : public pulse_runtime_lib::CPulseCell_BaseYieldingInflow {
				MEMBER(wake_resume, pulse_runtime_lib::CPulseCell_TestWaitWithCursorState, pulse_runtime_lib::CPulse_ResumePoint);
				MEMBER(wake_cancel, pulse_runtime_lib::CPulseCell_TestWaitWithCursorState, pulse_runtime_lib::CPulse_ResumePoint);
				MEMBER(wake_fail, pulse_runtime_lib::CPulseCell_TestWaitWithCursorState, pulse_runtime_lib::CPulse_ResumePoint);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CPulseCell_TestWaitWithCursorState

			class CPulseCell_Step_CallExternalMethod : public pulse_runtime_lib::CPulseCell_BaseYieldingInflow {
				MEMBER(method_name, pulse_runtime_lib::CPulseCell_Step_CallExternalMethod, CUtlSymbolLarge);
				MEMBER(game_blackboard, pulse_runtime_lib::CPulseCell_Step_CallExternalMethod, CUtlSymbolLarge);
				MEMBER(expected_args, pulse_runtime_lib::CPulseCell_Step_CallExternalMethod, CUtlLeanVector<pulse_runtime_lib::CPulseRuntimeMethodArg>);
				MEMBER(n_async_call_mode, pulse_runtime_lib::CPulseCell_Step_CallExternalMethod, pulse_runtime_lib::PulseMethodCallMode_t);
				MEMBER(on_finished, pulse_runtime_lib::CPulseCell_Step_CallExternalMethod, pulse_runtime_lib::CPulse_ResumePoint);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CPulseCell_Step_CallExternalMethod

			class CPulseCell_Timeline : public pulse_runtime_lib::CPulseCell_BaseYieldingInflow {
				MEMBER(timeline_events, pulse_runtime_lib::CPulseCell_Timeline, cutl_vector<pulse_runtime_lib::CPulseCell_Timeline_TimelineEvent_t>);
				MEMBER(b_wait_for_child_outflows, pulse_runtime_lib::CPulseCell_Timeline, bool);
				MEMBER(on_finished, pulse_runtime_lib::CPulseCell_Timeline, pulse_runtime_lib::CPulse_ResumePoint);
				MEMBER(on_canceled, pulse_runtime_lib::CPulseCell_Timeline, pulse_runtime_lib::CPulse_ResumePoint);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CPulseCell_Timeline

			class CPulseCell_FireCursors : public pulse_runtime_lib::CPulseCell_BaseYieldingInflow {
				MEMBER(outflows, pulse_runtime_lib::CPulseCell_FireCursors, cutl_vector<pulse_runtime_lib::CPulse_OutflowConnection>);
				MEMBER(b_wait_for_child_outflows, pulse_runtime_lib::CPulseCell_FireCursors, bool);
				MEMBER(on_finished, pulse_runtime_lib::CPulseCell_FireCursors, pulse_runtime_lib::CPulse_ResumePoint);
				MEMBER(on_canceled, pulse_runtime_lib::CPulseCell_FireCursors, pulse_runtime_lib::CPulse_ResumePoint);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CPulseCell_FireCursors

			class CPulseCell_Inflow_Wait : public pulse_runtime_lib::CPulseCell_BaseYieldingInflow {
				MEMBER(wake_resume, pulse_runtime_lib::CPulseCell_Inflow_Wait, pulse_runtime_lib::CPulse_ResumePoint);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CPulseCell_Inflow_Wait

			class CPulseCell_Inflow_Yield : public pulse_runtime_lib::CPulseCell_BaseYieldingInflow {
				MEMBER(unyield_resume, pulse_runtime_lib::CPulseCell_Inflow_Yield, pulse_runtime_lib::CPulse_ResumePoint);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CPulseCell_Inflow_Yield

			class CPulseCell_BaseLerp : public pulse_runtime_lib::CPulseCell_BaseYieldingInflow {
				MEMBER(wake_resume, pulse_runtime_lib::CPulseCell_BaseLerp, pulse_runtime_lib::CPulse_ResumePoint);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CPulseCell_BaseLerp

			class CPulseCell_Test_MultiOutflow_WithParams : public pulse_runtime_lib::CPulseCell_BaseFlow {
				MEMBER(out1, pulse_runtime_lib::CPulseCell_Test_MultiOutflow_WithParams, pulse_runtime_lib::SignatureOutflow_Continue);
				MEMBER(out2, pulse_runtime_lib::CPulseCell_Test_MultiOutflow_WithParams, pulse_runtime_lib::SignatureOutflow_Continue);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CPulseCell_Test_MultiOutflow_WithParams

			class CPulseCell_Step_TestDomainDestroyFakeEntity : public pulse_runtime_lib::CPulseCell_BaseFlow {

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CPulseCell_Step_TestDomainDestroyFakeEntity

			class CPulseCell_Step_PublicOutput : public pulse_runtime_lib::CPulseCell_BaseFlow {
				MEMBER(output_index, pulse_runtime_lib::CPulseCell_Step_PublicOutput, pulse_runtime_lib::PulseRuntimeOutputIndex_t);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CPulseCell_Step_PublicOutput

			class CPulseCell_BaseValue : public pulse_runtime_lib::CPulseCell_Base {

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CPulseCell_BaseValue

			class CPulseCell_Value_RandomInt : public pulse_runtime_lib::CPulseCell_BaseValue {

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CPulseCell_Value_RandomInt

			class CPulseCell_Value_RandomFloat : public pulse_runtime_lib::CPulseCell_BaseValue {

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CPulseCell_Value_RandomFloat

			class CPulseCell_Val_TestDomainGetEntityName : public pulse_runtime_lib::CPulseCell_BaseValue {

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CPulseCell_Val_TestDomainGetEntityName

			class CPulseCell_Value_TestValue50 : public pulse_runtime_lib::CPulseCell_BaseValue {

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CPulseCell_Value_TestValue50

			class CPulseCell_Val_TestDomainFindEntityByName : public pulse_runtime_lib::CPulseCell_BaseValue {

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CPulseCell_Val_TestDomainFindEntityByName

			class CPulseCell_Unknown : public pulse_runtime_lib::CPulseCell_Base {
				MEMBER(unknown_keys, pulse_runtime_lib::CPulseCell_Unknown, KeyValues3);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CPulseCell_Unknown

			class CPulseCell_BaseRequirement : public pulse_runtime_lib::CPulseCell_Base {

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CPulseCell_BaseRequirement

			class CPulseCell_LimitCount : public pulse_runtime_lib::CPulseCell_BaseRequirement {
				MEMBER(n_limit_count, pulse_runtime_lib::CPulseCell_LimitCount, int32_t);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CPulseCell_LimitCount

			struct PulseCursorID_t {
				MEMBER(value, pulse_runtime_lib::PulseCursorID_t, int32_t);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // struct PulseCursorID_t

			class CPulse_OutflowConnection {
				MEMBER(source_outflow_name, pulse_runtime_lib::CPulse_OutflowConnection, CUtlSymbolLarge);
				MEMBER(n_dest_chunk, pulse_runtime_lib::CPulse_OutflowConnection, pulse_runtime_lib::PulseRuntimeChunkIndex_t);
				MEMBER(n_instruction, pulse_runtime_lib::CPulse_OutflowConnection, int32_t);
				MEMBER(outflow_register_map, pulse_runtime_lib::CPulse_OutflowConnection, pulse_runtime_lib::PulseRegisterMap_t);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CPulse_OutflowConnection

			class SignatureOutflow_Continue : public pulse_runtime_lib::CPulse_OutflowConnection {

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class SignatureOutflow_Continue

			class CPulse_ResumePoint : public pulse_runtime_lib::CPulse_OutflowConnection {

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CPulse_ResumePoint

			class SignatureOutflow_Resume : public pulse_runtime_lib::CPulse_ResumePoint {

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class SignatureOutflow_Resume

			struct PulseRuntimeRegisterIndex_t {
				MEMBER(value, pulse_runtime_lib::PulseRuntimeRegisterIndex_t, int16_t);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // struct PulseRuntimeRegisterIndex_t

			class CBasePulseGraphInstance {

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CBasePulseGraphInstance

			class CPulseGraphInstance_TestDomain : public pulse_runtime_lib::CBasePulseGraphInstance {
				MEMBER(b_is_running_unit_tests, pulse_runtime_lib::CPulseGraphInstance_TestDomain, bool);
				MEMBER(b_explicit_time_stepping, pulse_runtime_lib::CPulseGraphInstance_TestDomain, bool);
				MEMBER(b_expecting_to_destroy_with_yielded_cursors, pulse_runtime_lib::CPulseGraphInstance_TestDomain, bool);
				MEMBER(n_next_validate_index, pulse_runtime_lib::CPulseGraphInstance_TestDomain, int32_t);
				MEMBER(tracepoints, pulse_runtime_lib::CPulseGraphInstance_TestDomain, cutl_vector<cutl_string>);
				MEMBER(b_test_yes_or_no_path, pulse_runtime_lib::CPulseGraphInstance_TestDomain, bool);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CPulseGraphInstance_TestDomain

			class CPulseGraphInstance_TestDomain_Derived : public pulse_runtime_lib::CPulseGraphInstance_TestDomain {
				MEMBER(n_instance_value_x, pulse_runtime_lib::CPulseGraphInstance_TestDomain_Derived, int32_t);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CPulseGraphInstance_TestDomain_Derived

			class CPulseGraphInstance_TurtleGraphics : public pulse_runtime_lib::CBasePulseGraphInstance {

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CPulseGraphInstance_TurtleGraphics

			class CPulseTestScriptLib {

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CPulseTestScriptLib

			struct CPulseCell_Outflow_CycleOrdered_InstanceState_t {
				MEMBER(n_next_index, pulse_runtime_lib::CPulseCell_Outflow_CycleOrdered_InstanceState_t, int32_t);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // struct CPulseCell_Outflow_CycleOrdered_InstanceState_t

			struct CPulseCell_Timeline_TimelineEvent_t {
				MEMBER(fl_time_from_previous, pulse_runtime_lib::CPulseCell_Timeline_TimelineEvent_t, float);
				MEMBER(b_pause_for_previous_events, pulse_runtime_lib::CPulseCell_Timeline_TimelineEvent_t, bool);
				MEMBER(b_call_mode_sync, pulse_runtime_lib::CPulseCell_Timeline_TimelineEvent_t, bool);
				MEMBER(event_outflow, pulse_runtime_lib::CPulseCell_Timeline_TimelineEvent_t, pulse_runtime_lib::CPulse_OutflowConnection);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // struct CPulseCell_Timeline_TimelineEvent_t

			struct PulseRuntimeInvokeIndex_t {
				MEMBER(value, pulse_runtime_lib::PulseRuntimeInvokeIndex_t, int32_t);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // struct PulseRuntimeInvokeIndex_t

			struct PulseRuntimeDomainValueIndex_t {
				MEMBER(value, pulse_runtime_lib::PulseRuntimeDomainValueIndex_t, int16_t);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // struct PulseRuntimeDomainValueIndex_t

			class CPulse_Chunk {
				MEMBER(instructions, pulse_runtime_lib::CPulse_Chunk, CUtlLeanVector<pulse_runtime_lib::PGDInstruction_t>);
				MEMBER(registers, pulse_runtime_lib::CPulse_Chunk, CUtlLeanVector<pulse_runtime_lib::CPulse_RegisterInfo>);
				MEMBER(instruction_editor_ids, pulse_runtime_lib::CPulse_Chunk, CUtlLeanVector<pulse_runtime_lib::PulseDocNodeID_t>);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CPulse_Chunk

			class CPulseGraphExecutionHistory {
				MEMBER(n_instance_id, pulse_runtime_lib::CPulseGraphExecutionHistory, pulse_runtime_lib::PulseGraphInstanceID_t);
				MEMBER(str_file_name, pulse_runtime_lib::CPulseGraphExecutionHistory, cutl_string);
				MEMBER(vec_history, pulse_runtime_lib::CPulseGraphExecutionHistory, cutl_vector<pulse_runtime_lib::PulseGraphExecutionHistoryEntry_t*>);
				MEMBER(map_cell_desc, pulse_runtime_lib::CPulseGraphExecutionHistory, CUtlOrderedMap<pulse_runtime_lib::PulseDocNodeID_t,pulse_runtime_lib::PulseGraphExecutionHistoryNodeDesc_t*>);
				MEMBER(map_cursor_desc, pulse_runtime_lib::CPulseGraphExecutionHistory, CUtlOrderedMap<pulse_runtime_lib::PulseCursorID_t,pulse_runtime_lib::PulseGraphExecutionHistoryCursorDesc_t*>);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CPulseGraphExecutionHistory

			struct PulseRuntimeVarIndex_t {
				MEMBER(value, pulse_runtime_lib::PulseRuntimeVarIndex_t, int32_t);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // struct PulseRuntimeVarIndex_t

			struct PulseRuntimeEntrypointIndex_t {
				MEMBER(value, pulse_runtime_lib::PulseRuntimeEntrypointIndex_t, int32_t);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // struct PulseRuntimeEntrypointIndex_t

		} // namespace pulse_runtime_lib
	} // namespace schema
} // namespace sdk
#endif // SDK_SCHEMA_pulse_runtime_lib_H
