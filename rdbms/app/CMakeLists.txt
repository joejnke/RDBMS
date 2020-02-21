include_directories(${CMAKE_SOURCE_DIR}/types)
include_directories(${CMAKE_SOURCE_DIR}/util)

link_directories(${CMAKE_ARCHIVE_OUTPUT_DIRECTORY})

add_executable(rdbms_app app.cpp)

target_link_libraries(rdbms_app 
                        operations.a 
                        rSchema.a
                        schema.a
                        table.a
                        tuples.a)

install(TARGETS rdbms_app
        RUNTIME DESTINATION "${CMAKE_ARCHIVE_OUTPUT_DIRECTORY}/..")
