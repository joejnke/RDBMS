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
        schema ();
        schema(std::set<rSchema, rSchemaComparator> rsSet);
        void add_rSchema(rSchema rs);
        void remove_rSchema(std::string name);
        std::set<rSchema, rSchemaComparator> get_rSchemaSet();
        std::string toString();
};
#endif  /*SCHEMA_H_*/
