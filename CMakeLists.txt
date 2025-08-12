cmake_minimum_required(VERSION 4.0)
set(CMAKE_CXX_STANDARD 23)
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

set(PROJECT_NAME "scrunsh")

project(${PROJECT_NAME})

add_executable(${PROJECT_NAME} src/main.cpp
  src/Core.cpp
  src/Input.cpp
)

target_include_directories(${PROJECT_NAME} PUBLIC include)
