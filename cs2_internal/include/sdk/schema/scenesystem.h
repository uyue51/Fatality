// generated on: Mon Nov 18 16:22:35 2024
#ifndef SDK_SCHEMA_scenesystem_H
#define SDK_SCHEMA_scenesystem_H

#include <cstdint>

namespace sdk {
	namespace schema {
		namespace scenesystem {
			class CSSDSMsg_EndFrame;
			class CSSDSMsg_ViewTargetList;
			class CSSDSEndFrameViewInfo;
			class SceneViewId_t;
			class CSSDSMsg_ViewRender;
			class CSSDSMsg_ViewTarget;
			class CSSDSMsg_LayerBase;
			class CSSDSMsg_PreLayer;
			class CSSDSMsg_PostLayer;
			// Enumerator count: 4
			// Alignment: 
			// Size: 0x1
			enum class DisableShadows_t : std::uint8_t {
				kDisableShadows_None = 0,
				kDisableShadows_All = 1,
				kDisableShadows_Baked = 2,
				kDisableShadows_Realtime = 3,
			};
			class CSSDSMsg_EndFrame {
				MEMBER(views, scenesystem::CSSDSMsg_EndFrame, cutl_vector<scenesystem::CSSDSEndFrameViewInfo>);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CSSDSMsg_EndFrame

			class CSSDSMsg_ViewTargetList {
				MEMBER(view_id, scenesystem::CSSDSMsg_ViewTargetList, scenesystem::SceneViewId_t);
				MEMBER(view_name, scenesystem::CSSDSMsg_ViewTargetList, cutl_string);
				MEMBER(targets, scenesystem::CSSDSMsg_ViewTargetList, cutl_vector<scenesystem::CSSDSMsg_ViewTarget>);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CSSDSMsg_ViewTargetList

			class CSSDSEndFrameViewInfo {
				MEMBER(n_view_id, scenesystem::CSSDSEndFrameViewInfo, uint64_t);
				MEMBER(view_name, scenesystem::CSSDSEndFrameViewInfo, cutl_string);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CSSDSEndFrameViewInfo

			struct SceneViewId_t {
				MEMBER(n_view_id, scenesystem::SceneViewId_t, uint64_t);
				MEMBER(n_frame_count, scenesystem::SceneViewId_t, uint64_t);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // struct SceneViewId_t

			class CSSDSMsg_ViewRender {
				MEMBER(view_id, scenesystem::CSSDSMsg_ViewRender, scenesystem::SceneViewId_t);
				MEMBER(view_name, scenesystem::CSSDSMsg_ViewRender, cutl_string);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CSSDSMsg_ViewRender

			class CSSDSMsg_ViewTarget {
				MEMBER(name, scenesystem::CSSDSMsg_ViewTarget, cutl_string);
				MEMBER(texture_id, scenesystem::CSSDSMsg_ViewTarget, uint64_t);
				MEMBER(n_width, scenesystem::CSSDSMsg_ViewTarget, int32_t);
				MEMBER(n_height, scenesystem::CSSDSMsg_ViewTarget, int32_t);
				MEMBER(n_requested_width, scenesystem::CSSDSMsg_ViewTarget, int32_t);
				MEMBER(n_requested_height, scenesystem::CSSDSMsg_ViewTarget, int32_t);
				MEMBER(n_num_mip_levels, scenesystem::CSSDSMsg_ViewTarget, int32_t);
				MEMBER(n_depth, scenesystem::CSSDSMsg_ViewTarget, int32_t);
				MEMBER(n_multisample_num_samples, scenesystem::CSSDSMsg_ViewTarget, int32_t);
				MEMBER(n_format, scenesystem::CSSDSMsg_ViewTarget, int32_t);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CSSDSMsg_ViewTarget

			class CSSDSMsg_LayerBase {
				MEMBER(view_id, scenesystem::CSSDSMsg_LayerBase, scenesystem::SceneViewId_t);
				MEMBER(view_name, scenesystem::CSSDSMsg_LayerBase, cutl_string);
				MEMBER(n_layer_index, scenesystem::CSSDSMsg_LayerBase, int32_t);
				MEMBER(n_layer_id, scenesystem::CSSDSMsg_LayerBase, uint64_t);
				MEMBER(layer_name, scenesystem::CSSDSMsg_LayerBase, cutl_string);
				MEMBER(display_text, scenesystem::CSSDSMsg_LayerBase, cutl_string);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CSSDSMsg_LayerBase

			class CSSDSMsg_PreLayer : public scenesystem::CSSDSMsg_LayerBase {

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CSSDSMsg_PreLayer

			class CSSDSMsg_PostLayer : public scenesystem::CSSDSMsg_LayerBase {

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CSSDSMsg_PostLayer

		} // namespace scenesystem
	} // namespace schema
} // namespace sdk
#endif // SDK_SCHEMA_scenesystem_H
