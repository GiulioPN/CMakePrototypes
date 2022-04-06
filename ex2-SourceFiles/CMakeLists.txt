cmake_minimum_required(VERSION 3.15...3.21)

project(
    SourceFiles
    VERSION 0.1
    LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED True)

set(EXECUTABLE_OUTPUT_PATH ${CMAKE_BINARY_DIR}/bin)
set(SOURCES main.cpp 
            src/Types.cpp
            src/OperationsTricks.cpp)

add_executable(main_exe ${SOURCES})
