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
        std::set<tuples> rows;    // container for the tuples of a table

    public:
        table();

        table(rSchema spec);

        std::string get_table_name();

        tuples get_attributes();

        std::set<cell> get_column(std::string attribName);

        std::set<tuples> get_rows();

        void set_rows(std::set<tuples> rowSet);

        void add_row(tuples rowTuple);

        void remove_row(tuples rowTuple);
};

#endif  /*TABLE_H_*/
