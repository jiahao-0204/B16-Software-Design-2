cmake_minimum_required(VERSION 3.0.0)
project(Q6 VERSION 0.1.0)

include(CTest)
enable_testing()



set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)


include_directories(include)
file(GLOB Q6_src "src")

add_executable(Q6 ${Q6_src})
add_executable(Q6 main.cpp)