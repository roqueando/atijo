cmake_minimum_required(VERSION 3.15)
project(atijo)

add_executable(${PROJECT_NAME} src/main.cc)

set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_subdirectory(external/crow)

find_package(Boost)
if(Boost_FOUND)
  include_directories(${Boost_INCLUDE_DIRS})
endif()

target_include_directories(${PROJECT_NAME}
)

target_link_directories(${PROJECT_NAME}
    PRIVATE external/evpp
    PRIVATE external/glog/src
    PRIVATE external/event
)

target_link_libraries(${PROJECT_NAME} evpp)