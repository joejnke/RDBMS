include_directories(${CMAKE_SOURCE_DIR}/rdbms/util)
link_directories(${CMAKE_LIBRARY_OUTPUT_DIRECTORY})

ADD_LIBRARY (types 
	schema.cpp
	rSchema.cpp
    table.cpp
	operations.cpp
)
ADD_DEPENDENCIES(types
util	
)

#INSTALL (TARGETS types EXPORT TypesTargets
#	DESTINATION "lib${LIB_DIR_SUFFIX}/rdbms"
#)

#INSTALL (FILES
#    schema.hpp
#    rSchema.hpp
#    table.hpp
#    operations.hpp
#	DESTINATION "include/rdbms/types"
#)