cmake_minimum_required(VERSION 3.10)

project(Aloe-Demo VERSION 0.1 DESCRIPTION "Aloe Game Engine Demo")

add_library(aloe SHARED IMPORTED)
set_property(TARGET aloe PROPERTY IMPORTED_LOCATION "../aloe/bin/libaloe.so")

add_executable(demo src/demo.cpp)

set_target_properties(
        demo 
        PROPERTIES
        RUNTIME_OUTPUT_DIRECTORY bin)

target_include_directories(demo PRIVATE ../aloe/include)

target_link_libraries(demo aloe)
