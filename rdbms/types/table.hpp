#include "rSchema.hpp"
#include "../util/tuple.hpp"
#include <iostream>
#include <set>

std::string get_table_name();

tuple get_attributes();

std::set<cell> get_column(std::string attribName);

std::set<tuple> get_rows();

void add_row(tuple rowTuple);

void remove_row(tuple rowTuple);