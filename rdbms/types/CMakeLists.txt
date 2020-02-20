include_directories(${CMAKE_SOURCE_DIR}/rdbms/util)

link_directories(${CMAKE_LIBRARY_OUTPUT_DIRECTORY})

add_library(rSchema STATIC rSchema.cpp rSchema.hpp)

target_link_libraries(rSchema tuples.lib)

add_library(table STATIC table.cpp table.hpp)

target_link_libraries(table 
                        rSchema.lib
                        tuples.lib)

add_library(schema STATIC schema.cpp schema.hpp)

target_link_libraries(schema 
                        table.lib
                        rSchema.lib
                        tuples.lib)

add_library(operations STATIC operations.cpp operations.hpp)

target_link_libraries(operations 
                        schema.lib
                        table.lib
                        rSchema.lib
                        tuples.lib)
