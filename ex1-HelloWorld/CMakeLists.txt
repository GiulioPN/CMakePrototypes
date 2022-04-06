cmake_minimum_required(VERSION 3.9.1)

project(
    HelloWorldProject
    VERSION 1.0
    DESCRIPTION "If you make an 'Hello World' you'll make everything!"
    LANGUAGES CXX)

# set c++ standard
set(CMAKE_CXX_STANDARD 14)

set(CMAKE_CXX_STANDARD_REQUIRED True)

# generate binary file inside bin folder
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)

add_executable(helloworld_exe main.cpp)