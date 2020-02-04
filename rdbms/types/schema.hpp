#include "table.hpp"
#include "rSchema.hpp"
#include "../util/tuple.hpp"
#include <iostream>

std::set<rSchema> get_rSchemaSet();

std::string toString();

void add_rSchema(rSchema rs);

void remove_rSchema(std::string name);