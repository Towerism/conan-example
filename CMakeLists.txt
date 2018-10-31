cmake_minimum_required(VERSION 2.8.12)
project(MD5Encrypter)
set(CMAKE_EXPORT_COMPILE_COMMANDS 1)

add_definitions("-std=c++17")
add_definitions("-DWITH_GMOCK")

include(${CMAKE_BINARY_DIR}/conanbuildinfo.cmake)
conan_basic_setup()

add_library(generate_md5 generate_md5.cpp)

add_executable(md5 md5.cpp)
target_link_libraries(md5 generate_md5 ${CONAN_LIBS})

add_executable(md5_test md5_test.cpp)
target_link_libraries(md5_test generate_md5 ${CONAN_LIBS})
add_test(NAME test COMMAND md5_test)
enable_testing()
