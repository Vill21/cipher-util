cmake_minimum_required(VERSION 3.5)

project(cipher_util LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 11)

add_executable(cipher_util main.cpp)

add_subdirectory(language)
add_subdirectory(cesar)

target_link_libraries(cipher_util cesar)