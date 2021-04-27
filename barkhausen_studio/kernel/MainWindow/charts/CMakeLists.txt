add_subdirectory(chart_base)

find_package(Qt5 COMPONENTS Core Widgets Charts)

file(GLOB_RECURSE sources "src/*.cpp")
file(GLOB_RECURSE headers "include/*.h")

set(CMAKE_AUTOMOC ON)

qt5_wrap_cpp(ui_headers_moc ${headers})

add_library(charts STATIC ${sources} ${ui_headers_moc})

target_include_directories(charts PRIVATE src PUBLIC include)

target_link_libraries(charts Qt5::Core Qt5::Widgets Qt5::Charts chart_base_module)
