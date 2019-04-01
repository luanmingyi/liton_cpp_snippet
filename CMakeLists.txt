cmake_minimum_required (VERSION 3.5)

project(snippets_lib)

add_library(snippets INTERFACE)
target_compile_definitions(snippets
INTERFACE LIBRARY_HEADER_ONLY)

install(
    FILES scr/lion_snippets.hpp
    DESTINATION include
)

install(
    TARGETS snippets
    EXPORT library_targets
    RUNTIME DESTINATION bin
    ARCHIVE DESTINATION lib
    LIBRARY DESTINATION lib
    INCLUDES DESTINATION include
)

install(
    EXPORT library_targets
    FILE snippets-config.cmake
    NAMESPACE liton::
    DESTINATION lib/cmake/snippets
)
