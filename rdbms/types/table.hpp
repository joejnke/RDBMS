// Relational table implementation -*- C++ -*-

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
        /// Default constructor initializing none of the class variables.
        table();
        /// Constructor initializng with table specification.
        table(rSchema spec);
        /**
        *  @brief Getter of the name of the specification the table is governed by.
        *  @return String of the name of the table specification.
        */
        std::string get_table_name();
        /**
        *  @brief Getter of the list of columns i.e. attributes of the table specified by the rschema.
        *  @return tuple of table attributes.
        */  
        tuples get_attributes();
        /**
        *  @brief Getter of the table specification.
        *  @return relational schema of the table.
        */
        rSchema get_tableRSchema();
        /**
        *  @brief Return all data in a column in the table with the given column name.
        *  @param attribName Name of the column.
        *  @return set of cell type items contained under the given column name.
        */
        std::set<cell, cellComparator> get_column(std::string attribName);
        /**
        *  @brief Insert a row of data in to the table.
        *  @param rowTuple Tuple of data to be inserted in to the table.
        */
        void add_row(tuples rowTuple);
        /**
        *  @brief Remove a row of data from the table.
        *  @param rowTuple Tuple of data to be removed from the table.
        */
        void remove_row(tuples rowTuple);
        /**
        *  @brief Return all data in the table.
        *  @return set of tuples of every row of data in the table.
        */
        std::set<tuples, tuplesComparator> get_rows();
        /**
        *  @brief Setter for the whole data to be contained in the table at once.
        *  @param rowSet Set of tuples of data to be added in to the table.
        */
        void set_rows(std::set<tuples, tuplesComparator> rowSet);
        /**
        *  @brief String representation of a table.
        *  @return String of metadata of the table and data contained in the table.
        * 
        *  The method constructs the string representation of a table
        *  by concatenating string representation of the table specififcation and
        *  string representation of every row of data separated with new line.
        */
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
