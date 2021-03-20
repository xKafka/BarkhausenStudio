find_package(Qt5 COMPONENTS Widgets Core Charts Multimedia REQUIRED)

set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)

add_definitions(${QT_DEFINITIONS})


set(ui_sources src/currentchart.cpp)
set(ui_forms src/currentchart.ui)
set(ui_headers include/currentchart.h)

qt5_wrap_cpp(ui_headers_moc ${ui_headers})
qt5_wrap_ui(ui_forms_headers ${ui_forms})

add_library(current_chart STATIC
        ${ui_sources}
        ${ui_headers_moc}
        ${ui_forms_headers}
        )

target_include_directories(current_chart PRIVATE src PUBLIC include)

target_link_libraries(current_chart Qt5::Widgets Qt5::Core Qt5::Charts utility)
