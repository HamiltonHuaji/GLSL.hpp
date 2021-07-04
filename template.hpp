/* NO INCLUDE */
#ifndef GLSLCPP
#define GLSLCPP
#ifdef __cplusplus
struct vec2;
struct vec3;
struct vec4;
struct ivec2;
struct ivec3;
struct ivec4;
// vecx
// clang-format off
{{{ def_xvecx }}}
// clang-format on

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
extern void EmitVertex();
extern void EndPrimitive();

// matx
struct mat3;
struct mat4;

// gl_*
extern vec4  gl_FragData[8];
extern vec4  gl_FragColor;
extern vec4  gl_Position;
extern vec4  gl_MultiTexCoord0, gl_MultiTexCoord1;
extern vec4  gl_Color;
extern vec3  gl_Normal;
extern vec4  ftransform();
extern vec4  gl_Vertex;
extern mat3  gl_NormalMatrix;
extern mat4  gl_ModelViewMatrix, gl_ProjectionMatrix;
extern mat4 gl_TextureMatrix[];
struct gl_PerVertex {
    vec4   gl_Position;
    float  gl_PointSize;
    float *gl_ClipDistance;
};
extern gl_PerVertex gl_in[];

// texture type
struct sampler2D {};
struct sampler2DShadow {};
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
#else
#define constexpr const
#endif
#endif