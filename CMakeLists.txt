cmake_minimum_required(VERSION 3.5)

project(Barkhausen_studio LANGUAGES CXX)

set(CMAKE_INCLUDE_CURRENT_DIR ON)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_subdirectory(barkhausen_studio)
add_subdirectory(external)
