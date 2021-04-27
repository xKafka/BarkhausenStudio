find_package(Qt5 COMPONENTS Core Widgets Charts)

set(CMAKE_AUTOUIC_SEARCH_PATHS ui)

file(GLOB_RECURSE sources "src/*.cpp")
file(GLOB_RECURSE headers "include/*.h")
file(GLOB_RECURSE ui_forms "ui/*.ui")

set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)
set(CMAKE_AUTOUIC ON)

qt5_wrap_cpp(ui_headers_moc ${headers})
qt5_wrap_ui(ui_forms_headers ${ui_forms})

add_library(chart_base_module STATIC ${sources} ${ui_headers_moc} ${ui_forms_headers})

target_include_directories(chart_base_module PRIVATE src PUBLIC include)

target_link_libraries(chart_base_module Qt5::Core Qt5::Widgets Qt5::Charts settings)