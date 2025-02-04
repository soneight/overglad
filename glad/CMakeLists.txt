cmake_minimum_required(VERSION 3.14...3.28)
project(glad VERSION 2.0.8)

add_subdirectory(source)
add_library(${PROJECT_NAME}::son8 ALIAS ${PROJECT_NAME})
target_include_directories(glad PUBLIC include)
