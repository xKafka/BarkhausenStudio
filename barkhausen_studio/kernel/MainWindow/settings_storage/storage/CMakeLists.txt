find_package(Qt5 COMPONENTS Core Widgets)

file(GLOB_RECURSE sources "src/*.cpp")
file(GLOB_RECURSE headers "include/*.h")

set(CMAKE_AUTOMOC ON)

qt5_wrap_cpp(qt_moc_headers ${headers})

add_library(settings_storage STATIC ${sources} ${qt_moc_headers})

target_include_directories(settings_storage PRIVATE src PUBLIC include)

target_link_libraries(settings_storage Qt5::Core Qt5::Widgets settings)