// generated on: Mon Nov 18 16:22:34 2024
#ifndef SDK_SCHEMA_schemasystem_H
#define SDK_SCHEMA_schemasystem_H

#include <cstdint>

namespace sdk {
	namespace schema {
		namespace schemasystem {
			class CSchemaSystemInternalRegistration;
			// Enumerator count: 3
			// Alignment: 
			// Size: 0x4
			enum class ThreeState_t : std::uint32_t {
				TRS_FALSE = 0x0,
				TRS_TRUE = 0x1,
				TRS_NONE = 0x2,
			};
			class CSchemaSystemInternalRegistration {
				MEMBER(vector2_d, schemasystem::CSchemaSystemInternalRegistration, vector2d);
				MEMBER(vector, schemasystem::CSchemaSystemInternalRegistration, vector);
				MEMBER(vector_aligned, schemasystem::CSchemaSystemInternalRegistration, vector_aligned);
				MEMBER(quaternion, schemasystem::CSchemaSystemInternalRegistration, quaternion);
				MEMBER(qangle, schemasystem::CSchemaSystemInternalRegistration, qangle);
				MEMBER(rotation_vector, schemasystem::CSchemaSystemInternalRegistration, rotation_vector);
				MEMBER(radian_euler, schemasystem::CSchemaSystemInternalRegistration, degree_euler);
				MEMBER(degree_euler, schemasystem::CSchemaSystemInternalRegistration, degree_euler);
				MEMBER(quaternion_storage, schemasystem::CSchemaSystemInternalRegistration, quaternion_storage);
				MEMBER(matrix3x4_t, schemasystem::CSchemaSystemInternalRegistration, matrix3x4_t);
				MEMBER(matrix3x4a_t, schemasystem::CSchemaSystemInternalRegistration, matrix3x4a_t);
				MEMBER(color, schemasystem::CSchemaSystemInternalRegistration, color);
				MEMBER(vector4_d, schemasystem::CSchemaSystemInternalRegistration, vector4d);
				MEMBER(ctransform, schemasystem::CSchemaSystemInternalRegistration, CTransform);
				///MEMBER(p_key_values, schemasystem::CSchemaSystemInternalRegistration, KeyValues*);
				MEMBER(cutl_binary_block, schemasystem::CSchemaSystemInternalRegistration, CUtlBinaryBlock);
				MEMBER(cutl_string, schemasystem::CSchemaSystemInternalRegistration, cutl_string);
				MEMBER(cutl_symbol, schemasystem::CSchemaSystemInternalRegistration, CUtlSymbol);
				MEMBER(string_token, schemasystem::CSchemaSystemInternalRegistration, CUtlStringToken);
				MEMBER(string_token_with_storage, schemasystem::CSchemaSystemInternalRegistration, CUtlStringTokenWithStorage);
				MEMBER(resource_types, schemasystem::CSchemaSystemInternalRegistration, CResourceArray<CResourcePointer<CResourceString>>);
				MEMBER(kv3, schemasystem::CSchemaSystemInternalRegistration, KeyValues3);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CSchemaSystemInternalRegistration

		} // namespace schemasystem
	} // namespace schema
} // namespace sdk
#endif // SDK_SCHEMA_schemasystem_H
