add_library(utility INTERFACE)

target_include_directories(utility INTERFACE include)

target_link_libraries(utility INTERFACE fmt)