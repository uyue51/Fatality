// generated on: Mon Nov 18 16:22:34 2024
#ifndef SDK_SCHEMA_entity2_H
#define SDK_SCHEMA_entity2_H

#include <cstdint>

#include <sdk/schema/networksystem.h>
namespace sdk {
	namespace schema {
		namespace entity2 {
			class CScriptComponent;
			class CEntityIdentity;
			class EntComponentInfo_t;
			class CEmptyEntityInstance;
			class EntOutput_t;
			class CNetworkVarChainer;
			class EntInput_t;
			class CEntityComponent;
			class GameTick_t;
			class CEntityIOOutput;
			class CEntityComponentHelper;
			class GameTime_t;
			class CVariantDefaultAllocator;
			class CEntityInstance;
			// Enumerator count: 3
			// Alignment: 
			// Size: 0x4
			enum class EntityDormancyType_t : std::uint32_t {
				ENTITY_NOT_DORMANT = 0x0,
				ENTITY_DORMANT = 0x1,
				ENTITY_SUSPENDED = 0x2,
			};
			// Enumerator count: 4
			// Alignment: 
			// Size: 0x4
			enum class EntityIOTargetType_t : std::uint32_t {
				ENTITY_IO_TARGET_INVALID = 0xffffffff,
				ENTITY_IO_TARGET_ENTITYNAME = 0x2,
				ENTITY_IO_TARGET_EHANDLE = 0x6,
				ENTITY_IO_TARGET_ENTITYNAME_OR_CLASSNAME = 0x7,
			};
			class CEntityInstance {
			public:
				MEMBER(isz_private_vscripts, entity2::CEntityInstance, CUtlSymbolLarge);
				MEMBER(p_entity, entity2::CEntityInstance, entity2::CEntityIdentity*);
				MEMBER(cscript_component, entity2::CEntityInstance, entity2::CScriptComponent*);
				MEMBER(b_visiblein_pvs, entity2::CEntityInstance, bool);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CEntityInstance

			class CEntityComponent {

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CEntityComponent

			class CScriptComponent : public entity2::CEntityComponent {
				MEMBER(script_class_name, entity2::CScriptComponent, CUtlSymbolLarge);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CScriptComponent

			class CEntityIdentity {
			public:
				MEMBER(name_stringable_index, entity2::CEntityIdentity, int32_t);
				MEMBER(name, entity2::CEntityIdentity, CUtlSymbolLarge);
				MEMBER(designer_name, entity2::CEntityIdentity, CUtlSymbolLarge);
				MEMBER(flags, entity2::CEntityIdentity, uint32_t);
				MEMBER(world_group_id, entity2::CEntityIdentity, WorldGroupId_t);
				MEMBER(f_data_object_types, entity2::CEntityIdentity, uint32_t);
				MEMBER(path_index, entity2::CEntityIdentity, networksystem::ChangeAccessorFieldPathIndex_t);
				MEMBER(p_prev, entity2::CEntityIdentity, entity2::CEntityIdentity*);
				MEMBER(p_next, entity2::CEntityIdentity, entity2::CEntityIdentity*);
				MEMBER(p_prev_by_class, entity2::CEntityIdentity, entity2::CEntityIdentity*);
				MEMBER(p_next_by_class, entity2::CEntityIdentity, entity2::CEntityIdentity*);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CEntityIdentity


			struct EntComponentInfo_t {
				MEMBER(p_name, entity2::EntComponentInfo_t, char*);
				MEMBER(p_cppclassname, entity2::EntComponentInfo_t, char*);
				MEMBER(p_network_data_referenced_description, entity2::EntComponentInfo_t, char*);
				MEMBER(p_network_data_referenced_ptr_prop_description, entity2::EntComponentInfo_t, char*);
				MEMBER(n_runtime_index, entity2::EntComponentInfo_t, int32_t);
				MEMBER(n_flags, entity2::EntComponentInfo_t, uint32_t);
				MEMBER(p_base_class_component_helper, entity2::EntComponentInfo_t, entity2::CEntityComponentHelper*);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // struct EntComponentInfo_t

			class CEmptyEntityInstance {

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CEmptyEntityInstance

			struct EntOutput_t {

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // struct EntOutput_t

			class CNetworkVarChainer {
				MEMBER(path_index, entity2::CNetworkVarChainer, networksystem::ChangeAccessorFieldPathIndex_t);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CNetworkVarChainer

			struct EntInput_t {

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // struct EntInput_t

			struct GameTick_t {
				MEMBER(value, entity2::GameTick_t, int32_t);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // struct GameTick_t

			class CEntityIOOutput {
				MEMBER(value, entity2::CEntityIOOutput, CVariantBase<entity2::CVariantDefaultAllocator>);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CEntityIOOutput

			class CEntityComponentHelper {
				MEMBER(flags, entity2::CEntityComponentHelper, uint32_t);
				MEMBER(p_info, entity2::CEntityComponentHelper, entity2::EntComponentInfo_t*);
				MEMBER(n_priority, entity2::CEntityComponentHelper, int32_t);
				MEMBER(p_next, entity2::CEntityComponentHelper, entity2::CEntityComponentHelper*);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CEntityComponentHelper

			struct GameTime_t {
				MEMBER(value, entity2::GameTime_t, float);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // struct GameTime_t

			class CVariantDefaultAllocator {

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CVariantDefaultAllocator

		} // namespace entity2
	} // namespace schema
} // namespace sdk
#endif // SDK_SCHEMA_entity2_H
