#include "../util/cell.hpp"
#include "operations.hpp"
#include "rSchema.hpp"
#include "table.hpp"
#include "../util/tuples.hpp"
#include <iostream>
#include <set>
#include <algorithm>

table operations::runion(table R1 ,table R2){
    //conditional statment will not work tuple comparing function must be implimented
    if (!tuples::isEqual(R1.get_attributes() , R2.get_attributes())){
        throw "Invalid Table atteribute types can't Union the two tables";
    }

    table runion (rSchema("R1_R2_union",R1.get_attributes()));
    for (std::set<tuples>::iterator itr1 = R1.get_rows().begin(); itr1 != R1.get_rows().end(); ++itr1) 
    { 
         runion.add_row(*itr1);
    }
    ////// adding the rows of the second table to the union
        for (std::set<tuples>::iterator itr2 = R2.get_rows().begin(); itr2 != R2.get_rows().end(); ++itr2) 
    {
        runion.add_row(*itr2);
    } 

    return runion;
}

table operations::intersection(table R1 ,table R2){
     if (!tuples::isEqual(R1.get_attributes() , R2.get_attributes())){
        throw "Invalid Table atteribute types can't Union the two tables";
    }


    table::table intersect_table(rSchema("runion",R1.get_attributes));

     for (std::set<tuples>::iterator itr1 = R1.get_rows().begin(); itr1 != R1.get_rows().end(); ++itr1) 
    { 
        for (std::set<tuples>::iterator itr2 = R2.get_rows().begin(); itr2 != R2.get_rows().end(); ++itr2) 
    {
         if(tuples::isEqual(*itr1,*itr2)){
         intersect_table.add_row(*itr1);
         }
    }

    }

    return intersect_table;
}

table operations::difference(table R1 ,table R2){
   if (!tuples::isEqual(R1.get_attributes() , R2.get_attributes())){
        throw "Invalid Table atteribute types can't Union the two tables";
    }
    table::table difference_table(rSchema("runion",R1.get_attributes));

     for (std::set<tuples>::iterator itr1 = R1.get_rows().begin(); itr1 != R1.get_rows().end(); ++itr1) 
    { 
        if(R2.get_rows().find(*itr1) == R2.get_rows().end()){
            difference_table.add_row(*itr1);
        }
    }
    return difference_table;
}

table operations::projection(table R1){
    //TODO
}

table operations::selection(table R1){
    //TODO
}

table operations::natural_join(table R1 ,table R2){
    //TODO
}
