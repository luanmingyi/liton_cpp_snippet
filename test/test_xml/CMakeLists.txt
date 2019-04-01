project (test_xml)

add_executable("_${PROJECT_NAME}" "${PROJECT_NAME}.cpp")

find_package(tinyxml2 REQUIRED)

target_link_libraries("_${PROJECT_NAME}" snippets tinyxml2::tinyxml2)

add_test(NAME t_xml COMMAND "_${PROJECT_NAME}")
file(COPY case_config.xml DESTINATION ${CMAKE_CURRENT_BINARY_DIR})
