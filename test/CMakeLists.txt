cmake_minimum_required (VERSION 3.5)

project(liton_snippets)

add_library(snippets INTERFACE)
target_include_directories(snippets INTERFACE "../scr/liton_cpp_snippets")

enable_testing()
add_subdirectory(test_file)
add_subdirectory(test_time)
add_subdirectory(test_env)
add_subdirectory(test_debug)
add_subdirectory(test_xml)
