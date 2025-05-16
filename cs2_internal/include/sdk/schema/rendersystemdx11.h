// generated on: Mon Nov 18 16:22:35 2024
#ifndef SDK_SCHEMA_rendersystemdx11_H
#define SDK_SCHEMA_rendersystemdx11_H

#include <cstdint>

namespace sdk {
	namespace schema {
		namespace rendersystemdx11 {
			class VsInputSignature_t;
			class VsInputSignatureElement_t;
			class RenderInputLayoutField_t;
			// Enumerator count: 4
			// Alignment: 
			// Size: 0x4
			enum class InputLayoutVariation_t : std::uint32_t {
				INPUT_LAYOUT_VARIATION_DEFAULT = 0x0,
				INPUT_LAYOUT_VARIATION_STREAM1_INSTANCEID = 0x1,
				INPUT_LAYOUT_VARIATION_STREAM1_INSTANCEID_MORPH_VERT_ID = 0x2,
				INPUT_LAYOUT_VARIATION_MAX = 0x3,
			};
			// Enumerator count: 8
			// Alignment: 
			// Size: 0x1
			enum class RenderMultisampleType_t : std::uint8_t {
				RENDER_MULTISAMPLE_INVALID = 255,
				RENDER_MULTISAMPLE_NONE = 0,
				RENDER_MULTISAMPLE_2X = 1,
				RENDER_MULTISAMPLE_4X = 2,
				RENDER_MULTISAMPLE_6X = 3,
				RENDER_MULTISAMPLE_8X = 4,
				RENDER_MULTISAMPLE_16X = 5,
				RENDER_MULTISAMPLE_TYPE_COUNT = 6,
			};
			// Enumerator count: 13
			// Alignment: 
			// Size: 0x4
			enum class RenderBufferFlags_t : std::uint32_t {
				RENDER_BUFFER_USAGE_VERTEX_BUFFER = 0x1,
				RENDER_BUFFER_USAGE_INDEX_BUFFER = 0x2,
				RENDER_BUFFER_USAGE_SHADER_RESOURCE = 0x4,
				RENDER_BUFFER_USAGE_UNORDERED_ACCESS = 0x8,
				RENDER_BUFFER_BYTEADDRESS_BUFFER = 0x10,
				RENDER_BUFFER_STRUCTURED_BUFFER = 0x20,
				RENDER_BUFFER_APPEND_CONSUME_BUFFER = 0x40,
				RENDER_BUFFER_UAV_COUNTER = 0x80,
				RENDER_BUFFER_UAV_DRAW_INDIRECT_ARGS = 0x100,
				RENDER_BUFFER_ACCELERATION_STRUCTURE = 0x200,
				RENDER_BUFFER_SHADER_BINDING_TABLE = 0x400,
				RENDER_BUFFER_PER_FRAME_WRITE_ONCE = 0x800,
				RENDER_BUFFER_POOL_ALLOCATED = 0x1000,
			};
			// Enumerator count: 13
			// Alignment: 
			// Size: 0x4
			enum class RenderPrimitiveType_t : std::uint32_t {
				RENDER_PRIM_POINTS = 0x0,
				RENDER_PRIM_LINES = 0x1,
				RENDER_PRIM_LINES_WITH_ADJACENCY = 0x2,
				RENDER_PRIM_LINE_STRIP = 0x3,
				RENDER_PRIM_LINE_STRIP_WITH_ADJACENCY = 0x4,
				RENDER_PRIM_TRIANGLES = 0x5,
				RENDER_PRIM_TRIANGLES_WITH_ADJACENCY = 0x6,
				RENDER_PRIM_TRIANGLE_STRIP = 0x7,
				RENDER_PRIM_TRIANGLE_STRIP_WITH_ADJACENCY = 0x8,
				RENDER_PRIM_INSTANCED_QUADS = 0x9,
				RENDER_PRIM_HETEROGENOUS = 0xa,
				RENDER_PRIM_COMPUTE_SHADER = 0xb,
				RENDER_PRIM_TYPE_COUNT = 0xc,
			};
			// Enumerator count: 3
			// Alignment: 
			// Size: 0x4
			enum class RenderSlotType_t : std::uint32_t {
				RENDER_SLOT_INVALID = 0xffffffff,
				RENDER_SLOT_PER_VERTEX = 0x0,
				RENDER_SLOT_PER_INSTANCE = 0x1,
			};
			struct VsInputSignature_t {
				MEMBER(elems, rendersystemdx11::VsInputSignature_t, cutl_vector<rendersystemdx11::VsInputSignatureElement_t>);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // struct VsInputSignature_t

			struct VsInputSignatureElement_t {
				MEMBER_ARR(p_name, rendersystemdx11::VsInputSignatureElement_t, 64, char);
				MEMBER_ARR(p_semantic, rendersystemdx11::VsInputSignatureElement_t, 64, char);
				MEMBER_ARR(p_d3_dsemantic_name, rendersystemdx11::VsInputSignatureElement_t, 64, char);
				MEMBER(n_d3_dsemantic_index, rendersystemdx11::VsInputSignatureElement_t, int32_t);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // struct VsInputSignatureElement_t

			struct RenderInputLayoutField_t {
				MEMBER_ARR(p_semantic_name, rendersystemdx11::RenderInputLayoutField_t, 32, uint8_t);
				MEMBER(n_semantic_index, rendersystemdx11::RenderInputLayoutField_t, int32_t);
				MEMBER(format, rendersystemdx11::RenderInputLayoutField_t, uint32_t);
				MEMBER(n_offset, rendersystemdx11::RenderInputLayoutField_t, int32_t);
				MEMBER(n_slot, rendersystemdx11::RenderInputLayoutField_t, int32_t);
				MEMBER(n_slot_type, rendersystemdx11::RenderInputLayoutField_t, rendersystemdx11::RenderSlotType_t);
				MEMBER(n_instance_step_rate, rendersystemdx11::RenderInputLayoutField_t, int32_t);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // struct RenderInputLayoutField_t

		} // namespace rendersystemdx11
	} // namespace schema
} // namespace sdk
#endif // SDK_SCHEMA_rendersystemdx11_H
