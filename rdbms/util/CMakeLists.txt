ADD_LIBRARY (util SHARED
	cell.cpp
	tuples.cpp
)

install(TARGETS util 
RUNTIME DESTINATION bin 
LIBRARY DESTINATION lib
ARCHIVE DESTINATION lib/rdbms
)

INSTALL(FILES  
	cll.hpp
	tuples.hpp
DESTINATION include/rdbms )
