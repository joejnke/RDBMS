include_directories(${CMAKE_SOURCE_DIR}/../include)
ADD_LIBRARY (util
	cell.cpp
	tuples.cpp
)

INSTALL (TARGETS util EXPORT TypesTargets
	DESTINATION "lib${LIB_DIR_SUFFIX}/rdbms"
)

INSTALL (FILES
    cell.hpp
    tuples.hpp
	DESTINATION "include/rdbms/types"
)