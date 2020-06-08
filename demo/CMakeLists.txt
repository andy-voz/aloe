cmake_minimum_required(VERSION 3.10)

project(Demo VERSION 0.1 DESCRIPTION "Aloe Game Engine Demo")

add_executable(demo src/demo.cpp)

set_target_properties(
        demo 
        PROPERTIES
        RUNTIME_OUTPUT_DIRECTORY bin)

target_link_libraries(demo aloe)
