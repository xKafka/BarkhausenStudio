find_package(Qt5 COMPONENTS Core)

add_library(ini INTERFACE)

target_include_directories(ini INTERFACE include)

target_link_libraries(ini INTERFACE Qt5::Core)