find_package(Qt5 COMPONENTS Core)

add_library(command_creator INTERFACE)

target_include_directories(command_creator INTERFACE include)

target_link_libraries(command_creator INTERFACE Qt5::Core utils json)