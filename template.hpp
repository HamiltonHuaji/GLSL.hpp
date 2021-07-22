/* NO INCLUDE */
#ifndef GLSLCPP
#define GLSLCPP
#ifdef __cplusplus
#include <array>

template <typename Ts..., int N>
std::array<T, N> make_array(Ts...args);

// clang-format off
{{{ macros }}}
// clang-format on

#ifndef WITH_GLM
struct vec2;
struct vec3;
struct vec4;
struct ivec2;
struct ivec3;
struct ivec4;
struct uvec2;
struct uvec3;
struct uvec4;
// vecx
// clang-format off
{{{ def_xvecx }}}
// clang-format on
#endif

// keywords
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
extern int  max_vertices;
extern void EmitVertex();
extern void EndPrimitive();

using uint = unsigned;

// matx
struct mat3 {
    vec3 &operator[](size_t);
    mat3();
    mat3(float);
    mat3(mat4);
    mat3(vec3, vec3, vec3);
    mat3(float, float, float, float, float, float, float, float, float);
};
struct mat4 {
    vec4 &operator[](size_t);
    mat4();
    mat4(float);
    mat4(mat3);
    mat4(vec4, vec4, vec4, vec4);
    mat4(float, float, float, float, float, float, float, float, float, float, float, float, float, float, float, float);
};

// gl_*
extern vec4 *gl_FragData;
extern vec4  gl_FragColor;
extern vec4  gl_Position;
extern vec4  gl_MultiTexCoord0, gl_MultiTexCoord1;
extern vec4  gl_Color;
extern vec3  gl_Normal;
extern vec4  ftransform();
extern vec4  gl_Vertex;
extern mat3  gl_NormalMatrix;
extern mat4  gl_ModelViewMatrix, gl_ProjectionMatrix;
extern mat4  gl_TextureMatrix[];
extern bool  gl_FrontFacing;
extern vec2  gl_FragCoord;
struct gl_PerVertex {
    vec4   gl_Position;
    float  gl_PointSize;
    float *gl_ClipDistance;
};
extern gl_PerVertex gl_in[];

// texture type
struct sampler2D {};
struct sampler2DShadow {};
extern vec4  texelFetch(sampler2D, ivec2);
extern vec4  texelFetch(sampler2D, ivec2, int);
extern vec4  texture(sampler2D, vec2);
extern vec4  texture(sampler2D, vec2, float);
extern vec4  textureLod(sampler2D, vec2, int);
extern vec4  textureLod(sampler2DShadow, vec2, int);
extern vec4  texture2D(sampler2D, vec2);
extern vec4  texture2D(sampler2D, vec2, float);
extern vec4  texture2D(sampler2DShadow, vec2);
extern vec4  texture2D(sampler2DShadow, vec2, float);
extern vec4  texture2DLod(sampler2D, vec2, int);
extern vec4  texture2DLod(sampler2DShadow, vec2, int);
extern vec4  shadow2DLod(sampler2D, vec3, int);
extern vec4  shadow2DLod(sampler2DShadow, vec3, int);
extern ivec2 textureSize(sampler2D, int);

extern vec3 reflect(vec3 I, vec3 N);
extern vec3 refract(vec3 I, vec3 N, float eta);

// matx * vecx
extern vec4 operator*(mat4, vec4);
extern vec3 operator*(mat3, vec3);
extern mat4 operator*(mat4, mat4);
extern mat3 operator*(mat3, mat3);
extern vec3 operator*(vec3, mat3);
extern vec4 operator*(vec4, mat4);

// float like defs
extern float floor(float);
extern float fract(float);
extern float mod(float, float);
extern float pow(float, float);
extern float min(float, float);
extern float max(float, float);
extern float step(float, float);
extern float mix(float, float, float);
extern float clamp(float, float, float);
// clang-format off
{{{ def_funcs }}}
// clang-format on
extern float length(vec2);
extern float length(vec3);
extern vec3  cross(vec3, vec3);
extern float dot(vec3, vec3);
extern float dot(vec2, vec2);
extern float distance(vec2, vec2);
extern float distance(vec3, vec3);
extern float distance(vec4, vec4);
extern float inversesqrt(float);

extern uint  packUnorm4x8(vec4);
extern vec4  unpackUnorm4x8(uint);
extern float uintBitsToFloat(uint);
extern vec2  uintBitsToFloat(uvec2);
extern vec3  uintBitsToFloat(uvec3);
extern vec4  uintBitsToFloat(uvec4);
extern uint  floatBitsToUint(float);
extern uvec2 floatBitsToUint(vec2);
extern uvec3 floatBitsToUint(vec3);
extern uvec4 floatBitsToUint(vec4);

extern float intBitsToFloat(int);
extern vec2  intBitsToFloat(uvec2);
extern vec3  intBitsToFloat(uvec3);
extern vec4  intBitsToFloat(uvec4);
extern int   floatBitsToInt(float);
extern uvec2 floatBitsToInt(vec2);
extern uvec3 floatBitsToInt(vec3);
extern uvec4 floatBitsToInt(vec4);

extern int   round(float);
extern uvec2 round(vec2);
extern uvec3 round(vec3);
extern uvec4 round(vec4);

extern int   radians(float);
extern vec2 radians(vec2);
extern vec3 radians(vec3);
extern vec4 radians(vec4);

extern uint greaterThan(float, float);
extern uvec2 greaterThan(vec2, vec2);
extern uvec3 greaterThan(vec3, vec3);
extern uvec4 greaterThan(vec4, vec4);

extern uint lessThan(float, float);
extern uvec2 lessThan(vec2, vec2);
extern uvec3 lessThan(vec3, vec3);
extern uvec4 lessThan(vec4, vec4);

extern uint lessThanEqual(float, float);
extern uvec2 lessThanEqual(vec2, vec2);
extern uvec3 lessThanEqual(vec3, vec3);
extern uvec4 lessThanEqual(vec4, vec4);

extern uint greaterThanEqual(float, float);
extern uvec2 greaterThanEqual(vec2, vec2);
extern uvec3 greaterThanEqual(vec3, vec3);
extern uvec4 greaterThanEqual(vec4, vec4);

extern bool any(float);
extern bool any(vec2);
extern bool any(vec3);
extern bool any(vec4);

extern bool all(float);
extern bool all(vec2);
extern bool all(vec3);
extern bool all(vec4);
#else
#define constexpr const
#endif
#endif