#include "rSchema.hpp"
#include "tuples.hpp"
#include <iostream>

rSchema::rSchema()
{
}
rSchema::rSchema(std::string rsName, tuples rsAttribs) 
{
    this->name = rsName;
    this->attributes = rsAttribs;
}
std::string rSchema::get_name()
 {
    return this->name;
}
tuples rSchema::get_attributes() 
{
    return this->attributes;
}
std::string rSchema::toString() 
{
    std::string info = this->get_name();
    info += "\n";
    info += this->get_attributes().toString();
    return info;
}
