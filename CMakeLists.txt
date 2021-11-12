# first try of CMake support...
cmake_minimum_required(VERSION 3.16)

project(td VERSION 0.1.0 LANGUAGES CXX)

# C++ Standard
set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Compiler
option(WIN_CLANG "Use clang in windows" ON)

# Targets
add_executable(td
	src/Date.hpp
	src/Date.cpp
	src/TaskStatus.hpp
	src/Task.hpp
	src/Task.cpp
	src/main.cpp)

if (CMAKE_SYSTEM_NAME STREQUAL "Windows")
	if (WIN_CLANG)
    target_compile_options(td PRIVATE -Wall -Wextra -Wpedantic)
	else()
    target_compile_options(td PRIVATE /W4)
	endif()
elseif (CMAKE_SYSTEM_NAME STREQUAL "Linux")
    target_compile_options(td PRIVATE -Wall -Wextra -Wpedantic)
endif ()
