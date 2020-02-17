#ifndef TABLE_H_
#define TABLE_H_

#include "rSchema.hpp"
#include "tuples.hpp"
#include <iostream>
#include <set>

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

        std::set<cell> get_column(std::string attribName);

        void add_row(tuples rowTuple);

        void remove_row(tuples rowTuple);

        std::set<tuples, tuplesComparator> get_rows();

        void set_rows(std::set<tuples, tuplesComparator> rowSet);

        std::string toString();
};

#endif  /*TABLE_H_*/
