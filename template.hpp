#ifdef __cplusplus
#ifndef GLSLCPP
#include <type_traits>
#include <concepts>
template<typename T>
concept float_like = requires(T a) {
    std::is_floating_point_v<T>;
};
{{{def_xvecx}}}
#define uniform
#define in
#define out
#define inout
#define attribute
#define discard abort()
struct sampler2D {};
struct sampler2DShadow {};
struct mat3 {};
struct mat4 {};
vec4 operator*(mat4, vec4);
vec3 operator*(mat3, vec3);
int floor(float);
float fract(float);
template<float_like T, float_like V> float pow(T, V);
float mod(float, float);
template<float_like T, float_like V> T min(T, V);
template<float_like T, float_like V> T max(T, V);
template<float_like T, float_like V> T step(T, V);
template<typename T, float_like P> T mix(T, T, P);
float mix(float, double, double);
template<typename T> T sqrt(T);
template<typename T> T abs(T);
template<typename T> T normalize(T);
template<typename T> T sign(T);
template<typename T> T clamp(T, T, T);
float length(vec2);
float length(vec3);
float sin(float);
float cos(float);
float exp2(float);
vec3 cross(vec3, vec3);
float dot(vec3, vec3);
float dot(vec2, vec2);
float distance(vec3, vec3);
vec4 texture2D(sampler2D, vec2);
vec4 texture2D(sampler2D, vec2, float);
vec4 texture2D(sampler2DShadow, vec2);
vec4 texture2DLod(sampler2D, vec2, int);
vec4 texture2DLod(sampler2DShadow, vec2, int);
vec4 shadow2DLod(sampler2D, vec3, int);
vec4 shadow2DLod(sampler2DShadow, vec3, int);
vec4 gl_FragData[8];
vec4 gl_FragColor;
vec4 gl_Position;
vec4 gl_MultiTexCoord0, gl_MultiTexCoord1;
vec4 gl_Normal, gl_Color;
vec4 ftransform();
vec4 gl_Vertex;
mat3 gl_NormalMatrix;
mat4 gl_ModelViewMatrix;
mat4 *gl_TextureMatrix;
#define GLSLCPP
#endif
#endif