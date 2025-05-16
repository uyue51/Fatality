// generated on: Mon Nov 18 16:22:35 2024
#ifndef SDK_SCHEMA_pulse_system_H
#define SDK_SCHEMA_pulse_system_H

#include <cstdint>

#include <sdk/schema/pulse_runtime_lib.h>
#include <sdk/schema/pulse_system.h>
namespace sdk {
	namespace schema {
		namespace pulse_system {
			class CPulseCursorFuncs;
			class CPulseCell_WaitForCursorsWithTagBase_CursorState_t;
			class CPulseTestFuncs_LibraryA;
			class CPulseCell_WaitForCursorsWithTagBase;
			class CPulseCell_WaitForCursorsWithTag;
			class CPulseCell_CursorQueue;
			class CPulseCursorFuncs {

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CPulseCursorFuncs

			struct CPulseCell_WaitForCursorsWithTagBase_CursorState_t {
				MEMBER(tag_name, pulse_system::CPulseCell_WaitForCursorsWithTagBase_CursorState_t, CUtlSymbolLarge);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // struct CPulseCell_WaitForCursorsWithTagBase_CursorState_t

			class CPulseTestFuncs_LibraryA {

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CPulseTestFuncs_LibraryA

			class CPulseCell_WaitForCursorsWithTagBase : public pulse_runtime_lib::CPulseCell_BaseYieldingInflow {
				MEMBER(n_cursors_allowed_to_wait, pulse_system::CPulseCell_WaitForCursorsWithTagBase, int32_t);
				MEMBER(wait_complete, pulse_system::CPulseCell_WaitForCursorsWithTagBase, pulse_runtime_lib::CPulse_ResumePoint);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CPulseCell_WaitForCursorsWithTagBase

			class CPulseCell_WaitForCursorsWithTag : public pulse_system::CPulseCell_WaitForCursorsWithTagBase {
				MEMBER(b_tag_self_when_complete, pulse_system::CPulseCell_WaitForCursorsWithTag, bool);
				MEMBER(n_desired_kill_priority, pulse_system::CPulseCell_WaitForCursorsWithTag, pulse_runtime_lib::PulseCursorCancelPriority_t);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CPulseCell_WaitForCursorsWithTag

			class CPulseCell_CursorQueue : public pulse_system::CPulseCell_WaitForCursorsWithTagBase {
				MEMBER(n_cursors_allowed_to_run_parallel, pulse_system::CPulseCell_CursorQueue, int32_t);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CPulseCell_CursorQueue

		} // namespace pulse_system
	} // namespace schema
} // namespace sdk
#endif // SDK_SCHEMA_pulse_system_H
