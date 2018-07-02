project (test_debug)

add_executable("_${PROJECT_NAME}" "${PROJECT_NAME}.cpp")
target_link_libraries("_${PROJECT_NAME}" snippets)
set_target_properties("_${PROJECT_NAME}" PROPERTIES
CXX_STANDARD_REQUIRED ON
CXX_STANDARD 11
CXX_EXTENSIONS OFF)

add_test(NAME t_debug COMMAND "_${PROJECT_NAME}")
