#include "cell.hpp"
#include "rSchema.hpp"
#include "table.hpp"
#include "tuples.hpp"
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

tuples table::get_attributes() {
    return this->tableSpec.get_attributes();
}

rSchema table::get_tableRSchema() {
    return this->tableSpec;
}

std::set<cell, cellComparator> table::get_column(std::string attribName) {
    //TODO;
}

void table::add_row(tuples rowTuple) {
    this->rows.insert(rowTuple);
}

void table::remove_row(tuples rowTuple) {
    this->rows.erase(rowTuple);
}

std::set<tuples> table::get_rows() {
    return this->rows;
}

void table::set_rows(std::set<tuples> rowSet) {
    this->rows = rowSet;
}

std::string table::toString() {
    std::string info = this->get_tableRSchema().toString() + "\n";
    for (auto row : table::get_rows()) {
        info += row.toString() + "\n";
    }

    return info;
}
