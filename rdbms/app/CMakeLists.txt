include_directories(${CMAKE_SOURCE_DIR}/rdbms/util)
include_directories(${CMAKE_SOURCE_DIR}/rdbms/types)


add_executable(rdbms rdbms.cpp)
target_link_libraries(rdbms types)

install(TARGETS rdbms 
DESTINATION bin
)

install(TARGETS rdbms 
DESTINATION ${CMAKE_SOURCE_DIR}
)