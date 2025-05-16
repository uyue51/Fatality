// generated on: Mon Nov 18 16:22:35 2024
#ifndef SDK_SCHEMA_host_H
#define SDK_SCHEMA_host_H

#include <cstdint>

namespace sdk {
	namespace schema {
		namespace host {
			class CAnimScriptBase;
			class EmptyTestScript;
			class CAnimScriptBase {
				MEMBER(b_is_valid, host::CAnimScriptBase, bool);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CAnimScriptBase

			class EmptyTestScript : public host::CAnimScriptBase {
				MEMBER(h_test, host::EmptyTestScript, CAnimScriptParam<float>);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class EmptyTestScript

		} // namespace host
	} // namespace schema
} // namespace sdk
#endif // SDK_SCHEMA_host_H
