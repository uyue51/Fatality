// generated on: Mon Nov 18 16:22:34 2024
#ifndef SDK_SCHEMA_resourcefile_H
#define SDK_SCHEMA_resourcefile_H

#include <cstdint>

namespace sdk {
	namespace schema {
		namespace resourcefile {
			class CExampleSchemaVData_Monomorphic;
			class CExampleSchemaVData_PolymorphicBase;
			class CExampleSchemaVData_PolymorphicDerivedB;
			class CExampleSchemaVData_PolymorphicDerivedA;
			class ResourceId_t;
			class InfoForResourceTypeCResourceManifestInternal;
			class CExampleSchemaVData_Monomorphic {
				MEMBER(n_example1, resourcefile::CExampleSchemaVData_Monomorphic, int32_t);
				MEMBER(n_example2, resourcefile::CExampleSchemaVData_Monomorphic, int32_t);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CExampleSchemaVData_Monomorphic

			class CExampleSchemaVData_PolymorphicBase {
				MEMBER(n_base, resourcefile::CExampleSchemaVData_PolymorphicBase, int32_t);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CExampleSchemaVData_PolymorphicBase

			class CExampleSchemaVData_PolymorphicDerivedB : public resourcefile::CExampleSchemaVData_PolymorphicBase {
				MEMBER(n_derived_b, resourcefile::CExampleSchemaVData_PolymorphicDerivedB, int32_t);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CExampleSchemaVData_PolymorphicDerivedB

			class CExampleSchemaVData_PolymorphicDerivedA : public resourcefile::CExampleSchemaVData_PolymorphicBase {
				MEMBER(n_derived_a, resourcefile::CExampleSchemaVData_PolymorphicDerivedA, int32_t);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CExampleSchemaVData_PolymorphicDerivedA

			struct ResourceId_t {
				MEMBER(value, resourcefile::ResourceId_t, uint64_t);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // struct ResourceId_t

			class InfoForResourceTypeCResourceManifestInternal {

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class InfoForResourceTypeCResourceManifestInternal

		} // namespace resourcefile
	} // namespace schema
} // namespace sdk
#endif // SDK_SCHEMA_resourcefile_H
