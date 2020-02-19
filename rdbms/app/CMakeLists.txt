include_directories(${CMAKE_SOURCE_DIR}/rdbms/util)
include_directories(${CMAKE_SOURCE_DIR}/rdbms/types)
set(CMAKE_INSTALL_RPATH "/usr/local/lib")
#set (CMAKE_INSTALL_RPATH_USE_LINK_PATH TRUE)

add_executable(rdbms rdbms.cpp)
target_link_libraries(rdbms types)
install(TARGETS rdbms 
DESTINATION bin
)

