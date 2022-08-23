add_executable(test_make_EN test_make_EN.cpp)
add_executable(test_make_EN_file test_make_EN_file.cpp)

target_link_libraries(test_make_EN language)
target_link_libraries(test_make_EN_file language)

add_test(NAME test_make_EN COMMAND test_make_EN)
add_test(NAME test_make_EN_file COMMAND test_make_EN_file)