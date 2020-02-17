CMAKE_MINIMUM_REQUIRED(VERSION 2.8.12.2)

project("RDBMS")
#cmake_minimum_required(VERSION 2.8 FATAL_ERROR)
#set(CMAKE_LEGACY_CYGWIN_WIN32 0)
#enable_testing()

include_directories(${CMAKE_CURRENT_SOURCE_DIR})
add_subdirectory(rdbms)



set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY "${CMAKE_SOURCE_DIR}/../bin")
set(CMAKE_LIBRARY_OUTPUT_DIRECTORY "${CMAKE_SOURCE_DIR}/../bin")
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY "${CMAKE_SOURCE_DIR}/../bin")

#add_test(toDoTest toDo)
