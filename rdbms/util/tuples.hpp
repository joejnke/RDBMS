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
        /// Cardinality of the tuple.
        int num_of_elements;
        /// Container of members of the tuple.
        set<set<cell, cellComparator>> elements;
public:
        /// Default constructor initializing none of the class variables.
        tuples();
        /// Constructor initializng all the class variables.
        tuples(cell elm1, cell elm2);
        /**
        *  @brief Getter of the container of memebrs of the tuple.
        *  @return  Set containing members of the tuple.
        */        
        set<set<cell, cellComparator>> get_elements();
        /**
        *  @brief Finds a member of the tuple found at the given index.
        *  @param index Index to look at.
        *  @return  cell type item at the given index.
        */
        cell get(int index);
        /**
        *  @brief String representation of a tuple.
        *  @return  String of members of the tuple.
        * 
        *  The method constructs the string representation of a tuple
        *  by concatenating string representation of every member 
        *  separates with single white space and enclosing this
        *  concatenated string inside a pair of braces (). 
        */        
        std::string toString();
        /**
        *  @brief Getter of the cardinality of the tuple.
        *  @return  Int representing cardinality of the tuple.
        */
        int get_num_of_elements();
        /**
        *  @brief Determine if two tuples are equal.
        *  @param tup1 Left operand tuple.
        *  @param tup2 Right operand tuple.
        *  @return true if the tuples contain same items at same positions,
        *    false otherwise.
        * 
        *  The method compares the tuples using the underlying comparator
        *  of the set that contains all the members of an operand tuple.
        */
        static bool isEqual(tuples tup1, tuples tup2);
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
