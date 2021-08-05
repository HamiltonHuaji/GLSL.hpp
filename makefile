.PHONY : all clean

all : glsl.hpp

glsl.hpp : gen.py mat.py tex.py vec.py requirements.txt template.hpp
	./gen.py

clean :
	rm glsl.hpp
	rm -fr __pycache__/