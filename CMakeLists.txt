cmake_minimum_required(VERSION 3.10)
project(PoissonsoftTestTask)

set(CMAKE_CXX_STANDARD 17)

include_directories(include)

add_executable(PoissonsoftTestTask
        src/main.cpp
        src/Triangle.cpp
        src/IntersectionChecker2D.cpp
        src/TestRunner.cpp
)
