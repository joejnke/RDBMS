#include "rSchema.hpp"
#include "../util/tuples.hpp"
#include <iostream>

rSchema::rSchema() {
}

rSchema::rSchema(std::string rsName, tuples rsAttribs) {
    this->name = rsName;
    this->attributes = rsAttribs;
}

std::string rSchema::get_name() {
    return this->name;
}

tuple rSchema::get_attributes() {
    return this->attributes;
}
