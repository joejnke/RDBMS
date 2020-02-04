#include "rSchema.hpp"
#include "../util/tuple.hpp"
#include <iostream>

rSchema::rSchema(std::string rsName, tuple rsAttribs) {
    this->name = rsName;
    this->attributes = rsAttribs;
}

std::string rSchema::get_name() {
    return this->name;
}

tuple rSchema::get_attributes() {
    return this->attributes;
}