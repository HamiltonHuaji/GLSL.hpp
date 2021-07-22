/* NO INCLUDE */
#ifndef H_GLSLHPP
#define H_GLSLHPP
#ifdef __cplusplus

#include <array>
#include <type_traits>

#if __cplusplus > 201703UL
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

// GLSL vector(lite version). May be lack of some definitions.
struct vec<bool, 2> : std::array<bool, 2>{
    static constexpr dim = 2;
    bool x;
    bool y;
    bool r;
    bool g;
    bool s;
    bool t;
    const vec<bool, 2> &xx;
    const vec<bool, 2> &rr;
    const vec<bool, 2> &ss;
          vec<bool, 2> &xy;
          vec<bool, 2> &rg;
          vec<bool, 2> &st;
          vec<bool, 2> &yx;
          vec<bool, 2> &gr;
          vec<bool, 2> &ts;
    const vec<bool, 2> &yy;
    const vec<bool, 2> &gg;
    const vec<bool, 2> &tt;
    
    // constructor
    vec<bool, 2>();
    template<typename T> requires(std::is_nothrow_convertible_v<T, bool>)
    vec<bool, 2>(const vec<T, 2>&) {
        static_assert(std::is_nothrow_convertible_v<T, bool>);
    }
    explicit vec<bool, 2>(const bool&);
    vec<bool, 2>& operator=(const vec<bool, 2>&);
    vec<bool, 2>(const bool&, const bool&);
};


// GLSL vector(lite version). May be lack of some definitions.
struct vec<bool, 3> : std::array<bool, 3>{
    static constexpr dim = 3;
    bool x;
    bool y;
    bool z;
    bool r;
    bool g;
    bool b;
    bool s;
    bool t;
    bool u;
    const vec<bool, 2> &xx;
    const vec<bool, 2> &rr;
    const vec<bool, 2> &ss;
          vec<bool, 2> &xy;
          vec<bool, 2> &rg;
          vec<bool, 2> &st;
          vec<bool, 2> &xz;
          vec<bool, 2> &rb;
          vec<bool, 2> &su;
          vec<bool, 2> &yx;
          vec<bool, 2> &gr;
          vec<bool, 2> &ts;
    const vec<bool, 2> &yy;
    const vec<bool, 2> &gg;
    const vec<bool, 2> &tt;
          vec<bool, 2> &yz;
          vec<bool, 2> &gb;
          vec<bool, 2> &tu;
          vec<bool, 2> &zx;
          vec<bool, 2> &br;
          vec<bool, 2> &us;
          vec<bool, 2> &zy;
          vec<bool, 2> &bg;
          vec<bool, 2> &ut;
    const vec<bool, 2> &zz;
    const vec<bool, 2> &bb;
    const vec<bool, 2> &uu;
    const vec<bool, 3> &xxx;
    const vec<bool, 3> &rrr;
    const vec<bool, 3> &sss;
    const vec<bool, 3> &xxy;
    const vec<bool, 3> &rrg;
    const vec<bool, 3> &sst;
    const vec<bool, 3> &xxz;
    const vec<bool, 3> &rrb;
    const vec<bool, 3> &ssu;
    const vec<bool, 3> &xyx;
    const vec<bool, 3> &rgr;
    const vec<bool, 3> &sts;
    const vec<bool, 3> &xyy;
    const vec<bool, 3> &rgg;
    const vec<bool, 3> &stt;
          vec<bool, 3> &xyz;
          vec<bool, 3> &rgb;
          vec<bool, 3> &stu;
    const vec<bool, 3> &xzx;
    const vec<bool, 3> &rbr;
    const vec<bool, 3> &sus;
          vec<bool, 3> &xzy;
          vec<bool, 3> &rbg;
          vec<bool, 3> &sut;
    const vec<bool, 3> &xzz;
    const vec<bool, 3> &rbb;
    const vec<bool, 3> &suu;
    const vec<bool, 3> &yxx;
    const vec<bool, 3> &grr;
    const vec<bool, 3> &tss;
    const vec<bool, 3> &yxy;
    const vec<bool, 3> &grg;
    const vec<bool, 3> &tst;
          vec<bool, 3> &yxz;
          vec<bool, 3> &grb;
          vec<bool, 3> &tsu;
    const vec<bool, 3> &yyx;
    const vec<bool, 3> &ggr;
    const vec<bool, 3> &tts;
    const vec<bool, 3> &yyy;
    const vec<bool, 3> &ggg;
    const vec<bool, 3> &ttt;
    const vec<bool, 3> &yyz;
    const vec<bool, 3> &ggb;
    const vec<bool, 3> &ttu;
          vec<bool, 3> &yzx;
          vec<bool, 3> &gbr;
          vec<bool, 3> &tus;
    const vec<bool, 3> &yzy;
    const vec<bool, 3> &gbg;
    const vec<bool, 3> &tut;
    const vec<bool, 3> &yzz;
    const vec<bool, 3> &gbb;
    const vec<bool, 3> &tuu;
    const vec<bool, 3> &zxx;
    const vec<bool, 3> &brr;
    const vec<bool, 3> &uss;
          vec<bool, 3> &zxy;
          vec<bool, 3> &brg;
          vec<bool, 3> &ust;
    const vec<bool, 3> &zxz;
    const vec<bool, 3> &brb;
    const vec<bool, 3> &usu;
          vec<bool, 3> &zyx;
          vec<bool, 3> &bgr;
          vec<bool, 3> &uts;
    const vec<bool, 3> &zyy;
    const vec<bool, 3> &bgg;
    const vec<bool, 3> &utt;
    const vec<bool, 3> &zyz;
    const vec<bool, 3> &bgb;
    const vec<bool, 3> &utu;
    const vec<bool, 3> &zzx;
    const vec<bool, 3> &bbr;
    const vec<bool, 3> &uus;
    const vec<bool, 3> &zzy;
    const vec<bool, 3> &bbg;
    const vec<bool, 3> &uut;
    const vec<bool, 3> &zzz;
    const vec<bool, 3> &bbb;
    const vec<bool, 3> &uuu;
    
    // constructor
    vec<bool, 3>();
    template<typename T> requires(std::is_nothrow_convertible_v<T, bool>)
    vec<bool, 3>(const vec<T, 3>&) {
        static_assert(std::is_nothrow_convertible_v<T, bool>);
    }
    explicit vec<bool, 3>(const bool&);
    vec<bool, 3>& operator=(const vec<bool, 3>&);
    vec<bool, 3>(const bool&, const bool&, const bool&);
    vec<bool, 3>(const bool&, const vec<bool, 2>&);
    vec<bool, 3>(const vec<bool, 2>&, const bool&);
};


// GLSL vector(lite version). May be lack of some definitions.
struct vec<int, 2> : std::array<int, 2>{
    static constexpr dim = 2;
    int x;
    int y;
    int r;
    int g;
    int s;
    int t;
    const vec<int, 2> &xx;
    const vec<int, 2> &rr;
    const vec<int, 2> &ss;
          vec<int, 2> &xy;
          vec<int, 2> &rg;
          vec<int, 2> &st;
          vec<int, 2> &yx;
          vec<int, 2> &gr;
          vec<int, 2> &ts;
    const vec<int, 2> &yy;
    const vec<int, 2> &gg;
    const vec<int, 2> &tt;
    
    // constructor
    vec<int, 2>();
    template<typename T> requires(std::is_nothrow_convertible_v<T, int>)
    vec<int, 2>(const vec<T, 2>&) {
        static_assert(std::is_nothrow_convertible_v<T, int>);
    }
    explicit vec<int, 2>(const int&);
    vec<int, 2>& operator=(const vec<int, 2>&);
    vec<int, 2>(const int&, const int&);
};


// GLSL vector(lite version). May be lack of some definitions.
struct vec<int, 3> : std::array<int, 3>{
    static constexpr dim = 3;
    int x;
    int y;
    int z;
    int r;
    int g;
    int b;
    int s;
    int t;
    int u;
    const vec<int, 2> &xx;
    const vec<int, 2> &rr;
    const vec<int, 2> &ss;
          vec<int, 2> &xy;
          vec<int, 2> &rg;
          vec<int, 2> &st;
          vec<int, 2> &xz;
          vec<int, 2> &rb;
          vec<int, 2> &su;
          vec<int, 2> &yx;
          vec<int, 2> &gr;
          vec<int, 2> &ts;
    const vec<int, 2> &yy;
    const vec<int, 2> &gg;
    const vec<int, 2> &tt;
          vec<int, 2> &yz;
          vec<int, 2> &gb;
          vec<int, 2> &tu;
          vec<int, 2> &zx;
          vec<int, 2> &br;
          vec<int, 2> &us;
          vec<int, 2> &zy;
          vec<int, 2> &bg;
          vec<int, 2> &ut;
    const vec<int, 2> &zz;
    const vec<int, 2> &bb;
    const vec<int, 2> &uu;
    const vec<int, 3> &xxx;
    const vec<int, 3> &rrr;
    const vec<int, 3> &sss;
    const vec<int, 3> &xxy;
    const vec<int, 3> &rrg;
    const vec<int, 3> &sst;
    const vec<int, 3> &xxz;
    const vec<int, 3> &rrb;
    const vec<int, 3> &ssu;
    const vec<int, 3> &xyx;
    const vec<int, 3> &rgr;
    const vec<int, 3> &sts;
    const vec<int, 3> &xyy;
    const vec<int, 3> &rgg;
    const vec<int, 3> &stt;
          vec<int, 3> &xyz;
          vec<int, 3> &rgb;
          vec<int, 3> &stu;
    const vec<int, 3> &xzx;
    const vec<int, 3> &rbr;
    const vec<int, 3> &sus;
          vec<int, 3> &xzy;
          vec<int, 3> &rbg;
          vec<int, 3> &sut;
    const vec<int, 3> &xzz;
    const vec<int, 3> &rbb;
    const vec<int, 3> &suu;
    const vec<int, 3> &yxx;
    const vec<int, 3> &grr;
    const vec<int, 3> &tss;
    const vec<int, 3> &yxy;
    const vec<int, 3> &grg;
    const vec<int, 3> &tst;
          vec<int, 3> &yxz;
          vec<int, 3> &grb;
          vec<int, 3> &tsu;
    const vec<int, 3> &yyx;
    const vec<int, 3> &ggr;
    const vec<int, 3> &tts;
    const vec<int, 3> &yyy;
    const vec<int, 3> &ggg;
    const vec<int, 3> &ttt;
    const vec<int, 3> &yyz;
    const vec<int, 3> &ggb;
    const vec<int, 3> &ttu;
          vec<int, 3> &yzx;
          vec<int, 3> &gbr;
          vec<int, 3> &tus;
    const vec<int, 3> &yzy;
    const vec<int, 3> &gbg;
    const vec<int, 3> &tut;
    const vec<int, 3> &yzz;
    const vec<int, 3> &gbb;
    const vec<int, 3> &tuu;
    const vec<int, 3> &zxx;
    const vec<int, 3> &brr;
    const vec<int, 3> &uss;
          vec<int, 3> &zxy;
          vec<int, 3> &brg;
          vec<int, 3> &ust;
    const vec<int, 3> &zxz;
    const vec<int, 3> &brb;
    const vec<int, 3> &usu;
          vec<int, 3> &zyx;
          vec<int, 3> &bgr;
          vec<int, 3> &uts;
    const vec<int, 3> &zyy;
    const vec<int, 3> &bgg;
    const vec<int, 3> &utt;
    const vec<int, 3> &zyz;
    const vec<int, 3> &bgb;
    const vec<int, 3> &utu;
    const vec<int, 3> &zzx;
    const vec<int, 3> &bbr;
    const vec<int, 3> &uus;
    const vec<int, 3> &zzy;
    const vec<int, 3> &bbg;
    const vec<int, 3> &uut;
    const vec<int, 3> &zzz;
    const vec<int, 3> &bbb;
    const vec<int, 3> &uuu;
    
    // constructor
    vec<int, 3>();
    template<typename T> requires(std::is_nothrow_convertible_v<T, int>)
    vec<int, 3>(const vec<T, 3>&) {
        static_assert(std::is_nothrow_convertible_v<T, int>);
    }
    explicit vec<int, 3>(const int&);
    vec<int, 3>& operator=(const vec<int, 3>&);
    vec<int, 3>(const int&, const int&, const int&);
    vec<int, 3>(const int&, const vec<int, 2>&);
    vec<int, 3>(const vec<int, 2>&, const int&);
};


// GLSL vector(lite version). May be lack of some definitions.
struct vec<uint, 2> : std::array<uint, 2>{
    static constexpr dim = 2;
    uint x;
    uint y;
    uint r;
    uint g;
    uint s;
    uint t;
    const vec<uint, 2> &xx;
    const vec<uint, 2> &rr;
    const vec<uint, 2> &ss;
          vec<uint, 2> &xy;
          vec<uint, 2> &rg;
          vec<uint, 2> &st;
          vec<uint, 2> &yx;
          vec<uint, 2> &gr;
          vec<uint, 2> &ts;
    const vec<uint, 2> &yy;
    const vec<uint, 2> &gg;
    const vec<uint, 2> &tt;
    
    // constructor
    vec<uint, 2>();
    template<typename T> requires(std::is_nothrow_convertible_v<T, uint>)
    vec<uint, 2>(const vec<T, 2>&) {
        static_assert(std::is_nothrow_convertible_v<T, uint>);
    }
    explicit vec<uint, 2>(const uint&);
    vec<uint, 2>& operator=(const vec<uint, 2>&);
    vec<uint, 2>(const uint&, const uint&);
};


// GLSL vector(lite version). May be lack of some definitions.
struct vec<uint, 3> : std::array<uint, 3>{
    static constexpr dim = 3;
    uint x;
    uint y;
    uint z;
    uint r;
    uint g;
    uint b;
    uint s;
    uint t;
    uint u;
    const vec<uint, 2> &xx;
    const vec<uint, 2> &rr;
    const vec<uint, 2> &ss;
          vec<uint, 2> &xy;
          vec<uint, 2> &rg;
          vec<uint, 2> &st;
          vec<uint, 2> &xz;
          vec<uint, 2> &rb;
          vec<uint, 2> &su;
          vec<uint, 2> &yx;
          vec<uint, 2> &gr;
          vec<uint, 2> &ts;
    const vec<uint, 2> &yy;
    const vec<uint, 2> &gg;
    const vec<uint, 2> &tt;
          vec<uint, 2> &yz;
          vec<uint, 2> &gb;
          vec<uint, 2> &tu;
          vec<uint, 2> &zx;
          vec<uint, 2> &br;
          vec<uint, 2> &us;
          vec<uint, 2> &zy;
          vec<uint, 2> &bg;
          vec<uint, 2> &ut;
    const vec<uint, 2> &zz;
    const vec<uint, 2> &bb;
    const vec<uint, 2> &uu;
    const vec<uint, 3> &xxx;
    const vec<uint, 3> &rrr;
    const vec<uint, 3> &sss;
    const vec<uint, 3> &xxy;
    const vec<uint, 3> &rrg;
    const vec<uint, 3> &sst;
    const vec<uint, 3> &xxz;
    const vec<uint, 3> &rrb;
    const vec<uint, 3> &ssu;
    const vec<uint, 3> &xyx;
    const vec<uint, 3> &rgr;
    const vec<uint, 3> &sts;
    const vec<uint, 3> &xyy;
    const vec<uint, 3> &rgg;
    const vec<uint, 3> &stt;
          vec<uint, 3> &xyz;
          vec<uint, 3> &rgb;
          vec<uint, 3> &stu;
    const vec<uint, 3> &xzx;
    const vec<uint, 3> &rbr;
    const vec<uint, 3> &sus;
          vec<uint, 3> &xzy;
          vec<uint, 3> &rbg;
          vec<uint, 3> &sut;
    const vec<uint, 3> &xzz;
    const vec<uint, 3> &rbb;
    const vec<uint, 3> &suu;
    const vec<uint, 3> &yxx;
    const vec<uint, 3> &grr;
    const vec<uint, 3> &tss;
    const vec<uint, 3> &yxy;
    const vec<uint, 3> &grg;
    const vec<uint, 3> &tst;
          vec<uint, 3> &yxz;
          vec<uint, 3> &grb;
          vec<uint, 3> &tsu;
    const vec<uint, 3> &yyx;
    const vec<uint, 3> &ggr;
    const vec<uint, 3> &tts;
    const vec<uint, 3> &yyy;
    const vec<uint, 3> &ggg;
    const vec<uint, 3> &ttt;
    const vec<uint, 3> &yyz;
    const vec<uint, 3> &ggb;
    const vec<uint, 3> &ttu;
          vec<uint, 3> &yzx;
          vec<uint, 3> &gbr;
          vec<uint, 3> &tus;
    const vec<uint, 3> &yzy;
    const vec<uint, 3> &gbg;
    const vec<uint, 3> &tut;
    const vec<uint, 3> &yzz;
    const vec<uint, 3> &gbb;
    const vec<uint, 3> &tuu;
    const vec<uint, 3> &zxx;
    const vec<uint, 3> &brr;
    const vec<uint, 3> &uss;
          vec<uint, 3> &zxy;
          vec<uint, 3> &brg;
          vec<uint, 3> &ust;
    const vec<uint, 3> &zxz;
    const vec<uint, 3> &brb;
    const vec<uint, 3> &usu;
          vec<uint, 3> &zyx;
          vec<uint, 3> &bgr;
          vec<uint, 3> &uts;
    const vec<uint, 3> &zyy;
    const vec<uint, 3> &bgg;
    const vec<uint, 3> &utt;
    const vec<uint, 3> &zyz;
    const vec<uint, 3> &bgb;
    const vec<uint, 3> &utu;
    const vec<uint, 3> &zzx;
    const vec<uint, 3> &bbr;
    const vec<uint, 3> &uus;
    const vec<uint, 3> &zzy;
    const vec<uint, 3> &bbg;
    const vec<uint, 3> &uut;
    const vec<uint, 3> &zzz;
    const vec<uint, 3> &bbb;
    const vec<uint, 3> &uuu;
    
    // constructor
    vec<uint, 3>();
    template<typename T> requires(std::is_nothrow_convertible_v<T, uint>)
    vec<uint, 3>(const vec<T, 3>&) {
        static_assert(std::is_nothrow_convertible_v<T, uint>);
    }
    explicit vec<uint, 3>(const uint&);
    vec<uint, 3>& operator=(const vec<uint, 3>&);
    vec<uint, 3>(const uint&, const uint&, const uint&);
    vec<uint, 3>(const uint&, const vec<uint, 2>&);
    vec<uint, 3>(const vec<uint, 2>&, const uint&);
};


// GLSL vector(lite version). May be lack of some definitions.
struct vec<float, 2> : std::array<float, 2>{
    static constexpr dim = 2;
    float x;
    float y;
    float r;
    float g;
    float s;
    float t;
    const vec<float, 2> &xx;
    const vec<float, 2> &rr;
    const vec<float, 2> &ss;
          vec<float, 2> &xy;
          vec<float, 2> &rg;
          vec<float, 2> &st;
          vec<float, 2> &yx;
          vec<float, 2> &gr;
          vec<float, 2> &ts;
    const vec<float, 2> &yy;
    const vec<float, 2> &gg;
    const vec<float, 2> &tt;
    
    // constructor
    vec<float, 2>();
    template<typename T> requires(std::is_nothrow_convertible_v<T, float>)
    vec<float, 2>(const vec<T, 2>&) {
        static_assert(std::is_nothrow_convertible_v<T, float>);
    }
    explicit vec<float, 2>(const float&);
    vec<float, 2>& operator=(const vec<float, 2>&);
    vec<float, 2>(const float&, const float&);
};


// GLSL vector(lite version). May be lack of some definitions.
struct vec<float, 3> : std::array<float, 3>{
    static constexpr dim = 3;
    float x;
    float y;
    float z;
    float r;
    float g;
    float b;
    float s;
    float t;
    float u;
    const vec<float, 2> &xx;
    const vec<float, 2> &rr;
    const vec<float, 2> &ss;
          vec<float, 2> &xy;
          vec<float, 2> &rg;
          vec<float, 2> &st;
          vec<float, 2> &xz;
          vec<float, 2> &rb;
          vec<float, 2> &su;
          vec<float, 2> &yx;
          vec<float, 2> &gr;
          vec<float, 2> &ts;
    const vec<float, 2> &yy;
    const vec<float, 2> &gg;
    const vec<float, 2> &tt;
          vec<float, 2> &yz;
          vec<float, 2> &gb;
          vec<float, 2> &tu;
          vec<float, 2> &zx;
          vec<float, 2> &br;
          vec<float, 2> &us;
          vec<float, 2> &zy;
          vec<float, 2> &bg;
          vec<float, 2> &ut;
    const vec<float, 2> &zz;
    const vec<float, 2> &bb;
    const vec<float, 2> &uu;
    const vec<float, 3> &xxx;
    const vec<float, 3> &rrr;
    const vec<float, 3> &sss;
    const vec<float, 3> &xxy;
    const vec<float, 3> &rrg;
    const vec<float, 3> &sst;
    const vec<float, 3> &xxz;
    const vec<float, 3> &rrb;
    const vec<float, 3> &ssu;
    const vec<float, 3> &xyx;
    const vec<float, 3> &rgr;
    const vec<float, 3> &sts;
    const vec<float, 3> &xyy;
    const vec<float, 3> &rgg;
    const vec<float, 3> &stt;
          vec<float, 3> &xyz;
          vec<float, 3> &rgb;
          vec<float, 3> &stu;
    const vec<float, 3> &xzx;
    const vec<float, 3> &rbr;
    const vec<float, 3> &sus;
          vec<float, 3> &xzy;
          vec<float, 3> &rbg;
          vec<float, 3> &sut;
    const vec<float, 3> &xzz;
    const vec<float, 3> &rbb;
    const vec<float, 3> &suu;
    const vec<float, 3> &yxx;
    const vec<float, 3> &grr;
    const vec<float, 3> &tss;
    const vec<float, 3> &yxy;
    const vec<float, 3> &grg;
    const vec<float, 3> &tst;
          vec<float, 3> &yxz;
          vec<float, 3> &grb;
          vec<float, 3> &tsu;
    const vec<float, 3> &yyx;
    const vec<float, 3> &ggr;
    const vec<float, 3> &tts;
    const vec<float, 3> &yyy;
    const vec<float, 3> &ggg;
    const vec<float, 3> &ttt;
    const vec<float, 3> &yyz;
    const vec<float, 3> &ggb;
    const vec<float, 3> &ttu;
          vec<float, 3> &yzx;
          vec<float, 3> &gbr;
          vec<float, 3> &tus;
    const vec<float, 3> &yzy;
    const vec<float, 3> &gbg;
    const vec<float, 3> &tut;
    const vec<float, 3> &yzz;
    const vec<float, 3> &gbb;
    const vec<float, 3> &tuu;
    const vec<float, 3> &zxx;
    const vec<float, 3> &brr;
    const vec<float, 3> &uss;
          vec<float, 3> &zxy;
          vec<float, 3> &brg;
          vec<float, 3> &ust;
    const vec<float, 3> &zxz;
    const vec<float, 3> &brb;
    const vec<float, 3> &usu;
          vec<float, 3> &zyx;
          vec<float, 3> &bgr;
          vec<float, 3> &uts;
    const vec<float, 3> &zyy;
    const vec<float, 3> &bgg;
    const vec<float, 3> &utt;
    const vec<float, 3> &zyz;
    const vec<float, 3> &bgb;
    const vec<float, 3> &utu;
    const vec<float, 3> &zzx;
    const vec<float, 3> &bbr;
    const vec<float, 3> &uus;
    const vec<float, 3> &zzy;
    const vec<float, 3> &bbg;
    const vec<float, 3> &uut;
    const vec<float, 3> &zzz;
    const vec<float, 3> &bbb;
    const vec<float, 3> &uuu;
    
    // constructor
    vec<float, 3>();
    template<typename T> requires(std::is_nothrow_convertible_v<T, float>)
    vec<float, 3>(const vec<T, 3>&) {
        static_assert(std::is_nothrow_convertible_v<T, float>);
    }
    explicit vec<float, 3>(const float&);
    vec<float, 3>& operator=(const vec<float, 3>&);
    vec<float, 3>(const float&, const float&, const float&);
    vec<float, 3>(const float&, const vec<float, 2>&);
    vec<float, 3>(const vec<float, 2>&, const float&);
};


// GLSL vector(lite version). May be lack of some definitions.
struct vec<float, 4> : std::array<float, 4>{
    static constexpr dim = 4;
    float x;
    float y;
    float z;
    float w;
    float r;
    float g;
    float b;
    float a;
    float s;
    float t;
    float u;
    float v;
    const vec<float, 2> &xx;
    const vec<float, 2> &rr;
    const vec<float, 2> &ss;
          vec<float, 2> &xy;
          vec<float, 2> &rg;
          vec<float, 2> &st;
          vec<float, 2> &xz;
          vec<float, 2> &rb;
          vec<float, 2> &su;
          vec<float, 2> &xw;
          vec<float, 2> &ra;
          vec<float, 2> &sv;
          vec<float, 2> &yx;
          vec<float, 2> &gr;
          vec<float, 2> &ts;
    const vec<float, 2> &yy;
    const vec<float, 2> &gg;
    const vec<float, 2> &tt;
          vec<float, 2> &yz;
          vec<float, 2> &gb;
          vec<float, 2> &tu;
          vec<float, 2> &yw;
          vec<float, 2> &ga;
          vec<float, 2> &tv;
          vec<float, 2> &zx;
          vec<float, 2> &br;
          vec<float, 2> &us;
          vec<float, 2> &zy;
          vec<float, 2> &bg;
          vec<float, 2> &ut;
    const vec<float, 2> &zz;
    const vec<float, 2> &bb;
    const vec<float, 2> &uu;
          vec<float, 2> &zw;
          vec<float, 2> &ba;
          vec<float, 2> &uv;
          vec<float, 2> &wx;
          vec<float, 2> &ar;
          vec<float, 2> &vs;
          vec<float, 2> &wy;
          vec<float, 2> &ag;
          vec<float, 2> &vt;
          vec<float, 2> &wz;
          vec<float, 2> &ab;
          vec<float, 2> &vu;
    const vec<float, 2> &ww;
    const vec<float, 2> &aa;
    const vec<float, 2> &vv;
    const vec<float, 3> &xxx;
    const vec<float, 3> &rrr;
    const vec<float, 3> &sss;
    const vec<float, 3> &xxy;
    const vec<float, 3> &rrg;
    const vec<float, 3> &sst;
    const vec<float, 3> &xxz;
    const vec<float, 3> &rrb;
    const vec<float, 3> &ssu;
    const vec<float, 3> &xxw;
    const vec<float, 3> &rra;
    const vec<float, 3> &ssv;
    const vec<float, 3> &xyx;
    const vec<float, 3> &rgr;
    const vec<float, 3> &sts;
    const vec<float, 3> &xyy;
    const vec<float, 3> &rgg;
    const vec<float, 3> &stt;
          vec<float, 3> &xyz;
          vec<float, 3> &rgb;
          vec<float, 3> &stu;
          vec<float, 3> &xyw;
          vec<float, 3> &rga;
          vec<float, 3> &stv;
    const vec<float, 3> &xzx;
    const vec<float, 3> &rbr;
    const vec<float, 3> &sus;
          vec<float, 3> &xzy;
          vec<float, 3> &rbg;
          vec<float, 3> &sut;
    const vec<float, 3> &xzz;
    const vec<float, 3> &rbb;
    const vec<float, 3> &suu;
          vec<float, 3> &xzw;
          vec<float, 3> &rba;
          vec<float, 3> &suv;
    const vec<float, 3> &xwx;
    const vec<float, 3> &rar;
    const vec<float, 3> &svs;
          vec<float, 3> &xwy;
          vec<float, 3> &rag;
          vec<float, 3> &svt;
          vec<float, 3> &xwz;
          vec<float, 3> &rab;
          vec<float, 3> &svu;
    const vec<float, 3> &xww;
    const vec<float, 3> &raa;
    const vec<float, 3> &svv;
    const vec<float, 3> &yxx;
    const vec<float, 3> &grr;
    const vec<float, 3> &tss;
    const vec<float, 3> &yxy;
    const vec<float, 3> &grg;
    const vec<float, 3> &tst;
          vec<float, 3> &yxz;
          vec<float, 3> &grb;
          vec<float, 3> &tsu;
          vec<float, 3> &yxw;
          vec<float, 3> &gra;
          vec<float, 3> &tsv;
    const vec<float, 3> &yyx;
    const vec<float, 3> &ggr;
    const vec<float, 3> &tts;
    const vec<float, 3> &yyy;
    const vec<float, 3> &ggg;
    const vec<float, 3> &ttt;
    const vec<float, 3> &yyz;
    const vec<float, 3> &ggb;
    const vec<float, 3> &ttu;
    const vec<float, 3> &yyw;
    const vec<float, 3> &gga;
    const vec<float, 3> &ttv;
          vec<float, 3> &yzx;
          vec<float, 3> &gbr;
          vec<float, 3> &tus;
    const vec<float, 3> &yzy;
    const vec<float, 3> &gbg;
    const vec<float, 3> &tut;
    const vec<float, 3> &yzz;
    const vec<float, 3> &gbb;
    const vec<float, 3> &tuu;
          vec<float, 3> &yzw;
          vec<float, 3> &gba;
          vec<float, 3> &tuv;
          vec<float, 3> &ywx;
          vec<float, 3> &gar;
          vec<float, 3> &tvs;
    const vec<float, 3> &ywy;
    const vec<float, 3> &gag;
    const vec<float, 3> &tvt;
          vec<float, 3> &ywz;
          vec<float, 3> &gab;
          vec<float, 3> &tvu;
    const vec<float, 3> &yww;
    const vec<float, 3> &gaa;
    const vec<float, 3> &tvv;
    const vec<float, 3> &zxx;
    const vec<float, 3> &brr;
    const vec<float, 3> &uss;
          vec<float, 3> &zxy;
          vec<float, 3> &brg;
          vec<float, 3> &ust;
    const vec<float, 3> &zxz;
    const vec<float, 3> &brb;
    const vec<float, 3> &usu;
          vec<float, 3> &zxw;
          vec<float, 3> &bra;
          vec<float, 3> &usv;
          vec<float, 3> &zyx;
          vec<float, 3> &bgr;
          vec<float, 3> &uts;
    const vec<float, 3> &zyy;
    const vec<float, 3> &bgg;
    const vec<float, 3> &utt;
    const vec<float, 3> &zyz;
    const vec<float, 3> &bgb;
    const vec<float, 3> &utu;
          vec<float, 3> &zyw;
          vec<float, 3> &bga;
          vec<float, 3> &utv;
    const vec<float, 3> &zzx;
    const vec<float, 3> &bbr;
    const vec<float, 3> &uus;
    const vec<float, 3> &zzy;
    const vec<float, 3> &bbg;
    const vec<float, 3> &uut;
    const vec<float, 3> &zzz;
    const vec<float, 3> &bbb;
    const vec<float, 3> &uuu;
    const vec<float, 3> &zzw;
    const vec<float, 3> &bba;
    const vec<float, 3> &uuv;
          vec<float, 3> &zwx;
          vec<float, 3> &bar;
          vec<float, 3> &uvs;
          vec<float, 3> &zwy;
          vec<float, 3> &bag;
          vec<float, 3> &uvt;
    const vec<float, 3> &zwz;
    const vec<float, 3> &bab;
    const vec<float, 3> &uvu;
    const vec<float, 3> &zww;
    const vec<float, 3> &baa;
    const vec<float, 3> &uvv;
    const vec<float, 3> &wxx;
    const vec<float, 3> &arr;
    const vec<float, 3> &vss;
          vec<float, 3> &wxy;
          vec<float, 3> &arg;
          vec<float, 3> &vst;
          vec<float, 3> &wxz;
          vec<float, 3> &arb;
          vec<float, 3> &vsu;
    const vec<float, 3> &wxw;
    const vec<float, 3> &ara;
    const vec<float, 3> &vsv;
          vec<float, 3> &wyx;
          vec<float, 3> &agr;
          vec<float, 3> &vts;
    const vec<float, 3> &wyy;
    const vec<float, 3> &agg;
    const vec<float, 3> &vtt;
          vec<float, 3> &wyz;
          vec<float, 3> &agb;
          vec<float, 3> &vtu;
    const vec<float, 3> &wyw;
    const vec<float, 3> &aga;
    const vec<float, 3> &vtv;
          vec<float, 3> &wzx;
          vec<float, 3> &abr;
          vec<float, 3> &vus;
          vec<float, 3> &wzy;
          vec<float, 3> &abg;
          vec<float, 3> &vut;
    const vec<float, 3> &wzz;
    const vec<float, 3> &abb;
    const vec<float, 3> &vuu;
    const vec<float, 3> &wzw;
    const vec<float, 3> &aba;
    const vec<float, 3> &vuv;
    const vec<float, 3> &wwx;
    const vec<float, 3> &aar;
    const vec<float, 3> &vvs;
    const vec<float, 3> &wwy;
    const vec<float, 3> &aag;
    const vec<float, 3> &vvt;
    const vec<float, 3> &wwz;
    const vec<float, 3> &aab;
    const vec<float, 3> &vvu;
    const vec<float, 3> &www;
    const vec<float, 3> &aaa;
    const vec<float, 3> &vvv;
    const vec<float, 4> &xxxx;
    const vec<float, 4> &rrrr;
    const vec<float, 4> &ssss;
    const vec<float, 4> &xxxy;
    const vec<float, 4> &rrrg;
    const vec<float, 4> &ssst;
    const vec<float, 4> &xxxz;
    const vec<float, 4> &rrrb;
    const vec<float, 4> &sssu;
    const vec<float, 4> &xxxw;
    const vec<float, 4> &rrra;
    const vec<float, 4> &sssv;
    const vec<float, 4> &xxyx;
    const vec<float, 4> &rrgr;
    const vec<float, 4> &ssts;
    const vec<float, 4> &xxyy;
    const vec<float, 4> &rrgg;
    const vec<float, 4> &sstt;
    const vec<float, 4> &xxyz;
    const vec<float, 4> &rrgb;
    const vec<float, 4> &sstu;
    const vec<float, 4> &xxyw;
    const vec<float, 4> &rrga;
    const vec<float, 4> &sstv;
    const vec<float, 4> &xxzx;
    const vec<float, 4> &rrbr;
    const vec<float, 4> &ssus;
    const vec<float, 4> &xxzy;
    const vec<float, 4> &rrbg;
    const vec<float, 4> &ssut;
    const vec<float, 4> &xxzz;
    const vec<float, 4> &rrbb;
    const vec<float, 4> &ssuu;
    const vec<float, 4> &xxzw;
    const vec<float, 4> &rrba;
    const vec<float, 4> &ssuv;
    const vec<float, 4> &xxwx;
    const vec<float, 4> &rrar;
    const vec<float, 4> &ssvs;
    const vec<float, 4> &xxwy;
    const vec<float, 4> &rrag;
    const vec<float, 4> &ssvt;
    const vec<float, 4> &xxwz;
    const vec<float, 4> &rrab;
    const vec<float, 4> &ssvu;
    const vec<float, 4> &xxww;
    const vec<float, 4> &rraa;
    const vec<float, 4> &ssvv;
    const vec<float, 4> &xyxx;
    const vec<float, 4> &rgrr;
    const vec<float, 4> &stss;
    const vec<float, 4> &xyxy;
    const vec<float, 4> &rgrg;
    const vec<float, 4> &stst;
    const vec<float, 4> &xyxz;
    const vec<float, 4> &rgrb;
    const vec<float, 4> &stsu;
    const vec<float, 4> &xyxw;
    const vec<float, 4> &rgra;
    const vec<float, 4> &stsv;
    const vec<float, 4> &xyyx;
    const vec<float, 4> &rggr;
    const vec<float, 4> &stts;
    const vec<float, 4> &xyyy;
    const vec<float, 4> &rggg;
    const vec<float, 4> &sttt;
    const vec<float, 4> &xyyz;
    const vec<float, 4> &rggb;
    const vec<float, 4> &sttu;
    const vec<float, 4> &xyyw;
    const vec<float, 4> &rgga;
    const vec<float, 4> &sttv;
    const vec<float, 4> &xyzx;
    const vec<float, 4> &rgbr;
    const vec<float, 4> &stus;
    const vec<float, 4> &xyzy;
    const vec<float, 4> &rgbg;
    const vec<float, 4> &stut;
    const vec<float, 4> &xyzz;
    const vec<float, 4> &rgbb;
    const vec<float, 4> &stuu;
          vec<float, 4> &xyzw;
          vec<float, 4> &rgba;
          vec<float, 4> &stuv;
    const vec<float, 4> &xywx;
    const vec<float, 4> &rgar;
    const vec<float, 4> &stvs;
    const vec<float, 4> &xywy;
    const vec<float, 4> &rgag;
    const vec<float, 4> &stvt;
          vec<float, 4> &xywz;
          vec<float, 4> &rgab;
          vec<float, 4> &stvu;
    const vec<float, 4> &xyww;
    const vec<float, 4> &rgaa;
    const vec<float, 4> &stvv;
    const vec<float, 4> &xzxx;
    const vec<float, 4> &rbrr;
    const vec<float, 4> &suss;
    const vec<float, 4> &xzxy;
    const vec<float, 4> &rbrg;
    const vec<float, 4> &sust;
    const vec<float, 4> &xzxz;
    const vec<float, 4> &rbrb;
    const vec<float, 4> &susu;
    const vec<float, 4> &xzxw;
    const vec<float, 4> &rbra;
    const vec<float, 4> &susv;
    const vec<float, 4> &xzyx;
    const vec<float, 4> &rbgr;
    const vec<float, 4> &suts;
    const vec<float, 4> &xzyy;
    const vec<float, 4> &rbgg;
    const vec<float, 4> &sutt;
    const vec<float, 4> &xzyz;
    const vec<float, 4> &rbgb;
    const vec<float, 4> &sutu;
          vec<float, 4> &xzyw;
          vec<float, 4> &rbga;
          vec<float, 4> &sutv;
    const vec<float, 4> &xzzx;
    const vec<float, 4> &rbbr;
    const vec<float, 4> &suus;
    const vec<float, 4> &xzzy;
    const vec<float, 4> &rbbg;
    const vec<float, 4> &suut;
    const vec<float, 4> &xzzz;
    const vec<float, 4> &rbbb;
    const vec<float, 4> &suuu;
    const vec<float, 4> &xzzw;
    const vec<float, 4> &rbba;
    const vec<float, 4> &suuv;
    const vec<float, 4> &xzwx;
    const vec<float, 4> &rbar;
    const vec<float, 4> &suvs;
          vec<float, 4> &xzwy;
          vec<float, 4> &rbag;
          vec<float, 4> &suvt;
    const vec<float, 4> &xzwz;
    const vec<float, 4> &rbab;
    const vec<float, 4> &suvu;
    const vec<float, 4> &xzww;
    const vec<float, 4> &rbaa;
    const vec<float, 4> &suvv;
    const vec<float, 4> &xwxx;
    const vec<float, 4> &rarr;
    const vec<float, 4> &svss;
    const vec<float, 4> &xwxy;
    const vec<float, 4> &rarg;
    const vec<float, 4> &svst;
    const vec<float, 4> &xwxz;
    const vec<float, 4> &rarb;
    const vec<float, 4> &svsu;
    const vec<float, 4> &xwxw;
    const vec<float, 4> &rara;
    const vec<float, 4> &svsv;
    const vec<float, 4> &xwyx;
    const vec<float, 4> &ragr;
    const vec<float, 4> &svts;
    const vec<float, 4> &xwyy;
    const vec<float, 4> &ragg;
    const vec<float, 4> &svtt;
          vec<float, 4> &xwyz;
          vec<float, 4> &ragb;
          vec<float, 4> &svtu;
    const vec<float, 4> &xwyw;
    const vec<float, 4> &raga;
    const vec<float, 4> &svtv;
    const vec<float, 4> &xwzx;
    const vec<float, 4> &rabr;
    const vec<float, 4> &svus;
          vec<float, 4> &xwzy;
          vec<float, 4> &rabg;
          vec<float, 4> &svut;
    const vec<float, 4> &xwzz;
    const vec<float, 4> &rabb;
    const vec<float, 4> &svuu;
    const vec<float, 4> &xwzw;
    const vec<float, 4> &raba;
    const vec<float, 4> &svuv;
    const vec<float, 4> &xwwx;
    const vec<float, 4> &raar;
    const vec<float, 4> &svvs;
    const vec<float, 4> &xwwy;
    const vec<float, 4> &raag;
    const vec<float, 4> &svvt;
    const vec<float, 4> &xwwz;
    const vec<float, 4> &raab;
    const vec<float, 4> &svvu;
    const vec<float, 4> &xwww;
    const vec<float, 4> &raaa;
    const vec<float, 4> &svvv;
    const vec<float, 4> &yxxx;
    const vec<float, 4> &grrr;
    const vec<float, 4> &tsss;
    const vec<float, 4> &yxxy;
    const vec<float, 4> &grrg;
    const vec<float, 4> &tsst;
    const vec<float, 4> &yxxz;
    const vec<float, 4> &grrb;
    const vec<float, 4> &tssu;
    const vec<float, 4> &yxxw;
    const vec<float, 4> &grra;
    const vec<float, 4> &tssv;
    const vec<float, 4> &yxyx;
    const vec<float, 4> &grgr;
    const vec<float, 4> &tsts;
    const vec<float, 4> &yxyy;
    const vec<float, 4> &grgg;
    const vec<float, 4> &tstt;
    const vec<float, 4> &yxyz;
    const vec<float, 4> &grgb;
    const vec<float, 4> &tstu;
    const vec<float, 4> &yxyw;
    const vec<float, 4> &grga;
    const vec<float, 4> &tstv;
    const vec<float, 4> &yxzx;
    const vec<float, 4> &grbr;
    const vec<float, 4> &tsus;
    const vec<float, 4> &yxzy;
    const vec<float, 4> &grbg;
    const vec<float, 4> &tsut;
    const vec<float, 4> &yxzz;
    const vec<float, 4> &grbb;
    const vec<float, 4> &tsuu;
          vec<float, 4> &yxzw;
          vec<float, 4> &grba;
          vec<float, 4> &tsuv;
    const vec<float, 4> &yxwx;
    const vec<float, 4> &grar;
    const vec<float, 4> &tsvs;
    const vec<float, 4> &yxwy;
    const vec<float, 4> &grag;
    const vec<float, 4> &tsvt;
          vec<float, 4> &yxwz;
          vec<float, 4> &grab;
          vec<float, 4> &tsvu;
    const vec<float, 4> &yxww;
    const vec<float, 4> &graa;
    const vec<float, 4> &tsvv;
    const vec<float, 4> &yyxx;
    const vec<float, 4> &ggrr;
    const vec<float, 4> &ttss;
    const vec<float, 4> &yyxy;
    const vec<float, 4> &ggrg;
    const vec<float, 4> &ttst;
    const vec<float, 4> &yyxz;
    const vec<float, 4> &ggrb;
    const vec<float, 4> &ttsu;
    const vec<float, 4> &yyxw;
    const vec<float, 4> &ggra;
    const vec<float, 4> &ttsv;
    const vec<float, 4> &yyyx;
    const vec<float, 4> &gggr;
    const vec<float, 4> &ttts;
    const vec<float, 4> &yyyy;
    const vec<float, 4> &gggg;
    const vec<float, 4> &tttt;
    const vec<float, 4> &yyyz;
    const vec<float, 4> &gggb;
    const vec<float, 4> &tttu;
    const vec<float, 4> &yyyw;
    const vec<float, 4> &ggga;
    const vec<float, 4> &tttv;
    const vec<float, 4> &yyzx;
    const vec<float, 4> &ggbr;
    const vec<float, 4> &ttus;
    const vec<float, 4> &yyzy;
    const vec<float, 4> &ggbg;
    const vec<float, 4> &ttut;
    const vec<float, 4> &yyzz;
    const vec<float, 4> &ggbb;
    const vec<float, 4> &ttuu;
    const vec<float, 4> &yyzw;
    const vec<float, 4> &ggba;
    const vec<float, 4> &ttuv;
    const vec<float, 4> &yywx;
    const vec<float, 4> &ggar;
    const vec<float, 4> &ttvs;
    const vec<float, 4> &yywy;
    const vec<float, 4> &ggag;
    const vec<float, 4> &ttvt;
    const vec<float, 4> &yywz;
    const vec<float, 4> &ggab;
    const vec<float, 4> &ttvu;
    const vec<float, 4> &yyww;
    const vec<float, 4> &ggaa;
    const vec<float, 4> &ttvv;
    const vec<float, 4> &yzxx;
    const vec<float, 4> &gbrr;
    const vec<float, 4> &tuss;
    const vec<float, 4> &yzxy;
    const vec<float, 4> &gbrg;
    const vec<float, 4> &tust;
    const vec<float, 4> &yzxz;
    const vec<float, 4> &gbrb;
    const vec<float, 4> &tusu;
          vec<float, 4> &yzxw;
          vec<float, 4> &gbra;
          vec<float, 4> &tusv;
    const vec<float, 4> &yzyx;
    const vec<float, 4> &gbgr;
    const vec<float, 4> &tuts;
    const vec<float, 4> &yzyy;
    const vec<float, 4> &gbgg;
    const vec<float, 4> &tutt;
    const vec<float, 4> &yzyz;
    const vec<float, 4> &gbgb;
    const vec<float, 4> &tutu;
    const vec<float, 4> &yzyw;
    const vec<float, 4> &gbga;
    const vec<float, 4> &tutv;
    const vec<float, 4> &yzzx;
    const vec<float, 4> &gbbr;
    const vec<float, 4> &tuus;
    const vec<float, 4> &yzzy;
    const vec<float, 4> &gbbg;
    const vec<float, 4> &tuut;
    const vec<float, 4> &yzzz;
    const vec<float, 4> &gbbb;
    const vec<float, 4> &tuuu;
    const vec<float, 4> &yzzw;
    const vec<float, 4> &gbba;
    const vec<float, 4> &tuuv;
          vec<float, 4> &yzwx;
          vec<float, 4> &gbar;
          vec<float, 4> &tuvs;
    const vec<float, 4> &yzwy;
    const vec<float, 4> &gbag;
    const vec<float, 4> &tuvt;
    const vec<float, 4> &yzwz;
    const vec<float, 4> &gbab;
    const vec<float, 4> &tuvu;
    const vec<float, 4> &yzww;
    const vec<float, 4> &gbaa;
    const vec<float, 4> &tuvv;
    const vec<float, 4> &ywxx;
    const vec<float, 4> &garr;
    const vec<float, 4> &tvss;
    const vec<float, 4> &ywxy;
    const vec<float, 4> &garg;
    const vec<float, 4> &tvst;
          vec<float, 4> &ywxz;
          vec<float, 4> &garb;
          vec<float, 4> &tvsu;
    const vec<float, 4> &ywxw;
    const vec<float, 4> &gara;
    const vec<float, 4> &tvsv;
    const vec<float, 4> &ywyx;
    const vec<float, 4> &gagr;
    const vec<float, 4> &tvts;
    const vec<float, 4> &ywyy;
    const vec<float, 4> &gagg;
    const vec<float, 4> &tvtt;
    const vec<float, 4> &ywyz;
    const vec<float, 4> &gagb;
    const vec<float, 4> &tvtu;
    const vec<float, 4> &ywyw;
    const vec<float, 4> &gaga;
    const vec<float, 4> &tvtv;
          vec<float, 4> &ywzx;
          vec<float, 4> &gabr;
          vec<float, 4> &tvus;
    const vec<float, 4> &ywzy;
    const vec<float, 4> &gabg;
    const vec<float, 4> &tvut;
    const vec<float, 4> &ywzz;
    const vec<float, 4> &gabb;
    const vec<float, 4> &tvuu;
    const vec<float, 4> &ywzw;
    const vec<float, 4> &gaba;
    const vec<float, 4> &tvuv;
    const vec<float, 4> &ywwx;
    const vec<float, 4> &gaar;
    const vec<float, 4> &tvvs;
    const vec<float, 4> &ywwy;
    const vec<float, 4> &gaag;
    const vec<float, 4> &tvvt;
    const vec<float, 4> &ywwz;
    const vec<float, 4> &gaab;
    const vec<float, 4> &tvvu;
    const vec<float, 4> &ywww;
    const vec<float, 4> &gaaa;
    const vec<float, 4> &tvvv;
    const vec<float, 4> &zxxx;
    const vec<float, 4> &brrr;
    const vec<float, 4> &usss;
    const vec<float, 4> &zxxy;
    const vec<float, 4> &brrg;
    const vec<float, 4> &usst;
    const vec<float, 4> &zxxz;
    const vec<float, 4> &brrb;
    const vec<float, 4> &ussu;
    const vec<float, 4> &zxxw;
    const vec<float, 4> &brra;
    const vec<float, 4> &ussv;
    const vec<float, 4> &zxyx;
    const vec<float, 4> &brgr;
    const vec<float, 4> &usts;
    const vec<float, 4> &zxyy;
    const vec<float, 4> &brgg;
    const vec<float, 4> &ustt;
    const vec<float, 4> &zxyz;
    const vec<float, 4> &brgb;
    const vec<float, 4> &ustu;
          vec<float, 4> &zxyw;
          vec<float, 4> &brga;
          vec<float, 4> &ustv;
    const vec<float, 4> &zxzx;
    const vec<float, 4> &brbr;
    const vec<float, 4> &usus;
    const vec<float, 4> &zxzy;
    const vec<float, 4> &brbg;
    const vec<float, 4> &usut;
    const vec<float, 4> &zxzz;
    const vec<float, 4> &brbb;
    const vec<float, 4> &usuu;
    const vec<float, 4> &zxzw;
    const vec<float, 4> &brba;
    const vec<float, 4> &usuv;
    const vec<float, 4> &zxwx;
    const vec<float, 4> &brar;
    const vec<float, 4> &usvs;
          vec<float, 4> &zxwy;
          vec<float, 4> &brag;
          vec<float, 4> &usvt;
    const vec<float, 4> &zxwz;
    const vec<float, 4> &brab;
    const vec<float, 4> &usvu;
    const vec<float, 4> &zxww;
    const vec<float, 4> &braa;
    const vec<float, 4> &usvv;
    const vec<float, 4> &zyxx;
    const vec<float, 4> &bgrr;
    const vec<float, 4> &utss;
    const vec<float, 4> &zyxy;
    const vec<float, 4> &bgrg;
    const vec<float, 4> &utst;
    const vec<float, 4> &zyxz;
    const vec<float, 4> &bgrb;
    const vec<float, 4> &utsu;
          vec<float, 4> &zyxw;
          vec<float, 4> &bgra;
          vec<float, 4> &utsv;
    const vec<float, 4> &zyyx;
    const vec<float, 4> &bggr;
    const vec<float, 4> &utts;
    const vec<float, 4> &zyyy;
    const vec<float, 4> &bggg;
    const vec<float, 4> &uttt;
    const vec<float, 4> &zyyz;
    const vec<float, 4> &bggb;
    const vec<float, 4> &uttu;
    const vec<float, 4> &zyyw;
    const vec<float, 4> &bgga;
    const vec<float, 4> &uttv;
    const vec<float, 4> &zyzx;
    const vec<float, 4> &bgbr;
    const vec<float, 4> &utus;
    const vec<float, 4> &zyzy;
    const vec<float, 4> &bgbg;
    const vec<float, 4> &utut;
    const vec<float, 4> &zyzz;
    const vec<float, 4> &bgbb;
    const vec<float, 4> &utuu;
    const vec<float, 4> &zyzw;
    const vec<float, 4> &bgba;
    const vec<float, 4> &utuv;
          vec<float, 4> &zywx;
          vec<float, 4> &bgar;
          vec<float, 4> &utvs;
    const vec<float, 4> &zywy;
    const vec<float, 4> &bgag;
    const vec<float, 4> &utvt;
    const vec<float, 4> &zywz;
    const vec<float, 4> &bgab;
    const vec<float, 4> &utvu;
    const vec<float, 4> &zyww;
    const vec<float, 4> &bgaa;
    const vec<float, 4> &utvv;
    const vec<float, 4> &zzxx;
    const vec<float, 4> &bbrr;
    const vec<float, 4> &uuss;
    const vec<float, 4> &zzxy;
    const vec<float, 4> &bbrg;
    const vec<float, 4> &uust;
    const vec<float, 4> &zzxz;
    const vec<float, 4> &bbrb;
    const vec<float, 4> &uusu;
    const vec<float, 4> &zzxw;
    const vec<float, 4> &bbra;
    const vec<float, 4> &uusv;
    const vec<float, 4> &zzyx;
    const vec<float, 4> &bbgr;
    const vec<float, 4> &uuts;
    const vec<float, 4> &zzyy;
    const vec<float, 4> &bbgg;
    const vec<float, 4> &uutt;
    const vec<float, 4> &zzyz;
    const vec<float, 4> &bbgb;
    const vec<float, 4> &uutu;
    const vec<float, 4> &zzyw;
    const vec<float, 4> &bbga;
    const vec<float, 4> &uutv;
    const vec<float, 4> &zzzx;
    const vec<float, 4> &bbbr;
    const vec<float, 4> &uuus;
    const vec<float, 4> &zzzy;
    const vec<float, 4> &bbbg;
    const vec<float, 4> &uuut;
    const vec<float, 4> &zzzz;
    const vec<float, 4> &bbbb;
    const vec<float, 4> &uuuu;
    const vec<float, 4> &zzzw;
    const vec<float, 4> &bbba;
    const vec<float, 4> &uuuv;
    const vec<float, 4> &zzwx;
    const vec<float, 4> &bbar;
    const vec<float, 4> &uuvs;
    const vec<float, 4> &zzwy;
    const vec<float, 4> &bbag;
    const vec<float, 4> &uuvt;
    const vec<float, 4> &zzwz;
    const vec<float, 4> &bbab;
    const vec<float, 4> &uuvu;
    const vec<float, 4> &zzww;
    const vec<float, 4> &bbaa;
    const vec<float, 4> &uuvv;
    const vec<float, 4> &zwxx;
    const vec<float, 4> &barr;
    const vec<float, 4> &uvss;
          vec<float, 4> &zwxy;
          vec<float, 4> &barg;
          vec<float, 4> &uvst;
    const vec<float, 4> &zwxz;
    const vec<float, 4> &barb;
    const vec<float, 4> &uvsu;
    const vec<float, 4> &zwxw;
    const vec<float, 4> &bara;
    const vec<float, 4> &uvsv;
          vec<float, 4> &zwyx;
          vec<float, 4> &bagr;
          vec<float, 4> &uvts;
    const vec<float, 4> &zwyy;
    const vec<float, 4> &bagg;
    const vec<float, 4> &uvtt;
    const vec<float, 4> &zwyz;
    const vec<float, 4> &bagb;
    const vec<float, 4> &uvtu;
    const vec<float, 4> &zwyw;
    const vec<float, 4> &baga;
    const vec<float, 4> &uvtv;
    const vec<float, 4> &zwzx;
    const vec<float, 4> &babr;
    const vec<float, 4> &uvus;
    const vec<float, 4> &zwzy;
    const vec<float, 4> &babg;
    const vec<float, 4> &uvut;
    const vec<float, 4> &zwzz;
    const vec<float, 4> &babb;
    const vec<float, 4> &uvuu;
    const vec<float, 4> &zwzw;
    const vec<float, 4> &baba;
    const vec<float, 4> &uvuv;
    const vec<float, 4> &zwwx;
    const vec<float, 4> &baar;
    const vec<float, 4> &uvvs;
    const vec<float, 4> &zwwy;
    const vec<float, 4> &baag;
    const vec<float, 4> &uvvt;
    const vec<float, 4> &zwwz;
    const vec<float, 4> &baab;
    const vec<float, 4> &uvvu;
    const vec<float, 4> &zwww;
    const vec<float, 4> &baaa;
    const vec<float, 4> &uvvv;
    const vec<float, 4> &wxxx;
    const vec<float, 4> &arrr;
    const vec<float, 4> &vsss;
    const vec<float, 4> &wxxy;
    const vec<float, 4> &arrg;
    const vec<float, 4> &vsst;
    const vec<float, 4> &wxxz;
    const vec<float, 4> &arrb;
    const vec<float, 4> &vssu;
    const vec<float, 4> &wxxw;
    const vec<float, 4> &arra;
    const vec<float, 4> &vssv;
    const vec<float, 4> &wxyx;
    const vec<float, 4> &argr;
    const vec<float, 4> &vsts;
    const vec<float, 4> &wxyy;
    const vec<float, 4> &argg;
    const vec<float, 4> &vstt;
          vec<float, 4> &wxyz;
          vec<float, 4> &argb;
          vec<float, 4> &vstu;
    const vec<float, 4> &wxyw;
    const vec<float, 4> &arga;
    const vec<float, 4> &vstv;
    const vec<float, 4> &wxzx;
    const vec<float, 4> &arbr;
    const vec<float, 4> &vsus;
          vec<float, 4> &wxzy;
          vec<float, 4> &arbg;
          vec<float, 4> &vsut;
    const vec<float, 4> &wxzz;
    const vec<float, 4> &arbb;
    const vec<float, 4> &vsuu;
    const vec<float, 4> &wxzw;
    const vec<float, 4> &arba;
    const vec<float, 4> &vsuv;
    const vec<float, 4> &wxwx;
    const vec<float, 4> &arar;
    const vec<float, 4> &vsvs;
    const vec<float, 4> &wxwy;
    const vec<float, 4> &arag;
    const vec<float, 4> &vsvt;
    const vec<float, 4> &wxwz;
    const vec<float, 4> &arab;
    const vec<float, 4> &vsvu;
    const vec<float, 4> &wxww;
    const vec<float, 4> &araa;
    const vec<float, 4> &vsvv;
    const vec<float, 4> &wyxx;
    const vec<float, 4> &agrr;
    const vec<float, 4> &vtss;
    const vec<float, 4> &wyxy;
    const vec<float, 4> &agrg;
    const vec<float, 4> &vtst;
          vec<float, 4> &wyxz;
          vec<float, 4> &agrb;
          vec<float, 4> &vtsu;
    const vec<float, 4> &wyxw;
    const vec<float, 4> &agra;
    const vec<float, 4> &vtsv;
    const vec<float, 4> &wyyx;
    const vec<float, 4> &aggr;
    const vec<float, 4> &vtts;
    const vec<float, 4> &wyyy;
    const vec<float, 4> &aggg;
    const vec<float, 4> &vttt;
    const vec<float, 4> &wyyz;
    const vec<float, 4> &aggb;
    const vec<float, 4> &vttu;
    const vec<float, 4> &wyyw;
    const vec<float, 4> &agga;
    const vec<float, 4> &vttv;
          vec<float, 4> &wyzx;
          vec<float, 4> &agbr;
          vec<float, 4> &vtus;
    const vec<float, 4> &wyzy;
    const vec<float, 4> &agbg;
    const vec<float, 4> &vtut;
    const vec<float, 4> &wyzz;
    const vec<float, 4> &agbb;
    const vec<float, 4> &vtuu;
    const vec<float, 4> &wyzw;
    const vec<float, 4> &agba;
    const vec<float, 4> &vtuv;
    const vec<float, 4> &wywx;
    const vec<float, 4> &agar;
    const vec<float, 4> &vtvs;
    const vec<float, 4> &wywy;
    const vec<float, 4> &agag;
    const vec<float, 4> &vtvt;
    const vec<float, 4> &wywz;
    const vec<float, 4> &agab;
    const vec<float, 4> &vtvu;
    const vec<float, 4> &wyww;
    const vec<float, 4> &agaa;
    const vec<float, 4> &vtvv;
    const vec<float, 4> &wzxx;
    const vec<float, 4> &abrr;
    const vec<float, 4> &vuss;
          vec<float, 4> &wzxy;
          vec<float, 4> &abrg;
          vec<float, 4> &vust;
    const vec<float, 4> &wzxz;
    const vec<float, 4> &abrb;
    const vec<float, 4> &vusu;
    const vec<float, 4> &wzxw;
    const vec<float, 4> &abra;
    const vec<float, 4> &vusv;
          vec<float, 4> &wzyx;
          vec<float, 4> &abgr;
          vec<float, 4> &vuts;
    const vec<float, 4> &wzyy;
    const vec<float, 4> &abgg;
    const vec<float, 4> &vutt;
    const vec<float, 4> &wzyz;
    const vec<float, 4> &abgb;
    const vec<float, 4> &vutu;
    const vec<float, 4> &wzyw;
    const vec<float, 4> &abga;
    const vec<float, 4> &vutv;
    const vec<float, 4> &wzzx;
    const vec<float, 4> &abbr;
    const vec<float, 4> &vuus;
    const vec<float, 4> &wzzy;
    const vec<float, 4> &abbg;
    const vec<float, 4> &vuut;
    const vec<float, 4> &wzzz;
    const vec<float, 4> &abbb;
    const vec<float, 4> &vuuu;
    const vec<float, 4> &wzzw;
    const vec<float, 4> &abba;
    const vec<float, 4> &vuuv;
    const vec<float, 4> &wzwx;
    const vec<float, 4> &abar;
    const vec<float, 4> &vuvs;
    const vec<float, 4> &wzwy;
    const vec<float, 4> &abag;
    const vec<float, 4> &vuvt;
    const vec<float, 4> &wzwz;
    const vec<float, 4> &abab;
    const vec<float, 4> &vuvu;
    const vec<float, 4> &wzww;
    const vec<float, 4> &abaa;
    const vec<float, 4> &vuvv;
    const vec<float, 4> &wwxx;
    const vec<float, 4> &aarr;
    const vec<float, 4> &vvss;
    const vec<float, 4> &wwxy;
    const vec<float, 4> &aarg;
    const vec<float, 4> &vvst;
    const vec<float, 4> &wwxz;
    const vec<float, 4> &aarb;
    const vec<float, 4> &vvsu;
    const vec<float, 4> &wwxw;
    const vec<float, 4> &aara;
    const vec<float, 4> &vvsv;
    const vec<float, 4> &wwyx;
    const vec<float, 4> &aagr;
    const vec<float, 4> &vvts;
    const vec<float, 4> &wwyy;
    const vec<float, 4> &aagg;
    const vec<float, 4> &vvtt;
    const vec<float, 4> &wwyz;
    const vec<float, 4> &aagb;
    const vec<float, 4> &vvtu;
    const vec<float, 4> &wwyw;
    const vec<float, 4> &aaga;
    const vec<float, 4> &vvtv;
    const vec<float, 4> &wwzx;
    const vec<float, 4> &aabr;
    const vec<float, 4> &vvus;
    const vec<float, 4> &wwzy;
    const vec<float, 4> &aabg;
    const vec<float, 4> &vvut;
    const vec<float, 4> &wwzz;
    const vec<float, 4> &aabb;
    const vec<float, 4> &vvuu;
    const vec<float, 4> &wwzw;
    const vec<float, 4> &aaba;
    const vec<float, 4> &vvuv;
    const vec<float, 4> &wwwx;
    const vec<float, 4> &aaar;
    const vec<float, 4> &vvvs;
    const vec<float, 4> &wwwy;
    const vec<float, 4> &aaag;
    const vec<float, 4> &vvvt;
    const vec<float, 4> &wwwz;
    const vec<float, 4> &aaab;
    const vec<float, 4> &vvvu;
    const vec<float, 4> &wwww;
    const vec<float, 4> &aaaa;
    const vec<float, 4> &vvvv;
    
    // constructor
    vec<float, 4>();
    template<typename T> requires(std::is_nothrow_convertible_v<T, float>)
    vec<float, 4>(const vec<T, 4>&) {
        static_assert(std::is_nothrow_convertible_v<T, float>);
    }
    explicit vec<float, 4>(const float&);
    vec<float, 4>& operator=(const vec<float, 4>&);
    vec<float, 4>(const float&, const vec<float, 2>&, const float&);
    vec<float, 4>(const vec<float, 2>&, const float&, const float&);
    vec<float, 4>(const vec<float, 3>&, const float&);
    vec<float, 4>(const float&, const float&, const vec<float, 2>&);
    vec<float, 4>(const vec<float, 2>&, const vec<float, 2>&);
    vec<float, 4>(const float&, const vec<float, 3>&);
};



// GLSL matrix. Lack of irregular constructor support.
struct mat<float, 2, 2> : std::array<vec<float, 2>, 2>{
    // constructor
    mat<float, 2, 2>();
    mat<float, 2, 2>(const float&);
    mat<float, 2, 2>(const float&, const float&, const float&, const float&);
    mat<float, 2, 2>(const vec<float, M>&, const vec<float, M>&);
    template<uint NN, uint MM>
    mat<float, 2, 2>(const mat<float, NN, MM>);

};


// GLSL matrix. Lack of irregular constructor support.
struct mat<float, 3, 2> : std::array<vec<float, 2>, 3>{
    // constructor
    mat<float, 3, 2>();
    mat<float, 3, 2>(const float&);
    mat<float, 3, 2>(const float&, const float&, const float&, const float&, const float&, const float&);
    mat<float, 3, 2>(const vec<float, M>&, const vec<float, M>&, const vec<float, M>&);
    template<uint NN, uint MM>
    mat<float, 3, 2>(const mat<float, NN, MM>);

};


// GLSL matrix. Lack of irregular constructor support.
struct mat<float, 4, 2> : std::array<vec<float, 2>, 4>{
    // constructor
    mat<float, 4, 2>();
    mat<float, 4, 2>(const float&);
    mat<float, 4, 2>(const float&, const float&, const float&, const float&, const float&, const float&, const float&, const float&);
    mat<float, 4, 2>(const vec<float, M>&, const vec<float, M>&, const vec<float, M>&, const vec<float, M>&);
    template<uint NN, uint MM>
    mat<float, 4, 2>(const mat<float, NN, MM>);

};


// GLSL matrix. Lack of irregular constructor support.
struct mat<float, 2, 3> : std::array<vec<float, 3>, 2>{
    // constructor
    mat<float, 2, 3>();
    mat<float, 2, 3>(const float&);
    mat<float, 2, 3>(const float&, const float&, const float&, const float&, const float&, const float&);
    mat<float, 2, 3>(const vec<float, M>&, const vec<float, M>&);
    template<uint NN, uint MM>
    mat<float, 2, 3>(const mat<float, NN, MM>);

};


// GLSL matrix. Lack of irregular constructor support.
struct mat<float, 3, 3> : std::array<vec<float, 3>, 3>{
    // constructor
    mat<float, 3, 3>();
    mat<float, 3, 3>(const float&);
    mat<float, 3, 3>(const float&, const float&, const float&, const float&, const float&, const float&, const float&, const float&, const float&);
    mat<float, 3, 3>(const vec<float, M>&, const vec<float, M>&, const vec<float, M>&);
    template<uint NN, uint MM>
    mat<float, 3, 3>(const mat<float, NN, MM>);

};


// GLSL matrix. Lack of irregular constructor support.
struct mat<float, 4, 3> : std::array<vec<float, 3>, 4>{
    // constructor
    mat<float, 4, 3>();
    mat<float, 4, 3>(const float&);
    mat<float, 4, 3>(const float&, const float&, const float&, const float&, const float&, const float&, const float&, const float&, const float&, const float&, const float&, const float&);
    mat<float, 4, 3>(const vec<float, M>&, const vec<float, M>&, const vec<float, M>&, const vec<float, M>&);
    template<uint NN, uint MM>
    mat<float, 4, 3>(const mat<float, NN, MM>);

};


// GLSL matrix. Lack of irregular constructor support.
struct mat<float, 2, 4> : std::array<vec<float, 4>, 2>{
    // constructor
    mat<float, 2, 4>();
    mat<float, 2, 4>(const float&);
    mat<float, 2, 4>(const float&, const float&, const float&, const float&, const float&, const float&, const float&, const float&);
    mat<float, 2, 4>(const vec<float, M>&, const vec<float, M>&);
    template<uint NN, uint MM>
    mat<float, 2, 4>(const mat<float, NN, MM>);

};


// GLSL matrix. Lack of irregular constructor support.
struct mat<float, 3, 4> : std::array<vec<float, 4>, 3>{
    // constructor
    mat<float, 3, 4>();
    mat<float, 3, 4>(const float&);
    mat<float, 3, 4>(const float&, const float&, const float&, const float&, const float&, const float&, const float&, const float&, const float&, const float&, const float&, const float&);
    mat<float, 3, 4>(const vec<float, M>&, const vec<float, M>&, const vec<float, M>&);
    template<uint NN, uint MM>
    mat<float, 3, 4>(const mat<float, NN, MM>);

};


// GLSL matrix. Lack of irregular constructor support.
struct mat<float, 4, 4> : std::array<vec<float, 4>, 4>{
    // constructor
    mat<float, 4, 4>();
    mat<float, 4, 4>(const float&);
    mat<float, 4, 4>(const float&, const float&, const float&, const float&, const float&, const float&, const float&, const float&, const float&, const float&, const float&, const float&, const float&, const float&, const float&, const float&);
    mat<float, 4, 4>(const vec<float, M>&, const vec<float, M>&, const vec<float, M>&, const vec<float, M>&);
    template<uint NN, uint MM>
    mat<float, 4, 4>(const mat<float, NN, MM>);

};


// GLSL matrix. Lack of irregular constructor support.
struct mat<double, 2, 2> : std::array<vec<double, 2>, 2>{
    // constructor
    mat<double, 2, 2>();
    mat<double, 2, 2>(const double&);
    mat<double, 2, 2>(const double&, const double&, const double&, const double&);
    mat<double, 2, 2>(const vec<double, M>&, const vec<double, M>&);
    template<uint NN, uint MM>
    mat<double, 2, 2>(const mat<double, NN, MM>);

};


// GLSL matrix. Lack of irregular constructor support.
struct mat<double, 3, 2> : std::array<vec<double, 2>, 3>{
    // constructor
    mat<double, 3, 2>();
    mat<double, 3, 2>(const double&);
    mat<double, 3, 2>(const double&, const double&, const double&, const double&, const double&, const double&);
    mat<double, 3, 2>(const vec<double, M>&, const vec<double, M>&, const vec<double, M>&);
    template<uint NN, uint MM>
    mat<double, 3, 2>(const mat<double, NN, MM>);

};


// GLSL matrix. Lack of irregular constructor support.
struct mat<double, 4, 2> : std::array<vec<double, 2>, 4>{
    // constructor
    mat<double, 4, 2>();
    mat<double, 4, 2>(const double&);
    mat<double, 4, 2>(const double&, const double&, const double&, const double&, const double&, const double&, const double&, const double&);
    mat<double, 4, 2>(const vec<double, M>&, const vec<double, M>&, const vec<double, M>&, const vec<double, M>&);
    template<uint NN, uint MM>
    mat<double, 4, 2>(const mat<double, NN, MM>);

};


// GLSL matrix. Lack of irregular constructor support.
struct mat<double, 2, 3> : std::array<vec<double, 3>, 2>{
    // constructor
    mat<double, 2, 3>();
    mat<double, 2, 3>(const double&);
    mat<double, 2, 3>(const double&, const double&, const double&, const double&, const double&, const double&);
    mat<double, 2, 3>(const vec<double, M>&, const vec<double, M>&);
    template<uint NN, uint MM>
    mat<double, 2, 3>(const mat<double, NN, MM>);

};


// GLSL matrix. Lack of irregular constructor support.
struct mat<double, 3, 3> : std::array<vec<double, 3>, 3>{
    // constructor
    mat<double, 3, 3>();
    mat<double, 3, 3>(const double&);
    mat<double, 3, 3>(const double&, const double&, const double&, const double&, const double&, const double&, const double&, const double&, const double&);
    mat<double, 3, 3>(const vec<double, M>&, const vec<double, M>&, const vec<double, M>&);
    template<uint NN, uint MM>
    mat<double, 3, 3>(const mat<double, NN, MM>);

};


// GLSL matrix. Lack of irregular constructor support.
struct mat<double, 4, 3> : std::array<vec<double, 3>, 4>{
    // constructor
    mat<double, 4, 3>();
    mat<double, 4, 3>(const double&);
    mat<double, 4, 3>(const double&, const double&, const double&, const double&, const double&, const double&, const double&, const double&, const double&, const double&, const double&, const double&);
    mat<double, 4, 3>(const vec<double, M>&, const vec<double, M>&, const vec<double, M>&, const vec<double, M>&);
    template<uint NN, uint MM>
    mat<double, 4, 3>(const mat<double, NN, MM>);

};


// GLSL matrix. Lack of irregular constructor support.
struct mat<double, 2, 4> : std::array<vec<double, 4>, 2>{
    // constructor
    mat<double, 2, 4>();
    mat<double, 2, 4>(const double&);
    mat<double, 2, 4>(const double&, const double&, const double&, const double&, const double&, const double&, const double&, const double&);
    mat<double, 2, 4>(const vec<double, M>&, const vec<double, M>&);
    template<uint NN, uint MM>
    mat<double, 2, 4>(const mat<double, NN, MM>);

};


// GLSL matrix. Lack of irregular constructor support.
struct mat<double, 3, 4> : std::array<vec<double, 4>, 3>{
    // constructor
    mat<double, 3, 4>();
    mat<double, 3, 4>(const double&);
    mat<double, 3, 4>(const double&, const double&, const double&, const double&, const double&, const double&, const double&, const double&, const double&, const double&, const double&, const double&);
    mat<double, 3, 4>(const vec<double, M>&, const vec<double, M>&, const vec<double, M>&);
    template<uint NN, uint MM>
    mat<double, 3, 4>(const mat<double, NN, MM>);

};


// GLSL matrix. Lack of irregular constructor support.
struct mat<double, 4, 4> : std::array<vec<double, 4>, 4>{
    // constructor
    mat<double, 4, 4>();
    mat<double, 4, 4>(const double&);
    mat<double, 4, 4>(const double&, const double&, const double&, const double&, const double&, const double&, const double&, const double&, const double&, const double&, const double&, const double&, const double&, const double&, const double&, const double&);
    mat<double, 4, 4>(const vec<double, M>&, const vec<double, M>&, const vec<double, M>&, const vec<double, M>&);
    template<uint NN, uint MM>
    mat<double, 4, 4>(const mat<double, NN, MM>);

};

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

#if __cplusplus > 201703UL
template <typename T>
concept textureAccessable = requires(T a) {
    typename T::texcoord;
};
template <typename T>
concept texelFetchAccessable = requires(T a) {
    typename T::itexcoord;
};
template <typename T>
concept is_image = requires(T a) {
    typename T::value_type;
    std::is_base_of_v<gimage<typename T::value_type>, T>;
};
template <typename T>
concept is_sampler = requires(T a) {
    typename T::value_type;
    std::is_base_of_v<gsampler<typename T::value_type>, T>;
};
template <typename T>
concept is_shadow = requires(T a) {
    typename T::value_type;
    std::is_base_of_v<gshadow, T>;
};
#endif

} // namespace internal
#ifndef SUPPRESS_GEN_DEFS
// clang-format off
struct sampler1D: public ::internal::gsampler<float>, public ::internal::texture_1D {};
struct sampler2D: public ::internal::gsampler<float>, public ::internal::texture_2D {};
struct sampler3D: public ::internal::gsampler<float>, public ::internal::texture_3D {};
struct samplerCube: public ::internal::gsampler<float>, public ::internal::texture_Cube {};
struct sampler2DRect: public ::internal::gsampler<float>, public ::internal::texture_2DRect {};
struct sampler1DArray: public ::internal::gsampler<float>, public ::internal::texture_1DArray {};
struct sampler2DArray: public ::internal::gsampler<float>, public ::internal::texture_2DArray {};
struct samplerCubeArray: public ::internal::gsampler<float>, public ::internal::texture_CubeArray {};
struct samplerBuffer: public ::internal::gsampler<float>, public ::internal::texture_Buffer {};
struct isampler1D: public ::internal::gsampler<int>, public ::internal::texture_1D {};
struct isampler2D: public ::internal::gsampler<int>, public ::internal::texture_2D {};
struct isampler3D: public ::internal::gsampler<int>, public ::internal::texture_3D {};
struct isamplerCube: public ::internal::gsampler<int>, public ::internal::texture_Cube {};
struct isampler2DRect: public ::internal::gsampler<int>, public ::internal::texture_2DRect {};
struct isampler1DArray: public ::internal::gsampler<int>, public ::internal::texture_1DArray {};
struct isampler2DArray: public ::internal::gsampler<int>, public ::internal::texture_2DArray {};
struct isamplerCubeArray: public ::internal::gsampler<int>, public ::internal::texture_CubeArray {};
struct isamplerBuffer: public ::internal::gsampler<int>, public ::internal::texture_Buffer {};
struct usampler1D: public ::internal::gsampler<uint>, public ::internal::texture_1D {};
struct usampler2D: public ::internal::gsampler<uint>, public ::internal::texture_2D {};
struct usampler3D: public ::internal::gsampler<uint>, public ::internal::texture_3D {};
struct usamplerCube: public ::internal::gsampler<uint>, public ::internal::texture_Cube {};
struct usampler2DRect: public ::internal::gsampler<uint>, public ::internal::texture_2DRect {};
struct usampler1DArray: public ::internal::gsampler<uint>, public ::internal::texture_1DArray {};
struct usampler2DArray: public ::internal::gsampler<uint>, public ::internal::texture_2DArray {};
struct usamplerCubeArray: public ::internal::gsampler<uint>, public ::internal::texture_CubeArray {};
struct usamplerBuffer: public ::internal::gsampler<uint>, public ::internal::texture_Buffer {};
struct image1D: public ::internal::gimage<float>, public ::internal::texture_1D {};
struct image2D: public ::internal::gimage<float>, public ::internal::texture_2D {};
struct image3D: public ::internal::gimage<float>, public ::internal::texture_3D {};
struct imageCube: public ::internal::gimage<float>, public ::internal::texture_Cube {};
struct image2DRect: public ::internal::gimage<float>, public ::internal::texture_2DRect {};
struct image1DArray: public ::internal::gimage<float>, public ::internal::texture_1DArray {};
struct image2DArray: public ::internal::gimage<float>, public ::internal::texture_2DArray {};
struct imageCubeArray: public ::internal::gimage<float>, public ::internal::texture_CubeArray {};
struct imageBuffer: public ::internal::gimage<float>, public ::internal::texture_Buffer {};
struct iimage1D: public ::internal::gimage<int>, public ::internal::texture_1D {};
struct iimage2D: public ::internal::gimage<int>, public ::internal::texture_2D {};
struct iimage3D: public ::internal::gimage<int>, public ::internal::texture_3D {};
struct iimageCube: public ::internal::gimage<int>, public ::internal::texture_Cube {};
struct iimage2DRect: public ::internal::gimage<int>, public ::internal::texture_2DRect {};
struct iimage1DArray: public ::internal::gimage<int>, public ::internal::texture_1DArray {};
struct iimage2DArray: public ::internal::gimage<int>, public ::internal::texture_2DArray {};
struct iimageCubeArray: public ::internal::gimage<int>, public ::internal::texture_CubeArray {};
struct iimageBuffer: public ::internal::gimage<int>, public ::internal::texture_Buffer {};
struct uimage1D: public ::internal::gimage<uint>, public ::internal::texture_1D {};
struct uimage2D: public ::internal::gimage<uint>, public ::internal::texture_2D {};
struct uimage3D: public ::internal::gimage<uint>, public ::internal::texture_3D {};
struct uimageCube: public ::internal::gimage<uint>, public ::internal::texture_Cube {};
struct uimage2DRect: public ::internal::gimage<uint>, public ::internal::texture_2DRect {};
struct uimage1DArray: public ::internal::gimage<uint>, public ::internal::texture_1DArray {};
struct uimage2DArray: public ::internal::gimage<uint>, public ::internal::texture_2DArray {};
struct uimageCubeArray: public ::internal::gimage<uint>, public ::internal::texture_CubeArray {};
struct uimageBuffer: public ::internal::gimage<uint>, public ::internal::texture_Buffer {};
struct sampler1DShadow: public ::internal::gshadow, public ::internal::texture_1D {};
struct sampler2DShadow: public ::internal::gshadow, public ::internal::texture_2D {};
struct sampler3DShadow: public ::internal::gshadow, public ::internal::texture_3D {};
struct samplerCubeShadow: public ::internal::gshadow, public ::internal::texture_Cube {};
struct sampler2DRectShadow: public ::internal::gshadow, public ::internal::texture_2DRect {};
struct sampler1DArrayShadow: public ::internal::gshadow, public ::internal::texture_1DArray {};
struct sampler2DArrayShadow: public ::internal::gshadow, public ::internal::texture_2DArray {};
struct samplerCubeArrayShadow: public ::internal::gshadow, public ::internal::texture_CubeArray {};
// clang-format on
#endif

// clang-format off
template<typename GImage> requires(::internal::texelFetchAccessable<GImage> && ::internal::is_image<GImage>)
GImage::itexcoord imageSize(const GImage &);
template<typename GImage> requires(::internal::texelFetchAccessable<GImage> && ::internal::is_image<GImage>)
::internal::vec<typename GImage::value_type, 4> imageLoad(const GImage &, typename GImage::itexcoord);
template<typename GImage> requires(::internal::texelFetchAccessable<GImage> && ::internal::is_image<GImage>)
void imageStore(const GImage &, typename GImage::itexcoord, ::internal::vec<typename GImage::value_type, 4>);

template<typename GSampler> requires(::internal::texelFetchAccessable<GSampler> && ::internal::is_sampler<GSampler>)
GSampler::itexcoord textureSize(const GSampler &, int LOD = 0);
template<typename GSampler> requires(::internal::texelFetchAccessable<GSampler> && ::internal::is_sampler<GSampler>)
int textureQueryLevels(const GSampler &);
template<typename GSampler> requires(::internal::textureAccessable<GSampler> && ::internal::is_sampler<GSampler>)
::internal::vec<typename GSampler::value_type, 4> texture(const GSampler &, typename GSampler::texcoord, float bias​ = 0);
template<typename GSampler> requires(::internal::textureAccessable<GSampler> && ::internal::is_sampler<GSampler>)
::internal::vec<typename GSampler::value_type, 4> textureLod(const GSampler &, typename GSampler::texcoord, float);
template<typename GSampler> requires(::internal::textureAccessable<GSampler> && ::internal::is_sampler<GSampler> && ::internal::texelFetchAccessable<GSampler>)
::internal::vec<typename GSampler::value_type, 4> textureOffset(const GSampler &, typename GSampler::texcoord, typename GSampler::itexcoord, float bias​ = 0);

template<typename GShadow> requires(::internal::texelFetchAccessable<GShadow> && ::internal::is_shadow<GShadow>)
GShadow::itexcoord textureSize(const GShadow &, int LOD = 0);
template<typename GShadow> requires(::internal::texelFetchAccessable<GShadow> && ::internal::is_shadow<GShadow>)
int textureQueryLevels(const GShadow &);
template<typename GShadow> requires(::internal::textureAccessable<GShadow> && ::internal::is_shadow<GShadow>)
GShadow::value_type texture(const GShadow &, typename GShadow::texcoord, float bias​ = 0);
template<typename GShadow> requires(::internal::textureAccessable<GShadow> && ::internal::is_shadow<GShadow>)
GShadow::value_type textureLod(const GShadow &, typename GShadow::texcoord, float);
template<typename GShadow> requires(::internal::textureAccessable<GShadow> && ::internal::is_shadow<GShadow> && ::internal::texelFetchAccessable<GShadow>)
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
::internal::vec<genType, N> operator+(const ::internal::vec<genType, N> &, const ::internal::vec<genType, N> &);
template <typename genType, uint N>
::internal::vec<genType, N> operator-(const ::internal::vec<genType, N> &, const ::internal::vec<genType, N> &);
template <typename genType, uint N>
::internal::vec<genType, N> operator*(const ::internal::vec<genType, N> &, const ::internal::vec<genType, N> &);
template <typename genType, uint N>
::internal::vec<genType, N> operator/(const ::internal::vec<genType, N> &, const ::internal::vec<genType, N> &);
template <typename genType, uint N>
::internal::vec<genType, N> operator*(const genType &, const ::internal::vec<genType, N> &);
template <typename genType, uint N>
::internal::vec<genType, N> operator*(const ::internal::vec<genType, N> &, const genType &);
template <typename genType, uint N>
::internal::vec<genType, N> operator/(const genType &, const ::internal::vec<genType, N> &);
template <typename genType, uint N>
::internal::vec<genType, N> operator/(const ::internal::vec<genType, N> &, const genType &);

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

// clang-format off
template<typename genType, uint N> ::internal::vec<genType, N> floor(const ::internal::vec<genType, N> &);
template<typename genType, uint N> ::internal::vec<genType, N> fract(const ::internal::vec<genType, N> &);
template<typename genType, uint N> ::internal::vec<genType, N> mod(const ::internal::vec<genType, N> &, const ::internal::vec<genType, N> &);
template<typename genType, uint N> ::internal::vec<genType, N> pow(const ::internal::vec<genType, N> &, const ::internal::vec<genType, N> &);
template<typename genType, uint N> ::internal::vec<genType, N> min(const ::internal::vec<genType, N> &, const ::internal::vec<genType, N> &);
template<typename genType, uint N> ::internal::vec<genType, N> max(const ::internal::vec<genType, N> &, const ::internal::vec<genType, N> &);
template<typename genType, uint N> ::internal::vec<genType, N> step(const ::internal::vec<genType, N> &, const ::internal::vec<genType, N> &);
template<typename genType, uint N> ::internal::vec<genType, N> mix(const ::internal::vec<genType, N> &, const ::internal::vec<genType, N> &, const ::internal::vec<genType, N> &);
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
template<typename genType, uint N> ::internal::vec<float, N> normalize(const ::internal::vec<genType, N>&);

template<typename genType, uint N> float length(const ::internal::vec<genType, N>&);
template<typename genType, uint N> float dot(const ::internal::vec<genType, N>&, const ::internal::vec<genType, N>&);
template<typename genType, uint N> float distance(const ::internal::vec<genType, N>&, const ::internal::vec<genType, N>&);
// clang-format off

vec3 cross(vec3, vec3);
vec3 reflect(vec3 I, vec3 N);
vec3 refract(vec3 I, vec3 N, float eta);

#endif
#endif