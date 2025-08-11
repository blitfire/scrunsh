cmake_minimum_required(VERSION 4.0)
set(CMAKE_CXX_STANDARD 23)
set(PROJECT_NAME "scrunsh")

project(${PROJECT_NAME})

add_executable(${PROJECT_NAME} src/main.cpp)
