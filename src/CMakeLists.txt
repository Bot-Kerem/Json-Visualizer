cmake_minimum_required(VERSION 3.23.3)

project(imgui)

add_library(${PROJECT_NAME} 
    ../third_party/imgui/imgui_demo.cpp
    ../third_party/imgui/imgui_tables.cpp
    ../third_party/imgui/imgui_demo.cpp
    ../third_party/imgui/imgui_draw.cpp
    ../third_party/imgui/imgui_widgets.cpp
    ../third_party/imgui/imgui.cpp

    ../third_party/imgui/backends/imgui_impl_glfw.cpp
    ../third_party/imgui/backends/imgui_impl_opengl3.cpp
)
target_include_directories(${PROJECT_NAME} PRIVATE ../third_party/imgui ../third_party/imgui/backends)

project(libvson)

add_library(${PROJECT_NAME} vson.cpp)

find_package(OpenGL)

target_link_libraries(${PROJECT_NAME} imgui OpenGL::GL)

target_include_directories(${PROJECT_NAME} PUBLIC ../third_party/imgui ../third_party/imgui/backends ../include)