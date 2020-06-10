cmake_minimum_required(VERSION 3.10)

project(Engine VERSION 0.1 DESCRIPTION "Game Engine")

add_library(aloe STATIC
            src/aloe.cpp
            src/app.cpp)

set_target_properties(
        aloe 
        PROPERTIES
        VERSION ${PROJECT_VERSION}
        LIBRARY_OUTPUT_DIRECTORY bin)

target_include_directories(aloe PUBLIC include)

