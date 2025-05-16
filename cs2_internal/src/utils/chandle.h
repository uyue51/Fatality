#pragma once
#include "utils/common.h"

constexpr auto invalid_ehandle_index = 0xffffffff;
constexpr auto ent_entry_mask = 0x7fff;
constexpr auto num_serial_num_shift_bits = 15;

namespace sdk
{
	template <typename T>
	class chandle
	{
	public:
		uint32_t index;

		// Default constructor
		chandle() noexcept : index(invalid_ehandle_index) {}

		// Parameterized constructor
		chandle(const int nEntry, const int nSerial) noexcept {
			CS_ASSERT(nEntry >= 0 && (nEntry & ent_entry_mask) == nEntry);
			CS_ASSERT(nSerial >= 0 && nSerial < (1 << num_serial_num_shift_bits));

			index = nEntry | (nSerial << num_serial_num_shift_bits);
		}

		// Comparison operators
		bool operator!=(const chandle& other) const noexcept {
			return index != other.index;
		}

		bool operator==(const chandle& other) const noexcept {
			return index == other.index;
		}

		bool operator<(const chandle& other) const noexcept {
			return index < other.index;
		}

		// Get the underlying object pointer
		T* get();

		// Get the pointer as another type
		template <typename C>
		C* get_as();

		bool valid() const { return index != invalid_ehandle_index; }
		uint32_t get_entry_index() const { return valid() ? index & ent_entry_mask : ent_entry_mask; }
		uint32_t get_serial_number() const { return index >> num_serial_num_shift_bits; }
	};
}