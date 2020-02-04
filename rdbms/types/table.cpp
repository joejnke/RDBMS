#include "cell.hpp"
#include "rSchema.hpp"
#include "table.hpp"
#include "../util/tuple.hpp"
#include <iostream>
#include <set>
// using namespace std;

// constructor
table::table() {
}

table::table(rSchema spec) {
    this->tableSpec = spec;
};

// getter methods
std::string table::get_table_name() {
    return this->tableSpec.get_name();
}

tuple table::get_attributes() {
    return this->tableSpec.get_attributes();
}

std::set<cell> table::get_column(std::string attribName) {
    //TODO;
}

std::set<tuple> table::get_rows() {
    return this->rows;
}

void table::add_row(tuple rowTuple) {
    this->rows.insert(rowTuple);
}

void table::remove_row(tuple rowTuple) {
    this->rows.erase(rowTuple);
}     