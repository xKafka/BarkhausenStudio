find_package(Qt5 COMPONENTS Widgets Core REQUIRED)

set(CMAKE_AUTOUIC_SEARCH_PATHS ui)

set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)
set(CMAKE_AUTOUIC ON)

add_definitions(${QT_DEFINITIONS})

file(GLOB_RECURSE sources "src/*.cpp")
file(GLOB_RECURSE headers "include/*.h")
file(GLOB_RECURSE forms "ui/.ui")

qt5_wrap_cpp(qt_moc_headers ${headers})
qt5_wrap_ui(qt_uic_forms ${forms})

add_library(measurement_settings_window STATIC ${sources} ${qt_moc_headers} ${qt_uic_forms})

target_include_directories(measurement_settings_window PRIVATE src PUBLIC include)

target_link_libraries(measurement_settings_window Qt5::Widgets Qt5::Core meas_device_settings charts meas_settings)

