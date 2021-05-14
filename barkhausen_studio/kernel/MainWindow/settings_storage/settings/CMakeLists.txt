find_package(Qt5 COMPONENTS Core Widgets)

file(GLOB_RECURSE headers "*.h")

set(CMAKE_AUTOMOC ON)

qt5_wrap_cpp(qt_moc_headers ${headers})

add_library(settings STATIC ${sources} ${qt_moc_headers})

target_include_directories(settings PUBLIC ui devices measurement names)

target_link_libraries(settings Qt5::Core Qt5::Widgets json ini utils)