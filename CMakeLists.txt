cmake_minimum_required(VERSION 3.27.0)

project(cmath CXX)

include_directories(include)

set(MATH_POINT include/point.cc)

add_library(point ${MATH_POINT})