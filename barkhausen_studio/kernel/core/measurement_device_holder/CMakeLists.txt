find_package(Qt5 COMPONENTS Core Widgets)

file(GLOB_RECURSE sources "src/*.cpp")
file(GLOB_RECURSE headers "include/*.h")

set(CMAKE_AUTOMOC ON)

qt5_wrap_cpp(qt_moc_headers ${headers})

add_library(measurement_device_holder_module STATIC ${sources} ${qt_moc_headers})

target_include_directories(measurement_device_holder_module PRIVATE src PUBLIC include)

target_link_libraries(measurement_device_holder_module Qt5::Core Qt5::Widgets data_buffer_module command_creator json)
