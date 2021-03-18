/* NO INCLUDE */
#ifndef GLSLCPP
#define GLSLCPP
#ifdef __cplusplus

// vecx
// clang-format off
{{{ def_xvecx }}}
// clang-format on

// keywords
#define uniform
#define in
#define out
#define inout
#define attribute
#define discard abort()
#define layout(...)
void EmitVertex();
void EndPrimitive();

// matx
struct mat3 {};
struct mat4 {};

// gl_*
vec4 gl_FragData[8];
vec4 gl_FragColor;
vec4 gl_Position;
vec4 gl_MultiTexCoord0, gl_MultiTexCoord1;
vec4 gl_Normal, gl_Color;
vec4 ftransform();
vec4 gl_Vertex;
mat3 gl_NormalMatrix;
mat4 gl_ModelViewMatrix, gl_ProjectionMatrix;
mat4 *gl_TextureMatrix;
struct gl_PerVertex {
    vec4 gl_Position;
    float gl_PointSize;
    float *gl_ClipDistance;
};
gl_PerVertex *gl_in;

// texture type
struct sampler2D {};
struct sampler2DShadow {};
vec4 texture2D(sampler2D, vec2);
vec4 texture2D(sampler2D, vec2, float);
vec4 texture2D(sampler2DShadow, vec2);
vec4 texture2D(sampler2DShadow, vec2, float);
vec4 texture2DLod(sampler2D, vec2, int);
vec4 texture2DLod(sampler2DShadow, vec2, int);
vec4 shadow2DLod(sampler2D, vec3, int);
vec4 shadow2DLod(sampler2DShadow, vec3, int);

// matx * vecx
vec4 operator*(mat4, vec4);
vec3 operator*(mat3, vec3);

#include <concepts>
#include <type_traits>
template <typename T>
concept float_like = requires(T a) {
    std::is_floating_point_v<T>;
};
template <typename T>
concept vec_like = requires(T a) {
    std::is_same_v<T, vec2> || std::is_same_v<T, vec3> || std::is_same_v<T, vec4>;
};
template <typename T>
concept ivec_like = requires(T a) {
    std::is_same_v<T, ivec2> || std::is_same_v<T, ivec3> || std::is_same_v<T, ivec4>;
};
template <typename T>
concept xvec_like = requires(T a) {
    std::is_same_v<T, vec2> || std::is_same_v<T, vec3> || std::is_same_v<T, vec4> || std::is_same_v<T, ivec2> || std::is_same_v<T, ivec3> || std::is_same_v<T, ivec4>;
};
template <typename T, typename V>
concept same_dim = requires(T a, V b) {
    xvec_like<T> &&xvec_like<V> &&T::dim == V::dim;
};
template <typename T, typename V, typename...>
concept same_dim = requires(T a, V b) {
    xvec_like<T> &&xvec_like<V> &&T::dim == V::dim;
};

// clang-format off

// float like defs
template<float_like T> int floor(T);
template<float_like T> T fract(T);
template<float_like T, float_like V> float mod(T, V);
template<float_like T, float_like V> float pow(T, V);
template<float_like T, float_like V> float min(T, V);
template<float_like T, float_like V> float max(T, V);
template<float_like T, float_like V> float step(T, V);
template<float_like T, float_like V, float_like P> float mix(T, V, P);
template<float_like T, float_like V, float_like P> float clamp(T, V, P);

// vec like defs
template<vec_like T> T floor(T);
template<vec_like T> T fract(T);
template<vec_like T> T normalize(T);
template<vec_like T, typename V> T mod(T, V) requires float_like<V>||same_dim<T, V>;
template<vec_like T, vec_like V> T pow(T, V) requires same_dim<T, V>;
template<vec_like T, typename V> T min(T, V) requires float_like<V>||same_dim<T, V>;
template<vec_like T, typename V> T max(T, V) requires float_like<V>||same_dim<T, V>;
template<vec_like T, xvec_like V> T step(T, V) requires same_dim<T, V>;
template<vec_like T, vec_like V, typename P> T mix(T, V, P) requires same_dim<T, V> && (float_like<P>||same_dim<V, P>);
template<vec_like T, typename V, typename P> float clamp(T, V, P) requires (float_like<P>&&float_like<V>)||(same_dim<V,P>&&same_dim<T,V>);

template<typename T> T sin(T) requires float_like<T>||vec_like<T>;
template<typename T> T cos(T) requires float_like<T>||vec_like<T>;
template<typename T> T exp2(T) requires float_like<T>||vec_like<T>;

// single arg defs
template<typename T> T sqrt(T);
template<typename T> T abs(T);
template<typename T> T sign(T);
// clang-format on

float length(vec2);
float length(vec3);
vec3 cross(vec3, vec3);
float dot(vec3, vec3);
float dot(vec2, vec2);
float distance(vec3, vec3);
#endif
#endif