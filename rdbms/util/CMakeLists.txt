add_library(tuples STATIC tuples.cpp tuples.hpp)

install(TARGETS tuples 
        ARCHIVE DESTINATION "${CMAKE_ARCHIVE_OUTPUT_DIRECTORY}")
