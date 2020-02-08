#include "schema.hpp"
#include "rSchema.hpp"
#include "table.hpp"
#include "tuples.hpp"
#include <iostream>

schema::schema () {
}

schema::schema(std::set<rSchema, rSchemaComparator> rsSet) {
    this->rSchemaSet = rsSet;
}

void schema::add_rSchema(rSchema rs) {
    this->rSchemaSet.insert(rs);
}

void schema::remove_rSchema(std::string name) {
    //TODO
}

std::set<rSchema, rSchemaComparator> schema::get_rSchemaSet() {
    return this->rSchemaSet;
}

std::string schema::toString() {
    std::string info;
    for (auto rs : schema::get_rSchemaSet()) {
        info += rs.get_name() + "\n"
                + rs.get_attributes().toString() + "\n\n";
    }
    return info;
}
