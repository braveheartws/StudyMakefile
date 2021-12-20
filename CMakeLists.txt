cmake_minimum_required(VERSION 3.20)
project(StudyMakefile)

set(CMAKE_CXX_STANDARD 14)

add_executable(StudyMakefile main.cpp foo.cpp include/foo.h bar.cpp include/bar.h)
