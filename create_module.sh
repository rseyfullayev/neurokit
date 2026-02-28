set -e


clang++ -std=c++23 src/nl/math/vec.cppm \
  --precompile \
  -o build/modules/nl.math.vec.pcm


clang++ -std=c++23 src/nl/math/vec.cpp \
  -fprebuilt-module-path=build/modules \
  -c -o build/obj/vec.o


clang++ -std=c++23 tests/index.cpp \
  build/obj/vec.o \
  -fprebuilt-module-path=build/modules \
  -o build/bin/app