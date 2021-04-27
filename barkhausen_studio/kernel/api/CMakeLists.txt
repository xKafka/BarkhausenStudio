find_package(Qt5 COMPONENTS Core Widgets)

set(CMAKE_AUTOMOC ON)

file(GLOB_RECURSE files "src/*.cpp")

set(ui_headers include/barkhausen_studio.h)

qt5_wrap_cpp(ui_headers_moc ${ui_headers})

add_executable(api ${files} ${ui_headers_moc})

target_include_directories(api PRIVATE src PUBLIC include)

target_link_libraries(api api_core main_window)