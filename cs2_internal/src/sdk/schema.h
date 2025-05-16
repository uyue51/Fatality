#pragma once

#include <array>
#include <sdk/macros.h>
#include <sdk/utl.h>

namespace sdk
{
	class schema_type;

	struct schema_type_t
	{
		MEM_PAD(8);
		const char *name;
	};

	struct schema_class_binding_t
	{
		schema_class_binding_t *parent;
		const char *binary_name;
		const char *module_name;
		const char *class_name;
		char pad[24];
		schema_type_t *type;
	};

	struct schema_class_field_data_t
	{
		const char *name;
		schema_type *type;
		short offset;
		MEM_PAD(0xe);
	};

	struct schema_class_info_data_t
	{
		MEM_PAD(8);
		const char *name;
		const char *mod;
		int size;
		short field_size;
		short static_size;
		short meta_size;
		MEM_PAD(6);
		schema_class_field_data_t *fields;
	};

	class schema_enum_binding
	{
	public:
		virtual const char *get_binding_name() = 0;
		virtual void *as_class_binding() = 0;
		virtual schema_enum_binding *as_enum_binding() = 0;
		virtual const char *get_binary_name() = 0;
		virtual const char *get_project_name() = 0;

		char *binding_name;
	};

	class schema_system_type_scope
	{
	public:
		void find_type_declared_class(schema_class_info_data_t** pReturnClass, const char* szClassName)
		{
			return utils::CallVFunc<void, 2U>(this, pReturnClass, szClassName);
		}


		MEM_PAD(8);
		std::array<char, 256> name_value;
		MEM_PAD(0x450);
		utl_ts_hash<schema_class_binding_t *> classes;
		MEM_PAD(0x2804);
	};

	class schema_type
	{
		struct array_t
		{
			int size;
			int pad;
			schema_type *type;
		};

		struct atomic_t
		{
			uint64_t pad[2];
			schema_type *type;
		};

		struct atomic_tt
		{
			uint64_t pad[2];
			schema_type *types[2];
		};

		struct atomic_i
		{
			uint64_t pad[2];
			uint64_t i;
		};

	public:
		bool get_sizes(int* pOutSize, uint8_t* unkPtr)
		{
			return utils::CallVFunc<bool, 3U>(this, pOutSize, unkPtr);
		}

		bool get_size(int* out_size)
		{
			uint8_t smh = 0;
			return get_sizes(out_size, &smh);
		}

		schema_type *get_ref_class()
		{
			if (category != 1)
				return nullptr;

			auto ptr = type;
			while (ptr && ptr->category == 1)
				ptr = ptr->type;

			return ptr;
		}

		MEM_PAD(8);
		const char *name;
		schema_system_type_scope *type_scope;
		uint8_t category;
		uint8_t atomic_category;

		union
		{
			schema_type *type;
			schema_class_info_data_t *class_info;
			void *enum_binding;
			array_t arr;
			atomic_t t;
			atomic_tt tt;
			atomic_i i;
		};
	};

	class schema_system_t
	{
	public:
		schema_system_type_scope* get_global_type()
		{
			return utils::CallVFunc<schema_system_type_scope*, 11>(this);
		}

		schema_system_type_scope* get_type_scope_for_module(const char* name)
		{
			return utils::CallVFunc<schema_system_type_scope*, 13>(this, name);
		}

	};
}
