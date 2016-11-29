# Specify the minimum CMAKE version required
cmake_minimum_required(VERSION 2.8)

# Your project's name
project(OGL)

# Make your header file accessible to the compiler
include_directories(./include)

# Set the source files for the project
set (SRC src/main.cpp)

# Use GLFW
set(GLFW_BUILD_DOCS OFF CACHE BOOL "" FORCE)
set(GLFW_BUILD_TESTS OFF CACHE BOOL "" FORCE)
set(GLFW_BUILD_EXAMPLES OFF CACHE BOOL "" FORCE)
add_subdirectory(dependencies/glfw)

# Use GLAD Extension Loader
add_library(glad dependencies/glad/glad.c)
include_directories(dependencies/glad/include)

# Define the executable
add_executable(OGL ${SRC})
target_link_libraries(OGL glfw glad)
