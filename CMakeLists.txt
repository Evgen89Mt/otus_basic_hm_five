cmake_minimum_required(VERSION 3.20)

project(05_hm)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(${PROJECT_NAME}
    main.cpp
    istatistics.cpp
    min.cpp
    manager.cpp
)

target_include_directories(${PROJECT_NAME}
    PRIVATE
    ${CMAKE_SOURCE_DIR}/include
)

message("!!! msg <CMAKE_SOURCE_DIR> ${CMAKE_SOURCE_DIR}")