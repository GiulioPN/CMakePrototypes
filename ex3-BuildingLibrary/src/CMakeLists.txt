# set the lib output
set(LIBRARY_OUTPUT_PATH  ${CMAKE_BINARY_DIR}/lib)

set(CORE_LIB_SOURCES 
    math/Types.cpp
    math/OperationsTricks.cpp)

add_library(coreLib SHARED ${CORE_LIB_SOURCES})