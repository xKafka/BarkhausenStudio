find_package(Qt5 COMPONENTS Core Widgets)

file(GLOB_RECURSE sources "src/*.cpp")
file(GLOB_RECURSE headers "include/*.h")

set(CMAKE_AUTOMOC ON)

qt5_wrap_cpp(qt_moc_headers ${headers})

add_library(signal_source_holder STATIC ${sources} ${qt_moc_headers})

target_include_directories(signal_source_holder PRIVATE src PUBLIC include)

target_link_libraries(signal_source_holder Qt5::Core Qt5::Widgets data_buffer_module json)
