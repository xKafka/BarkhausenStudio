find_package(Qt5 COMPONENTS Core Widgets)

file(GLOB_RECURSE sources "src/*.cpp")
file(GLOB_RECURSE headers "include/*.h")

set(CMAKE_AUTOMOC ON)

qt5_wrap_cpp(qt_moc_headers ${headers})

add_library(device_finder_module STATIC ${sources} ${qt_moc_headers})

target_include_directories(device_finder_module PRIVATE src PUBLIC include)

target_link_libraries(device_finder_module Qt5::Core Qt5::Widgets usbtmc_device_finder command_creator json)
