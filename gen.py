class struct:
    def __init__(self, name) -> None:
        self.name = name
        self.items = []
        self.frees = []
    def add(self, item):
        self.items.append(item)
    def put(self, item):
        self.frees.append(item)
    def __repr__(self) -> str:
        return f"struct {self.name} {{\n    "+"\n    ".join(self.items)+"\n};"+("\n"+("\n".join(self.frees)) if len(self.frees)>0 else "")

class xvecx(struct):
    def __init__(self, x: int, t: str) -> None:
        assert x in [2,3,4]
        prefix = {"int": "i", "float": ""}
        super().__init__(f"{prefix[t]}vec{x}")
        xyzw = ["x", "y", "z", "w"]
        rgba = ["r", "g", "b", "a"]
        stuv = ["s", "t", "u", "v"]
        for _ in range(x):
            self.add(f"{t} {xyzw[_]};")
            self.add(f"{t} {rgba[_]};")
            self.add(f"{t} {stuv[_]};")
        if x>=2:
            for i in range(x):
                for j in range(x):
                    self.add(f"{prefix[t]}vec{2}& {xyzw[i]}{xyzw[j]};")
                    self.add(f"{prefix[t]}vec{2}& {rgba[i]}{rgba[j]};")
                    self.add(f"{prefix[t]}vec{2}& {stuv[i]}{stuv[j]};")
        if x>=3:
            for i in range(x):
                for j in range(x):
                    for k in range(x):
                        self.add(f"{prefix[t]}vec{3}& {xyzw[i]}{xyzw[j]}{xyzw[k]};")
                        self.add(f"{prefix[t]}vec{3}& {rgba[i]}{rgba[j]}{rgba[k]};")
                        self.add(f"{prefix[t]}vec{3}& {stuv[i]}{stuv[j]}{stuv[k]};")
        if x>=4:
            for i in range(x):
                for j in range(x):
                    for k in range(x):
                        for l in range(x):
                            self.add(f"{prefix[t]}vec{4}& {xyzw[i]}{xyzw[j]}{xyzw[k]}{xyzw[l]};")
                            self.add(f"{prefix[t]}vec{4}& {rgba[i]}{rgba[j]}{rgba[k]}{rgba[l]};")
                            self.add(f"{prefix[t]}vec{4}& {stuv[i]}{stuv[j]}{stuv[k]}{stuv[l]};")
        # construct
        self.add(f"{prefix[t]}vec{x}();")
        self.add(f"explicit {prefix[t]}vec{x}({t});")
        self.add(f"{prefix[t]}vec{x}({', '.join([t]*x)});")
        if t == "float":
            self.add(f"{prefix[t]}vec{x}(const ivec{x}&);")
            self.add(f"{prefix[t]}vec{x}& operator=(const ivec{x}&);")
        if x == 3:
            self.add(f"{prefix[t]}vec{x}({prefix[t]}vec{x-1}, {t});")
            self.add(f"{prefix[t]}vec{x}({t}, {prefix[t]}vec{x-1});")
        if x == 4:
            self.add(f"{prefix[t]}vec{x}({prefix[t]}vec{x-1}, {t});")
            self.add(f"{prefix[t]}vec{x}({t}, {prefix[t]}vec{x-1});")
            self.add(f"{prefix[t]}vec{x}({prefix[t]}vec{x-2}, {t}, {t});")
            self.add(f"{prefix[t]}vec{x}({t}, {prefix[t]}vec{x-2}, {t});")
            self.add(f"{prefix[t]}vec{x}({t}, {t}, {prefix[t]}vec{x-2});")
        # operator[]
        self.add(f"{t} operator[](const int);")
        # operator=
        self.add(f"{prefix[t]}vec{x}& operator=(const {prefix[t]}vec{x}&);")
        # operator+-*/
        self.put(f"{prefix[t]}vec{x} operator-(const {prefix[t]}vec{x}&);")

        self.put(f"{prefix[t]}vec{x} operator+(const {prefix[t]}vec{x}&, const {prefix[t]}vec{x}&);")
        self.put(f"{prefix[t]}vec{x} operator-(const {prefix[t]}vec{x}&, const {prefix[t]}vec{x}&);")
        self.put(f"{prefix[t]}vec{x} operator*(const {prefix[t]}vec{x}&, const {prefix[t]}vec{x}&);")
        self.put(f"{prefix[t]}vec{x} operator/(const {prefix[t]}vec{x}&, const {prefix[t]}vec{x}&);")
        self.put(f"{prefix[t]}vec{x} operator+(const float&, const {prefix[t]}vec{x}&);")
        self.put(f"{prefix[t]}vec{x} operator-(const float&, const {prefix[t]}vec{x}&);")
        self.put(f"{prefix[t]}vec{x} operator*(const float&, const {prefix[t]}vec{x}&);")
        self.put(f"{prefix[t]}vec{x} operator/(const float&, const {prefix[t]}vec{x}&);")
        self.put(f"{prefix[t]}vec{x} operator+(const double&, const {prefix[t]}vec{x}&);")
        self.put(f"{prefix[t]}vec{x} operator-(const double&, const {prefix[t]}vec{x}&);")
        self.put(f"{prefix[t]}vec{x} operator*(const double&, const {prefix[t]}vec{x}&);")
        self.put(f"{prefix[t]}vec{x} operator/(const double&, const {prefix[t]}vec{x}&);")
        self.put(f"{prefix[t]}vec{x} operator+(const int&  , const {prefix[t]}vec{x}&);")
        self.put(f"{prefix[t]}vec{x} operator-(const int&  , const {prefix[t]}vec{x}&);")
        self.put(f"{prefix[t]}vec{x} operator*(const int&  , const {prefix[t]}vec{x}&);")
        self.put(f"{prefix[t]}vec{x} operator/(const int&  , const {prefix[t]}vec{x}&);")
        self.put(f"{prefix[t]}vec{x} operator+(const {prefix[t]}vec{x}&, const float&);")
        self.put(f"{prefix[t]}vec{x} operator-(const {prefix[t]}vec{x}&, const float&);")
        self.put(f"{prefix[t]}vec{x} operator*(const {prefix[t]}vec{x}&, const float&);")
        self.put(f"{prefix[t]}vec{x} operator/(const {prefix[t]}vec{x}&, const float&);")
        self.put(f"{prefix[t]}vec{x} operator+(const {prefix[t]}vec{x}&, const double&);")
        self.put(f"{prefix[t]}vec{x} operator-(const {prefix[t]}vec{x}&, const double&);")
        self.put(f"{prefix[t]}vec{x} operator*(const {prefix[t]}vec{x}&, const double&);")
        self.put(f"{prefix[t]}vec{x} operator/(const {prefix[t]}vec{x}&, const double&);")
        self.put(f"{prefix[t]}vec{x} operator+(const {prefix[t]}vec{x}&, const int&  );")
        self.put(f"{prefix[t]}vec{x} operator-(const {prefix[t]}vec{x}&, const int&  );")
        self.put(f"{prefix[t]}vec{x} operator*(const {prefix[t]}vec{x}&, const int&  );")
        self.put(f"{prefix[t]}vec{x} operator/(const {prefix[t]}vec{x}&, const int&  );")
        # operator+-*/=
        self.add(f"template<typename T> {prefix[t]}vec{x}& operator+=(const T&);")
        self.add(f"template<typename T> {prefix[t]}vec{x}& operator-=(const T&);")
        self.add(f"template<typename T> {prefix[t]}vec{x}& operator*=(const T&);")
        self.add(f"template<typename T> {prefix[t]}vec{x}& operator/=(const T&);")
        # refract
        self.put(f"{prefix[t]}vec{x} refract(const {prefix[t]}vec{x}&, const {prefix[t]}vec{x}&, float);")
        # dFdx & dFdy
        self.put(f"{prefix[t]}vec{x} dFdx(const {prefix[t]}vec{x}&);")
        self.put(f"{prefix[t]}vec{x} dFdy(const {prefix[t]}vec{x}&);")
        # floor & fract
        if t=="float":
            self.put(f"ivec{x} floor(const {prefix[t]}vec{x}&);")
            self.put(f"vec{x} fract(const {prefix[t]}vec{x}&);")
        # exp2
        self.put(f"{prefix[t]}vec{x} exp2(const {prefix[t]}vec{x}&);")
        # clamp
        self.put(f"{prefix[t]}vec{x} clamp(const {prefix[t]}vec{x}&, const {prefix[t]}vec{x}&, const {prefix[t]}vec{x}&);")
        self.put(f"{prefix[t]}vec{x} clamp(const {prefix[t]}vec{x}&, const float&, const float&);")
        # sin & cos
        self.put(f"{prefix[t]}vec{x} sin(const {prefix[t]}vec{x}&);")
        self.put(f"{prefix[t]}vec{x} cos(const {prefix[t]}vec{x}&);")

import sys
print("#ifdef __cplusplus")
print(xvecx(2, "float"), file=sys.stderr)
print(xvecx(2, "float"))
print(xvecx(3, "float"))
print(xvecx(4, "float"))
print(xvecx(2, "int"))
print(xvecx(3, "int"))
print(xvecx(4, "int"))
print('''
#define uniform
#define in
#define out
#define inout
struct sampler2D {};
struct sampler2DShadow {};
struct mat4 {};
int floor(float);
float fract(float);
template<typename T> T pow(T, T);
float mod(float, float);
vec4 operator*(mat4, vec4);
template<typename T> T min(T, T);
template<typename T> T max(T, T);
template<typename T> T step(T, T);
template<typename T, typename V> T mix(T, T, V);
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
vec4 texture2D(sampler2DShadow, vec2);
vec4 texture2DLod(sampler2D, vec2, int);
vec4 texture2DLod(sampler2DShadow, vec2, int);
vec4 shadow2DLod(sampler2D, vec3, int);
vec4 shadow2DLod(sampler2DShadow, vec3, int);
vec4 gl_FragData[8];
vec4 gl_FragColor;
vec4 gl_Position;
#endif
''')