// generated on: Mon Nov 18 16:22:34 2024
#ifndef SDK_SCHEMA_smartprops_H
#define SDK_SCHEMA_smartprops_H

#include <cstdint>

#include <sdk/schema/resourcesystem.h>
namespace sdk {
	namespace schema {
		namespace smartprops {
			class CSmartPropAttributePathPositions;
			class CSmartPropElement;
			class CSmartPropElement_ModifyState;
			class CSmartPropElement_Group;
			class CSmartPropElement_PlaceOnPath;
			class CSmartPropElement_FitOnLine;
			class CSmartPropElement_PickOne;
			class CSmartPropElement_PlaceMultiple;
			class CSmartPropElement_PlaceInSphere;
			class CSmartPropElement_Layout2DGrid;
			class CSmartPropElement_Deformer;
			class CSmartPropElement_BendDeformer;
			class CSmartPropElement_Model;
			class CSmartPropElement_SmartProp;
			class CSmartPropMaterialReplacement;
			class CSmartPropRoot;
			class CSmartPropSelectionCriteria;
			class CSmartPropSelectionCriteria_PathPosition;
			class CSmartPropSelectionCriteria_LinearLength;
			class CSmartPropSelectionCriteria_EndCap;
			class CSmartPropSelectionCriteria_IsValid;
			class CSmartPropSelectionCriteria_ChoiceWeight;
			class CSmartPropModifier;
			class CSmartPropFilter;
			class CSmartPropFilter_SurfaceProperties;
			class CSmartPropFilter_SurfaceAngle;
			class CSmartPropFilter_Probability;
			class CSmartPropFilter_VariableValue;
			class CSmartPropFilter_Expression;
			class CSmartPropOperation;
			class CSmartPropOperation_SaveState;
			class CSmartPropOperation_ComputeNormalizedVector3D;
			class CSmartPropOperation_ComputeVectorBetweenPoints3D;
			class CSmartPropOperation_ComputeCrossProduct3D;
			class CSmartPropOperation_ComputeDistance3D;
			class CSmartPropOperation_ComputeProjectVector3D;
			class CSmartPropOperation_SaveDirection;
			class CSmartPropOperation_SaveColor;
			class CSmartPropOperation_SetTintColor;
			class CSmartPropOperation_SavePosition;
			class CSmartPropOperation_SetVariable;
			class CSmartPropOperation_SaveSurfaceNormal;
			class CSmartPropOperation_MaterialOverride;
			class CSmartPropOperation_RestoreState;
			class CSmartPropOperation_RandomColorTintColor;
			class CSmartPropOperation_ComputeDotProduct3D;
			class CSmartPropOperation_SaveScale;
			class CSmartPropTransformOperation;
			class CSmartPropOperation_RandomOffset;
			class CSmartPropOperation_Rotate;
			class CSmartPropOperation_ResetRotation;
			class CSmartPropOperation_RandomScale;
			class CSmartPropOperation_CreateRotator;
			class CSmartPropOperation_SetOrientation;
			class CSmartPropOperation_CreateSizer;
			class CSmartPropOperation_Translate;
			class CSmartPropOperation_RigidDeformation;
			class CSmartPropOperation_Scale;
			class CSmartPropOperation_ResetScale;
			class CSmartPropOperation_RotateTowards;
			class CSmartPropOperation_SetPosition;
			class CSmartPropOperation_RandomRotation;
			class CSmartPropOperation_CreateLocator;
			class CSmartPropOperation_Trace;
			class CSmartPropOperation_TraceInDirection;
			class CSmartPropOperation_TraceToPoint;
			class CSmartPropOperation_TraceToLine;
			class CSmartPropAttributeDirection;
			class CSmartPropParameter;
			class CSmartPropChoice;
			class CSmartPropVariable;
			class CSmartPropVariable_PickMode;
			class CSmartPropVariable_CoordinateSpace;
			class CSmartPropVariable_PathPositions;
			class CSmartPropVariable_RadiusPlacementMode;
			class CSmartPropVariable_Material;
			class CSmartPropVariable_Vector3D;
			class CSmartPropVariable_Float;
			class CSmartPropVariable_Int;
			class CSmartPropVariable_Color;
			class CSmartPropVariable_DirectionVector;
			class CSmartPropVariable_Vector4D;
			class CSmartPropVariable_Bool;
			class CSmartPropVariable_Angles;
			class CSmartPropVariable_ApplyColorMode;
			class CSmartPropVariable_GridOriginMode;
			class CSmartPropVariable_GridPlacementMode;
			class CSmartPropVariable_Vector2D;
			class CSmartPropVariable_TraceNoHit;
			class CSmartPropVariable_Model;
			class CSmartPropVariable_MaterialGroup;
			class CSmartPropVariable_ScaleMode;
			class CSmartPropVariable_String;
			class CSmartPropVariable_ChoiceSelectionMode;
			class CSmartPropVariable_DistributionMode;
			class CSmartPropAttributeScaleMode;
			class CSmartPropAttributeApplyColorMode;
			class CSmartPropChoiceOption;
			class CSmartPropAttributeDistributionMode;
			class CSmartPropAttributeGridPlacementMode;
			class CSmartPropAttributeTraceNoHit;
			class ColorChoice_t;
			class CSmartPropAttributePickMode;
			class CSmartPropAttributeChoiceSelectionMode;
			class CSmartPropAttributeCoordinateSpace;
			class CSmartPropAttributeRadiusPlacementMode;
			class CSmartPropAttributeGridOriginMode;
			// Enumerator count: 3
			// Alignment: 
			// Size: 0x4
			enum class SmartPropChoiceSelectionMode_t : std::uint32_t {
				// MPropertyFriendlyName "Random"
				// MPropertyDescription "Randomly pick a choice. If the choices have weights, the weights will be used to determine the probability of picking a given choice"
				RANDOM = 0x0,
				// MPropertyFriendlyName "First"
				// MPropertyDescription "Pick the first valid choice. Selection criteria may be added to a choice to determine if it is valid."
				FIRST = 0x1,
				// MPropertyFriendlyName "Specific"
				// MPropertyDescription "Pick a choice specified by an additional authored value."
				SPECIFIC = 0x2,
			};
			// Enumerator count: 2
			// Alignment: 
			// Size: 0x4
			enum class SmartPropRadiusPlacementMode_t : std::uint32_t {
				// MPropertyFriendlyName "Place in sphere"
				// MPropertyDescription "Child elements will be placed within a sphere of the specified radius."
				SPHERE = 0x0,
				// MPropertyFriendlyName "Place in circle"
				// MPropertyDescription "Child elements will be placed within a circle of the specified radius."
				CIRCLE = 0x1,
			};
			// Enumerator count: 2
			// Alignment: 
			// Size: 0x4
			enum class SmartPropDistributionMode_t : std::uint32_t {
				// MPropertyFriendlyName "Random"
				// MPropertyDescription "Distribute the child elements randomly within the specified area or volume"
				RANDOM = 0x0,
				// MPropertyFriendlyName "Regular"
				// MPropertyDescription "Distribute the child element evenly within the specified area of volume"
				REGULAR = 0x1,
			};
			// Enumerator count: 3
			// Alignment: 
			// Size: 0x4
			enum class PickMode_t : std::uint32_t {
				// MPropertyFriendlyName "Largest fitting"
				// MPropertyDescription "Pick the largest child element that will fit in the remaining length of the line, repeat this process until the line is full or no child will fit in the remaining length."
				LARGEST_FIRST = 0x0,
				// MPropertyFriendlyName "Random fitting"
				// MPropertyDescription "Pick a random choice from the child elements that will fit within the remaining length, repeat this process until the line is full or no child will fit in the remaining length."
				RANDOM = 0x1,
				// MPropertyFriendlyName "Place all in order"
				// MPropertyDescription "Place all of the child elements in the order they are specified even if they do not fit the line or do not fill the line. NOTE: end cap settings are ignored in this mode."
				ALL_IN_ORDER = 0x2,
			};
			// Enumerator count: 3
			// Alignment: 
			// Size: 0x4
			enum class ApplyColorMode_t : std::uint32_t {
				// MPropertyFriendlyName "Mulitply object tint"
				// MPropertyDescription "Multiply with the object level color tint and replace the current color value."
				MULTIPLY_OBJECT = 0x0,
				// MPropertyFriendlyName "Multiply current tint"
				// MPropertyDescription "Multiply with the current color tint value."
				MULTIPLY_CURRENT = 0x1,
				// MPropertyFriendlyName "Replace tint"
				// MPropertyDescription "Replace the current color tint value completely, overwriting any object level tint."
				REPLACE = 0x2,
			};
			// Enumerator count: 4
			// Alignment: 
			// Size: 0x4
			enum class ConfigurationHandleShape_t : std::uint32_t {
				// MPropertyFriendlyName "None"
				NONE = 0x0,
				// MPropertyFriendlyName "Square"
				SQUARE = 0x1,
				// MPropertyFriendlyName "Circle"
				CIRCLE = 0x2,
				// MPropertyFriendlyName "Diamond"
				DIAMOND = 0x3,
			};
			// Enumerator count: 3
			// Alignment: 
			// Size: 0x4
			enum class SmartPropDirection_t : std::uint32_t {
				// MPropertyFriendlyName "Forward direction (+x)"
				FORWARD = 0x0,
				// MPropertyFriendlyName "Left direction (+y)"
				LEFT = 0x1,
				// MPropertyFriendlyName "Up direction (+z)"
				UP = 0x2,
			};
			// Enumerator count: 3
			// Alignment: 
			// Size: 0x4
			enum class SmartPropSpace_t : std::uint32_t {
				// MPropertyFriendlyName "World space"
				// MPropertyDescription "World space transform, not relative to the specific smart prop object placement."
				WORLD = 0x0,
				// MPropertyFriendlyName "Object space"
				// MPropertyDescription "Object space transform, relative to the object placement, but does not include the current element transform."
				OBJECT = 0x1,
				// MPropertyFriendlyName "Element space"
				// MPropertyDescription "Element space transform, includes the transform of the current element, which is also relative to the object."
				ELEMENT = 0x2,
			};
			// Enumerator count: 4
			// Alignment: 
			// Size: 0x4
			enum class SmartPropPathPositions_t : std::uint32_t {
				// MPropertyFriendlyName "All positions"
				// MPropertyDescription "Place at all positions along the path"
				ALL = 0x0,
				// MPropertyFriendlyName "Every N positions"
				// MPropertyDescription "Place at every Nth position along the path, skipping over the other positions"
				NTH = 0x1,
				// MPropertyFriendlyName "Only at start and end"
				// MPropertyDescription "Only place at the start or end of the path"
				START_AND_END = 0x2,
				// MPropertyFriendlyName "Path control points"
				// MPropertyDescription "Place at path control points instead of every point along the path, when this is selected the path spacing no longer applies"
				CONTROL_POINTS = 0x3,
			};
			// Enumerator count: 2
			// Alignment: 
			// Size: 0x4
			enum class SmartPropGridOriginBasis_t : std::uint32_t {
				// MPropertyFriendlyName "Center"
				// MPropertyDescription "Lay out child elements with their origin at the center of each grid cell."
				CENTER = 0x0,
				// MPropertyFriendlyName "Corner"
				// MPropertyDescription "Lay out child elements with their origin at the corner of each grid cell."
				CORNER = 0x1,
			};
			// Enumerator count: 2
			// Alignment: 
			// Size: 0x4
			enum class SmartPropGridPlacementMode_t : std::uint32_t {
				// MPropertyFriendlyName "Array"
				// MPropertyDescription "Generate the grid by placing N x N children."
				SEGMENT = 0x0,
				// MPropertyFriendlyName "Fill"
				// MPropertyDescription "Fill the area based on the largest bounds of child elements as specified in their selection criteria."
				FILL = 0x1,
			};
			// Enumerator count: 4
			// Alignment: 
			// Size: 0x4
			enum class ScaleMode_t : std::uint32_t {
				// MPropertyFriendlyName "No scaling"
				// MPropertyDescription "Do not allow selected elements to be scaled, the parts may not fit the line exactly"
				NONE = 0x0,
				// MPropertyFriendlyName "Scale last"
				// MPropertyDescription "Apply scale to the last element in order to fit the line. Only proceed to scale additional elements if the scale range of the last element is not sufficient."
				SCALE_END_TO_FIT = 0x1,
				// MPropertyFriendlyName "Scale equally"
				// MPropertyDescription "Attempt to apply the same amount of scale to all of the elements placed on the line while still respecting their size constraints."
				SCALE_EQUALLY = 0x2,
				// MPropertyFriendlyName "Maximize scale"
				// MPropertyDescription "Each element will be scaled to is maximum allowable size that will still fit on the line."
				SCALE_MAXIMIZE = 0x3,
			};
			// Enumerator count: 4
			// Alignment: 
			// Size: 0x4
			enum class TraceNoHitResult_t : std::uint32_t {
				// MPropertyFriendlyName "Do nothing"
				// MPropertyDescription "If no surface it hit, don't update the transform at all, act as if the trace was not performed."
				NOTHING = 0x0,
				// MPropertyFriendlyName "Stop evaluation"
				// MPropertyDescription "If no surface is hit stop evaluation of the current element, no following modifiers will be evaluated and the current transform will not be modified."
				DISCARD = 0x1,
				// MPropertyFriendlyName "Move to start"
				// MPropertyDescription "If no surface is hit move the current transform to the start of the trace."
				MOVE_TO_START = 0x2,
				// MPropertyFriendlyName "Move to end"
				// MPropertyDescription "If no surface is hit move the current transform to the end of the trace."
				MOVE_TO_END = 0x3,
			};
			class CSmartPropAttributePathPositions {

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CSmartPropAttributePathPositions

			class CSmartPropElement {
				MEMBER(n_element_id, smartprops::CSmartPropElement, int32_t);
				MEMBER(b_enabled, smartprops::CSmartPropElement, CSmartPropAttributeBool);
				MEMBER(selection_criteria, smartprops::CSmartPropElement, cutl_vector<smartprops::CSmartPropSelectionCriteria*>);
				MEMBER(modifiers, smartprops::CSmartPropElement, cutl_vector<smartprops::CSmartPropModifier*>);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CSmartPropElement

			class CSmartPropElement_ModifyState : public smartprops::CSmartPropElement {
				MEMBER(s_label, smartprops::CSmartPropElement_ModifyState, cutl_string);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CSmartPropElement_ModifyState

			class CSmartPropElement_Group : public smartprops::CSmartPropElement {
				MEMBER(children, smartprops::CSmartPropElement_Group, cutl_vector<smartprops::CSmartPropElement*>);
				MEMBER(s_label, smartprops::CSmartPropElement_Group, cutl_string);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CSmartPropElement_Group

			class CSmartPropElement_PlaceOnPath : public smartprops::CSmartPropElement_Group {
				MEMBER(path_name, smartprops::CSmartPropElement_PlaceOnPath, cutl_string);
				MEMBER(fl_spacing, smartprops::CSmartPropElement_PlaceOnPath, CSmartPropAttributeFloat);
				MEMBER(fl_offset_along_path, smartprops::CSmartPropElement_PlaceOnPath, CSmartPropAttributeFloat);
				MEMBER(v_path_offset, smartprops::CSmartPropElement_PlaceOnPath, CSmartPropAttributeVector2D);
				MEMBER(path_space, smartprops::CSmartPropElement_PlaceOnPath, smartprops::CSmartPropAttributeCoordinateSpace);
				MEMBER(b_use_fixed_up_direction, smartprops::CSmartPropElement_PlaceOnPath, CSmartPropAttributeBool);
				MEMBER(b_use_projected_distance, smartprops::CSmartPropElement_PlaceOnPath, CSmartPropAttributeBool);
				MEMBER(v_up_direction, smartprops::CSmartPropElement_PlaceOnPath, CSmartPropAttributeVector);
				MEMBER(up_direction_space, smartprops::CSmartPropElement_PlaceOnPath, smartprops::CSmartPropAttributeCoordinateSpace);
				MEMBER(default_path, smartprops::CSmartPropElement_PlaceOnPath, cutl_vector<vector>);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CSmartPropElement_PlaceOnPath

			class CSmartPropElement_FitOnLine : public smartprops::CSmartPropElement_Group {
				MEMBER(v_start, smartprops::CSmartPropElement_FitOnLine, CSmartPropAttributeVector);
				MEMBER(v_end, smartprops::CSmartPropElement_FitOnLine, CSmartPropAttributeVector);
				MEMBER(point_space, smartprops::CSmartPropElement_FitOnLine, smartprops::CSmartPropAttributeCoordinateSpace);
				MEMBER(b_orient_along_line, smartprops::CSmartPropElement_FitOnLine, CSmartPropAttributeBool);
				MEMBER(v_up_direction, smartprops::CSmartPropElement_FitOnLine, CSmartPropAttributeVector);
				MEMBER(up_direction_space, smartprops::CSmartPropElement_FitOnLine, smartprops::CSmartPropAttributeCoordinateSpace);
				MEMBER(b_prioritize_up, smartprops::CSmartPropElement_FitOnLine, CSmartPropAttributeBool);
				MEMBER(n_scale_mode, smartprops::CSmartPropElement_FitOnLine, smartprops::CSmartPropAttributeScaleMode);
				MEMBER(n_pick_mode, smartprops::CSmartPropElement_FitOnLine, smartprops::CSmartPropAttributePickMode);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CSmartPropElement_FitOnLine

			class CSmartPropElement_PickOne : public smartprops::CSmartPropElement_Group {
				MEMBER(selection_mode, smartprops::CSmartPropElement_PickOne, smartprops::CSmartPropAttributeChoiceSelectionMode);
				MEMBER(specific_child_index, smartprops::CSmartPropElement_PickOne, CSmartPropAttributeInt);
				MEMBER(b_configurable, smartprops::CSmartPropElement_PickOne, CSmartPropAttributeBool);
				MEMBER(v_handle_offset, smartprops::CSmartPropElement_PickOne, CSmartPropAttributeVector);
				MEMBER(handle_color, smartprops::CSmartPropElement_PickOne, CSmartPropAttributeColor);
				MEMBER(handle_size, smartprops::CSmartPropElement_PickOne, CSmartPropAttributeInt);
				MEMBER(handle_shape, smartprops::CSmartPropElement_PickOne, smartprops::ConfigurationHandleShape_t);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CSmartPropElement_PickOne

			class CSmartPropElement_PlaceMultiple : public smartprops::CSmartPropElement_Group {
				MEMBER(n_count, smartprops::CSmartPropElement_PlaceMultiple, CSmartPropAttributeInt);
				MEMBER(expression, smartprops::CSmartPropElement_PlaceMultiple, cutl_string);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CSmartPropElement_PlaceMultiple

			class CSmartPropElement_PlaceInSphere : public smartprops::CSmartPropElement_Group {
				MEMBER(placement_mode, smartprops::CSmartPropElement_PlaceInSphere, smartprops::CSmartPropAttributeRadiusPlacementMode);
				MEMBER(distribution_mode, smartprops::CSmartPropElement_PlaceInSphere, smartprops::CSmartPropAttributeDistributionMode);
				MEMBER(fl_randomness, smartprops::CSmartPropElement_PlaceInSphere, CSmartPropAttributeFloat);
				MEMBER(v_plane_up_direction, smartprops::CSmartPropElement_PlaceInSphere, CSmartPropAttributeVector);
				MEMBER(n_count_min, smartprops::CSmartPropElement_PlaceInSphere, CSmartPropAttributeInt);
				MEMBER(n_count_max, smartprops::CSmartPropElement_PlaceInSphere, CSmartPropAttributeInt);
				MEMBER(fl_position_radius_inner, smartprops::CSmartPropElement_PlaceInSphere, CSmartPropAttributeFloat);
				MEMBER(fl_position_radius_outer, smartprops::CSmartPropElement_PlaceInSphere, CSmartPropAttributeFloat);
				MEMBER(b_align_orientation, smartprops::CSmartPropElement_PlaceInSphere, CSmartPropAttributeBool);
				MEMBER(v_align_direction, smartprops::CSmartPropElement_PlaceInSphere, CSmartPropAttributeVector);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CSmartPropElement_PlaceInSphere

			class CSmartPropElement_Layout2DGrid : public smartprops::CSmartPropElement_Group {
				MEMBER(fl_width, smartprops::CSmartPropElement_Layout2DGrid, CSmartPropAttributeFloat);
				MEMBER(fl_length, smartprops::CSmartPropElement_Layout2DGrid, CSmartPropAttributeFloat);
				MEMBER(b_vertical_length, smartprops::CSmartPropElement_Layout2DGrid, CSmartPropAttributeBool);
				MEMBER(grid_arrangement, smartprops::CSmartPropElement_Layout2DGrid, smartprops::CSmartPropAttributeGridPlacementMode);
				MEMBER(grid_origin_mode, smartprops::CSmartPropElement_Layout2DGrid, smartprops::CSmartPropAttributeGridOriginMode);
				MEMBER(n_count_w, smartprops::CSmartPropElement_Layout2DGrid, CSmartPropAttributeInt);
				MEMBER(n_count_l, smartprops::CSmartPropElement_Layout2DGrid, CSmartPropAttributeInt);
				MEMBER(fl_spacing_width, smartprops::CSmartPropElement_Layout2DGrid, CSmartPropAttributeFloat);
				MEMBER(fl_spacing_length, smartprops::CSmartPropElement_Layout2DGrid, CSmartPropAttributeFloat);
				MEMBER(b_alternate_shift, smartprops::CSmartPropElement_Layout2DGrid, CSmartPropAttributeBool);
				MEMBER(fl_alternate_shift_width, smartprops::CSmartPropElement_Layout2DGrid, CSmartPropAttributeFloat);
				MEMBER(fl_alternate_shift_length, smartprops::CSmartPropElement_Layout2DGrid, CSmartPropAttributeFloat);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CSmartPropElement_Layout2DGrid

			class CSmartPropElement_Deformer : public smartprops::CSmartPropElement_Group {

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CSmartPropElement_Deformer

			class CSmartPropElement_BendDeformer : public smartprops::CSmartPropElement_Deformer {
				MEMBER(b_deformation_enabled, smartprops::CSmartPropElement_BendDeformer, CSmartPropAttributeBool);
				MEMBER(v_origin, smartprops::CSmartPropElement_BendDeformer, CSmartPropAttributeVector);
				MEMBER(v_angles, smartprops::CSmartPropElement_BendDeformer, CSmartPropAttributeAngles);
				MEMBER(v_size, smartprops::CSmartPropElement_BendDeformer, CSmartPropAttributeVector);
				MEMBER(fl_bend_angle, smartprops::CSmartPropElement_BendDeformer, CSmartPropAttributeFloat);
				MEMBER(fl_bend_point, smartprops::CSmartPropElement_BendDeformer, CSmartPropAttributeFloat);
				MEMBER(fl_bend_radius, smartprops::CSmartPropElement_BendDeformer, CSmartPropAttributeFloat);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CSmartPropElement_BendDeformer

			class CSmartPropElement_Model : public smartprops::CSmartPropElement {
				MEMBER(s_model_name, smartprops::CSmartPropElement_Model, CSmartPropAttributeModelName);
				MEMBER(material_group_name, smartprops::CSmartPropElement_Model, CSmartPropAttributeMaterialGroup);
				MEMBER(v_model_scale, smartprops::CSmartPropElement_Model, CSmartPropAttributeVector);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CSmartPropElement_Model

			class CSmartPropElement_SmartProp : public smartprops::CSmartPropElement {
				MEMBER(s_smart_prop, smartprops::CSmartPropElement_SmartProp, CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeCSmartProp>>);
				MEMBER(b_local_evaluation_state, smartprops::CSmartPropElement_SmartProp, bool);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CSmartPropElement_SmartProp

			class CSmartPropMaterialReplacement {
				////MEMBER(original_material, smartprops::CSmartPropMaterialReplacement, CSmartPropAttributeMaterialName);
				////MEMBER(replacement_material, smartprops::CSmartPropMaterialReplacement, CSmartPropAttributeMaterialName);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CSmartPropMaterialReplacement

			class CSmartPropRoot {
				MEMBER(n_content_version, smartprops::CSmartPropRoot, int32_t);
				MEMBER(n_max_depth, smartprops::CSmartPropRoot, CSmartPropAttributeInt);
				MEMBER(variables, smartprops::CSmartPropRoot, cutl_vector<smartprops::CSmartPropVariable*>);
				MEMBER(choices, smartprops::CSmartPropRoot, cutl_vector<smartprops::CSmartPropChoice*>);
				MEMBER(children, smartprops::CSmartPropRoot, cutl_vector<smartprops::CSmartPropElement*>);
				MEMBER(modifiers, smartprops::CSmartPropRoot, cutl_vector<smartprops::CSmartPropModifier*>);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CSmartPropRoot

			class CSmartPropSelectionCriteria {
				MEMBER(b_enabled, smartprops::CSmartPropSelectionCriteria, CSmartPropAttributeBool);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CSmartPropSelectionCriteria

			class CSmartPropSelectionCriteria_PathPosition : public smartprops::CSmartPropSelectionCriteria {
				MEMBER(place_at_positions, smartprops::CSmartPropSelectionCriteria_PathPosition, smartprops::CSmartPropAttributePathPositions);
				MEMBER(n_place_every_nth_position, smartprops::CSmartPropSelectionCriteria_PathPosition, CSmartPropAttributeInt);
				MEMBER(n_nth_position_index_offset, smartprops::CSmartPropSelectionCriteria_PathPosition, CSmartPropAttributeInt);
				MEMBER(b_allow_at_start, smartprops::CSmartPropSelectionCriteria_PathPosition, CSmartPropAttributeBool);
				MEMBER(b_allow_at_end, smartprops::CSmartPropSelectionCriteria_PathPosition, CSmartPropAttributeBool);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CSmartPropSelectionCriteria_PathPosition

			class CSmartPropSelectionCriteria_LinearLength : public smartprops::CSmartPropSelectionCriteria {
				MEMBER(fl_length, smartprops::CSmartPropSelectionCriteria_LinearLength, CSmartPropAttributeFloat);
				MEMBER(b_allow_scale, smartprops::CSmartPropSelectionCriteria_LinearLength, CSmartPropAttributeBool);
				MEMBER(fl_min_length, smartprops::CSmartPropSelectionCriteria_LinearLength, CSmartPropAttributeFloat);
				MEMBER(fl_max_length, smartprops::CSmartPropSelectionCriteria_LinearLength, CSmartPropAttributeFloat);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CSmartPropSelectionCriteria_LinearLength

			class CSmartPropSelectionCriteria_EndCap : public smartprops::CSmartPropSelectionCriteria {
				MEMBER(b_start, smartprops::CSmartPropSelectionCriteria_EndCap, CSmartPropAttributeBool);
				MEMBER(b_end, smartprops::CSmartPropSelectionCriteria_EndCap, CSmartPropAttributeBool);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CSmartPropSelectionCriteria_EndCap

			class CSmartPropSelectionCriteria_IsValid : public smartprops::CSmartPropSelectionCriteria {
				MEMBER(expression, smartprops::CSmartPropSelectionCriteria_IsValid, cutl_string);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CSmartPropSelectionCriteria_IsValid

			class CSmartPropSelectionCriteria_ChoiceWeight : public smartprops::CSmartPropSelectionCriteria {
				MEMBER(fl_weight, smartprops::CSmartPropSelectionCriteria_ChoiceWeight, CSmartPropAttributeFloat);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CSmartPropSelectionCriteria_ChoiceWeight

			class CSmartPropModifier {
				MEMBER(b_enabled, smartprops::CSmartPropModifier, CSmartPropAttributeBool);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CSmartPropModifier

			class CSmartPropFilter : public smartprops::CSmartPropModifier {

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CSmartPropFilter

			class CSmartPropFilter_SurfaceProperties : public smartprops::CSmartPropFilter {
				MEMBER(allowed_surface_properties, smartprops::CSmartPropFilter_SurfaceProperties, cutl_vector<cutl_string>);
				MEMBER(disallowed_surface_properties, smartprops::CSmartPropFilter_SurfaceProperties, cutl_vector<cutl_string>);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CSmartPropFilter_SurfaceProperties

			class CSmartPropFilter_SurfaceAngle : public smartprops::CSmartPropFilter {
				MEMBER(fl_surface_slope_min, smartprops::CSmartPropFilter_SurfaceAngle, CSmartPropAttributeFloat);
				MEMBER(fl_surface_slope_max, smartprops::CSmartPropFilter_SurfaceAngle, CSmartPropAttributeFloat);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CSmartPropFilter_SurfaceAngle

			class CSmartPropFilter_Probability : public smartprops::CSmartPropFilter {
				MEMBER(fl_probability, smartprops::CSmartPropFilter_Probability, CSmartPropAttributeFloat);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CSmartPropFilter_Probability

			class CSmartPropFilter_VariableValue : public smartprops::CSmartPropFilter {
				MEMBER(variable_comparison, smartprops::CSmartPropFilter_VariableValue, CSmartPropVariableComparison);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CSmartPropFilter_VariableValue

			class CSmartPropFilter_Expression : public smartprops::CSmartPropFilter {
				MEMBER(expression, smartprops::CSmartPropFilter_Expression, cutl_string);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CSmartPropFilter_Expression

			class CSmartPropOperation : public smartprops::CSmartPropModifier {

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CSmartPropOperation

			class CSmartPropOperation_SaveState : public smartprops::CSmartPropOperation {
				MEMBER(state_name, smartprops::CSmartPropOperation_SaveState, cutl_string);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CSmartPropOperation_SaveState

			class CSmartPropOperation_ComputeNormalizedVector3D : public smartprops::CSmartPropOperation {
				MEMBER(output_variable_name, smartprops::CSmartPropOperation_ComputeNormalizedVector3D, cutl_string);
				MEMBER(input_vector, smartprops::CSmartPropOperation_ComputeNormalizedVector3D, CSmartPropAttributeVector);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CSmartPropOperation_ComputeNormalizedVector3D

			class CSmartPropOperation_ComputeVectorBetweenPoints3D : public smartprops::CSmartPropOperation {
				MEMBER(output_variable_name, smartprops::CSmartPropOperation_ComputeVectorBetweenPoints3D, cutl_string);
				MEMBER(output_coordinate_space, smartprops::CSmartPropOperation_ComputeVectorBetweenPoints3D, smartprops::CSmartPropAttributeCoordinateSpace);
				MEMBER(b_normalized, smartprops::CSmartPropOperation_ComputeVectorBetweenPoints3D, CSmartPropAttributeBool);
				MEMBER(input_position_a, smartprops::CSmartPropOperation_ComputeVectorBetweenPoints3D, CSmartPropAttributeVector);
				MEMBER(coordinate_space_a, smartprops::CSmartPropOperation_ComputeVectorBetweenPoints3D, smartprops::CSmartPropAttributeCoordinateSpace);
				MEMBER(input_position_b, smartprops::CSmartPropOperation_ComputeVectorBetweenPoints3D, CSmartPropAttributeVector);
				MEMBER(coordinate_space_b, smartprops::CSmartPropOperation_ComputeVectorBetweenPoints3D, smartprops::CSmartPropAttributeCoordinateSpace);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CSmartPropOperation_ComputeVectorBetweenPoints3D

			class CSmartPropOperation_ComputeCrossProduct3D : public smartprops::CSmartPropOperation {
				MEMBER(output_variable_name, smartprops::CSmartPropOperation_ComputeCrossProduct3D, cutl_string);
				MEMBER(input_vector_a, smartprops::CSmartPropOperation_ComputeCrossProduct3D, CSmartPropAttributeVector);
				MEMBER(input_vector_b, smartprops::CSmartPropOperation_ComputeCrossProduct3D, CSmartPropAttributeVector);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CSmartPropOperation_ComputeCrossProduct3D

			class CSmartPropOperation_ComputeDistance3D : public smartprops::CSmartPropOperation {
				MEMBER(output_variable_name, smartprops::CSmartPropOperation_ComputeDistance3D, cutl_string);
				MEMBER(output_coordinate_space, smartprops::CSmartPropOperation_ComputeDistance3D, smartprops::CSmartPropAttributeCoordinateSpace);
				MEMBER(input_position_a, smartprops::CSmartPropOperation_ComputeDistance3D, CSmartPropAttributeVector);
				MEMBER(coordinate_space_a, smartprops::CSmartPropOperation_ComputeDistance3D, smartprops::CSmartPropAttributeCoordinateSpace);
				MEMBER(input_position_b, smartprops::CSmartPropOperation_ComputeDistance3D, CSmartPropAttributeVector);
				MEMBER(coordinate_space_b, smartprops::CSmartPropOperation_ComputeDistance3D, smartprops::CSmartPropAttributeCoordinateSpace);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CSmartPropOperation_ComputeDistance3D

			class CSmartPropOperation_ComputeProjectVector3D : public smartprops::CSmartPropOperation {
				MEMBER(output_variable_name, smartprops::CSmartPropOperation_ComputeProjectVector3D, cutl_string);
				MEMBER(output_coordinate_space, smartprops::CSmartPropOperation_ComputeProjectVector3D, smartprops::CSmartPropAttributeCoordinateSpace);
				MEMBER(input_vector_a, smartprops::CSmartPropOperation_ComputeProjectVector3D, CSmartPropAttributeVector);
				MEMBER(coordinate_space_a, smartprops::CSmartPropOperation_ComputeProjectVector3D, smartprops::CSmartPropAttributeCoordinateSpace);
				MEMBER(input_vector_b, smartprops::CSmartPropOperation_ComputeProjectVector3D, CSmartPropAttributeVector);
				MEMBER(coordinate_space_b, smartprops::CSmartPropOperation_ComputeProjectVector3D, smartprops::CSmartPropAttributeCoordinateSpace);
				MEMBER(b_plane, smartprops::CSmartPropOperation_ComputeProjectVector3D, CSmartPropAttributeBool);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CSmartPropOperation_ComputeProjectVector3D

			class CSmartPropOperation_SaveDirection : public smartprops::CSmartPropOperation {
				MEMBER(direction_vector, smartprops::CSmartPropOperation_SaveDirection, smartprops::CSmartPropAttributeDirection);
				MEMBER(coordinate_space, smartprops::CSmartPropOperation_SaveDirection, smartprops::CSmartPropAttributeCoordinateSpace);
				MEMBER(variable_name, smartprops::CSmartPropOperation_SaveDirection, cutl_string);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CSmartPropOperation_SaveDirection

			class CSmartPropOperation_SaveColor : public smartprops::CSmartPropOperation {
				MEMBER(variable_name, smartprops::CSmartPropOperation_SaveColor, cutl_string);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CSmartPropOperation_SaveColor

			class CSmartPropOperation_SetTintColor : public smartprops::CSmartPropOperation {
				MEMBER(selection_mode, smartprops::CSmartPropOperation_SetTintColor, smartprops::CSmartPropAttributeChoiceSelectionMode);
				MEMBER(color_selection, smartprops::CSmartPropOperation_SetTintColor, CSmartPropAttributeInt);
				MEMBER(mode, smartprops::CSmartPropOperation_SetTintColor, smartprops::CSmartPropAttributeApplyColorMode);
				MEMBER(color_choices, smartprops::CSmartPropOperation_SetTintColor, cutl_vector<smartprops::ColorChoice_t>);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CSmartPropOperation_SetTintColor

			class CSmartPropOperation_SavePosition : public smartprops::CSmartPropOperation {
				MEMBER(coordinate_space, smartprops::CSmartPropOperation_SavePosition, smartprops::CSmartPropAttributeCoordinateSpace);
				MEMBER(variable_name, smartprops::CSmartPropOperation_SavePosition, cutl_string);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CSmartPropOperation_SavePosition

			class CSmartPropOperation_SetVariable : public smartprops::CSmartPropOperation {
				MEMBER(variable_value, smartprops::CSmartPropOperation_SetVariable, CSmartPropAttributeVariableValue);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CSmartPropOperation_SetVariable

			class CSmartPropOperation_SaveSurfaceNormal : public smartprops::CSmartPropOperation {
				MEMBER(coordinate_space, smartprops::CSmartPropOperation_SaveSurfaceNormal, smartprops::CSmartPropAttributeCoordinateSpace);
				MEMBER(variable_name, smartprops::CSmartPropOperation_SaveSurfaceNormal, cutl_string);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CSmartPropOperation_SaveSurfaceNormal

			class CSmartPropOperation_MaterialOverride : public smartprops::CSmartPropOperation {
				MEMBER(b_clear_current_overrides, smartprops::CSmartPropOperation_MaterialOverride, CSmartPropAttributeBool);
				MEMBER(material_replacements, smartprops::CSmartPropOperation_MaterialOverride, cutl_vector<smartprops::CSmartPropMaterialReplacement>);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CSmartPropOperation_MaterialOverride

			class CSmartPropOperation_RestoreState : public smartprops::CSmartPropOperation {
				MEMBER(state_name, smartprops::CSmartPropOperation_RestoreState, CSmartPropAttributeStateName);
				MEMBER(b_discard_if_uknown, smartprops::CSmartPropOperation_RestoreState, CSmartPropAttributeBool);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CSmartPropOperation_RestoreState

			class CSmartPropOperation_RandomColorTintColor : public smartprops::CSmartPropOperation {
				MEMBER(selection_mode, smartprops::CSmartPropOperation_RandomColorTintColor, smartprops::CSmartPropAttributeChoiceSelectionMode);
				MEMBER(color_position, smartprops::CSmartPropOperation_RandomColorTintColor, CSmartPropAttributeFloat);
				MEMBER(mode, smartprops::CSmartPropOperation_RandomColorTintColor, smartprops::ApplyColorMode_t);
				MEMBER(gradient, smartprops::CSmartPropOperation_RandomColorTintColor, CColorGradient);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CSmartPropOperation_RandomColorTintColor

			class CSmartPropOperation_ComputeDotProduct3D : public smartprops::CSmartPropOperation {
				MEMBER(output_variable_name, smartprops::CSmartPropOperation_ComputeDotProduct3D, cutl_string);
				MEMBER(input_vector_a, smartprops::CSmartPropOperation_ComputeDotProduct3D, CSmartPropAttributeVector);
				MEMBER(input_vector_b, smartprops::CSmartPropOperation_ComputeDotProduct3D, CSmartPropAttributeVector);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CSmartPropOperation_ComputeDotProduct3D

			class CSmartPropOperation_SaveScale : public smartprops::CSmartPropOperation {
				MEMBER(variable_name, smartprops::CSmartPropOperation_SaveScale, cutl_string);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CSmartPropOperation_SaveScale

			class CSmartPropTransformOperation : public smartprops::CSmartPropOperation {

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CSmartPropTransformOperation

			class CSmartPropOperation_RandomOffset : public smartprops::CSmartPropTransformOperation {
				MEMBER(v_random_position_min, smartprops::CSmartPropOperation_RandomOffset, CSmartPropAttributeVector);
				MEMBER(v_random_position_max, smartprops::CSmartPropOperation_RandomOffset, CSmartPropAttributeVector);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CSmartPropOperation_RandomOffset

			class CSmartPropOperation_Rotate : public smartprops::CSmartPropTransformOperation {
				MEMBER(v_rotation, smartprops::CSmartPropOperation_Rotate, CSmartPropAttributeAngles);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CSmartPropOperation_Rotate

			class CSmartPropOperation_ResetRotation : public smartprops::CSmartPropTransformOperation {
				MEMBER(b_ignore_object_rotation, smartprops::CSmartPropOperation_ResetRotation, CSmartPropAttributeBool);
				MEMBER(b_reset_pitch, smartprops::CSmartPropOperation_ResetRotation, CSmartPropAttributeBool);
				MEMBER(b_reset_yaw, smartprops::CSmartPropOperation_ResetRotation, CSmartPropAttributeBool);
				MEMBER(b_reset_roll, smartprops::CSmartPropOperation_ResetRotation, CSmartPropAttributeBool);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CSmartPropOperation_ResetRotation

			class CSmartPropOperation_RandomScale : public smartprops::CSmartPropTransformOperation {
				MEMBER(fl_random_scale_min, smartprops::CSmartPropOperation_RandomScale, CSmartPropAttributeFloat);
				MEMBER(fl_random_scale_max, smartprops::CSmartPropOperation_RandomScale, CSmartPropAttributeFloat);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CSmartPropOperation_RandomScale

			class CSmartPropOperation_CreateRotator : public smartprops::CSmartPropTransformOperation {
				MEMBER(name, smartprops::CSmartPropOperation_CreateRotator, cutl_string);
				MEMBER(v_rotation_axis, smartprops::CSmartPropOperation_CreateRotator, CSmartPropAttributeVector);
				MEMBER(coordinate_space, smartprops::CSmartPropOperation_CreateRotator, smartprops::CSmartPropAttributeCoordinateSpace);
				MEMBER(fl_display_radius, smartprops::CSmartPropOperation_CreateRotator, CSmartPropAttributeFloat);
				MEMBER(b_apply_to_current_transform, smartprops::CSmartPropOperation_CreateRotator, CSmartPropAttributeBool);
				MEMBER(fl_snapping_increment, smartprops::CSmartPropOperation_CreateRotator, CSmartPropAttributeFloat);
				MEMBER(b_enforce_limits, smartprops::CSmartPropOperation_CreateRotator, CSmartPropAttributeBool);
				MEMBER(fl_min_angle, smartprops::CSmartPropOperation_CreateRotator, CSmartPropAttributeFloat);
				MEMBER(fl_max_angle, smartprops::CSmartPropOperation_CreateRotator, CSmartPropAttributeFloat);
				MEMBER(output_variable, smartprops::CSmartPropOperation_CreateRotator, cutl_string);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CSmartPropOperation_CreateRotator

			class CSmartPropOperation_SetOrientation : public smartprops::CSmartPropTransformOperation {
				MEMBER(v_forward_vector, smartprops::CSmartPropOperation_SetOrientation, CSmartPropAttributeVector);
				MEMBER(forward_direction_space, smartprops::CSmartPropOperation_SetOrientation, smartprops::CSmartPropAttributeCoordinateSpace);
				MEMBER(v_up_vector, smartprops::CSmartPropOperation_SetOrientation, CSmartPropAttributeVector);
				MEMBER(up_direction_space, smartprops::CSmartPropOperation_SetOrientation, smartprops::CSmartPropAttributeCoordinateSpace);
				MEMBER(b_prioritize_up, smartprops::CSmartPropOperation_SetOrientation, CSmartPropAttributeBool);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CSmartPropOperation_SetOrientation

			class CSmartPropOperation_CreateSizer : public smartprops::CSmartPropTransformOperation {
				MEMBER(name, smartprops::CSmartPropOperation_CreateSizer, cutl_string);
				MEMBER(b_display_model, smartprops::CSmartPropOperation_CreateSizer, CSmartPropAttributeBool);
				MEMBER(fl_initial_min_x, smartprops::CSmartPropOperation_CreateSizer, CSmartPropAttributeFloat);
				MEMBER(fl_initial_max_x, smartprops::CSmartPropOperation_CreateSizer, CSmartPropAttributeFloat);
				MEMBER(fl_constraint_min_x, smartprops::CSmartPropOperation_CreateSizer, CSmartPropAttributeFloat);
				MEMBER(fl_constraint_max_x, smartprops::CSmartPropOperation_CreateSizer, CSmartPropAttributeFloat);
				MEMBER(output_variable_min_x, smartprops::CSmartPropOperation_CreateSizer, cutl_string);
				MEMBER(output_variable_max_x, smartprops::CSmartPropOperation_CreateSizer, cutl_string);
				MEMBER(fl_initial_min_y, smartprops::CSmartPropOperation_CreateSizer, CSmartPropAttributeFloat);
				MEMBER(fl_initial_max_y, smartprops::CSmartPropOperation_CreateSizer, CSmartPropAttributeFloat);
				MEMBER(fl_constraint_min_y, smartprops::CSmartPropOperation_CreateSizer, CSmartPropAttributeFloat);
				MEMBER(fl_constraint_max_y, smartprops::CSmartPropOperation_CreateSizer, CSmartPropAttributeFloat);
				MEMBER(output_variable_min_y, smartprops::CSmartPropOperation_CreateSizer, cutl_string);
				MEMBER(output_variable_max_y, smartprops::CSmartPropOperation_CreateSizer, cutl_string);
				MEMBER(fl_initial_min_z, smartprops::CSmartPropOperation_CreateSizer, CSmartPropAttributeFloat);
				MEMBER(fl_initial_max_z, smartprops::CSmartPropOperation_CreateSizer, CSmartPropAttributeFloat);
				MEMBER(fl_constraint_min_z, smartprops::CSmartPropOperation_CreateSizer, CSmartPropAttributeFloat);
				MEMBER(fl_constraint_max_z, smartprops::CSmartPropOperation_CreateSizer, CSmartPropAttributeFloat);
				MEMBER(output_variable_min_z, smartprops::CSmartPropOperation_CreateSizer, cutl_string);
				MEMBER(output_variable_max_z, smartprops::CSmartPropOperation_CreateSizer, cutl_string);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CSmartPropOperation_CreateSizer

			class CSmartPropOperation_Translate : public smartprops::CSmartPropTransformOperation {
				MEMBER(v_position, smartprops::CSmartPropOperation_Translate, CSmartPropAttributeVector);
				MEMBER(coordinate_space, smartprops::CSmartPropOperation_Translate, smartprops::CSmartPropAttributeCoordinateSpace);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CSmartPropOperation_Translate

			class CSmartPropOperation_RigidDeformation : public smartprops::CSmartPropTransformOperation {

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CSmartPropOperation_RigidDeformation

			class CSmartPropOperation_Scale : public smartprops::CSmartPropTransformOperation {
				MEMBER(fl_scale, smartprops::CSmartPropOperation_Scale, CSmartPropAttributeFloat);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CSmartPropOperation_Scale

			class CSmartPropOperation_ResetScale : public smartprops::CSmartPropTransformOperation {
				MEMBER(b_ignore_object_scale, smartprops::CSmartPropOperation_ResetScale, CSmartPropAttributeBool);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CSmartPropOperation_ResetScale

			class CSmartPropOperation_RotateTowards : public smartprops::CSmartPropTransformOperation {
				MEMBER(v_origin_pos, smartprops::CSmartPropOperation_RotateTowards, CSmartPropAttributeVector);
				MEMBER(v_target_pos, smartprops::CSmartPropOperation_RotateTowards, CSmartPropAttributeVector);
				MEMBER(v_up_pos, smartprops::CSmartPropOperation_RotateTowards, CSmartPropAttributeVector);
				MEMBER(fl_weight, smartprops::CSmartPropOperation_RotateTowards, CSmartPropAttributeFloat);
				MEMBER(origin_space, smartprops::CSmartPropOperation_RotateTowards, smartprops::CSmartPropAttributeCoordinateSpace);
				MEMBER(target_space, smartprops::CSmartPropOperation_RotateTowards, smartprops::CSmartPropAttributeCoordinateSpace);
				MEMBER(up_space, smartprops::CSmartPropOperation_RotateTowards, smartprops::CSmartPropAttributeCoordinateSpace);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CSmartPropOperation_RotateTowards

			class CSmartPropOperation_SetPosition : public smartprops::CSmartPropTransformOperation {
				MEMBER(v_position, smartprops::CSmartPropOperation_SetPosition, CSmartPropAttributeVector);
				MEMBER(coordinate_space, smartprops::CSmartPropOperation_SetPosition, smartprops::CSmartPropAttributeCoordinateSpace);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CSmartPropOperation_SetPosition

			class CSmartPropOperation_RandomRotation : public smartprops::CSmartPropTransformOperation {
				MEMBER(v_random_rotation_min, smartprops::CSmartPropOperation_RandomRotation, CSmartPropAttributeAngles);
				MEMBER(v_random_rotation_max, smartprops::CSmartPropOperation_RandomRotation, CSmartPropAttributeAngles);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CSmartPropOperation_RandomRotation

			class CSmartPropOperation_CreateLocator : public smartprops::CSmartPropTransformOperation {
				MEMBER(locator_name, smartprops::CSmartPropOperation_CreateLocator, cutl_string);
				MEMBER(v_offset, smartprops::CSmartPropOperation_CreateLocator, CSmartPropAttributeVector);
				MEMBER(fl_display_scale, smartprops::CSmartPropOperation_CreateLocator, CSmartPropAttributeFloat);
				MEMBER(b_configurable, smartprops::CSmartPropOperation_CreateLocator, CSmartPropAttributeBool);
				MEMBER(b_allow_translation, smartprops::CSmartPropOperation_CreateLocator, CSmartPropAttributeBool);
				MEMBER(b_allow_rotation, smartprops::CSmartPropOperation_CreateLocator, CSmartPropAttributeBool);
				MEMBER(b_allow_scale, smartprops::CSmartPropOperation_CreateLocator, CSmartPropAttributeBool);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CSmartPropOperation_CreateLocator

			class CSmartPropOperation_Trace : public smartprops::CSmartPropTransformOperation {
				MEMBER(origin, smartprops::CSmartPropOperation_Trace, CSmartPropAttributeVector);
				MEMBER(origin_space, smartprops::CSmartPropOperation_Trace, smartprops::CSmartPropAttributeCoordinateSpace);
				MEMBER(fl_origin_offset, smartprops::CSmartPropOperation_Trace, CSmartPropAttributeFloat);
				MEMBER(fl_surface_up_influence, smartprops::CSmartPropOperation_Trace, CSmartPropAttributeFloat);
				MEMBER(n_no_hit_result, smartprops::CSmartPropOperation_Trace, smartprops::CSmartPropAttributeTraceNoHit);
				MEMBER(b_ignore_tool_materials, smartprops::CSmartPropOperation_Trace, CSmartPropAttributeBool);
				MEMBER(b_ignore_sky, smartprops::CSmartPropOperation_Trace, CSmartPropAttributeBool);
				MEMBER(b_ignore_no_draw, smartprops::CSmartPropOperation_Trace, CSmartPropAttributeBool);
				MEMBER(b_ignore_translucent, smartprops::CSmartPropOperation_Trace, CSmartPropAttributeBool);
				MEMBER(b_ignore_models, smartprops::CSmartPropOperation_Trace, CSmartPropAttributeBool);
				MEMBER(b_ignore_entities, smartprops::CSmartPropOperation_Trace, CSmartPropAttributeBool);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CSmartPropOperation_Trace

			class CSmartPropOperation_TraceInDirection : public smartprops::CSmartPropOperation_Trace {
				MEMBER(v_trace_direction, smartprops::CSmartPropOperation_TraceInDirection, CSmartPropAttributeVector);
				MEMBER(direction_space, smartprops::CSmartPropOperation_TraceInDirection, smartprops::CSmartPropAttributeCoordinateSpace);
				MEMBER(fl_trace_length, smartprops::CSmartPropOperation_TraceInDirection, CSmartPropAttributeFloat);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CSmartPropOperation_TraceInDirection

			class CSmartPropOperation_TraceToPoint : public smartprops::CSmartPropOperation_Trace {
				MEMBER(target_point, smartprops::CSmartPropOperation_TraceToPoint, CSmartPropAttributeVector);
				MEMBER(target_point_space, smartprops::CSmartPropOperation_TraceToPoint, smartprops::CSmartPropAttributeCoordinateSpace);
				MEMBER(b_trace_away, smartprops::CSmartPropOperation_TraceToPoint, CSmartPropAttributeBool);
				MEMBER(fl_trace_length, smartprops::CSmartPropOperation_TraceToPoint, CSmartPropAttributeFloat);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CSmartPropOperation_TraceToPoint

			class CSmartPropOperation_TraceToLine : public smartprops::CSmartPropOperation_Trace {
				MEMBER(end_point_a, smartprops::CSmartPropOperation_TraceToLine, CSmartPropAttributeVector);
				MEMBER(end_point_space_a, smartprops::CSmartPropOperation_TraceToLine, smartprops::CSmartPropAttributeCoordinateSpace);
				MEMBER(end_point_b, smartprops::CSmartPropOperation_TraceToLine, CSmartPropAttributeVector);
				MEMBER(end_point_space_b, smartprops::CSmartPropOperation_TraceToLine, smartprops::CSmartPropAttributeCoordinateSpace);
				MEMBER(b_trace_away, smartprops::CSmartPropOperation_TraceToLine, CSmartPropAttributeBool);
				MEMBER(fl_trace_length, smartprops::CSmartPropOperation_TraceToLine, CSmartPropAttributeFloat);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CSmartPropOperation_TraceToLine

			class CSmartPropAttributeDirection {

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CSmartPropAttributeDirection

			class CSmartPropParameter {
				MEMBER(n_element_id, smartprops::CSmartPropParameter, int32_t);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CSmartPropParameter

			class CSmartPropChoice : public smartprops::CSmartPropParameter {
				MEMBER(name, smartprops::CSmartPropChoice, cutl_string);
				MEMBER(default_option, smartprops::CSmartPropChoice, cutl_string);
				MEMBER(options, smartprops::CSmartPropChoice, cutl_vector<smartprops::CSmartPropChoiceOption>);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CSmartPropChoice

			class CSmartPropVariable : public smartprops::CSmartPropParameter {
				MEMBER(variable_name, smartprops::CSmartPropVariable, cutl_string);
				MEMBER(b_expose_as_parameter, smartprops::CSmartPropVariable, bool);
				MEMBER(display_name, smartprops::CSmartPropVariable, cutl_string);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CSmartPropVariable

			class CSmartPropVariable_PickMode : public smartprops::CSmartPropVariable {
				MEMBER(default_value, smartprops::CSmartPropVariable_PickMode, smartprops::PickMode_t);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CSmartPropVariable_PickMode

			class CSmartPropVariable_CoordinateSpace : public smartprops::CSmartPropVariable {
				MEMBER(default_value, smartprops::CSmartPropVariable_CoordinateSpace, smartprops::SmartPropSpace_t);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CSmartPropVariable_CoordinateSpace

			class CSmartPropVariable_PathPositions : public smartprops::CSmartPropVariable {
				MEMBER(default_value, smartprops::CSmartPropVariable_PathPositions, smartprops::SmartPropPathPositions_t);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CSmartPropVariable_PathPositions

			class CSmartPropVariable_RadiusPlacementMode : public smartprops::CSmartPropVariable {
				MEMBER(default_value, smartprops::CSmartPropVariable_RadiusPlacementMode, smartprops::SmartPropRadiusPlacementMode_t);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CSmartPropVariable_RadiusPlacementMode

			class CSmartPropVariable_Material : public smartprops::CSmartPropVariable {
				MEMBER(default_value, smartprops::CSmartPropVariable_Material, CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIMaterial2>>);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CSmartPropVariable_Material

			class CSmartPropVariable_Vector3D : public smartprops::CSmartPropVariable {
				MEMBER(default_value, smartprops::CSmartPropVariable_Vector3D, vector);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CSmartPropVariable_Vector3D

			class CSmartPropVariable_Float : public smartprops::CSmartPropVariable {
				MEMBER(default_value, smartprops::CSmartPropVariable_Float, float);
				MEMBER(fl_paramater_min_value, smartprops::CSmartPropVariable_Float, float);
				MEMBER(fl_paramater_max_value, smartprops::CSmartPropVariable_Float, float);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CSmartPropVariable_Float

			class CSmartPropVariable_Int : public smartprops::CSmartPropVariable {
				MEMBER(default_value, smartprops::CSmartPropVariable_Int, int32_t);
				MEMBER(n_paramater_min_value, smartprops::CSmartPropVariable_Int, int32_t);
				MEMBER(n_paramater_max_value, smartprops::CSmartPropVariable_Int, int32_t);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CSmartPropVariable_Int

			class CSmartPropVariable_Color : public smartprops::CSmartPropVariable {
				MEMBER(default_value, smartprops::CSmartPropVariable_Color, color);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CSmartPropVariable_Color

			class CSmartPropVariable_DirectionVector : public smartprops::CSmartPropVariable {
				MEMBER(default_value, smartprops::CSmartPropVariable_DirectionVector, smartprops::SmartPropDirection_t);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CSmartPropVariable_DirectionVector

			class CSmartPropVariable_Vector4D : public smartprops::CSmartPropVariable {
				MEMBER(default_value, smartprops::CSmartPropVariable_Vector4D, vector4d);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CSmartPropVariable_Vector4D

			class CSmartPropVariable_Bool : public smartprops::CSmartPropVariable {
				MEMBER(default_value, smartprops::CSmartPropVariable_Bool, bool);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CSmartPropVariable_Bool

			class CSmartPropVariable_Angles : public smartprops::CSmartPropVariable {
				MEMBER(default_value, smartprops::CSmartPropVariable_Angles, qangle);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CSmartPropVariable_Angles

			class CSmartPropVariable_ApplyColorMode : public smartprops::CSmartPropVariable {
				MEMBER(default_value, smartprops::CSmartPropVariable_ApplyColorMode, smartprops::ApplyColorMode_t);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CSmartPropVariable_ApplyColorMode

			class CSmartPropVariable_GridOriginMode : public smartprops::CSmartPropVariable {
				MEMBER(default_value, smartprops::CSmartPropVariable_GridOriginMode, smartprops::SmartPropGridOriginBasis_t);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CSmartPropVariable_GridOriginMode

			class CSmartPropVariable_GridPlacementMode : public smartprops::CSmartPropVariable {
				MEMBER(default_value, smartprops::CSmartPropVariable_GridPlacementMode, smartprops::SmartPropGridPlacementMode_t);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CSmartPropVariable_GridPlacementMode

			class CSmartPropVariable_Vector2D : public smartprops::CSmartPropVariable {
				MEMBER(default_value, smartprops::CSmartPropVariable_Vector2D, vector2d);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CSmartPropVariable_Vector2D

			class CSmartPropVariable_TraceNoHit : public smartprops::CSmartPropVariable {
				MEMBER(default_value, smartprops::CSmartPropVariable_TraceNoHit, smartprops::TraceNoHitResult_t);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CSmartPropVariable_TraceNoHit

			class CSmartPropVariable_Model : public smartprops::CSmartPropVariable {
				MEMBER(default_value, smartprops::CSmartPropVariable_Model, CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeCModel>>);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CSmartPropVariable_Model

			class CSmartPropVariable_MaterialGroup : public smartprops::CSmartPropVariable {
				MEMBER(s_model_name, smartprops::CSmartPropVariable_MaterialGroup, CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeCModel>>);
				MEMBER(default_value, smartprops::CSmartPropVariable_MaterialGroup, cutl_string);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CSmartPropVariable_MaterialGroup

			class CSmartPropVariable_ScaleMode : public smartprops::CSmartPropVariable {
				MEMBER(default_value, smartprops::CSmartPropVariable_ScaleMode, smartprops::ScaleMode_t);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CSmartPropVariable_ScaleMode

			class CSmartPropVariable_String : public smartprops::CSmartPropVariable {
				MEMBER(default_value, smartprops::CSmartPropVariable_String, cutl_string);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CSmartPropVariable_String

			class CSmartPropVariable_ChoiceSelectionMode : public smartprops::CSmartPropVariable {
				MEMBER(default_value, smartprops::CSmartPropVariable_ChoiceSelectionMode, smartprops::SmartPropChoiceSelectionMode_t);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CSmartPropVariable_ChoiceSelectionMode

			class CSmartPropVariable_DistributionMode : public smartprops::CSmartPropVariable {
				MEMBER(default_value, smartprops::CSmartPropVariable_DistributionMode, smartprops::SmartPropDistributionMode_t);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CSmartPropVariable_DistributionMode

			class CSmartPropAttributeScaleMode {

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CSmartPropAttributeScaleMode

			class CSmartPropAttributeApplyColorMode {

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CSmartPropAttributeApplyColorMode

			class CSmartPropChoiceOption {
				MEMBER(name, smartprops::CSmartPropChoiceOption, cutl_string);
				MEMBER(display_name, smartprops::CSmartPropChoiceOption, cutl_string);
				MEMBER(variable_values, smartprops::CSmartPropChoiceOption, cutl_vector<CSmartPropAttributeVariableValue>);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CSmartPropChoiceOption

			class CSmartPropAttributeDistributionMode {

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CSmartPropAttributeDistributionMode

			class CSmartPropAttributeGridPlacementMode {

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CSmartPropAttributeGridPlacementMode

			class CSmartPropAttributeTraceNoHit {

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CSmartPropAttributeTraceNoHit

			struct ColorChoice_t {
				MEMBER(color, smartprops::ColorChoice_t, CSmartPropAttributeColor);
				MEMBER(fl_weight, smartprops::ColorChoice_t, CSmartPropAttributeFloat);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // struct ColorChoice_t

			class CSmartPropAttributePickMode {

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CSmartPropAttributePickMode

			class CSmartPropAttributeChoiceSelectionMode {

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CSmartPropAttributeChoiceSelectionMode

			class CSmartPropAttributeCoordinateSpace {

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CSmartPropAttributeCoordinateSpace

			class CSmartPropAttributeRadiusPlacementMode {

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CSmartPropAttributeRadiusPlacementMode

			class CSmartPropAttributeGridOriginMode {

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CSmartPropAttributeGridOriginMode

		} // namespace smartprops
	} // namespace schema
} // namespace sdk
#endif // SDK_SCHEMA_smartprops_H
