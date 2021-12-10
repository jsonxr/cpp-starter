cmake_minimum_required(VERSION 3.22)

# set the project name and version
project(Tutorial VERSION 1.0)

# Compiler options...
# compile_flags.txt
set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED True)
include_directories("includes")

#---------------------------------------
# clang-tidy
#---------------------------------------
find_program( CLANG_TIDY_EXE NAMES "clang-tidy" DOC "Path to clang-tidy executable" )
if(NOT CLANG_TIDY_EXE) 
    message(STATUS "clang-tidy not found.")
else()
    message(STATUS "clang-tidy found: ${CLANG_TIDY_EXE}")
    #set(DO_CLANG_TIDY "${CLANG_TIDY_EXE}" "--config-file=${PROJECT_SOURCE_DIR}/.clang-tidy")
endif()
set(CMAKE_CXX_CLANG_TIDY clang-tidy --config-file=${PROJECT_SOURCE_DIR}/.clang-tidy)

# add the executable
add_executable(Tutorial tutorial.cpp)

configure_file("includes/TutorialConfig.h.txt" "../includes/TutorialConfig.h" @ONLY)

