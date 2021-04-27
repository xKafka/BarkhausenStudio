add_subdirectory(measurement_device_core_interface)
add_subdirectory(usbtmc)
add_subdirectory(usbtmc_device_finder)

find_package(Qt5 COMPONENTS Core Widgets)

file(GLOB_RECURSE files "src/*.cpp")

set(CMAKE_AUTOMOC ON)

set(ui_headers include/measurement_device.h include/measurement_device_worker.h)

qt5_wrap_cpp(ui_headers_moc ${ui_headers})

add_library(measurement_device STATIC ${files} ${ui_headers_moc})

target_include_directories(measurement_device PRIVATE src PUBLIC include)

target_link_libraries(measurement_device
                                            Qt5::Core
                                            Qt5::Widgets
                                            measurement_device_standard_interface
                                            usbtmc_python
                                            settings_storage
                                            usbtmc_device_finder
                                            utils
                    )