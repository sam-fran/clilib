cmake_minimum_required(VERSION 3.20)

project(clilib
    VERSION 0.1.0
    LANGUAGES CXX
)

add_library(clilib
    src/logger.cpp
)

add_subdirectory(examples)

target_include_directories(clilib
    PUBLIC
        ${CMAKE_CURRENT_SOURCE_DIR}/include
)

target_compile_features(clilib
    PUBLIC
        cxx_std_23
)
