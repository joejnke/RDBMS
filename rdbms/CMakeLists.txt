add_subdirectory(app)
add_subdirectory(test)
add_subdirectory(util)

add_dependencies(rSchema tuples)

add_dependencies(table rschema tuples)

add_dependencies(schema table rschema tuples)

add_dependencies(operations schema table rschema tuples)

