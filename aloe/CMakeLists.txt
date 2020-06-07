cmake_minimum_required(VERSION 3.10)

project(Aloe VERSION 0.1 DESCRIPTION "Game Engine")

add_library(aloe SHARED
            src/aloe.cpp)

set_target_properties(
        aloe 
        PROPERTIES
        VERSION ${PROJECT_VERSION}
        LIBRARY_OUTPUT_DIRECTORY bin)

target_include_directories(aloe PRIVATE include)

