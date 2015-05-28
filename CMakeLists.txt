cmake_minimum_required(VERSION 3.2)
project(unibroker)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp)
add_executable(unibroker ${SOURCE_FILES} ServerApplication.cpp ServerApplication.h)

message(Project settings: ${CMAKE_BUILD_TYPE})

if (${CMAKE_BUILD_TYPE} MATCHES Debug)
    set(LIB_ENDING d)
endif()

target_link_libraries(unibroker PocoFoundation${LIB_ENDING} PocoUtil${LIB_ENDING})

add_subdirectory(protocols/mqtt)
