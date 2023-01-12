cmake_minimum_required(VERSION 3.13)

set(OPTIC_IMGUI_SOURCES ../imgui/imgui.cpp ../imgui/imgui_widgets.cpp ../imgui/imgui_draw.cpp ../imgui/imgui_demo.cpp ../imgui/imgui_tables.cpp)

add_library(imgui ${OPTIC_IMGUI_SOURCES})