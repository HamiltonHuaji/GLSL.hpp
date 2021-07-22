/* NO INCLUDE */
#ifndef HHGI_temp
#define HHGI_temp
#ifdef __cplusplus

#include <type_traits>
#include <array>

#if __cplusplus > 201703UL
#include <concepts>
#else
#define requires
#endif

using uint = unsigned int;

template <typename T, uint N>
struct vec;
template <typename T, uint N, uint M>
struct mat;

template <typename V>
struct get_dim
{
    static constexpr value = 1;
};
template <typename T, int N>
struct get_dim<vec<T, N>>
{
    static constexpr value = N;
};

// clang-format off
{{ #vecdecl }}
{{{ content }}}
{{ /vecdecl }}

{{ #matdecl }}
{{{ content }}}
{{ /matdecl }}
// clang-format on

using bvec2 = vec<bool, 2>;
using bvec3 = vec<bool, 3>;
using bvec4 = vec<bool, 4>;

using ivec2 = vec<int, 2>;
using ivec3 = vec<int, 3>;
using ivec4 = vec<int, 4>;

using uvec2 = vec<uint, 2>;
using uvec3 = vec<uint, 3>;
using uvec4 = vec<uint, 4>;

using vec2 = vec<float, 2>;
using vec3 = vec<float, 3>;
using vec4 = vec<float, 4>;

using dvec2 = vec<double, 2>;
using dvec3 = vec<double, 3>;
using dvec4 = vec<double, 4>;

using mat2x2 = mat<float, 2, 2>;
using dmat2x2 = mat<double, 2, 2>;
using mat2x3 = mat<float, 2, 3>;
using dmat2x3 = mat<double, 2, 3>;
using mat2x4 = mat<float, 2, 4>;
using dmat2x4 = mat<double, 2, 4>;
using mat3x2 = mat<float, 3, 2>;
using dmat3x2 = mat<double, 3, 2>;
using mat3x3 = mat<float, 3, 3>;
using dmat3x3 = mat<double, 3, 3>;
using mat3x4 = mat<float, 3, 4>;
using dmat3x4 = mat<double, 3, 4>;
using mat4x2 = mat<float, 4, 2>;
using dmat4x2 = mat<double, 4, 2>;
using mat4x3 = mat<float, 4, 3>;
using dmat4x3 = mat<double, 4, 3>;
using mat4x4 = mat<float, 4, 4>;
using dmat4x4 = mat<double, 4, 4>;

using mat2 = mat<float, 2, 2>;
using dmat2 = mat<double, 2, 2>;
using mat3 = mat<float, 3, 3>;
using dmat3 = mat<double, 3, 3>;
using mat4 = mat<float, 4, 4>;
using dmat4 = mat<double, 4, 4>;

enum _textureType
{
    texture_1D,
    texture_2D,
    texture_3D,
    texture_Cube,
    texture_2DRect,
    texture_1DArray,
    texture_2DArray,
    texture_CubeArray,
    texture_Buffer,
    texture_2DMS,
    texture_2DMSArray,
};

// enum _textureAccess
// {
//     texture_sampler,
//     texture_image,
// };

template <typename V, _textureType T>
struct _gsampler;
template <typename V, _textureType T>
struct _gimage;

// clang-format off
{{{ texdecl }}}
// clang-format on


template <typename V, _textureType T>
ivec2 imageSize(const _gimage<V, T>&);
template <typename V, _textureType T>
vec<V, 4> imageLoad(const _gimage<V, T>&, ivec2);
template <typename V, _textureType T>
void imageStore(const _gimage<V, T>&, ivec2, vec<V, 4>);

template <typename V, _textureType T>
ivec2 textureSize(const _gsampler<V, T>&, int LOD = 0);
template <typename V, _textureType T>
int textureQueryLevels(const _gsampler<V, T>&);
template <typename V, _textureType T>
vec<V, 4> texture(const _gsampler<V, T>&, vec2 texCoord​, float bias​=0);

#endif
#endif