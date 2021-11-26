cmake_minimum_required(VERSION 3.10)
project(capi)

link_libraries(workflow)

add_executable(
        capi
        main.cpp
        controller/router.cpp
        controller/response.cpp
        controller/default.cpp
)