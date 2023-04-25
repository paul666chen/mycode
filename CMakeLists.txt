cmake_minimum_required(VERSION 3.14)

project(mycode)

set(CMAKE_CXX_COMPILE "g++")
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)




include_directories(inlcude src)

aux_source_directory($(PROJECT_SOURCE_DIR)/src SRC)

add_executable(main.exe ${SRC})
