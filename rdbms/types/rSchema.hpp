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
        /// Default constructor initializing none of the class variables.
        rSchema();
        /// Constructor initializng all the class variables.
        rSchema(std::string rsName, tuples rsAttribs);
        /**
        *  @brief Getter of the name of the relational schema.
        *  @return String of the name of the relational schema.
        */
        std::string get_name();
        /**
        *  @brief Getter of the list of columns i.e. attributes of the relational schema.
        *  @return tuple of attributes.
        */  
        tuples get_attributes();
        /**
        *  @brief String representation of a relational schema.
        *  @return String of metadata of the relational schema.
        * 
        *  The method constructs the string representation of a relational schema
        *  by concatenating string representation of the relational schema name and
        *  string representation of the tuple of the attributes.
        */
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
