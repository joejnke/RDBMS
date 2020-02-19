// Relational database schema implementation -*- C++ -*-

#ifndef SCHEMA_H_
#define SCHEMA_H_
#include "rSchema.hpp"
#include "table.hpp"
#include "tuples.hpp"
#include <iostream>


/**
* Abstraction of a relational database schema
* 
* Builds a container for all the relational schemas
* contained in an instance of a relational database.
*/
class schema {
private:
        std::set<rSchema, rSchemaComparator> rSchemaSet;

public:
        /// Default constructor initializing none of the class variables.
        schema ();
        /// Constructor initializng with set of initial relational schemas.
        schema(std::set<rSchema, rSchemaComparator> rsSet);
        /**
        *  @brief Add a relational schema.
        *  @param rs Relational schema to be added in to the schema.
        */
        void add_rSchema(rSchema rs);
        /**
        *  @brief Remove a relational schema.
        *  @param name String representation of the relational schema to be removed from the schema.
        */
        void remove_rSchema(std::string name);
        /**
        *  @brief Getter of all the set of relational schemas in the schema.
        *  @return set of relational schemas in the schema.
        */
        std::set<rSchema, rSchemaComparator> get_rSchemaSet();
        /**
        *  @brief String representation of a schema.
        *  @return String of relational schemas contained in the schema.
        * 
        *  The method constructs the string representation of a schema
        *  by concatenating string representation of every relational schema
        *  separated with new line and finally adds one more new line after
        *  the last relational schema.
        */
        std::string toString();
};
#endif  /*SCHEMA_H_*/
