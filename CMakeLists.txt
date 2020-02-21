CMAKE_MINIMUM_REQUIRED(VERSION 2.8.12)

project(RDBMS CXX)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED True)

set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY "${CMAKE_SOURCE_DIR}/build/bin")
set(CMAKE_LIBRARY_OUTPUT_DIRECTORY "${CMAKE_SOURCE_DIR}/build/lib")
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY "${CMAKE_SOURCE_DIR}/build/bin")

add_subdirectory(rdbms)
#avoid building test for the time being
#add_subdirectory(test)

#add_test(toDoTest toDo)
