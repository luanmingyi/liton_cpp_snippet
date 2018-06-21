project (test_xml)

add_library(tinyxml STATIC "../../scr/tinyxml2/tinyxml2.cpp")

add_executable("_${PROJECT_NAME}" "${PROJECT_NAME}.cpp")
target_link_libraries("_${PROJECT_NAME}" snippets tinyxml)

add_test(NAME t_xml COMMAND "_${PROJECT_NAME}")
file(COPY case_config.xml DESTINATION ${CMAKE_CURRENT_BINARY_DIR})
