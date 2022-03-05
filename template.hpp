#define SUPPRESS_GEN_DEFS
#pragma none
/* NO INCLUDE */
#ifndef H_GLSLHPP
#define H_GLSLHPP
#ifdef __cplusplus

#include <array>
#include <type_traits>

#if __cplusplus > 201703L
#include <concepts>
#else
#define requires()
#endif

using uint = unsigned int;

namespace internal {

template <typename T, uint N>
struct vec {};
template <typename T, uint N, uint M>
struct mat {};
template <typename V>
struct get_dim {
    static constexpr value = 1;
};
template <typename T, int N>
struct get_dim<vec<T, N>> {
    static constexpr value = N;
};

#ifndef SUPPRESS_GEN_DEFS
// clang-format off
{{ #vecdecl }}
{{{ content }}}
{{ /vecdecl }}

{{ #matdecl }}
{{{ content }}}
{{ /matdecl }}
// clang-format on
#endif

} // namespace internal

using bvec2 = ::internal::vec<bool, 2>;
using bvec3 = ::internal::vec<bool, 3>;
using bvec4 = ::internal::vec<bool, 4>;

using ivec2 = ::internal::vec<int, 2>;
using ivec3 = ::internal::vec<int, 3>;
using ivec4 = ::internal::vec<int, 4>;

using uvec2 = ::internal::vec<uint, 2>;
using uvec3 = ::internal::vec<uint, 3>;
using uvec4 = ::internal::vec<uint, 4>;

using vec2 = ::internal::vec<float, 2>;
using vec3 = ::internal::vec<float, 3>;
using vec4 = ::internal::vec<float, 4>;

using dvec2 = ::internal::vec<double, 2>;
using dvec3 = ::internal::vec<double, 3>;
using dvec4 = ::internal::vec<double, 4>;

using mat2x2  = ::internal::mat<float, 2, 2>;
using dmat2x2 = ::internal::mat<double, 2, 2>;
using mat2x3  = ::internal::mat<float, 2, 3>;
using dmat2x3 = ::internal::mat<double, 2, 3>;
using mat2x4  = ::internal::mat<float, 2, 4>;
using dmat2x4 = ::internal::mat<double, 2, 4>;
using mat3x2  = ::internal::mat<float, 3, 2>;
using dmat3x2 = ::internal::mat<double, 3, 2>;
using mat3x3  = ::internal::mat<float, 3, 3>;
using dmat3x3 = ::internal::mat<double, 3, 3>;
using mat3x4  = ::internal::mat<float, 3, 4>;
using dmat3x4 = ::internal::mat<double, 3, 4>;
using mat4x2  = ::internal::mat<float, 4, 2>;
using dmat4x2 = ::internal::mat<double, 4, 2>;
using mat4x3  = ::internal::mat<float, 4, 3>;
using dmat4x3 = ::internal::mat<double, 4, 3>;
using mat4x4  = ::internal::mat<float, 4, 4>;
using dmat4x4 = ::internal::mat<double, 4, 4>;

using mat2  = ::internal::mat<float, 2, 2>;
using dmat2 = ::internal::mat<double, 2, 2>;
using mat3  = ::internal::mat<float, 3, 3>;
using dmat3 = ::internal::mat<double, 3, 3>;
using mat4  = ::internal::mat<float, 4, 4>;
using dmat4 = ::internal::mat<double, 4, 4>;

namespace internal {
struct textureType {};

struct texture_1D : public textureType {
    using texcoord  = float;
    using itexcoord = int;
};
struct texture_2D : public textureType {
    using texcoord  = vec2;
    using itexcoord = ivec2;
};
struct texture_3D : public textureType {
    using texcoord  = vec3;
    using itexcoord = ivec3;
};
struct texture_Cube : public textureType {
    using texcoord = vec3;
};
struct texture_2DRect : public textureType {
    using texcoord  = vec2;
    using itexcoord = ivec2;
};
struct texture_1DArray : public textureType {
    using texcoord  = vec2;
    using itexcoord = ivec2;
};
struct texture_2DArray : public textureType {
    using texcoord  = vec3;
    using itexcoord = ivec3;
};
struct texture_CubeArray : public textureType {
    using texcoord  = vec4;
    using itexcoord = ivec4;
};
struct texture_Buffer : public textureType {
    using itexcoord = int;
};
// struct texture_2DMS : public textureType {};
// struct texture_2DMSArray : public textureType {};

template <typename V>
struct gsampler {
    using value_type = V;
};
struct gshadow {
    using value_type = float;
};
template <typename V>
struct gimage {
    using value_type = V;
};

#if __cplusplus > 201703L
template <typename T>
concept textureAccessable = requires(T a) {
    typename T::texcoord;
    typename T::value_type;
};
template <typename T>
concept texelFetchAccessable = requires(T a) {
    typename T::itexcoord;
    typename T::value_type;
};
#endif

} // namespace internal
#ifndef SUPPRESS_GEN_DEFS
// clang-format off
{{{ texdecl }}}
// clang-format on
#endif

// clang-format off
template<typename GImage> requires(::internal::texelFetchAccessable<GImage> && std::derived_from<GImage, ::internal::gimage<typename GImage::value_type>>)
GImage::itexcoord imageSize(const GImage &);
template<typename GImage> requires(::internal::texelFetchAccessable<GImage> && std::derived_from<GImage, ::internal::gimage<typename GImage::value_type>>)
::internal::vec<typename GImage::value_type, 4> imageLoad(const GImage &, typename GImage::itexcoord);
template<typename GImage> requires(::internal::texelFetchAccessable<GImage> && std::derived_from<GImage, ::internal::gimage<typename GImage::value_type>>)
void imageStore(const GImage &, typename GImage::itexcoord, ::internal::vec<typename GImage::value_type, 4>);

template<typename GSampler> requires(::internal::texelFetchAccessable<GSampler> && std::derived_from<GSampler, ::internal::gsampler<typename GSampler::value_type>>)
GSampler::itexcoord textureSize(const GSampler &, int LOD = 0);
template<typename GSampler> requires(::internal::texelFetchAccessable<GSampler> && std::derived_from<GSampler, ::internal::gsampler<typename GSampler::value_type>>)
int textureQueryLevels(const GSampler &);
template<typename GSampler> requires(::internal::textureAccessable<GSampler> && std::derived_from<GSampler, ::internal::gsampler<typename GSampler::value_type>>)
::internal::vec<typename GSampler::value_type, 4> texture(const GSampler &, typename GSampler::texcoord, float bias​ = 0);
template<typename GSampler> requires(::internal::texelFetchAccessable<GSampler> && std::derived_from<GSampler, ::internal::gsampler<typename GSampler::value_type>>)
::internal::vec<typename GSampler::value_type, 4> texelFetch(const GSampler &, typename GSampler::itexcoord, int LOD = 0);
template<typename GSampler> requires(::internal::textureAccessable<GSampler> && std::derived_from<GSampler, ::internal::gsampler<typename GSampler::value_type>>)
::internal::vec<typename GSampler::value_type, 4> textureLod(const GSampler &, typename GSampler::texcoord, float);
template<typename GSampler> requires(::internal::textureAccessable<GSampler> && std::derived_from<GSampler, ::internal::gsampler<typename GSampler::value_type>> && ::internal::texelFetchAccessable<GSampler>)
::internal::vec<typename GSampler::value_type, 4> textureOffset(const GSampler &, typename GSampler::texcoord, typename GSampler::itexcoord, float bias​ = 0);

template<typename GShadow> requires(::internal::texelFetchAccessable<GShadow> && std::derived_from<GShadow, ::internal::gshadow>)
GShadow::itexcoord textureSize(const GShadow &, int LOD = 0);
template<typename GShadow> requires(::internal::texelFetchAccessable<GShadow> && std::derived_from<GShadow, ::internal::gshadow>)
int textureQueryLevels(const GShadow &);
template<typename GShadow> requires(::internal::textureAccessable<GShadow> && std::derived_from<GShadow, ::internal::gshadow>)
GShadow::value_type texture(const GShadow &, typename GShadow::texcoord, float bias​ = 0);
template<typename GShadow> requires(::internal::texelFetchAccessable<GShadow> && std::derived_from<GShadow, ::internal::gsampler<typename GSampler::value_type>>)
GShadow::value_type texelFetch(const GShadow &, typename GShadow::itexcoord, int LOD = 0);
template<typename GShadow> requires(::internal::textureAccessable<GShadow> && std::derived_from<GShadow, ::internal::gshadow>)
GShadow::value_type textureLod(const GShadow &, typename GShadow::texcoord, float);
template<typename GShadow> requires(::internal::textureAccessable<GShadow> && std::derived_from<GShadow, ::internal::gshadow> && ::internal::texelFetchAccessable<GShadow>)
GShadow::value_type textureOffset(const GShadow &, typename GShadow::texcoord, typename GShadow::itexcoord, float bias​ = 0);
// clang-format on

extern vec4 gl_FragData[];
extern vec4 gl_FragColor;
extern vec4 gl_Position;
extern vec4 gl_MultiTexCoord0, gl_MultiTexCoord1;
extern vec4 gl_Color;
extern vec3 gl_Normal;
extern vec4 ftransform();
extern vec4 gl_Vertex;
extern mat3 gl_NormalMatrix;
extern mat4 gl_ModelViewMatrix, gl_ProjectionMatrix;
extern mat4 gl_TextureMatrix[];
extern bool gl_FrontFacing;
extern vec2 gl_FragCoord;
struct gl_PerVertex {
    vec4   gl_Position;
    float  gl_PointSize;
    float *gl_ClipDistance;
};
extern gl_PerVertex gl_in[];

[[noreturn]] void abort() { throw "discard"; }
#define uniform
#define in
#define out
#define inout
#define attribute
#define flat
#define discard abort()
#define layout(...)
#define triangles
#define points
int  max_vertices;
void EmitVertex();
void EndPrimitive();

template <typename genType, uint M, uint N, uint L>
::internal::mat<genType, M, L> operator*(const ::internal::mat<genType, M, N> &, const ::internal::mat<genType, N, L> &);
template <typename genType, uint M, uint N>
::internal::vec<genType, M> operator*(const ::internal::mat<genType, M, N> &, const ::internal::vec<genType, N> &);

template <typename genType, uint N>
::internal::vec<genType, N> operator-(const ::internal::vec<genType, N> &);

template <typename genType, uint N>
::internal::vec<genType, N> operator+(const ::internal::vec<genType, N> &, const ::internal::vec<genType, N> &);
template <typename genType, uint N>
::internal::vec<genType, N> operator-(const ::internal::vec<genType, N> &, const ::internal::vec<genType, N> &);
template <typename genType, uint N>
::internal::vec<genType, N> operator*(const ::internal::vec<genType, N> &, const ::internal::vec<genType, N> &);
template <typename genType, uint N>
::internal::vec<genType, N> operator/(const ::internal::vec<genType, N> &, const ::internal::vec<genType, N> &);
template <typename genType, uint N>
::internal::vec<genType, N> operator+=(const ::internal::vec<genType, N> &, const ::internal::vec<genType, N> &);
template <typename genType, uint N>
::internal::vec<genType, N> operator-=(const ::internal::vec<genType, N> &, const ::internal::vec<genType, N> &);
template <typename genType, uint N>
::internal::vec<genType, N> operator*=(const ::internal::vec<genType, N> &, const ::internal::vec<genType, N> &);
template <typename genType, uint N>
::internal::vec<genType, N> operator/=(const ::internal::vec<genType, N> &, const ::internal::vec<genType, N> &);
template <typename genType, uint N>
::internal::vec<genType, N> operator+(const genType &, const ::internal::vec<genType, N> &);
template <typename genType, uint N>
::internal::vec<genType, N> operator+(const ::internal::vec<genType, N> &, const genType &);
template <typename genType, uint N>
::internal::vec<genType, N> operator-(const genType &, const ::internal::vec<genType, N> &);
template <typename genType, uint N>
::internal::vec<genType, N> operator-(const ::internal::vec<genType, N> &, const genType &);
template <typename genType, uint N>
::internal::vec<genType, N> operator*(const genType &, const ::internal::vec<genType, N> &);
template <typename genType, uint N>
::internal::vec<genType, N> operator*(const ::internal::vec<genType, N> &, const genType &);
template <typename genType, uint N>
::internal::vec<genType, N> operator/(const genType &, const ::internal::vec<genType, N> &);
template <typename genType, uint N>
::internal::vec<genType, N> operator/(const ::internal::vec<genType, N> &, const genType &);
template <typename genType, uint N>
::internal::vec<genType, N> operator+=(const ::internal::vec<genType, N> &, const genType &);
template <typename genType, uint N>
::internal::vec<genType, N> operator-=(const ::internal::vec<genType, N> &, const genType &);
template <typename genType, uint N>
::internal::vec<genType, N> operator*=(const ::internal::vec<genType, N> &, const genType &);
template <typename genType, uint N>
::internal::vec<genType, N> operator/=(const ::internal::vec<genType, N> &, const genType &);

template <uint N>
::internal::vec<uint, N> operator>>(const ::internal::vec<uint, N> &, const int &);
template <uint N>
::internal::vec<uint, N> operator<<(const ::internal::vec<uint, N> &, const int &);
template <uint N>
::internal::vec<int, N> operator>>(const ::internal::vec<int, N> &, const int &);
template <uint N>
::internal::vec<int, N> operator<<(const ::internal::vec<int, N> &, const int &);

template <uint N>
::internal::vec<uint, N> operator^(const ::internal::vec<uint, N> &, const ::internal::vec<uint, N> &);
template <uint N>
::internal::vec<int, N> operator^(const ::internal::vec<int, N> &, const ::internal::vec<int, N> &);

float floor(float);
float fract(float);
float mod(float, float);
float pow(float, float);
float min(float, float);
float max(float, float);
float step(float, float);
float mix(float, float, float);
float clamp(float, float, float);

float sin(float);
float cos(float);
float tan(float);
float csc(float);
float sec(float);
float cot(float);
float asin(float);
float acos(float);
float atan(float);
float acsc(float);
float asec(float);
float acot(float);
float abs(float);
float exp(float);
float log(float);
float exp2(float);
float log2(float);
float sqrt(float);
float sign(float);
float invsqrt(float);
float inversesqrt(float);

// clang-format off
template<uint N> bool any(const ::internal::vec<bool, N> &);
template<typename genType, uint N> ::internal::vec<bool, N> isnan(const ::internal::vec<genType, N> &);
template<typename genType, uint N> ::internal::vec<genType, N> floor(const ::internal::vec<genType, N> &);
template<typename genType, uint N> ::internal::vec<genType, N> fract(const ::internal::vec<genType, N> &);
template<typename genType, uint N> ::internal::vec<genType, N> mod(const ::internal::vec<genType, N> &, const ::internal::vec<genType, N> &);
template<typename genType, uint N> ::internal::vec<genType, N> pow(const ::internal::vec<genType, N> &, const ::internal::vec<genType, N> &);
template<typename genType, uint N> ::internal::vec<genType, N> min(const ::internal::vec<genType, N> &, const ::internal::vec<genType, N> &);
template<typename genType, uint N> ::internal::vec<genType, N> max(const ::internal::vec<genType, N> &, const ::internal::vec<genType, N> &);
template<typename genType, uint N> ::internal::vec<genType, N> step(const ::internal::vec<genType, N> &, const ::internal::vec<genType, N> &);
template<typename genType, uint N> ::internal::vec<genType, N> mix(const ::internal::vec<genType, N> &, const ::internal::vec<genType, N> &, const ::internal::vec<genType, N> &);
template<typename genType, uint N> ::internal::vec<genType, N> mix(const ::internal::vec<genType, N> &, const ::internal::vec<genType, N> &, const genType &);
template<typename genType, uint N> ::internal::vec<genType, N> clamp(const ::internal::vec<genType, N> &, const ::internal::vec<genType, N> &, const ::internal::vec<genType, N> &);

template<typename genType, uint N> ::internal::vec<genType, N> sin(const ::internal::vec<genType, N>&);
template<typename genType, uint N> ::internal::vec<genType, N> cos(const ::internal::vec<genType, N>&);
template<typename genType, uint N> ::internal::vec<genType, N> tan(const ::internal::vec<genType, N>&);
template<typename genType, uint N> ::internal::vec<genType, N> csc(const ::internal::vec<genType, N>&);
template<typename genType, uint N> ::internal::vec<genType, N> sec(const ::internal::vec<genType, N>&);
template<typename genType, uint N> ::internal::vec<genType, N> cot(const ::internal::vec<genType, N>&);
template<typename genType, uint N> ::internal::vec<genType, N> asin(const ::internal::vec<genType, N>&);
template<typename genType, uint N> ::internal::vec<genType, N> acos(const ::internal::vec<genType, N>&);
template<typename genType, uint N> ::internal::vec<genType, N> atan(const ::internal::vec<genType, N>&);
template<typename genType, uint N> ::internal::vec<genType, N> acsc(const ::internal::vec<genType, N>&);
template<typename genType, uint N> ::internal::vec<genType, N> asec(const ::internal::vec<genType, N>&);
template<typename genType, uint N> ::internal::vec<genType, N> acot(const ::internal::vec<genType, N>&);
template<typename genType, uint N> ::internal::vec<genType, N> abs(const ::internal::vec<genType, N>&);
template<typename genType, uint N> ::internal::vec<genType, N> exp(const ::internal::vec<genType, N>&);
template<typename genType, uint N> ::internal::vec<genType, N> log(const ::internal::vec<genType, N>&);
template<typename genType, uint N> ::internal::vec<genType, N> exp2(const ::internal::vec<genType, N>&);
template<typename genType, uint N> ::internal::vec<genType, N> log2(const ::internal::vec<genType, N>&);
template<typename genType, uint N> ::internal::vec<genType, N> sqrt(const ::internal::vec<genType, N>&);
template<typename genType, uint N> ::internal::vec<genType, N> sign(const ::internal::vec<genType, N>&);
template<typename genType, uint N> ::internal::vec<float, N> invsqrt(const ::internal::vec<genType, N>&);
template<typename genType, uint N> ::internal::vec<float, N> inversesqrt(const ::internal::vec<genType, N>&);
template<typename genType, uint N> ::internal::vec<float, N> normalize(const ::internal::vec<genType, N>&);

template<uint N> ::internal::vec<float, N> intBitsToFloat(const ::internal::vec<int, N>&);
template<uint N> ::internal::vec<float, N> uintBitsToFloat(const ::internal::vec<uint, N>&);
template<uint N> ::internal::vec<int, N> floatBitsToInt(const ::internal::vec<float, N>&);
template<uint N> ::internal::vec<uint, N> floatBitsToUint(const ::internal::vec<float, N>&);

template<typename genType, uint N> float length(const ::internal::vec<genType, N>&);
template<typename genType, uint N> float dot(const ::internal::vec<genType, N>&, const ::internal::vec<genType, N>&);
template<typename genType, uint N> float distance(const ::internal::vec<genType, N>&, const ::internal::vec<genType, N>&);
// clang-format off

vec3 cross(vec3, vec3);
vec3 reflect(vec3 I, vec3 N);
vec3 refract(vec3 I, vec3 N, float eta);

uint packUnorm2x16(vec2 v);
uint packSnorm2x16(vec2 v);
uint packUnorm4x8(vec4 v);
uint packSnorm4x8(vec4 v);

vec2 unpackUnorm2x16(uint v);
vec2 unpackSnorm2x16(uint v);
vec4 unpackUnorm4x8(uint v);
vec4 unpackSnorm4x8(uint v);

#endif
#endif