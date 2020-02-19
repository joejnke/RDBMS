include_directories(${CMAKE_SOURCE_DIR}/rdbms/util)

ADD_LIBRARY (types SHARED
	schema.cpp
	rSchema.cpp
    table.cpp
	operations.cpp
)
target_link_libraries(types util)

install(TARGETS types EXPORT typesTargets
RUNTIME DESTINATION bin 
LIBRARY DESTINATION lib
ARCHIVE DESTINATION lib/rdbms
)

INSTALL(FILES  
	schema.hpp
	rSchema.hpp
	table.hpp
	operations.hpp
DESTINATION include/rdbms )
