#ifndef CELL_H_
#define CELL_H_

#include <boost/variant.hpp>
#include <set>
#include <string>

using namespace std;

typedef boost::variant<set<std::string>,set<double>,set<int>,double,std::string,int> cell;

struct cell_to_string
    : public boost::static_visitor<std::string>
{
public:

    
    std::string operator()(int & item ) const {
        return std::to_string(item);
    }

    std::string operator()(double & item ) const {
        return std::to_string(item);
    }

    std::string operator()(std::string & item ) const {
        return item;
    }

    std::string operator()(set<int> & item ) const {
        std::string result = "( ";
        for (auto i : item) {
            result += std::to_string(i) + " ";
        }

        result += ")";

        return result;
    }

    std::string operator()(set<double> & item ) const {
        std::string result = "( ";
        for (auto i : item) {
            result += std::to_string(i) + " ";
        }

        result += ")";

        return result;
    }

    std::string operator()(set<std::string> & item ) const {
        std::string result = "( ";
        for (auto i : item) {
            result += i + " ";
        }
        
        result += ")";

        return result;
    }
};

struct cell_comparator 
    : public boost::static_visitor<bool>
{
public:    
    bool operator()(int & lhs, int & rhs) const {
        return lhs < rhs;
    }

    bool operator()(double & lhs, double & rhs) const {
        return lhs < rhs;
    }

    bool operator()(std::string & lhs, std::string & rhs) const {
        return lhs < rhs;
    }

    bool operator()(set<int> & lhs, set<int> & rhs) const {
        return lhs < rhs;
    }

    bool operator()(set<double> & lhs, set<double> & rhs) const {
        return lhs < rhs;
    }

    bool operator()(set<std::string> & lhs, set<std::string> & rhs) const {
        return lhs < rhs;
    }
};

struct cellComparator {
    bool operator()(cell lhs, cell rhs) {
        return boost::apply_visitor(cell_comparator(), lhs, rhs);
    }
};

class cellType {
public:    
    static std::string toString(cell item);
};

#endif  /*CELL_H*/
