cmake_minimum_required(VERSION 3.5)

project(cipher_util LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 11)
set(BOOST_ROOT "${CMAKE_SOURCE_DIR}/third_party/boost_1_70_0")
# or set(CMAKE_INCLUDE_PATH ${CMAKE_INCLUDE_PATH} "${CMAKE_SOURCE_DIR}/third_party/")

add_executable(cipher_util main.cpp)

add_subdirectory(language)
add_subdirectory(cesar)

find_package(Boost 1.70.0 REQUIRED COMPONENTS program_options)
if (Boost_FOUND)
    include_directories(${Boost_INCLUDE_DIR})
    target_link_libraries(cipher_util ${Boost_LIBRARIES})
endif()

target_link_libraries(cipher_util cesar)
