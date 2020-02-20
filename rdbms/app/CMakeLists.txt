include_directories(${CMAKE_SOURCE_DIR}/rdbms/types)
include_directories(${CMAKE_SOURCE_DIR}/rdbms/util)

link_directories(${CMAKE_LIBRARY_OUTPUT_DIRECTORY})

add_executable(rdbms_app app.cpp)

target_link_libraries(rdbms_app 
                        operations.lib 
                        rSchema.lib
                        schema.lib
                        table.lib
                        tuples.lib)