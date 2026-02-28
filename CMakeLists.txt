cmake_minimum_required(VERSION 3.28)

project(VecProject)

set(CMAKE_CXX_STANDARD 23)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(main
    src/math/vec.cppm
    src/math/math.cppm
    src/math/mat.cppm
)