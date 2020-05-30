cmake_minimum_required(VERSION 3.17)

project(blueprint) # Change me!

set(CMAKE_MODULE_PATH ${CMAKE_MODULE_PATH} "${CMAKE_SOURCE_DIR}/cmake")
find_package(SDL2 REQUIRED)
include_directories(${SDL2_INCLUDE_DIRS})


include_directories(include)

file(GLOB SOURCES "src/*.cpp")
add_executable(main ${SOURCES})
target_link_libraries(main ${SDL2_LIBRARIES})
