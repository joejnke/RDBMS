include_directories(${CMAKE_SOURCE_DIR}/rdbms/util)

link_directories(${CMAKE_ARCHIVE_OUTPUT_DIRECTORY})

add_library(rSchema STATIC rSchema.cpp rSchema.hpp)

target_link_libraries(rSchema tuples.a)

add_library(table STATIC table.cpp table.hpp)

target_link_libraries(table 
                        rSchema.a
                        tuples.a)

add_library(schema STATIC schema.cpp schema.hpp)

target_link_libraries(schema 
                        table.a
                        rSchema.a
                        tuples.a)

add_library(operations STATIC operations.cpp operations.hpp)

target_link_libraries(operations 
                        schema.a
                        table.a
                        rSchema.a
                        tuples.a)

install(TARGETS rSchema table schema operations
        ARCHIVE DESTINATION "${CMAKE_ARCHIVE_OUTPUT_DIRECTORY}")
