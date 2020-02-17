#include "cell.hpp"
#include <boost/variant.hpp>
#include <set>
#include <string>


std::string cellType::toString(cell item) {
    return boost::apply_visitor(cell_to_string(), item);
}