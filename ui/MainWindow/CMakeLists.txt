find_package(Qt5 COMPONENTS Widgets SerialPort Core REQUIRED)

set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)

add_definitions(${QT_DEFINITIONS})

file(GLOB_RECURSE sources "src/*.cpp")
file(GLOB_RECURSE headers "include/*.h")

set(ui_forms src/mainwindow.ui src/acqsettingswidget.ui)

qt5_wrap_cpp(ui_headers_moc ${headers})
qt5_wrap_ui(ui_forms_headers ${ui_forms})

add_library(main_window STATIC
        ${sources}
        ${ui_headers_moc}
        ${ui_forms_headers}
        )

target_include_directories(main_window PRIVATE src PUBLIC include)

target_link_libraries(main_window current_chart Qt5::Widgets Qt5::Core utility)
