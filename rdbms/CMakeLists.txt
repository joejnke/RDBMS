add_subdirectory(app)
add_subdirectory(types)
add_subdirectory(util)

add_dependencies(rSchema tuples)

add_dependencies(table rSchema tuples)

add_dependencies(schema table rSchema tuples)

add_dependencies(operations schema table rSchema tuples)

add_dependencies(rdbms_app operations schema table rSchema tuples)
