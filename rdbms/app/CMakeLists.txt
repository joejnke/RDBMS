include_directories(${CMAKE_SOURCE_DIR}/rdbms/types)
include_directories(${CMAKE_SOURCE_DIR}/rdbms/util)

add_executable(rdbms rdbms.cpp)

target_link_libraries(rdbms types.lib)