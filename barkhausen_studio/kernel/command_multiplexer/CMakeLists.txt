find_package(Qt5 COMPONENTS Core Widgets)

file(GLOB_RECURSE files "src/*.cpp")

set(CMAKE_AUTOMOC ON)

set(ui_headers include/modules_holder.h)

qt5_wrap_cpp(ui_headers_moc ${ui_headers})

include_directories(${PYTHON_INCLUDE_DIRS})

add_library(module_multiplexer STATIC
        ${files}
        ${ui_headers_moc}
        )

target_include_directories(module_multiplexer PRIVATE src PUBLIC include)

target_link_libraries(module_multiplexer main_window utility current_measurement_device)
