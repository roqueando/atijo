cmake_minimum_required(VERSION 3.15)
project(atijo)

add_executable(${PROJECT_NAME} src/main.cc)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_subdirectory(external/httplib)
add_subdirectory(external/rtc)

find_package(Boost)
if(Boost_FOUND)
  include_directories(${Boost_INCLUDE_DIRS})
endif()

target_include_directories(${PROJECT_NAME}
    PUBLIC external/httplib
    PUBLIC external/rtc/include
)

target_link_directories(${PROJECT_NAME}
    PRIVATE external/httplib
    PRIVATE external/rtc/src
)

target_link_libraries(${PROJECT_NAME} httplib rtc)