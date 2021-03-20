file(GLOB_RECURSE files "src/*.cpp")

add_library(exceptions STATIC ${files})

target_include_directories(exceptions PRIVATE src PUBLIC include)
