# Specify the minimum CMAKE version required
cmake_minimum_required(VERSION 2.8)

# Your project's name
project(OGL)

# Make your header file accessible to the compiler
include_directories(include)

# Set the source files for the project
set (SRC src/main.cpp)

# Use GLFW
set(GLFW_BUILD_DOCS OFF CACHE BOOL "" FORCE)
set(GLFW_BUILD_TESTS OFF CACHE BOOL "" FORCE)
set(GLFW_BUILD_EXAMPLES OFF CACHE BOOL "" FORCE)
add_subdirectory(dependencies/glfw)

# Use GL3W Extension Loader
add_library(gl3w dependencies/gl3w/gl3w.c)
include_directories(dependencies/gl3w/include)

# Use GLM
include_directories(dependencies/glm/include)

# Define the executable
add_executable(OGL ${SRC})
target_link_libraries(OGL glfw gl3w)

# Enable C++ 11
set_target_properties(OGL PROPERTIES
    CXX_STANDARD 11
    CXX_STANDARD_REQUIRED ON
    CXX_EXTENSIONS OFF
)

set(CMAKE_BUILD_TYPE Debug)
