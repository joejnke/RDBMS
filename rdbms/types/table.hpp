#ifndef TABLE_H_
#define TABLE_H_
#include "rSchema.hpp"
#include "tuples.hpp"
#include <iostream>
#include <set>


/**
* Abstraction of relational database table
* 
* Implemenation of a relational database table 
* in a way that every table will have it's own
* table specification, which is called a relational 
* schema, and data container for the actual data
* to be kept in the table. 
*/
class table
{
private:
        /* data */
        rSchema tableSpec;  // relational schema specifications of a table
        std::set<tuples, tuplesComparator> rows;    // container for the tuples of a table
public:
        table();
        table(rSchema spec);
        std::string get_table_name();
        tuples get_attributes();
        rSchema get_tableRSchema();
        std::set<cell, cellComparator> get_column(std::string attribName);
        void add_row(tuples rowTuple);
        void remove_row(tuples rowTuple);
        std::set<tuples, tuplesComparator> get_rows();
        void set_rows(std::set<tuples, tuplesComparator> rowSet);
        std::string toString();
};

/**
* Comparator for instances of the table class.
*
* Structure with single function which implements
* the < operator. 
* It compares operand tables using name atrribute
* of their underlaying relational schema using the
* < operator of std::string.
*/
struct tableComparator 
{
    bool operator()(table lhs, table rhs) 
    {
        return lhs.get_table_name() < rhs.get_table_name();
    }
};
#endif  /*TABLE_H_*/
