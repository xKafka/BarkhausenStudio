find_package(nlohmann_json REQUIRED)

add_library(json INTERFACE)

target_link_libraries(json INTERFACE nlohmann_json::nlohmann_json)
