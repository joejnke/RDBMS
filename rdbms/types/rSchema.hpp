// Relational schema implementation -*- C++ -*-

#ifndef RSCHEMA_H_
#define RSCHEMA_H_
#include "tuples.hpp"
#include <iostream>


/**
* Abstraction of a relational schema
* 
* Defines table specification under the 
* relational database concept. The specification
* contains name of the relational schema and list
* of columns a table under such schema will have.
*/
class rSchema {
private:
        std::string name;
        tuples attributes;
public:
        rSchema();
        rSchema(std::string rsName, tuples rsAttribs);
        std::string get_name();
        tuples get_attributes();
        std::string toString();
};

/**
* Comparator for instances of the rSchema class.
*
* Structure with single function which implements
* the < operator. 
* It compares operand rSchemas using their name atrribute
* using the < operator of std::string.
*/
struct rSchemaComparator 
{
    bool operator()(rSchema lhs, rSchema rhs) 
    {
        return lhs.get_name() < rhs.get_name();
    }
};
#endif  /*RSCHEMA_H_*/
