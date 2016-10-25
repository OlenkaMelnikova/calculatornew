7 lines (5 sloc)  181 Bytes
cmake_minimum_required(VERSION 2.8)

project (calculatornew_example)
set(SOURCES main.cpp)
add_executable (${PROJECT_NAME} ${SOURCES})
target_link_libraries(${PROJECT_NAME} calculatornew)
