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

class cellType {
public:    
    static std::string toString(cell item);
};

#endif  /*CELL_H*/
