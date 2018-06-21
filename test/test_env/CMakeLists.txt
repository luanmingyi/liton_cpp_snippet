project (test_env)

add_executable("_${PROJECT_NAME}" "${PROJECT_NAME}.cpp")
target_link_libraries("_${PROJECT_NAME}" snippets)

add_test(NAME t_env COMMAND "_${PROJECT_NAME}")
