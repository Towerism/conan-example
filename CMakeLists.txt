cmake_minimum_required(VERSION 3.0.0)
project(MD5Encrypter)


set(CMAKE_EXPORT_COMPILE_COMMANDS 1)

add_definitions("-std=c++17")
add_definitions("-DWITH_GMOCK")

set(SRC_DIR "${PROJECT_SOURCE_DIR}/src")
set(TEST_DIR "${PROJECT_SOURCE_DIR}/test")
set(LIBRARIES_DIR libs)

set(LIBRARIES GenerateMD5)

include(${CMAKE_BINARY_DIR}/conanbuildinfo.cmake)
conan_basic_setup()


add_executable(md5 ${SRC_DIR}/md5.cpp)

add_executable(md5_test ${TEST_DIR}/md5_test.cpp)

include_directories(SRC_DIR)

foreach(LIBRARY ${LIBRARIES})
    add_subdirectory("${LIBRARIES_DIR}/${LIBRARY}")
endforeach(LIBRARY)

target_link_libraries(md5 ${LIBRARIES} ${CONAN_LIBS})

target_link_libraries(md5_test ${LIBRARIES} ${CONAN_LIBS})
add_test(NAME test COMMAND md5_test)
enable_testing()
