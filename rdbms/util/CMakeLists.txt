ADD_LIBRARY (util SHARED
	tuples.cpp
)

install(TARGETS util 
RUNTIME DESTINATION bin 
LIBRARY DESTINATION lib
ARCHIVE DESTINATION lib/rdbms
)

INSTALL(FILES  
	cell.hpp
	tuples.hpp
DESTINATION include/rdbms)
