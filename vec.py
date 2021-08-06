import pystache

template_vec = '''
{{comment}}
template <>
struct vec<{{genType}}, {{dim}}> : std::array<{{genType}}, {{dim}}>{
    static constexpr uint dim = {{dim}};
    {{#components}}
    {{genType}} {{component}};
    {{/components}}
    {{#swizzle}}
    {{qualifier}} vec<{{genType}}, {{odim}}> &{{ocomponent}};
    {{/swizzle}}
    
    // constructor
    vec<{{genType}}, {{dim}}>();
    vec<{{genType}}, {{dim}}>({{genType}});

    vec<{{genType}}, {{dim}}>(const vec<{{genType}}, {{dim}}>&);
    template<typename T>
    vec<{{genType}}, {{dim}}>(vec<T, {{dim}}>);
    vec<{{genType}}, {{dim}}>& operator=(vec<{{genType}}, {{dim}}>);
    template<typename T>
    vec<{{genType}}, {{dim}}>& operator=(vec<T, {{dim}}>);
{{{constructors}}}
};
'''

# 预计算整数的非平凡有序划分
def make_divide():
    divide = {
        2 : set(),
        3 : set(),
        4 : set(),
    }
    for i in range(4):
        for j in range(4):
            for k in range(4):
                l = []
                s = 0
                if i > 0:
                    s += i
                    l += [i]
                if j > 0:
                    s += j
                    l += [j]
                if k > 0:
                    s += k
                    l += [k]
                if (s >= 2) and (s <= 4) and len(l)>1:
                    divide[s].add(tuple(l))
    divide[2].add((1, 1))
    divide[3].add((1, 1, 1))
    divide[4].add((1, 1, 1, 1))
    return divide

divide = make_divide()

def make_constructor(dim, genType):
    return "\n".join([
        pystache.render("    template<typename T>\n    vec<{{genType}}, {{dim}}>({{{decl}}});", {
            "dim":dim,
            "genType":genType,
            "decl": ", ".join([f"{'T' if item==1 else f'vec<T, {item}>'}" for item in l])
        })
        for l in divide[dim]
    ])

class vec:
    @staticmethod
    def qualifier(*lst):
        if len(set(lst)) != len(lst):
            return "const"
        return "     "


    def __init__(self, genType, dim, **kwargs):
        assert isinstance(dim, int)
        assert (2 <= dim) and (dim <= 4)
        lite = False if "lite" not in kwargs else bool(kwargs["lite"])
        filler = {
            "comment": "// GLSL vector." if not lite else "// GLSL vector(lite version). May be lack of some definitions.",
            "genType": genType,
            "dim": dim,
            "components": [
                {"component": component}
                for component in ("xyzw"[:dim]+"rgba"[:dim]+"stuv"[:dim])
            ],
            "constructors": make_constructor(dim, genType)
        }
        if not lite:
            filler["swizzle"] = [
                {"odim": 2, "ocomponent": comp[i]+comp[j],
                    "qualifier": vec.qualifier(i, j)}
                for i in range(dim)
                for j in range(dim)
                for comp in ["xyzw", "rgba", "stuv"]
            ] + [
                {"odim": 3, "ocomponent": comp[i]+comp[j] +
                    comp[k], "qualifier": vec.qualifier(i, j, k)}
                for i in range(dim)
                for j in range(dim)
                for k in range(dim)
                for comp in ["xyzw", "rgba", "stuv"]
            ] + [
                {"odim": 4, "ocomponent": comp[i]+comp[j]+comp[k] +
                    comp[l], "qualifier": vec.qualifier(i, j, k, l)}
                for i in range(dim)
                for j in range(dim)
                for k in range(dim)
                for l in range(dim)
                for comp in ["xyzw", "rgba", "stuv"]
            ]
        else:
            filler["swizzle"] = [
                {"odim": 2, "ocomponent": comp[i]+comp[j],
                    "qualifier": vec.qualifier(i, j)}
                for i in range(dim)
                for j in range(dim)
                for comp in ["xyzw", "rgba", "stuv"]
            ]
            if dim >= 3:
                filler["swizzle"] += [
                    {"odim": 3, "ocomponent": comp[i]+comp[j] +
                     comp[k], "qualifier": vec.qualifier(i, j, k)}
                    for i in range(dim)
                    for j in range(dim)
                    for k in range(dim)
                    for comp in ["xyzw", "rgba", "stuv"]
                ]
            if dim >= 4:
                filler["swizzle"] += [
                    {"odim": 4, "ocomponent": comp[i]+comp[j]+comp[k] +
                     comp[l], "qualifier": vec.qualifier(i, j, k, l)}
                    for i in range(dim)
                    for j in range(dim)
                    for k in range(dim)
                    for l in range(dim)
                    for comp in ["xyzw", "rgba", "stuv"]
                ]
        self.content = {"content": pystache.render(template_vec, filler)}
