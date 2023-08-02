cmake_minimum_required(VERSION 3.27.0)

project(cmath CXX)

#point
set(POINT_LIB "include/point.h" "src/point.cc")
add_library(point ${POINT_LIB})
target_include_directories(point PUBLIC "include")
target_link_libraries(point)

#test
# add_executable(test test.cpp)
# target_include_directories(test PUBLIC include)
# target_link_libraries(test point)