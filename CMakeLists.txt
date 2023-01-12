cmake_minimum_required(VERSION 3.13)
project(Optic)

set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib)
set(CMAKE_LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib)
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)

add_subdirectory(deps/sfml)
add_subdirectory(deps/imgui)

add_subdirectory(optic_tests)

target_include_directories(optic_tests PRIVATE deps/sfml/include deps/imgui deps)
target_link_libraries(optic_tests sfml-system sfml-window sfml-network sfml-graphics sfml-audio ImGui-SFML::ImGui-SFML)