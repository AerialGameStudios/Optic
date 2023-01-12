cmake_minimum_required(VERSION 3.13)
project(Optic)

set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib)
set(CMAKE_LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib)
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)

find_package(ImGui-SFML REQUIRED)
find_package(SFML 2.5 COMPONENTS system window graphics audio network REQUIRED)

add_subdirectory(deps/imgui_cmake)
add_subdirectory(optic_tests)

target_include_directories(optic_tests PRIVATE deps)
target_link_libraries(optic_tests imgui sfml-system sfml-window sfml-network sfml-graphics sfml-audio ImGui-SFML::ImGui-SFML)