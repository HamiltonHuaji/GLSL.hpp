import pystache

template_mat = '''
{{comment}}
struct mat<{{genType}}, {{N}}, {{M}}> : std::array<vec<{{genType}}, {{M}}>, {{N}}>{
    // constructor
    mat<{{genType}}, {{N}}, {{M}}>();
    mat<{{genType}}, {{N}}, {{M}}>({{genType}});
{{{constructors}}}
{{{submat}}}
};
'''


class mat:
    def __init__(self, genType, N, M) -> None:
        self.content = {"content": pystache.render(template_mat, {
            "comment": "// GLSL matrix. Lack of irregular constructor support.",
            "genType": genType,
            "N":N,
            "M":M,
            "constructors": f'''\
    mat<{genType}, {N}, {M}>({", ".join([f"{genType}"]*(N*M))});
    mat<{genType}, {N}, {M}>({", ".join([f"vec<{genType}, M>"]*N)});
    template<uint NN, uint MM>
    mat<{genType}, {N}, {M}>(mat<{genType}, NN, MM>);''',
        })}
