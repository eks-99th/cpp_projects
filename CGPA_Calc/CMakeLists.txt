cmake_minimum_required(VERSION 3.20)
project(CGPA_CALCULATOR VERSION 1.0)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)


include_directories(${PROJECT_SOURCE_DIR}/include)

add_library(course STATIC
    src/course.cpp
    include/course.hpp
)

add_library(gpa_calc STATIC
    src/gpa_calc.cpp
    include/gpa_calc.hpp
)

add_executable(${PROJECT_NAME} src/main.cpp)

enable_testing()
add_subdirectory(tests)