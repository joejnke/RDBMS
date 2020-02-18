#ifndef CELL_H_
#define CELL_H_
#include <boost/variant.hpp>
#include <set>
#include <string>
using namespace std;
typedef std::string cell;


struct cellComparator 
{
    bool operator()(cell lhs, cell rhs) const 
{
        return lhs < rhs;
}
};
#endif  /*CELL_H*/
