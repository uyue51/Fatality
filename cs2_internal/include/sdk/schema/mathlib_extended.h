// generated on: Mon Nov 18 16:22:34 2024
#ifndef SDK_SCHEMA_mathlib_extended_H
#define SDK_SCHEMA_mathlib_extended_H

#include <cstdint>

namespace sdk {
	namespace schema {
		namespace mathlib_extended {
			class FuseVariableIndex_t;
			class FunctionInfo_t;
			class CFuseProgram;
			class FourQuaternions;
			class AABB_t;
			class CFuseSymbolTable;
			class VariableInfo_t;
			class FuseFunctionIndex_t;
			class ConstantInfo_t;
			class PackedAABB_t;
			// Enumerator count: 81
			// Alignment: 
			// Size: 0x1
			enum class fieldtype_t : std::uint8_t {
				FIELD_VOID = 0,
				FIELD_FLOAT32 = 1,
				FIELD_STRING = 2,
				FIELD_VECTOR = 3,
				FIELD_QUATERNION = 4,
				FIELD_INT32 = 5,
				FIELD_BOOLEAN = 6,
				FIELD_INT16 = 7,
				FIELD_CHARACTER = 8,
				FIELD_COLOR32 = 9,
				FIELD_EMBEDDED = 10,
				FIELD_CUSTOM = 11,
				FIELD_CLASSPTR = 12,
				FIELD_EHANDLE = 13,
				FIELD_POSITION_VECTOR = 14,
				FIELD_TIME = 15,
				FIELD_TICK = 16,
				FIELD_SOUNDNAME = 17,
				FIELD_INPUT = 18,
				FIELD_FUNCTION = 19,
				FIELD_VMATRIX = 20,
				FIELD_VMATRIX_WORLDSPACE = 21,
				FIELD_MATRIX3X4_WORLDSPACE = 22,
				FIELD_INTERVAL = 23,
				FIELD_UNUSED = 24,
				FIELD_VECTOR2D = 25,
				FIELD_INT64 = 26,
				FIELD_VECTOR4D = 27,
				FIELD_RESOURCE = 28,
				FIELD_TYPEUNKNOWN = 29,
				FIELD_CSTRING = 30,
				FIELD_HSCRIPT = 31,
				FIELD_VARIANT = 32,
				FIELD_UINT64 = 33,
				FIELD_FLOAT64 = 34,
				FIELD_POSITIVEINTEGER_OR_NULL = 35,
				FIELD_HSCRIPT_NEW_INSTANCE = 36,
				FIELD_UINT32 = 37,
				FIELD_UTLSTRINGTOKEN = 38,
				FIELD_QANGLE = 39,
				FIELD_NETWORK_ORIGIN_CELL_QUANTIZED_VECTOR = 40,
				FIELD_HMATERIAL = 41,
				FIELD_HMODEL = 42,
				FIELD_NETWORK_QUANTIZED_VECTOR = 43,
				FIELD_NETWORK_QUANTIZED_FLOAT = 44,
				FIELD_DIRECTION_VECTOR_WORLDSPACE = 45,
				FIELD_QANGLE_WORLDSPACE = 46,
				FIELD_QUATERNION_WORLDSPACE = 47,
				FIELD_HSCRIPT_LIGHTBINDING = 48,
				FIELD_V8_VALUE = 49,
				FIELD_V8_OBJECT = 50,
				FIELD_V8_ARRAY = 51,
				FIELD_V8_CALLBACK_INFO = 52,
				FIELD_UTLSTRING = 53,
				FIELD_NETWORK_ORIGIN_CELL_QUANTIZED_POSITION_VECTOR = 54,
				FIELD_HRENDERTEXTURE = 55,
				FIELD_HPARTICLESYSTEMDEFINITION = 56,
				FIELD_UINT8 = 57,
				FIELD_UINT16 = 58,
				FIELD_CTRANSFORM = 59,
				FIELD_CTRANSFORM_WORLDSPACE = 60,
				FIELD_HPOSTPROCESSING = 61,
				FIELD_MATRIX3X4 = 62,
				FIELD_SHIM = 63,
				FIELD_CMOTIONTRANSFORM = 64,
				FIELD_CMOTIONTRANSFORM_WORLDSPACE = 65,
				FIELD_ATTACHMENT_HANDLE = 66,
				FIELD_AMMO_INDEX = 67,
				FIELD_CONDITION_ID = 68,
				FIELD_AI_SCHEDULE_BITS = 69,
				FIELD_MODIFIER_HANDLE = 70,
				FIELD_ROTATION_VECTOR = 71,
				FIELD_ROTATION_VECTOR_WORLDSPACE = 72,
				FIELD_HVDATA = 73,
				FIELD_SCALE32 = 74,
				FIELD_STRING_AND_TOKEN = 75,
				FIELD_ENGINE_TIME = 76,
				FIELD_ENGINE_TICK = 77,
				FIELD_WORLD_GROUP_ID = 78,
				FIELD_GLOBALSYMBOL = 79,
				FIELD_TYPECOUNT = 80,
			};
			// Enumerator count: 2
			// Alignment: 
			// Size: 0x1
			enum class FuseVariableAccess_t : std::uint8_t {
				WRITABLE = 0,
				READ_ONLY = 1,
			};
			// Enumerator count: 9
			// Alignment: 
			// Size: 0x1
			enum class FuseVariableType_t : std::uint8_t {
				INVALID = 0,
				BOOL = 1,
				INT8 = 2,
				INT16 = 3,
				INT32 = 4,
				UINT8 = 5,
				UINT16 = 6,
				UINT32 = 7,
				FLOAT32 = 8,
			};
			struct FuseVariableIndex_t {
				MEMBER(value, mathlib_extended::FuseVariableIndex_t, uint16_t);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // struct FuseVariableIndex_t

			struct FunctionInfo_t {
				MEMBER(name, mathlib_extended::FunctionInfo_t, cutl_string);
				MEMBER(name_token, mathlib_extended::FunctionInfo_t, CUtlStringToken);
				MEMBER(n_param_count, mathlib_extended::FunctionInfo_t, int32_t);
				MEMBER(n_index, mathlib_extended::FunctionInfo_t, mathlib_extended::FuseFunctionIndex_t);
				MEMBER(b_is_pure, mathlib_extended::FunctionInfo_t, bool);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // struct FunctionInfo_t

			class CFuseProgram {
				MEMBER(program_buffer, mathlib_extended::CFuseProgram, cutl_vector<uint8_t>);
				MEMBER(variables_read, mathlib_extended::CFuseProgram, cutl_vector<mathlib_extended::FuseVariableIndex_t>);
				MEMBER(variables_written, mathlib_extended::CFuseProgram, cutl_vector<mathlib_extended::FuseVariableIndex_t>);
				MEMBER(n_max_temp_vars_used, mathlib_extended::CFuseProgram, int32_t);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CFuseProgram

			class FourQuaternions {
				MEMBER(x, mathlib_extended::FourQuaternions, fltx4);
				MEMBER(y, mathlib_extended::FourQuaternions, fltx4);
				MEMBER(z, mathlib_extended::FourQuaternions, fltx4);
				MEMBER(w, mathlib_extended::FourQuaternions, fltx4);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class FourQuaternions

			struct AABB_t {
				MEMBER(v_min_bounds, mathlib_extended::AABB_t, vector);
				MEMBER(v_max_bounds, mathlib_extended::AABB_t, vector);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // struct AABB_t

			class CFuseSymbolTable {
				MEMBER(constants, mathlib_extended::CFuseSymbolTable, cutl_vector<mathlib_extended::ConstantInfo_t>);
				MEMBER(variables, mathlib_extended::CFuseSymbolTable, cutl_vector<mathlib_extended::VariableInfo_t>);
				MEMBER(functions, mathlib_extended::CFuseSymbolTable, cutl_vector<mathlib_extended::FunctionInfo_t>);
				MEMBER(constant_map, mathlib_extended::CFuseSymbolTable, CUtlHashtable<CUtlStringToken,int32_t>);
				MEMBER(variable_map, mathlib_extended::CFuseSymbolTable, CUtlHashtable<CUtlStringToken,int32_t>);
				MEMBER(function_map, mathlib_extended::CFuseSymbolTable, CUtlHashtable<CUtlStringToken,int32_t>);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CFuseSymbolTable

			struct VariableInfo_t {
				MEMBER(name, mathlib_extended::VariableInfo_t, cutl_string);
				MEMBER(name_token, mathlib_extended::VariableInfo_t, CUtlStringToken);
				MEMBER(n_index, mathlib_extended::VariableInfo_t, mathlib_extended::FuseVariableIndex_t);
				MEMBER(n_num_components, mathlib_extended::VariableInfo_t, uint8_t);
				MEMBER(e_var_type, mathlib_extended::VariableInfo_t, mathlib_extended::FuseVariableType_t);
				MEMBER(e_access, mathlib_extended::VariableInfo_t, mathlib_extended::FuseVariableAccess_t);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // struct VariableInfo_t

			struct FuseFunctionIndex_t {
				MEMBER(value, mathlib_extended::FuseFunctionIndex_t, uint16_t);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // struct FuseFunctionIndex_t

			struct ConstantInfo_t {
				MEMBER(name, mathlib_extended::ConstantInfo_t, cutl_string);
				MEMBER(name_token, mathlib_extended::ConstantInfo_t, CUtlStringToken);
				MEMBER(fl_value, mathlib_extended::ConstantInfo_t, float);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // struct ConstantInfo_t

			struct PackedAABB_t {
				MEMBER(n_packed_min, mathlib_extended::PackedAABB_t, uint32_t);
				MEMBER(n_packed_max, mathlib_extended::PackedAABB_t, uint32_t);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // struct PackedAABB_t

		} // namespace mathlib_extended
	} // namespace schema
} // namespace sdk
#endif // SDK_SCHEMA_mathlib_extended_H
