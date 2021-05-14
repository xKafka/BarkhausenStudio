find_package(Python 2.7 REQUIRED)
find_package(PythonLibs 2.7 REQUIRED)

file(GLOB_RECURSE files "src/*.cpp")

include_directories(${PYTHON_INCLUDE_DIRS})

add_library(usbtmc_python STATIC ${files})

target_include_directories(usbtmc_python PRIVATE src PUBLIC include)

target_link_libraries(usbtmc_python ${PYTHON_LIBRARIES})