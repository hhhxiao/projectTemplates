cmake_minimum_required(VERSION 3.19)
project(cpp_with_gtest)

set(CMAKE_CXX_STANDARD 17)

aux_source_directory(src SRC_FILES)
add_subdirectory(${PROJECT_SOURCE_DIR}/3rd/gtest)

include_directories(${gtest_SOURCE_DIR}/include/ ${gtest_SOURCE_DIR})
add_executable(${PROJECT_NAME} ${SRC_FILES})

target_link_libraries(${PROJECT_NAME} gtest gtest_main)

