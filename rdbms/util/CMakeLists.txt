add_library(tuples STATIC tuples.cpp tuples.hpp)

install(TARGETS tuples 
        ARCHIVE DESTINATION lib/rdbms)
