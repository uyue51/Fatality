// generated on: Mon Nov 18 16:22:34 2024
#ifndef SDK_SCHEMA_physicslib_H
#define SDK_SCHEMA_physicslib_H

#include <cstdint>

#include <sdk/schema/mathlib_extended.h>
namespace sdk {
	namespace schema {
		namespace physicslib {
			class FeHingeLimitBuild_t;
			class FeFitInfluence_t;
			class VertexPositionColor_t;
			class FeSimdTri_t;
			class FeFitWeight_t;
			class FeRodConstraint_t;
			class FeTreeChildren_t;
			class RnShapeDesc_t;
			class RnSphereDesc_t;
			class RnCapsuleDesc_t;
			class RnMeshDesc_t;
			class RnHullDesc_t;
			class FeSoftParent_t;
			class FeSphereRigid_t;
			class FeBuildSphereRigid_t;
			class FourCovMatrices3;
			class FeAxialEdgeBend_t;
			class FeNodeWindBase_t;
			class FeTwistConstraint_t;
			class FeAntiTunnelProbe_t;
			class FeCtrlOsOffset_t;
			class RnFace_t;
			class Dop26_t;
			class RnVertex_t;
			class CovMatrix3;
			class RnHull_t;
			class FeTri_t;
			class CFeVertexMapBuildArray;
			class FeVertexMapBuild_t;
			class FeCtrlOffset_t;
			class FeBoxRigid_t;
			class FeBuildBoxRigid_t;
			class FourVectors2D;
			class FeEffectDesc_t;
			class FeKelagerBend2_t;
			class FeWeightedNode_t;
			class FeHingeLimit_t;
			class FeMorphLayerDepr_t;
			class FeSimdQuad_t;
			class FeWorldCollisionParams_t;
			class CRegionSVM;
			class FeCollisionPlane_t;
			class FeNodeBase_t;
			class CFeJiggleBone;
			class FeNodeReverseOffset_t;
			class CastSphereSATParams_t;
			class FeStiffHingeBuild_t;
			class FeEdgeDesc_t;
			class RnNode_t;
			class FeQuad_t;
			class FeAnimStrayRadius_t;
			class FeTaperedCapsuleRigid_t;
			class FeBuildTaperedCapsuleRigid_t;
			class FeVertexMapDesc_t;
			class FeSimdSpringIntegrator_t;
			class RnHalfEdge_t;
			class RnWing_t;
			class VertexPositionNormal_t;
			class RnMesh_t;
			class RnBodyDesc_t;
			class FeAntiTunnelProbeBuild_t;
			class CFeNamedJiggleBone;
			class OldFeEdge_t;
			class FeNodeIntegrator_t;
			class RnTriangle_t;
			class FeSDFRigid_t;
			class FeBuildSDFRigid_t;
			class FeSimdAnimStrayRadius_t;
			class FeSimdRodConstraint_t;
			class RnBlendVertex_t;
			class RnPlane_t;
			class FeRigidColliderIndices_t;
			class FeSimdRodConstraintAnim_t;
			class FeTaperedCapsuleStretch_t;
			class FeBandBendLimit_t;
			class RnCapsule_t;
			class CFeIndexedJiggleBone;
			class FeProxyVertexMap_t;
			class FeSimdNodeBase_t;
			class FeCtrlSoftOffset_t;
			class CFeMorphLayer;
			class RnSoftbodyCapsule_t;
			class FeFollowNode_t;
			class FeSourceEdge_t;
			class RnSoftbodyParticle_t;
			class RnSoftbodySpring_t;
			class FeFitMatrix_t;
			class PhysFeModelDesc_t;
			class FeSpringIntegrator_t;
			// Enumerator count: 4
			// Alignment: 
			// Size: 0x4
			enum class JointAxis_t : std::uint32_t {
				JOINT_AXIS_X = 0x0,
				JOINT_AXIS_Y = 0x1,
				JOINT_AXIS_Z = 0x2,
				JOINT_AXIS_COUNT = 0x3,
			};
			// Enumerator count: 3
			// Alignment: 
			// Size: 0x4
			enum class JointMotion_t : std::uint32_t {
				JOINT_MOTION_FREE = 0x0,
				JOINT_MOTION_LOCKED = 0x1,
				JOINT_MOTION_COUNT = 0x2,
			};
			struct FeHingeLimitBuild_t {
				MEMBER_ARR(n_node, physicslib::FeHingeLimitBuild_t, 6, uint16_t);
				MEMBER(n_flags, physicslib::FeHingeLimitBuild_t, uint32_t);
				MEMBER(fl_limit_cw, physicslib::FeHingeLimitBuild_t, float);
				MEMBER(fl_limit_ccw, physicslib::FeHingeLimitBuild_t, float);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // struct FeHingeLimitBuild_t

			struct FeFitInfluence_t {
				MEMBER(n_vertex_node, physicslib::FeFitInfluence_t, uint32_t);
				MEMBER(fl_weight, physicslib::FeFitInfluence_t, float);
				MEMBER(n_matrix_node, physicslib::FeFitInfluence_t, uint32_t);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // struct FeFitInfluence_t

			struct VertexPositionColor_t {
				MEMBER(v_position, physicslib::VertexPositionColor_t, vector);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // struct VertexPositionColor_t

			struct FeSimdTri_t {
				MEMBER_ARR(n_node, physicslib::FeSimdTri_t, 3, uint32_t);
				MEMBER(w1, physicslib::FeSimdTri_t, fltx4);
				MEMBER(w2, physicslib::FeSimdTri_t, fltx4);
				MEMBER(v1x, physicslib::FeSimdTri_t, fltx4);
				MEMBER(v2, physicslib::FeSimdTri_t, physicslib::FourVectors2D);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // struct FeSimdTri_t

			struct FeFitWeight_t {
				MEMBER(fl_weight, physicslib::FeFitWeight_t, float);
				MEMBER(n_node, physicslib::FeFitWeight_t, uint16_t);
				MEMBER(n_dummy, physicslib::FeFitWeight_t, uint16_t);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // struct FeFitWeight_t

			struct FeRodConstraint_t {
				MEMBER_ARR(n_node, physicslib::FeRodConstraint_t, 2, uint16_t);
				MEMBER(fl_max_dist, physicslib::FeRodConstraint_t, float);
				MEMBER(fl_min_dist, physicslib::FeRodConstraint_t, float);
				MEMBER(fl_weight0, physicslib::FeRodConstraint_t, float);
				MEMBER(fl_relaxation_factor, physicslib::FeRodConstraint_t, float);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // struct FeRodConstraint_t

			struct FeTreeChildren_t {
				MEMBER_ARR(n_child, physicslib::FeTreeChildren_t, 2, uint16_t);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // struct FeTreeChildren_t

			struct RnShapeDesc_t {
				MEMBER(n_collision_attribute_index, physicslib::RnShapeDesc_t, uint32_t);
				MEMBER(n_surface_property_index, physicslib::RnShapeDesc_t, uint32_t);
				MEMBER(user_friendly_name, physicslib::RnShapeDesc_t, cutl_string);
				MEMBER(b_user_friendly_name_sealed, physicslib::RnShapeDesc_t, bool);
				MEMBER(b_user_friendly_name_long, physicslib::RnShapeDesc_t, bool);
				MEMBER(n_tool_material_hash, physicslib::RnShapeDesc_t, uint32_t);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // struct RnShapeDesc_t

			struct RnSphereDesc_t : public physicslib::RnShapeDesc_t {
				//////MEMBER(sphere, physicslib::RnSphereDesc_t, SphereBase_t<float>);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // struct RnSphereDesc_t

			struct RnCapsuleDesc_t : public physicslib::RnShapeDesc_t {
				MEMBER(capsule, physicslib::RnCapsuleDesc_t, physicslib::RnCapsule_t);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // struct RnCapsuleDesc_t

			struct RnMeshDesc_t : public physicslib::RnShapeDesc_t {
				MEMBER(mesh, physicslib::RnMeshDesc_t, physicslib::RnMesh_t);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // struct RnMeshDesc_t

			struct RnHullDesc_t : public physicslib::RnShapeDesc_t {
				MEMBER(hull, physicslib::RnHullDesc_t, physicslib::RnHull_t);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // struct RnHullDesc_t

			struct FeSoftParent_t {
				MEMBER(n_parent, physicslib::FeSoftParent_t, int32_t);
				MEMBER(fl_alpha, physicslib::FeSoftParent_t, float);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // struct FeSoftParent_t

			struct FeSphereRigid_t {
				MEMBER(v_sphere, physicslib::FeSphereRigid_t, fltx4);
				MEMBER(n_node, physicslib::FeSphereRigid_t, uint16_t);
				MEMBER(n_collision_mask, physicslib::FeSphereRigid_t, uint16_t);
				MEMBER(n_vertex_map_index, physicslib::FeSphereRigid_t, uint16_t);
				MEMBER(n_flags, physicslib::FeSphereRigid_t, uint16_t);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // struct FeSphereRigid_t

			struct FeBuildSphereRigid_t : public physicslib::FeSphereRigid_t {
				MEMBER(n_priority, physicslib::FeBuildSphereRigid_t, int32_t);
				MEMBER(n_vertex_map_hash, physicslib::FeBuildSphereRigid_t, uint32_t);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // struct FeBuildSphereRigid_t

			class FourCovMatrices3 {
				MEMBER(v_diag, physicslib::FourCovMatrices3, four_vectors);
				MEMBER(fl_xy, physicslib::FourCovMatrices3, fltx4);
				MEMBER(fl_xz, physicslib::FourCovMatrices3, fltx4);
				MEMBER(fl_yz, physicslib::FourCovMatrices3, fltx4);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class FourCovMatrices3

			struct FeAxialEdgeBend_t {
				MEMBER(te, physicslib::FeAxialEdgeBend_t, float);
				MEMBER(tv, physicslib::FeAxialEdgeBend_t, float);
				MEMBER(fl_dist, physicslib::FeAxialEdgeBend_t, float);
				MEMBER_ARR(fl_weight, physicslib::FeAxialEdgeBend_t, 4, float);
				MEMBER_ARR(n_node, physicslib::FeAxialEdgeBend_t, 6, uint16_t);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // struct FeAxialEdgeBend_t

			struct FeNodeWindBase_t {
				MEMBER(n_node_x0, physicslib::FeNodeWindBase_t, uint16_t);
				MEMBER(n_node_x1, physicslib::FeNodeWindBase_t, uint16_t);
				MEMBER(n_node_y0, physicslib::FeNodeWindBase_t, uint16_t);
				MEMBER(n_node_y1, physicslib::FeNodeWindBase_t, uint16_t);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // struct FeNodeWindBase_t

			struct FeTwistConstraint_t {
				MEMBER(n_node_orient, physicslib::FeTwistConstraint_t, uint16_t);
				MEMBER(n_node_end, physicslib::FeTwistConstraint_t, uint16_t);
				MEMBER(fl_twist_relax, physicslib::FeTwistConstraint_t, float);
				MEMBER(fl_swing_relax, physicslib::FeTwistConstraint_t, float);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // struct FeTwistConstraint_t

			struct FeAntiTunnelProbe_t {
				MEMBER(fl_weight, physicslib::FeAntiTunnelProbe_t, float);
				MEMBER(n_flags, physicslib::FeAntiTunnelProbe_t, uint32_t);
				MEMBER(n_probe_node, physicslib::FeAntiTunnelProbe_t, uint16_t);
				MEMBER(n_count, physicslib::FeAntiTunnelProbe_t, uint16_t);
				MEMBER(n_begin, physicslib::FeAntiTunnelProbe_t, uint32_t);
				MEMBER(fl_activation_distance, physicslib::FeAntiTunnelProbe_t, float);
				MEMBER(fl_curvature_radius, physicslib::FeAntiTunnelProbe_t, float);
				MEMBER(fl_bias, physicslib::FeAntiTunnelProbe_t, float);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // struct FeAntiTunnelProbe_t

			struct FeCtrlOsOffset_t {
				MEMBER(n_ctrl_parent, physicslib::FeCtrlOsOffset_t, uint16_t);
				MEMBER(n_ctrl_child, physicslib::FeCtrlOsOffset_t, uint16_t);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // struct FeCtrlOsOffset_t

			struct RnFace_t {
				MEMBER(n_edge, physicslib::RnFace_t, uint8_t);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // struct RnFace_t

			struct Dop26_t {
				MEMBER_ARR(fl_support, physicslib::Dop26_t, 26, float);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // struct Dop26_t

			struct RnVertex_t {
				MEMBER(n_edge, physicslib::RnVertex_t, uint8_t);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // struct RnVertex_t

			class CovMatrix3 {
				MEMBER(v_diag, physicslib::CovMatrix3, vector);
				MEMBER(fl_xy, physicslib::CovMatrix3, float);
				MEMBER(fl_xz, physicslib::CovMatrix3, float);
				MEMBER(fl_yz, physicslib::CovMatrix3, float);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CovMatrix3

			struct RnHull_t {
				MEMBER(v_centroid, physicslib::RnHull_t, vector);
				MEMBER(fl_max_angular_radius, physicslib::RnHull_t, float);
				MEMBER(bounds, physicslib::RnHull_t, mathlib_extended::AABB_t);
				MEMBER(v_orthographic_areas, physicslib::RnHull_t, vector);
				MEMBER(mass_properties, physicslib::RnHull_t, matrix3x4_t);
				MEMBER(fl_volume, physicslib::RnHull_t, float);
				MEMBER(fl_surface_area, physicslib::RnHull_t, float);
				MEMBER(vertices, physicslib::RnHull_t, cutl_vector<physicslib::RnVertex_t>);
				MEMBER(vertex_positions, physicslib::RnHull_t, cutl_vector<vector>);
				MEMBER(edges, physicslib::RnHull_t, cutl_vector<physicslib::RnHalfEdge_t>);
				MEMBER(faces, physicslib::RnHull_t, cutl_vector<physicslib::RnFace_t>);
				MEMBER(face_planes, physicslib::RnHull_t, cutl_vector<physicslib::RnPlane_t>);
				MEMBER(n_flags, physicslib::RnHull_t, uint32_t);
				MEMBER(p_region_svm, physicslib::RnHull_t, physicslib::CRegionSVM*);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // struct RnHull_t

			struct FeTri_t {
				MEMBER_ARR(n_node, physicslib::FeTri_t, 3, uint16_t);
				MEMBER(w1, physicslib::FeTri_t, float);
				MEMBER(w2, physicslib::FeTri_t, float);
				MEMBER(v1x, physicslib::FeTri_t, float);
				MEMBER(v2, physicslib::FeTri_t, vector2d);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // struct FeTri_t

			class CFeVertexMapBuildArray {
				MEMBER(array, physicslib::CFeVertexMapBuildArray, cutl_vector<physicslib::FeVertexMapBuild_t*>);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CFeVertexMapBuildArray

			struct FeVertexMapBuild_t {
				MEMBER(vertex_map_name, physicslib::FeVertexMapBuild_t, cutl_string);
				MEMBER(n_name_hash, physicslib::FeVertexMapBuild_t, uint32_t);
				MEMBER(color, physicslib::FeVertexMapBuild_t, color);
				MEMBER(fl_volumetric_solve_strength, physicslib::FeVertexMapBuild_t, float);
				MEMBER(n_scale_source_node, physicslib::FeVertexMapBuild_t, int32_t);
				MEMBER(weights, physicslib::FeVertexMapBuild_t, cutl_vector<float>);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // struct FeVertexMapBuild_t

			struct FeCtrlOffset_t {
				MEMBER(v_offset, physicslib::FeCtrlOffset_t, vector);
				MEMBER(n_ctrl_parent, physicslib::FeCtrlOffset_t, uint16_t);
				MEMBER(n_ctrl_child, physicslib::FeCtrlOffset_t, uint16_t);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // struct FeCtrlOffset_t

			struct FeBoxRigid_t {
				MEMBER(tm_frame2, physicslib::FeBoxRigid_t, CTransform);
				MEMBER(n_node, physicslib::FeBoxRigid_t, uint16_t);
				MEMBER(n_collision_mask, physicslib::FeBoxRigid_t, uint16_t);
				MEMBER(v_size, physicslib::FeBoxRigid_t, vector);
				MEMBER(n_vertex_map_index, physicslib::FeBoxRigid_t, uint16_t);
				MEMBER(n_flags, physicslib::FeBoxRigid_t, uint16_t);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // struct FeBoxRigid_t

			struct FeBuildBoxRigid_t : public physicslib::FeBoxRigid_t {
				MEMBER(n_priority, physicslib::FeBuildBoxRigid_t, int32_t);
				MEMBER(n_vertex_map_hash, physicslib::FeBuildBoxRigid_t, uint32_t);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // struct FeBuildBoxRigid_t

			class FourVectors2D {
				MEMBER(x, physicslib::FourVectors2D, fltx4);
				MEMBER(y, physicslib::FourVectors2D, fltx4);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class FourVectors2D

			struct FeEffectDesc_t {
				MEMBER(s_name, physicslib::FeEffectDesc_t, cutl_string);
				MEMBER(n_name_hash, physicslib::FeEffectDesc_t, uint32_t);
				MEMBER(n_type, physicslib::FeEffectDesc_t, int32_t);
				MEMBER(params, physicslib::FeEffectDesc_t, KeyValues3);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // struct FeEffectDesc_t

			struct FeKelagerBend2_t {
				MEMBER_ARR(fl_weight, physicslib::FeKelagerBend2_t, 3, float);
				MEMBER(fl_height0, physicslib::FeKelagerBend2_t, float);
				MEMBER_ARR(n_node, physicslib::FeKelagerBend2_t, 3, uint16_t);
				MEMBER(n_reserved, physicslib::FeKelagerBend2_t, uint16_t);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // struct FeKelagerBend2_t

			struct FeWeightedNode_t {
				MEMBER(n_node, physicslib::FeWeightedNode_t, uint16_t);
				MEMBER(n_weight, physicslib::FeWeightedNode_t, uint16_t);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // struct FeWeightedNode_t

			struct FeHingeLimit_t {
				MEMBER_ARR(n_node, physicslib::FeHingeLimit_t, 6, uint16_t);
				MEMBER(n_flags, physicslib::FeHingeLimit_t, uint32_t);
				MEMBER(fl_weight4, physicslib::FeHingeLimit_t, float);
				MEMBER(fl_weight5, physicslib::FeHingeLimit_t, float);
				MEMBER(fl_angle_center, physicslib::FeHingeLimit_t, float);
				MEMBER(fl_angle_extents, physicslib::FeHingeLimit_t, float);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // struct FeHingeLimit_t

			struct FeMorphLayerDepr_t {
				MEMBER(name, physicslib::FeMorphLayerDepr_t, cutl_string);
				MEMBER(n_name_hash, physicslib::FeMorphLayerDepr_t, uint32_t);
				MEMBER(nodes, physicslib::FeMorphLayerDepr_t, cutl_vector<uint16_t>);
				MEMBER(init_pos, physicslib::FeMorphLayerDepr_t, cutl_vector<vector>);
				MEMBER(gravity, physicslib::FeMorphLayerDepr_t, cutl_vector<float>);
				MEMBER(goal_strength, physicslib::FeMorphLayerDepr_t, cutl_vector<float>);
				MEMBER(goal_damping, physicslib::FeMorphLayerDepr_t, cutl_vector<float>);
				MEMBER(n_flags, physicslib::FeMorphLayerDepr_t, uint32_t);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // struct FeMorphLayerDepr_t

			struct FeSimdQuad_t {
				MEMBER_ARR(n_node, physicslib::FeSimdQuad_t, 4, uint16_t);
				MEMBER(f4_slack, physicslib::FeSimdQuad_t, fltx4);
				MEMBER_ARR(v_shape, physicslib::FeSimdQuad_t, 4, four_vectors);
				MEMBER_ARR(f4_weights, physicslib::FeSimdQuad_t, 4, fltx4);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // struct FeSimdQuad_t

			struct FeWorldCollisionParams_t {
				MEMBER(fl_world_friction, physicslib::FeWorldCollisionParams_t, float);
				MEMBER(fl_ground_friction, physicslib::FeWorldCollisionParams_t, float);
				MEMBER(n_list_begin, physicslib::FeWorldCollisionParams_t, uint16_t);
				MEMBER(n_list_end, physicslib::FeWorldCollisionParams_t, uint16_t);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // struct FeWorldCollisionParams_t

			class CRegionSVM {
				MEMBER(planes, physicslib::CRegionSVM, cutl_vector<physicslib::RnPlane_t>);
				MEMBER(nodes, physicslib::CRegionSVM, cutl_vector<uint32_t>);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CRegionSVM

			struct FeCollisionPlane_t {
				MEMBER(n_ctrl_parent, physicslib::FeCollisionPlane_t, uint16_t);
				MEMBER(n_child_node, physicslib::FeCollisionPlane_t, uint16_t);
				MEMBER(plane, physicslib::FeCollisionPlane_t, physicslib::RnPlane_t);
				MEMBER(fl_strength, physicslib::FeCollisionPlane_t, float);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // struct FeCollisionPlane_t

			struct FeNodeBase_t {
				MEMBER(n_node, physicslib::FeNodeBase_t, uint16_t);
				MEMBER_ARR(n_dummy, physicslib::FeNodeBase_t, 3, uint16_t);
				MEMBER(n_node_x0, physicslib::FeNodeBase_t, uint16_t);
				MEMBER(n_node_x1, physicslib::FeNodeBase_t, uint16_t);
				MEMBER(n_node_y0, physicslib::FeNodeBase_t, uint16_t);
				MEMBER(n_node_y1, physicslib::FeNodeBase_t, uint16_t);
				MEMBER(q_adjust, physicslib::FeNodeBase_t, quaternion_storage);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // struct FeNodeBase_t

			class CFeJiggleBone {
				MEMBER(n_flags, physicslib::CFeJiggleBone, uint32_t);
				MEMBER(fl_length, physicslib::CFeJiggleBone, float);
				MEMBER(fl_tip_mass, physicslib::CFeJiggleBone, float);
				MEMBER(fl_yaw_stiffness, physicslib::CFeJiggleBone, float);
				MEMBER(fl_yaw_damping, physicslib::CFeJiggleBone, float);
				MEMBER(fl_pitch_stiffness, physicslib::CFeJiggleBone, float);
				MEMBER(fl_pitch_damping, physicslib::CFeJiggleBone, float);
				MEMBER(fl_along_stiffness, physicslib::CFeJiggleBone, float);
				MEMBER(fl_along_damping, physicslib::CFeJiggleBone, float);
				MEMBER(fl_angle_limit, physicslib::CFeJiggleBone, float);
				MEMBER(fl_min_yaw, physicslib::CFeJiggleBone, float);
				MEMBER(fl_max_yaw, physicslib::CFeJiggleBone, float);
				MEMBER(fl_yaw_friction, physicslib::CFeJiggleBone, float);
				MEMBER(fl_yaw_bounce, physicslib::CFeJiggleBone, float);
				MEMBER(fl_min_pitch, physicslib::CFeJiggleBone, float);
				MEMBER(fl_max_pitch, physicslib::CFeJiggleBone, float);
				MEMBER(fl_pitch_friction, physicslib::CFeJiggleBone, float);
				MEMBER(fl_pitch_bounce, physicslib::CFeJiggleBone, float);
				MEMBER(fl_base_mass, physicslib::CFeJiggleBone, float);
				MEMBER(fl_base_stiffness, physicslib::CFeJiggleBone, float);
				MEMBER(fl_base_damping, physicslib::CFeJiggleBone, float);
				MEMBER(fl_base_min_left, physicslib::CFeJiggleBone, float);
				MEMBER(fl_base_max_left, physicslib::CFeJiggleBone, float);
				MEMBER(fl_base_left_friction, physicslib::CFeJiggleBone, float);
				MEMBER(fl_base_min_up, physicslib::CFeJiggleBone, float);
				MEMBER(fl_base_max_up, physicslib::CFeJiggleBone, float);
				MEMBER(fl_base_up_friction, physicslib::CFeJiggleBone, float);
				MEMBER(fl_base_min_forward, physicslib::CFeJiggleBone, float);
				MEMBER(fl_base_max_forward, physicslib::CFeJiggleBone, float);
				MEMBER(fl_base_forward_friction, physicslib::CFeJiggleBone, float);
				MEMBER(fl_radius0, physicslib::CFeJiggleBone, float);
				MEMBER(fl_radius1, physicslib::CFeJiggleBone, float);
				MEMBER(v_point0, physicslib::CFeJiggleBone, vector);
				MEMBER(v_point1, physicslib::CFeJiggleBone, vector);
				MEMBER(n_collision_mask, physicslib::CFeJiggleBone, uint16_t);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CFeJiggleBone

			struct FeNodeReverseOffset_t {
				MEMBER(v_offset, physicslib::FeNodeReverseOffset_t, vector);
				MEMBER(n_bone_ctrl, physicslib::FeNodeReverseOffset_t, uint16_t);
				MEMBER(n_target_node, physicslib::FeNodeReverseOffset_t, uint16_t);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // struct FeNodeReverseOffset_t

			struct CastSphereSATParams_t {
				MEMBER(v_ray_start, physicslib::CastSphereSATParams_t, vector);
				MEMBER(v_ray_delta, physicslib::CastSphereSATParams_t, vector);
				MEMBER(fl_radius, physicslib::CastSphereSATParams_t, float);
				MEMBER(fl_max_fraction, physicslib::CastSphereSATParams_t, float);
				MEMBER(fl_scale, physicslib::CastSphereSATParams_t, float);
				MEMBER(p_hull, physicslib::CastSphereSATParams_t, physicslib::RnHull_t*);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // struct CastSphereSATParams_t

			struct FeStiffHingeBuild_t {
				MEMBER(fl_max_angle, physicslib::FeStiffHingeBuild_t, float);
				MEMBER(fl_strength, physicslib::FeStiffHingeBuild_t, float);
				MEMBER_ARR(fl_motion_bias, physicslib::FeStiffHingeBuild_t, 3, float);
				MEMBER_ARR(n_node, physicslib::FeStiffHingeBuild_t, 3, uint16_t);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // struct FeStiffHingeBuild_t

			struct FeEdgeDesc_t {
				MEMBER_ARR(n_edge, physicslib::FeEdgeDesc_t, 2, uint16_t);
				MEMBER_ARR(n_side, physicslib::FeEdgeDesc_t, 2, uint16_t);
				MEMBER_ARR(n_virt_elem, physicslib::FeEdgeDesc_t, 2, uint16_t);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // struct FeEdgeDesc_t

			struct RnNode_t {
				MEMBER(v_min, physicslib::RnNode_t, vector);
				MEMBER(n_children, physicslib::RnNode_t, uint32_t);
				MEMBER(v_max, physicslib::RnNode_t, vector);
				MEMBER(n_triangle_offset, physicslib::RnNode_t, uint32_t);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // struct RnNode_t

			struct FeQuad_t {
				MEMBER_ARR(n_node, physicslib::FeQuad_t, 4, uint16_t);
				MEMBER(fl_slack, physicslib::FeQuad_t, float);
				MEMBER_ARR(v_shape, physicslib::FeQuad_t, 4, vector4d);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // struct FeQuad_t

			struct FeAnimStrayRadius_t {
				MEMBER_ARR(n_node, physicslib::FeAnimStrayRadius_t, 2, uint16_t);
				MEMBER(fl_max_dist, physicslib::FeAnimStrayRadius_t, float);
				MEMBER(fl_relaxation_factor, physicslib::FeAnimStrayRadius_t, float);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // struct FeAnimStrayRadius_t

			struct FeTaperedCapsuleRigid_t {
				MEMBER_ARR(v_sphere, physicslib::FeTaperedCapsuleRigid_t, 2, fltx4);
				MEMBER(n_node, physicslib::FeTaperedCapsuleRigid_t, uint16_t);
				MEMBER(n_collision_mask, physicslib::FeTaperedCapsuleRigid_t, uint16_t);
				MEMBER(n_vertex_map_index, physicslib::FeTaperedCapsuleRigid_t, uint16_t);
				MEMBER(n_flags, physicslib::FeTaperedCapsuleRigid_t, uint16_t);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // struct FeTaperedCapsuleRigid_t

			struct FeBuildTaperedCapsuleRigid_t : public physicslib::FeTaperedCapsuleRigid_t {
				MEMBER(n_priority, physicslib::FeBuildTaperedCapsuleRigid_t, int32_t);
				MEMBER(n_vertex_map_hash, physicslib::FeBuildTaperedCapsuleRigid_t, uint32_t);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // struct FeBuildTaperedCapsuleRigid_t

			struct FeVertexMapDesc_t {
				MEMBER(s_name, physicslib::FeVertexMapDesc_t, cutl_string);
				MEMBER(n_name_hash, physicslib::FeVertexMapDesc_t, uint32_t);
				MEMBER(n_color, physicslib::FeVertexMapDesc_t, uint32_t);
				MEMBER(n_flags, physicslib::FeVertexMapDesc_t, uint32_t);
				MEMBER(n_vertex_base, physicslib::FeVertexMapDesc_t, uint16_t);
				MEMBER(n_vertex_count, physicslib::FeVertexMapDesc_t, uint16_t);
				MEMBER(n_map_offset, physicslib::FeVertexMapDesc_t, uint32_t);
				MEMBER(n_node_list_offset, physicslib::FeVertexMapDesc_t, uint32_t);
				MEMBER(v_center_of_mass, physicslib::FeVertexMapDesc_t, vector);
				MEMBER(fl_volumetric_solve_strength, physicslib::FeVertexMapDesc_t, float);
				MEMBER(n_scale_source_node, physicslib::FeVertexMapDesc_t, int16_t);
				MEMBER(n_node_list_count, physicslib::FeVertexMapDesc_t, uint16_t);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // struct FeVertexMapDesc_t

			struct FeSimdSpringIntegrator_t {
				MEMBER_ARR(n_node, physicslib::FeSimdSpringIntegrator_t, 2, uint16_t);
				MEMBER(fl_spring_rest_length, physicslib::FeSimdSpringIntegrator_t, fltx4);
				MEMBER(fl_spring_constant, physicslib::FeSimdSpringIntegrator_t, fltx4);
				MEMBER(fl_spring_damping, physicslib::FeSimdSpringIntegrator_t, fltx4);
				MEMBER(fl_node_weight0, physicslib::FeSimdSpringIntegrator_t, fltx4);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // struct FeSimdSpringIntegrator_t

			struct RnHalfEdge_t {
				MEMBER(n_next, physicslib::RnHalfEdge_t, uint8_t);
				MEMBER(n_twin, physicslib::RnHalfEdge_t, uint8_t);
				MEMBER(n_origin, physicslib::RnHalfEdge_t, uint8_t);
				MEMBER(n_face, physicslib::RnHalfEdge_t, uint8_t);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // struct RnHalfEdge_t

			struct RnWing_t {
				MEMBER_ARR(n_index, physicslib::RnWing_t, 3, int32_t);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // struct RnWing_t

			struct VertexPositionNormal_t {
				MEMBER(v_position, physicslib::VertexPositionNormal_t, vector);
				MEMBER(v_normal, physicslib::VertexPositionNormal_t, vector);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // struct VertexPositionNormal_t

			struct RnMesh_t {
				MEMBER(v_min, physicslib::RnMesh_t, vector);
				MEMBER(v_max, physicslib::RnMesh_t, vector);
				MEMBER(nodes, physicslib::RnMesh_t, cutl_vector<physicslib::RnNode_t>);
				MEMBER(vertices, physicslib::RnMesh_t, CUtlVectorSIMDPaddedVector);
				MEMBER(triangles, physicslib::RnMesh_t, cutl_vector<physicslib::RnTriangle_t>);
				MEMBER(wings, physicslib::RnMesh_t, cutl_vector<physicslib::RnWing_t>);
				MEMBER(materials, physicslib::RnMesh_t, cutl_vector<uint8_t>);
				MEMBER(v_orthographic_areas, physicslib::RnMesh_t, vector);
				MEMBER(n_flags, physicslib::RnMesh_t, uint32_t);
				MEMBER(n_debug_flags, physicslib::RnMesh_t, uint32_t);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // struct RnMesh_t

			struct RnBodyDesc_t {
				MEMBER(s_debug_name, physicslib::RnBodyDesc_t, cutl_string);
				MEMBER(v_position, physicslib::RnBodyDesc_t, vector);
				MEMBER(q_orientation, physicslib::RnBodyDesc_t, quaternion_storage);
				MEMBER(v_linear_velocity, physicslib::RnBodyDesc_t, vector);
				MEMBER(v_angular_velocity, physicslib::RnBodyDesc_t, vector);
				MEMBER(v_local_mass_center, physicslib::RnBodyDesc_t, vector);
				MEMBER_ARR(local_inertia_inv, physicslib::RnBodyDesc_t, 3, vector);
				MEMBER(fl_mass_inv, physicslib::RnBodyDesc_t, float);
				MEMBER(fl_game_mass, physicslib::RnBodyDesc_t, float);
				MEMBER(fl_inertia_scale_inv, physicslib::RnBodyDesc_t, float);
				MEMBER(fl_linear_damping, physicslib::RnBodyDesc_t, float);
				MEMBER(fl_angular_damping, physicslib::RnBodyDesc_t, float);
				MEMBER(fl_linear_drag, physicslib::RnBodyDesc_t, float);
				MEMBER(fl_angular_drag, physicslib::RnBodyDesc_t, float);
				MEMBER(fl_linear_buoyancy_drag, physicslib::RnBodyDesc_t, float);
				MEMBER(fl_angular_buoyancy_drag, physicslib::RnBodyDesc_t, float);
				MEMBER(v_last_awake_force_accum, physicslib::RnBodyDesc_t, vector);
				MEMBER(v_last_awake_torque_accum, physicslib::RnBodyDesc_t, vector);
				MEMBER(fl_buoyancy_factor, physicslib::RnBodyDesc_t, float);
				MEMBER(fl_gravity_scale, physicslib::RnBodyDesc_t, float);
				MEMBER(fl_time_scale, physicslib::RnBodyDesc_t, float);
				MEMBER(n_body_type, physicslib::RnBodyDesc_t, int32_t);
				MEMBER(n_game_index, physicslib::RnBodyDesc_t, uint32_t);
				MEMBER(n_game_flags, physicslib::RnBodyDesc_t, uint32_t);
				MEMBER(n_min_velocity_iterations, physicslib::RnBodyDesc_t, int8_t);
				MEMBER(n_min_position_iterations, physicslib::RnBodyDesc_t, int8_t);
				MEMBER(n_mass_priority, physicslib::RnBodyDesc_t, int8_t);
				MEMBER(b_enabled, physicslib::RnBodyDesc_t, bool);
				MEMBER(b_sleeping, physicslib::RnBodyDesc_t, bool);
				MEMBER(b_is_continuous_enabled, physicslib::RnBodyDesc_t, bool);
				MEMBER(b_drag_enabled, physicslib::RnBodyDesc_t, bool);
				MEMBER(b_buoyancy_drag_enabled, physicslib::RnBodyDesc_t, bool);
				MEMBER(b_gravity_disabled, physicslib::RnBodyDesc_t, bool);
				MEMBER(b_speculative_enabled, physicslib::RnBodyDesc_t, bool);
				MEMBER(b_has_shadow_controller, physicslib::RnBodyDesc_t, bool);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // struct RnBodyDesc_t

			struct FeAntiTunnelProbeBuild_t {
				MEMBER(fl_weight, physicslib::FeAntiTunnelProbeBuild_t, float);
				MEMBER(fl_activation_distance, physicslib::FeAntiTunnelProbeBuild_t, float);
				MEMBER(fl_bias, physicslib::FeAntiTunnelProbeBuild_t, float);
				MEMBER(fl_curvature, physicslib::FeAntiTunnelProbeBuild_t, float);
				MEMBER(n_flags, physicslib::FeAntiTunnelProbeBuild_t, uint32_t);
				MEMBER(n_probe_node, physicslib::FeAntiTunnelProbeBuild_t, uint16_t);
				MEMBER(target_nodes, physicslib::FeAntiTunnelProbeBuild_t, cutl_vector<uint16_t>);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // struct FeAntiTunnelProbeBuild_t

			class CFeNamedJiggleBone {
				MEMBER(str_parent_bone, physicslib::CFeNamedJiggleBone, cutl_string);
				MEMBER(transform, physicslib::CFeNamedJiggleBone, CTransform);
				MEMBER(n_jiggle_parent, physicslib::CFeNamedJiggleBone, uint32_t);
				MEMBER(jiggle_bone, physicslib::CFeNamedJiggleBone, physicslib::CFeJiggleBone);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CFeNamedJiggleBone

			struct OldFeEdge_t {
				MEMBER_ARR(fl_k, physicslib::OldFeEdge_t, 3, float);
				MEMBER(inv_a, physicslib::OldFeEdge_t, float);
				MEMBER(t, physicslib::OldFeEdge_t, float);
				MEMBER(fl_theta_relaxed, physicslib::OldFeEdge_t, float);
				MEMBER(fl_theta_factor, physicslib::OldFeEdge_t, float);
				MEMBER(c01, physicslib::OldFeEdge_t, float);
				MEMBER(c02, physicslib::OldFeEdge_t, float);
				MEMBER(c03, physicslib::OldFeEdge_t, float);
				MEMBER(c04, physicslib::OldFeEdge_t, float);
				MEMBER(fl_axial_model_dist, physicslib::OldFeEdge_t, float);
				MEMBER_ARR(fl_axial_model_weights, physicslib::OldFeEdge_t, 4, float);
				MEMBER_ARR(n_node, physicslib::OldFeEdge_t, 4, uint16_t);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // struct OldFeEdge_t

			struct FeNodeIntegrator_t {
				MEMBER(fl_point_damping, physicslib::FeNodeIntegrator_t, float);
				MEMBER(fl_animation_force_attraction, physicslib::FeNodeIntegrator_t, float);
				MEMBER(fl_animation_vertex_attraction, physicslib::FeNodeIntegrator_t, float);
				MEMBER(fl_gravity, physicslib::FeNodeIntegrator_t, float);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // struct FeNodeIntegrator_t

			struct RnTriangle_t {
				MEMBER_ARR(n_index, physicslib::RnTriangle_t, 3, int32_t);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // struct RnTriangle_t

			struct FeSDFRigid_t {
				MEMBER(v_local_min, physicslib::FeSDFRigid_t, vector);
				MEMBER(v_local_max, physicslib::FeSDFRigid_t, vector);
				MEMBER(fl_bounciness, physicslib::FeSDFRigid_t, float);
				MEMBER(n_node, physicslib::FeSDFRigid_t, uint16_t);
				MEMBER(n_collision_mask, physicslib::FeSDFRigid_t, uint16_t);
				MEMBER(n_vertex_map_index, physicslib::FeSDFRigid_t, uint16_t);
				MEMBER(n_flags, physicslib::FeSDFRigid_t, uint16_t);
				MEMBER(distances, physicslib::FeSDFRigid_t, cutl_vector<float>);
				MEMBER(n_width, physicslib::FeSDFRigid_t, int32_t);
				MEMBER(n_height, physicslib::FeSDFRigid_t, int32_t);
				MEMBER(n_depth, physicslib::FeSDFRigid_t, int32_t);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // struct FeSDFRigid_t

			struct FeBuildSDFRigid_t : public physicslib::FeSDFRigid_t {
				MEMBER(n_priority, physicslib::FeBuildSDFRigid_t, int32_t);
				MEMBER(n_vertex_map_hash, physicslib::FeBuildSDFRigid_t, uint32_t);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // struct FeBuildSDFRigid_t

			struct FeSimdAnimStrayRadius_t {
				MEMBER_ARR(n_node, physicslib::FeSimdAnimStrayRadius_t, 2, uint16_t);
				MEMBER(fl_max_dist, physicslib::FeSimdAnimStrayRadius_t, fltx4);
				MEMBER(fl_relaxation_factor, physicslib::FeSimdAnimStrayRadius_t, fltx4);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // struct FeSimdAnimStrayRadius_t

			struct FeSimdRodConstraint_t {
				MEMBER_ARR(n_node, physicslib::FeSimdRodConstraint_t, 2, uint16_t);
				MEMBER(f4_max_dist, physicslib::FeSimdRodConstraint_t, fltx4);
				MEMBER(f4_min_dist, physicslib::FeSimdRodConstraint_t, fltx4);
				MEMBER(f4_weight0, physicslib::FeSimdRodConstraint_t, fltx4);
				MEMBER(f4_relaxation_factor, physicslib::FeSimdRodConstraint_t, fltx4);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // struct FeSimdRodConstraint_t

			struct RnBlendVertex_t {
				MEMBER(n_weight0, physicslib::RnBlendVertex_t, uint16_t);
				MEMBER(n_index0, physicslib::RnBlendVertex_t, uint16_t);
				MEMBER(n_weight1, physicslib::RnBlendVertex_t, uint16_t);
				MEMBER(n_index1, physicslib::RnBlendVertex_t, uint16_t);
				MEMBER(n_weight2, physicslib::RnBlendVertex_t, uint16_t);
				MEMBER(n_index2, physicslib::RnBlendVertex_t, uint16_t);
				MEMBER(n_flags, physicslib::RnBlendVertex_t, uint16_t);
				MEMBER(n_target_index, physicslib::RnBlendVertex_t, uint16_t);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // struct RnBlendVertex_t

			struct RnPlane_t {
				MEMBER(v_normal, physicslib::RnPlane_t, vector);
				MEMBER(fl_offset, physicslib::RnPlane_t, float);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // struct RnPlane_t

			struct FeRigidColliderIndices_t {
				MEMBER(n_tapered_capsule_rigid_index, physicslib::FeRigidColliderIndices_t, uint16_t);
				MEMBER(n_sphere_rigid_index, physicslib::FeRigidColliderIndices_t, uint16_t);
				MEMBER(n_box_rigid_index, physicslib::FeRigidColliderIndices_t, uint16_t);
				MEMBER(n_sdfrigid_index, physicslib::FeRigidColliderIndices_t, uint16_t);
				MEMBER(n_collision_plane_index, physicslib::FeRigidColliderIndices_t, uint16_t);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // struct FeRigidColliderIndices_t

			struct FeSimdRodConstraintAnim_t {
				MEMBER_ARR(n_node, physicslib::FeSimdRodConstraintAnim_t, 2, uint16_t);
				MEMBER(f4_weight0, physicslib::FeSimdRodConstraintAnim_t, fltx4);
				MEMBER(f4_relaxation_factor, physicslib::FeSimdRodConstraintAnim_t, fltx4);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // struct FeSimdRodConstraintAnim_t

			struct FeTaperedCapsuleStretch_t {
				MEMBER_ARR(n_node, physicslib::FeTaperedCapsuleStretch_t, 2, uint16_t);
				MEMBER(n_collision_mask, physicslib::FeTaperedCapsuleStretch_t, uint16_t);
				MEMBER(n_dummy, physicslib::FeTaperedCapsuleStretch_t, uint16_t);
				MEMBER_ARR(fl_radius, physicslib::FeTaperedCapsuleStretch_t, 2, float);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // struct FeTaperedCapsuleStretch_t

			struct FeBandBendLimit_t {
				MEMBER(fl_dist_min, physicslib::FeBandBendLimit_t, float);
				MEMBER(fl_dist_max, physicslib::FeBandBendLimit_t, float);
				MEMBER_ARR(n_node, physicslib::FeBandBendLimit_t, 6, uint16_t);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // struct FeBandBendLimit_t

			struct RnCapsule_t {
				MEMBER_ARR(v_center, physicslib::RnCapsule_t, 2, vector);
				MEMBER(fl_radius, physicslib::RnCapsule_t, float);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // struct RnCapsule_t

			class CFeIndexedJiggleBone {
				MEMBER(n_node, physicslib::CFeIndexedJiggleBone, uint32_t);
				MEMBER(n_jiggle_parent, physicslib::CFeIndexedJiggleBone, uint32_t);
				MEMBER(jiggle_bone, physicslib::CFeIndexedJiggleBone, physicslib::CFeJiggleBone);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CFeIndexedJiggleBone

			struct FeProxyVertexMap_t {
				MEMBER(name, physicslib::FeProxyVertexMap_t, cutl_string);
				MEMBER(fl_weight, physicslib::FeProxyVertexMap_t, float);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // struct FeProxyVertexMap_t

			struct FeSimdNodeBase_t {
				MEMBER_ARR(n_node, physicslib::FeSimdNodeBase_t, 4, uint16_t);
				MEMBER_ARR(n_node_x0, physicslib::FeSimdNodeBase_t, 4, uint16_t);
				MEMBER_ARR(n_node_x1, physicslib::FeSimdNodeBase_t, 4, uint16_t);
				MEMBER_ARR(n_node_y0, physicslib::FeSimdNodeBase_t, 4, uint16_t);
				MEMBER_ARR(n_node_y1, physicslib::FeSimdNodeBase_t, 4, uint16_t);
				MEMBER_ARR(n_dummy, physicslib::FeSimdNodeBase_t, 4, uint16_t);
				MEMBER(q_adjust, physicslib::FeSimdNodeBase_t, mathlib_extended::FourQuaternions);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // struct FeSimdNodeBase_t

			struct FeCtrlSoftOffset_t {
				MEMBER(n_ctrl_parent, physicslib::FeCtrlSoftOffset_t, uint16_t);
				MEMBER(n_ctrl_child, physicslib::FeCtrlSoftOffset_t, uint16_t);
				MEMBER(v_offset, physicslib::FeCtrlSoftOffset_t, vector);
				MEMBER(fl_alpha, physicslib::FeCtrlSoftOffset_t, float);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // struct FeCtrlSoftOffset_t

			class CFeMorphLayer {
				MEMBER(name, physicslib::CFeMorphLayer, cutl_string);
				MEMBER(n_name_hash, physicslib::CFeMorphLayer, uint32_t);
				MEMBER(nodes, physicslib::CFeMorphLayer, cutl_vector<uint16_t>);
				MEMBER(init_pos, physicslib::CFeMorphLayer, cutl_vector<vector>);
				MEMBER(gravity, physicslib::CFeMorphLayer, cutl_vector<float>);
				MEMBER(goal_strength, physicslib::CFeMorphLayer, cutl_vector<float>);
				MEMBER(goal_damping, physicslib::CFeMorphLayer, cutl_vector<float>);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CFeMorphLayer

			struct RnSoftbodyCapsule_t {
				MEMBER_ARR(v_center, physicslib::RnSoftbodyCapsule_t, 2, vector);
				MEMBER(fl_radius, physicslib::RnSoftbodyCapsule_t, float);
				MEMBER_ARR(n_particle, physicslib::RnSoftbodyCapsule_t, 2, uint16_t);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // struct RnSoftbodyCapsule_t

			struct FeFollowNode_t {
				MEMBER(n_parent_node, physicslib::FeFollowNode_t, uint16_t);
				MEMBER(n_child_node, physicslib::FeFollowNode_t, uint16_t);
				MEMBER(fl_weight, physicslib::FeFollowNode_t, float);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // struct FeFollowNode_t

			struct FeSourceEdge_t {
				MEMBER_ARR(n_node, physicslib::FeSourceEdge_t, 2, uint16_t);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // struct FeSourceEdge_t

			struct RnSoftbodyParticle_t {
				MEMBER(fl_mass_inv, physicslib::RnSoftbodyParticle_t, float);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // struct RnSoftbodyParticle_t

			struct RnSoftbodySpring_t {
				MEMBER_ARR(n_particle, physicslib::RnSoftbodySpring_t, 2, uint16_t);
				MEMBER(fl_length, physicslib::RnSoftbodySpring_t, float);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // struct RnSoftbodySpring_t

			struct FeFitMatrix_t {
				MEMBER(bone, physicslib::FeFitMatrix_t, CTransform);
				MEMBER(v_center, physicslib::FeFitMatrix_t, vector);
				MEMBER(n_end, physicslib::FeFitMatrix_t, uint16_t);
				MEMBER(n_node, physicslib::FeFitMatrix_t, uint16_t);
				MEMBER(n_begin_dynamic, physicslib::FeFitMatrix_t, uint16_t);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // struct FeFitMatrix_t

			struct PhysFeModelDesc_t {
				MEMBER(ctrl_hash, physicslib::PhysFeModelDesc_t, cutl_vector<uint32_t>);
				MEMBER(ctrl_name, physicslib::PhysFeModelDesc_t, cutl_vector<cutl_string>);
				MEMBER(n_static_node_flags, physicslib::PhysFeModelDesc_t, uint32_t);
				MEMBER(n_dynamic_node_flags, physicslib::PhysFeModelDesc_t, uint32_t);
				MEMBER(fl_local_force, physicslib::PhysFeModelDesc_t, float);
				MEMBER(fl_local_rotation, physicslib::PhysFeModelDesc_t, float);
				MEMBER(n_node_count, physicslib::PhysFeModelDesc_t, uint16_t);
				MEMBER(n_static_nodes, physicslib::PhysFeModelDesc_t, uint16_t);
				MEMBER(n_rot_lock_static_nodes, physicslib::PhysFeModelDesc_t, uint16_t);
				MEMBER(n_first_position_driven_node, physicslib::PhysFeModelDesc_t, uint16_t);
				MEMBER(n_simd_tri_count1, physicslib::PhysFeModelDesc_t, uint16_t);
				MEMBER(n_simd_tri_count2, physicslib::PhysFeModelDesc_t, uint16_t);
				MEMBER(n_simd_quad_count1, physicslib::PhysFeModelDesc_t, uint16_t);
				MEMBER(n_simd_quad_count2, physicslib::PhysFeModelDesc_t, uint16_t);
				MEMBER(n_quad_count1, physicslib::PhysFeModelDesc_t, uint16_t);
				MEMBER(n_quad_count2, physicslib::PhysFeModelDesc_t, uint16_t);
				MEMBER(n_tree_depth, physicslib::PhysFeModelDesc_t, uint16_t);
				MEMBER(n_node_base_jigglebone_depends_count, physicslib::PhysFeModelDesc_t, uint16_t);
				MEMBER(n_rope_count, physicslib::PhysFeModelDesc_t, uint16_t);
				MEMBER(ropes, physicslib::PhysFeModelDesc_t, cutl_vector<uint16_t>);
				MEMBER(node_bases, physicslib::PhysFeModelDesc_t, cutl_vector<physicslib::FeNodeBase_t>);
				MEMBER(simd_node_bases, physicslib::PhysFeModelDesc_t, cutl_vector<physicslib::FeSimdNodeBase_t>);
				MEMBER(quads, physicslib::PhysFeModelDesc_t, cutl_vector<physicslib::FeQuad_t>);
				MEMBER(simd_quads, physicslib::PhysFeModelDesc_t, cutl_vector<physicslib::FeSimdQuad_t>);
				MEMBER(simd_tris, physicslib::PhysFeModelDesc_t, cutl_vector<physicslib::FeSimdTri_t>);
				MEMBER(simd_rods, physicslib::PhysFeModelDesc_t, cutl_vector<physicslib::FeSimdRodConstraint_t>);
				MEMBER(simd_rods_anim, physicslib::PhysFeModelDesc_t, cutl_vector<physicslib::FeSimdRodConstraintAnim_t>);
				MEMBER(init_pose, physicslib::PhysFeModelDesc_t, cutl_vector<CTransform>);
				MEMBER(rods, physicslib::PhysFeModelDesc_t, cutl_vector<physicslib::FeRodConstraint_t>);
				MEMBER(twists, physicslib::PhysFeModelDesc_t, cutl_vector<physicslib::FeTwistConstraint_t>);
				MEMBER(hinge_limits, physicslib::PhysFeModelDesc_t, cutl_vector<physicslib::FeHingeLimit_t>);
				MEMBER(anti_tunnel_probes, physicslib::PhysFeModelDesc_t, cutl_vector<physicslib::FeAntiTunnelProbe_t>);
				MEMBER(anti_tunnel_target_nodes, physicslib::PhysFeModelDesc_t, cutl_vector<uint16_t>);
				MEMBER(axial_edges, physicslib::PhysFeModelDesc_t, cutl_vector<physicslib::FeAxialEdgeBend_t>);
				MEMBER(node_inv_masses, physicslib::PhysFeModelDesc_t, cutl_vector<float>);
				MEMBER(ctrl_offsets, physicslib::PhysFeModelDesc_t, cutl_vector<physicslib::FeCtrlOffset_t>);
				MEMBER(ctrl_os_offsets, physicslib::PhysFeModelDesc_t, cutl_vector<physicslib::FeCtrlOsOffset_t>);
				MEMBER(follow_nodes, physicslib::PhysFeModelDesc_t, cutl_vector<physicslib::FeFollowNode_t>);
				MEMBER(collision_planes, physicslib::PhysFeModelDesc_t, cutl_vector<physicslib::FeCollisionPlane_t>);
				MEMBER(node_integrator, physicslib::PhysFeModelDesc_t, cutl_vector<physicslib::FeNodeIntegrator_t>);
				MEMBER(spring_integrator, physicslib::PhysFeModelDesc_t, cutl_vector<physicslib::FeSpringIntegrator_t>);
				MEMBER(simd_spring_integrator, physicslib::PhysFeModelDesc_t, cutl_vector<physicslib::FeSimdSpringIntegrator_t>);
				MEMBER(world_collision_params, physicslib::PhysFeModelDesc_t, cutl_vector<physicslib::FeWorldCollisionParams_t>);
				MEMBER(legacy_stretch_force, physicslib::PhysFeModelDesc_t, cutl_vector<float>);
				MEMBER(node_collision_radii, physicslib::PhysFeModelDesc_t, cutl_vector<float>);
				MEMBER(dyn_node_friction, physicslib::PhysFeModelDesc_t, cutl_vector<float>);
				MEMBER(local_rotation, physicslib::PhysFeModelDesc_t, cutl_vector<float>);
				MEMBER(local_force, physicslib::PhysFeModelDesc_t, cutl_vector<float>);
				MEMBER(tapered_capsule_stretches, physicslib::PhysFeModelDesc_t, cutl_vector<physicslib::FeTaperedCapsuleStretch_t>);
				MEMBER(tapered_capsule_rigids, physicslib::PhysFeModelDesc_t, cutl_vector<physicslib::FeTaperedCapsuleRigid_t>);
				MEMBER(sphere_rigids, physicslib::PhysFeModelDesc_t, cutl_vector<physicslib::FeSphereRigid_t>);
				MEMBER(world_collision_nodes, physicslib::PhysFeModelDesc_t, cutl_vector<uint16_t>);
				MEMBER(tree_parents, physicslib::PhysFeModelDesc_t, cutl_vector<uint16_t>);
				MEMBER(tree_collision_masks, physicslib::PhysFeModelDesc_t, cutl_vector<uint16_t>);
				MEMBER(tree_children, physicslib::PhysFeModelDesc_t, cutl_vector<physicslib::FeTreeChildren_t>);
				MEMBER(free_nodes, physicslib::PhysFeModelDesc_t, cutl_vector<uint16_t>);
				MEMBER(fit_matrices, physicslib::PhysFeModelDesc_t, cutl_vector<physicslib::FeFitMatrix_t>);
				MEMBER(fit_weights, physicslib::PhysFeModelDesc_t, cutl_vector<physicslib::FeFitWeight_t>);
				MEMBER(reverse_offsets, physicslib::PhysFeModelDesc_t, cutl_vector<physicslib::FeNodeReverseOffset_t>);
				MEMBER(anim_stray_radii, physicslib::PhysFeModelDesc_t, cutl_vector<physicslib::FeAnimStrayRadius_t>);
				MEMBER(simd_anim_stray_radii, physicslib::PhysFeModelDesc_t, cutl_vector<physicslib::FeSimdAnimStrayRadius_t>);
				MEMBER(kelager_bends, physicslib::PhysFeModelDesc_t, cutl_vector<physicslib::FeKelagerBend2_t>);
				MEMBER(ctrl_soft_offsets, physicslib::PhysFeModelDesc_t, cutl_vector<physicslib::FeCtrlSoftOffset_t>);
				MEMBER(jiggle_bones, physicslib::PhysFeModelDesc_t, cutl_vector<physicslib::CFeIndexedJiggleBone>);
				MEMBER(source_elems, physicslib::PhysFeModelDesc_t, cutl_vector<uint16_t>);
				MEMBER(goal_damped_spring_integrators, physicslib::PhysFeModelDesc_t, cutl_vector<uint32_t>);
				MEMBER(tris, physicslib::PhysFeModelDesc_t, cutl_vector<physicslib::FeTri_t>);
				MEMBER(n_tri_count1, physicslib::PhysFeModelDesc_t, uint16_t);
				MEMBER(n_tri_count2, physicslib::PhysFeModelDesc_t, uint16_t);
				MEMBER(n_reserved_uint8, physicslib::PhysFeModelDesc_t, uint8_t);
				MEMBER(n_extra_pressure_iterations, physicslib::PhysFeModelDesc_t, uint8_t);
				MEMBER(n_extra_goal_iterations, physicslib::PhysFeModelDesc_t, uint8_t);
				MEMBER(n_extra_iterations, physicslib::PhysFeModelDesc_t, uint8_t);
				MEMBER(sdfrigids, physicslib::PhysFeModelDesc_t, cutl_vector<physicslib::FeSDFRigid_t>);
				MEMBER(box_rigids, physicslib::PhysFeModelDesc_t, cutl_vector<physicslib::FeBoxRigid_t>);
				MEMBER(dyn_node_vertex_set, physicslib::PhysFeModelDesc_t, cutl_vector<uint8_t>);
				MEMBER(vertex_set_names, physicslib::PhysFeModelDesc_t, cutl_vector<uint32_t>);
				MEMBER(rigid_collider_priorities, physicslib::PhysFeModelDesc_t, cutl_vector<physicslib::FeRigidColliderIndices_t>);
				MEMBER(morph_layers, physicslib::PhysFeModelDesc_t, cutl_vector<physicslib::FeMorphLayerDepr_t>);
				MEMBER(morph_set_data, physicslib::PhysFeModelDesc_t, cutl_vector<uint8_t>);
				MEMBER(vertex_maps, physicslib::PhysFeModelDesc_t, cutl_vector<physicslib::FeVertexMapDesc_t>);
				MEMBER(vertex_map_values, physicslib::PhysFeModelDesc_t, cutl_vector<uint8_t>);
				MEMBER(effects, physicslib::PhysFeModelDesc_t, cutl_vector<physicslib::FeEffectDesc_t>);
				MEMBER(lock_to_parent, physicslib::PhysFeModelDesc_t, cutl_vector<physicslib::FeCtrlOffset_t>);
				MEMBER(lock_to_goal, physicslib::PhysFeModelDesc_t, cutl_vector<uint16_t>);
				MEMBER(skel_parents, physicslib::PhysFeModelDesc_t, cutl_vector<int16_t>);
				MEMBER(dyn_node_wind_bases, physicslib::PhysFeModelDesc_t, cutl_vector<physicslib::FeNodeWindBase_t>);
				MEMBER(fl_internal_pressure, physicslib::PhysFeModelDesc_t, float);
				MEMBER(fl_default_time_dilation, physicslib::PhysFeModelDesc_t, float);
				MEMBER(fl_windage, physicslib::PhysFeModelDesc_t, float);
				MEMBER(fl_wind_drag, physicslib::PhysFeModelDesc_t, float);
				MEMBER(fl_default_surface_stretch, physicslib::PhysFeModelDesc_t, float);
				MEMBER(fl_default_thread_stretch, physicslib::PhysFeModelDesc_t, float);
				MEMBER(fl_default_gravity_scale, physicslib::PhysFeModelDesc_t, float);
				MEMBER(fl_default_vel_air_drag, physicslib::PhysFeModelDesc_t, float);
				MEMBER(fl_default_exp_air_drag, physicslib::PhysFeModelDesc_t, float);
				MEMBER(fl_default_vel_quad_air_drag, physicslib::PhysFeModelDesc_t, float);
				MEMBER(fl_default_exp_quad_air_drag, physicslib::PhysFeModelDesc_t, float);
				MEMBER(fl_rod_velocity_smooth_rate, physicslib::PhysFeModelDesc_t, float);
				MEMBER(fl_quad_velocity_smooth_rate, physicslib::PhysFeModelDesc_t, float);
				MEMBER(fl_add_world_collision_radius, physicslib::PhysFeModelDesc_t, float);
				MEMBER(fl_default_volumetric_solve_amount, physicslib::PhysFeModelDesc_t, float);
				MEMBER(fl_motion_smooth_cdt, physicslib::PhysFeModelDesc_t, float);
				MEMBER(fl_local_drag1, physicslib::PhysFeModelDesc_t, float);
				MEMBER(n_rod_velocity_smooth_iterations, physicslib::PhysFeModelDesc_t, uint16_t);
				MEMBER(n_quad_velocity_smooth_iterations, physicslib::PhysFeModelDesc_t, uint16_t);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // struct PhysFeModelDesc_t

			struct FeSpringIntegrator_t {
				MEMBER_ARR(n_node, physicslib::FeSpringIntegrator_t, 2, uint16_t);
				MEMBER(fl_spring_rest_length, physicslib::FeSpringIntegrator_t, float);
				MEMBER(fl_spring_constant, physicslib::FeSpringIntegrator_t, float);
				MEMBER(fl_spring_damping, physicslib::FeSpringIntegrator_t, float);
				MEMBER(fl_node_weight0, physicslib::FeSpringIntegrator_t, float);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // struct FeSpringIntegrator_t

		} // namespace physicslib
	} // namespace schema
} // namespace sdk
#endif // SDK_SCHEMA_physicslib_H
