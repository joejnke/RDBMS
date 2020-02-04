#include "cell.hpp"
#include "rSchema.hpp"
#include "../util/tuple.hpp"
#include <iostream>
#include <set>
// using namespace std;

class table
{
    private:
        /* data */
        rSchema tableSpec;  // relational schema specifications of a table
        std::set<tuple> rows;    // container for the tuples of a table

    public:
        table(rSchema spec) {
            tableSpec = spec;
        };
        
        std::string get_table_name() {
            return tableSpec.get_name();
        }

        tuple get_attributes() {
            return tableSpec.get_attributes();
        }

        std::set<cell> get_column(std::string attribName) {
            //TODO;
        }

        std::set<tuple> get_rows() {
            return rows;
        }

        void add_row(tuple rowTuple) {
            rows.insert(rowTuple);
        }

        void remove_row(tuple rowTuple) {
            rows.erase(rowTuple);
        }
        
        // void remove_row(int rowIndex) {
        //     //TODO
        // }

        // void remove_row(key rowKey) {
        //     //TODO
        // }        
};