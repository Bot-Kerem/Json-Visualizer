cmake_minimum_required(VERSION 3.23.3)

add_subdirectory(src)

project(vson)

add_executable(${PROJECT_NAME} src/main.cpp)

target_link_libraries(${PROJECT_NAME} glfw libvson)
