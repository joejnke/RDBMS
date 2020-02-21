#assuming the top level directory is rdbms
CMAKE_MINIMUM_REQUIRED(VERSION 2.8.12)

project(RDBMS CXX)

# specify the C++ standard
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED True)

set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY "${CMAKE_SOURCE_DIR}/../build/bin")
set(CMAKE_LIBRARY_OUTPUT_DIRECTORY "${CMAKE_SOURCE_DIR}/../build/bin")
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY "${CMAKE_SOURCE_DIR}/../build/bin")

add_subdirectory(app)
add_subdirectory(types)
add_subdirectory(util)

add_dependencies(rSchema tuples)

add_dependencies(table rSchema tuples)

add_dependencies(schema table rSchema tuples)

add_dependencies(operations schema table rSchema tuples)

add_dependencies(rdbms_app operations schema table rSchema tuples)
