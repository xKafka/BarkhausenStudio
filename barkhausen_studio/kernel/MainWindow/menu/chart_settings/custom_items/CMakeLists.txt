find_package(Qt5 COMPONENTS Widgets Core REQUIRED)

set(CMAKE_AUTOUIC_SEARCH_PATHS ui)

set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)
set(CMAKE_AUTOUIC ON)

add_definitions(${QT_DEFINITIONS})

file(GLOB_RECURSE headers "include/*.h")

qt5_wrap_cpp(qt_moc_headers ${headers})

add_library(custom_chart_items STATIC ${qt_moc_headers})

target_include_directories(custom_chart_items PRIVATE src PUBLIC include)

target_link_libraries(custom_chart_items Qt5::Widgets Qt5::Core settings charts)
