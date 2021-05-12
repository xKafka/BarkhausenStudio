find_package(Qt5 COMPONENTS Core Widgets)

file(GLOB_RECURSE sources "src/*.cpp")
file(GLOB_RECURSE headers "include/*.h")

set(CMAKE_AUTOMOC ON)

qt5_wrap_cpp(qt_moc_headers ${headers})

add_library(api_core STATIC ${sources} ${qt_moc_headers})

target_include_directories(api_core PRIVATE src PUBLIC include)

target_link_libraries(api_core Qt5::Core Qt5::Widgets
                                                        device_finder_module
                                                        data_buffer_module
                                                        data_creator_module
                                                        measurement_device_holder_module
                                                        device_finder_module
                                                        signal_source_holder
                    )
