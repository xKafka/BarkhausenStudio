file(GLOB_RECURSE files "src/*.cpp")

add_executable(api ${files})

target_include_directories(api PRIVATE src PUBLIC include)

target_link_libraries(api module_multiplexer)