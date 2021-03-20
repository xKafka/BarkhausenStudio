find_package(Qt5 COMPONENTS Core Widgets)
find_package(Python 2.7 REQUIRED)
find_package(PythonLibs 2.7 REQUIRED)

file(GLOB_RECURSE files "src/*.cpp")

set(CMAKE_AUTOMOC ON)

set(ui_headers include/current_measurement_device.h include/current_measurement_device_worker.h)

qt5_wrap_cpp(ui_headers_moc ${ui_headers})

include_directories(${PYTHON_INCLUDE_DIRS})

add_library(current_measurement_device STATIC
        ${files}
        ${ui_headers_moc}
        )

target_include_directories(current_measurement_device PRIVATE src PUBLIC include)

target_link_libraries(current_measurement_device Qt5::Widgets Qt5::Core ${PYTHON_LIBRARIES} utility)