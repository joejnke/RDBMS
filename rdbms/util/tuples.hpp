#ifndef TUPLES_H_
#define TUPLES_H_

#include "cell.hpp"
#include <boost/variant.hpp>
#include <iostream>
#include <set>
#include <string>
using namespace std;


/**
* Implementation of n-ary tuple.
*
* Abstracts the concept of building an
* n-ary cartesian product based on set theory.
*/
class tuples 
{
private:
        int num_of_elements;
        set<set<cell, cellComparator>> elements;
public:
        static bool isEqual(tuples tup1, tuples tup2);
        tuples();
        tuples(cell elm1, cell elm2);
        set<set<cell, cellComparator>> get_elements();
        cell get(int index);
        std::string toString();
        int get_num_of_elements();
};

/**
* Comparator for instances of the tuple class.
*
* Structure with single function which implements
* the < operator. 
* It compares string representation of the operand
* tuples using the < operator of std::string.
*/
struct tuplesComparator {
    bool operator()(tuples lhs, tuples rhs) {
        return lhs.toString() < rhs.toString();
    }
};

#endif  /*TUPLES_H_*/
