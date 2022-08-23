cmake_minimum_required(VERSION 3.5)

project(cipher_util LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 11)
set(BOOST_ROOT "" CACHE PATH "path to Boost_ROOT directory and its libs")

add_executable(cipher_util main.cpp)

add_subdirectory(language)
add_subdirectory(cesar)
add_subdirectory(test)

find_package(Boost 1.70.0 REQUIRED COMPONENTS program_options)
if (Boost_FOUND)
    include_directories(${Boost_INCLUDE_DIR})
    target_link_libraries(cipher_util ${Boost_LIBRARIES})
endif()

target_link_libraries(cipher_util cesar)
