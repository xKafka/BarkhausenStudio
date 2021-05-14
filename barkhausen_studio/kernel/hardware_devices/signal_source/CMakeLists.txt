add_subdirectory(signal_source_core_interface)

find_package(Qt5 COMPONENTS Core Widgets)

file(GLOB_RECURSE files "src/*.cpp")

set(CMAKE_AUTOMOC ON)

set(ui_headers include/signal_source_core.h)

qt5_wrap_cpp(ui_headers_moc ${ui_headers})

add_library(signal_source STATIC ${files} ${ui_headers_moc})

target_include_directories(signal_source PRIVATE src PUBLIC include)

target_link_libraries(signal_source
                                    Qt5::Core
                                    Qt5::Widgets
                                    signal_source_standard_interface
                                    usbtmc_python
                                    settings_storage
                                    usbtmc_device_finder
                                    utils
                                    )