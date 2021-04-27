find_package(Python 2.7 REQUIRED)
find_package(PythonLibs 2.7 REQUIRED)

file(GLOB_RECURSE files "src/*.cpp")

include_directories(${PYTHON_INCLUDE_DIRS})

add_library(usbtmc_device_finder STATIC ${files})

target_include_directories(usbtmc_device_finder PRIVATE src PUBLIC include)

target_link_libraries(usbtmc_device_finder ${PYTHON_LIBRARIES} settings measurement_device)