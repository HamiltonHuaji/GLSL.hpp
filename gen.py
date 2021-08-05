#!/usr/bin/env python3

import pystache

from vec import vec
from mat import mat
from tex import make_texdecl

# lite = True
lite = False

with open("template.hpp", "r", newline="\n", encoding="utf-8") as f:
    with open("glsl.hpp", "w", newline="\n", encoding="utf-8") as g:
        g.write(pystache.render("".join(f.readlines()[1:]), {
            'vecdecl': [
                vec("bool", 2, lite=lite).content,
                vec("bool", 3, lite=lite).content,
                vec("bool", 4, lite=lite).content,

                vec("int", 2, lite=lite).content,
                vec("int", 3, lite=lite).content,
                vec("int", 4, lite=lite).content,

                vec("uint", 2, lite=lite).content,
                vec("uint", 3, lite=lite).content,
                vec("uint", 4, lite=lite).content,

                vec("float", 2, lite=lite).content,
                vec("float", 3, lite=lite).content,
                vec("float", 4, lite=lite).content,
            ] + ([
                vec("double", 2, lite=lite).content,
                vec("double", 3, lite=lite).content,
                vec("double", 4, lite=lite).content,
            ] if not lite else []),
            'matdecl': [
                mat("float", N, M).content
                for M in range(2, 5)
                for N in range(2, 5)
            ] + [
                mat("double", N, M).content
                for M in range(2, 5)
                for N in range(2, 5)
            ],
            'texdecl' : make_texdecl()
        }))
