#ifndef TUPLES_H_
#define TUPLES_H_

#include "cell.hpp"
#include <boost/variant.hpp>
#include <iostream>
#include <set>
#include <string>

using namespace std;

class tuples {
    private:
        int num_of_elements;
        set<set<cell>> elements;

    public:
        static bool isEqual(tuples tup1, tuples tup2);
        tuples();
        tuples(cell elm1, cell elm2);
        set<set<cell>> get_elements();
        cell get(int index);
        std::string toString();
};

struct tuplesComparator {
    bool operator()(tuples lhs, tuples rhs) {
        return lhs.toString() < rhs.toString();
    }
};

#endif  /*TUPLES_H_*/
