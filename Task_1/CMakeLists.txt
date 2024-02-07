cmake_minimum_required(VERSION 3.27)
project(Task_1)

set(CMAKE_CXX_STANDARD 23)

option(float "use_float" OFF)

if(float)
    add_compile_definitions(USE_FLOAT_ARRAY)
    add_executable(Task_1_f main.cpp)
else ()
    add_executable(Task_1 main.cpp)
endif ()