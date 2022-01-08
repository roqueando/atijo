cmake_minimum_required(VERSION 3.15)
project(atijo)

add_subdirectory(deps/Crow)
find_package(Boost 1.76.0 REQUIRED)

add_executable(atijo src/main.cc)

target_include_directories(atijo
                           PRIVATE ${CMAKE_CURRENT_SOURCE_DIR}
                                   ${CMAKE_CURRENT_SOURCE_DIR}/deps)