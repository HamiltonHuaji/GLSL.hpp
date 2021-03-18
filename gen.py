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
        self.add(f"static constexpr int dim={x};")
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
            self.add(f"explicit {prefix[t]}vec{x}({prefix[t]}vec{x-1}, {t});")
            self.add(f"explicit {prefix[t]}vec{x}({t}, {prefix[t]}vec{x-1});")
        if x == 4:
            self.add(f"explicit {prefix[t]}vec{x}({prefix[t]}vec{x-1}, {t});")
            self.add(f"explicit {prefix[t]}vec{x}({t}, {prefix[t]}vec{x-1});")
            self.add(f"explicit {prefix[t]}vec{x}({prefix[t]}vec{x-2}, {t}, {t});")
            self.add(f"explicit {prefix[t]}vec{x}({t}, {prefix[t]}vec{x-2}, {t});")
            self.add(f"explicit {prefix[t]}vec{x}({t}, {t}, {prefix[t]}vec{x-2});")
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

import sys, pystache
with open("template.hpp", newline="\n", encoding="utf-8") as f:
    template = f.read()
def_xvecx = repr(xvecx(2, "float"))+repr(xvecx(3, "float"))+repr(xvecx(4, "float"))+repr(xvecx(2, "int"))+repr(xvecx(3, "int"))+repr(xvecx(4, "int"))
with open("glsl.hpp", "w", newline="\n", encoding="utf-8") as f:
    f.write(pystache.render(template, {'def_xvecx':def_xvecx}))