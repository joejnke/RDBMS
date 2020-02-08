#ifndef CELL_H_
#define CELL_H_

#include <boost/variant.hpp>
#include <set>
#include <string>

using namespace std;

typedef boost::variant<set<std::string>,set<double>,set<int>,double,std::string,int> cell;

#endif  /*CELL_H*/