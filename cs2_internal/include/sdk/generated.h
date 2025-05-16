// Generated on: 11/18/2024

#ifndef SDK_GENERATED_H
#define SDK_GENERATED_H

#include <cstdint>

#define MEMBER_OFF(n, off, ...) __VA_ARGS__ &get_##n() { return *(__VA_ARGS__ *)(uintptr_t(this) + off); }
#define MEMBER_CUSTOM(n, c, ...) __VA_ARGS__& get_##n () { return *(__VA_ARGS__*)(uintptr_t(this) + sdk::offsets::c::n); }
#define MEMBER(n, c, ...) __VA_ARGS__& get_##n () { return *(__VA_ARGS__*)(uintptr_t(this) + sdk::offsets::schema::c::n); }
#define MEMBER_ARR(n, c, i, ...) std::array<__VA_ARGS__, i>& get_##n () { return *(std::array<__VA_ARGS__, i>*)(uintptr_t(this) + sdk::offsets::schema::c::n); }

#define SCHEMA_MEMBER(n, ns, c, ...) __VA_ARGS__& get_##n () { return *(__VA_ARGS__*)(uintptr_t(this) + sdk::offsets::ns::c::n); }


#include <cstdint>
#include <array>

//here for temp reasons just replace with your base crap 
using CAnimValue = char[0x08];
using CAnimVariant = char[0x11];
template <typename T> using CAnimScriptParam = char[0x08];
using CBufferString = char[0x10];
using CColorGradient = char[0x18];
template <typename> using CCompressor = char[0x01];
using CEntityHandle = char[0x04];
using CEntityIndex = char[0x04];
using CGlobalSymbol = char[0x08];
using CKV3MemberNameWithStorage = char[0x38];
using CNetworkedQuantizedFloat = float;
using CParticleNamedValueRef = char[0x40];
using CPiecewiseCurve = char[0x40];
using CPlayerSlot = char[0x04];
using CPulseValueFullType = char[0x10];
using CResourceName = char[0xe0];
using CSplitScreenSlot = char[0x04];
using CTransform = char[0x20];
using CUtlBinaryBlock = char[0x18];
template <typename, typename> using CUtlHashtable = char[0x20];
using CUtlStringTokenWithStorage = char[0x18];
using CUtlStringToken = char[0x04];
using CUtlSymbolLarge = char[0x08];
using CUtlSymbol = char[0x02];
template <typename> using CAnimGraphParamOptionalRef = char[0x20];
template <typename> using CAnimGraphParamRef = char[0x20];
template <int N> using CBitVec = char[(N + 7) / 8];
template <typename> using CEntityOutputTemplate = char[0x28];

template <typename> using C_NetworkUtlVectorBase = char[0x18];
template <typename> using CNetworkUtlVectorBase = char[0x18];
using CSoundEventName = char[0x01];
template <typename> using CUtlLeanVector = char[0x10];
template <typename, class> using CUtlOrderedMap = char[0x28];
template <typename, class> using CUtlPair = char[0x01];
///template <typename> using cutl_vector = char[0x18];
template <typename Ty> using CUtlVectorFixedGrowable = char[0x18 + ((sizeof(Ty) < 4) ? 4 : sizeof(Ty))];
template <typename Ty> using CUtlLeanVectorFixedGrowable = char[0x10 + ((sizeof(Ty) < 4) ? 4 : sizeof(Ty))];
template <typename> using C_UtlVectorEmbeddedNetworkVar = char[0x50];
template <typename> using CUtlVectorEmbeddedNetworkVar = char[0x50];
using CUtlVectorSIMDPaddedVector = char[0x18];
template <typename> using CSmartPtr = char[0x08];
template <typename> using CResourceArray = char[0x08];
using CResourceString = char[0x08];
template <typename> using CResourcePointer = char[0x08];
template <typename> using CResourceNameTyped = char[0xe0];
template <typename> using CStrongHandle = char[0x08];
template <typename> using CStrongHandleCopyable = char[0x08];
using CStrongHandleVoid = char[0x08];
template <typename> using CVariantBase = char[0x10];
template <typename> using CWeakHandle = char[0x08];

using KeyValues3 = char[0x10];
using WorldGroupId_t = char[0x04];
using float32 = char[0x04];

template <typename Ty>
using CUtlVectorFixedGrowable = char[0x18 + ((sizeof(Ty) < 4) ? 4 : sizeof(Ty))];
template <typename Ty>
using CUtlLeanVectorFixedGrowable = char[0x10 + ((sizeof(Ty) < 4) ? 4 : sizeof(Ty))];
template <typename>
using C_UtlVectorEmbeddedNetworkVar = char[0x50];
template <typename>
using CUtlVectorEmbeddedNetworkVar = char[0x50];
using CUtlVectorSIMDPaddedVector = char[0x18];
using matrix3x4_t = char[0x30];
using matrix3x4a_t = char[0x30];
using CSmartPropAttributeVector = char[0x40];
using CSmartPropAttributeFloat = char[0x40];
using CSmartPropAttributeBool = char[0x40];
using CSmartPropAttributeColor = char[0x40];
using CSmartPropAttributeInt = char[0x40];
using CSmartPropAttributeModelName = char[0x40];
using CSmartPropAttributeMaterialGroup = char[0x40];
using CSmartPropAttributeVector2D = char[0x40];
using CSmartPropVariableComparison = char[0x20];
using CSmartPropAttributeAngles = char[0x40];
using CSmartPropAttributeStateName = char[0x40];
using CSmartPropAttributeVariableValue = char[0x40];

//template <typename>
//using cutl_vector = char[0x18];

#include <sdk/utl/utl_vector.h>
#include <sdk/utl/utl_ts_hash.h>
#include <sdk/utl/utl_memory.h>
#include <sdk/utl/utl_string.h>


#include <utils/chandle.h>

#include <sdk/math/vector.h>
#include <sdk/math/mat.h>

#include <sdk/color.h>

#include "offsets_schema.h"
#include "offsets.h"

#include "schema/animationsystem.h"
#include "schema/animgraphlib.h"
#include "schema/animlib.h"
#include "schema/client.h"
#include "schema/engine2.h"
#include "schema/entity2.h"
#include "schema/host.h"
#include "schema/materialsystem2.h"
#include "schema/mathlib_extended.h"
#include "schema/modellib.h"
#include "schema/navlib.h"
#include "schema/networksystem.h"
#include "schema/panorama_content.h"
//#include "schema/particles.h"
//#include "schema/particleslib.h"
#include "schema/physicslib.h"
#include "schema/pulse_runtime_lib.h"
#include "schema/pulse_system.h"
#include "schema/rendersystemdx11.h"
#include "schema/resourcefile.h"
#include "schema/resourcesystem.h"
#include "schema/scenesystem.h"
#include "schema/schemasystem.h"
#include "schema/server.h"
#include "schema/smartprops.h"
#include "schema/soundsystem.h"
#include "schema/soundsystem_lowlevel.h"
#include "schema/soundsystem_voicecontainers.h"
#include "schema/tier2.h"
#include "schema/vphysics2.h"
#include "schema/worldrenderer.h"

namespace sdk {} // namespace sdk

#endif // SDK_GENERATED_H
