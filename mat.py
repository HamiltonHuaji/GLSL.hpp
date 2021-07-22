import pystache

template_mat = '''
{{comment}}
struct mat<{{genType}}, {{N}}, {{M}}> : std::array<vec<{{genType}}, {{M}}>, {{N}}>{
    // constructor
    mat<{{genType}}, {{N}}, {{M}}>();
    mat<{{genType}}, {{N}}, {{M}}>(const {{genType}}&);
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
    mat<{genType}, {N}, {M}>({", ".join([f"const {genType}&"]*(N*M))});
    mat<{genType}, {N}, {M}>({", ".join([f"const vec<{genType}, M>&"]*N)});
    template<uint NN, uint MM>
    mat<{genType}, {N}, {M}>(const mat<{genType}, NN, MM>);''',
        })}
