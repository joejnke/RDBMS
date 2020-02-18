ADD_LIBRARY (util SHARED
	cell.cpp
	tuples.cpp
)

install(target util 
RUNTIME DESTINATION bin 
LIBRARY DESTINATION lib
ARCHIVE DESTINATION lib/rdbms
)

INSTALL(FILES  
	cll.hpp
	tuples.hpp
DESTINATION include/rdbms )
