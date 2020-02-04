#include "rSchema.hpp"
#include "../util/tuple.hpp"
#include <iostream>
#include <set>

class table
{
    private:
        /* data */
        rSchema tableSpec;  // relational schema specifications of a table
        std::set<tuple> rows;    // container for the tuples of a table

    public:
        table();
        
        table(rSchema spec);
        
        std::string get_table_name();

        tuple get_attributes();

        std::set<cell> get_column(std::string attribName);

        std::set<tuple> get_rows();

        void add_row(tuple rowTuple);

        void remove_row(tuple rowTuple);     
};