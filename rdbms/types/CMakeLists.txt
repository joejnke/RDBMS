include_directories(${CMAKE_SOURCE_DIR}/rdbms/util)

ADD_LIBRARY (types SHARED
	schema.cpp
	rSchema.cpp
    table.cpp
	operations.cpp
)
target_link_libraries(types util)
install(TARGETS types 
RUNTIME DESTINATION bin 
LIBRARY DESTINATION bin
ARCHIVE DESTINATION lib/rdbms
)

INSTALL(FILES  
	schema.hpp
	rSchema.hpp
	table.hpp
	operations.hpp
DESTINATION include/rdbms )
