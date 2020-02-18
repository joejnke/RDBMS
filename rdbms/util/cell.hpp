#ifndef CELL_H_
#define CELL_H_
#include <boost/variant.hpp>
#include <set>
#include <string>
using namespace std;


/**
* Data type alias for a single data value in a table.
*
* Holds all the premitive data types supported by the
* relational database managment system. 
*/
typedef std::string cell;


/**
* Comparator for instances of the cell data type.
*
* Structure with single function which implements
* the < operator.
*/
struct cellComparator 
{
    bool operator()(cell lhs, cell rhs) const 
{
        return lhs < rhs;
}
};
#endif  /*CELL_H*/
