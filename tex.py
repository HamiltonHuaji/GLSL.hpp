def make_texdecl():
    access = ["sampler", "image"]
    ttype = [
        "1D",
        "2D",
        "3D",
        "Cube",
        "2DRect",
        "1DArray",
        "2DArray",
        "CubeArray",
        "Buffer",
        "2DMS",
        "2DMSArray"
    ]
    vtype = ["float", "int", "uint"]
    vtpfx = ["", "i", "u"]
    return "\n".join([
        f"using {vtpfx[v]}{A}{T} = _g{A}<{vtype[v]}, texture_{T}>"
        for A in access
        for v in range(3)
        for T in ttype
    ])
