include_directories(${CMAKE_SOURCE_DIR}/rdbms/util)
include_directories(${CMAKE_SOURCE_DIR}/rdbms/types)


add_executable(rdbms rdbms.cpp)
target_link_libraries(rdbms types)

install(target rdbms 
DESTINATION bin
)

install(target rdbms 
DESTINATION ${CMAKE_SOURCE_DIR}
)