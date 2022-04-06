cmake_minimum_required(VERSION 3.15...3.21)

project(
    SeparateModules
    VERSION 0.1
    LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED True)

set(EXECUTABLE_OUTPUT_PATH ${CMAKE_BINARY_DIR}/bin)


# Function to prepend the subdirectory to source files in subdirectories
function(PREPEND var )
   set(listVar "")
   foreach(f ${${var}})
       list(APPEND listVar "${CMAKE_CURRENT_SOURCE_DIR}/${f}")
   endforeach(f)
   set(${var} "${listVar}" PARENT_SCOPE)
endfunction(PREPEND)


add_subdirectory(src)
add_subdirectory(include)

# Add the library SeparateModules as a target with src and include files
add_library(SeparateModules_lib STATIC ${SeparateModules_INC} ${SeparateModules_SRC})

target_include_directories(SeparateModules_lib PUBLIC include)
target_compile_features(SeparateModules_lib PUBLIC cxx_std_11)


add_executable(main_exe main.cpp)
target_link_libraries(main_exe PUBLIC SeparateModules_lib)
