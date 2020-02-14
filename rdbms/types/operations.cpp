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
    if (tuples::isEqual(R1.get_attributes() , R2.get_attributes()) == false){
        throw "Invalid Table atteribute types can't Union the two tables";
    }

    table::table runion (rSchema("runion",R1.get_attributes));
    /*
    std::set<tuples> set1 = R1.get_rows();
    std::set<tuples> set2 = R2.get_rows();
    
    std::set<tuples> set3; 
    std::set_union(set1.begin(),set1.end(),set2.begin(),set2.end(),std::back_inserter(set3));
    for (const auto &i : set3) {
            runion.add_row(i);
        } 
    
    */

    for (std::set<tuples>::iterator it=R1.get_rows().begin(); it!=R1.get_rows().end(); ++it)
        runion.add_row(*it);

    for (std::set<tuples>::iterator it2=R2.get_rows().begin(); it2!=R2.get_rows().end(); ++it2)
        runion.add_row(*it2); 

    return runion;
}

table operations::intersection(table R1 ,table R2){
    if (tuples::isEqual(R1.get_attributes() , R2.get_attributes()) == false){
        throw "Invalid Table atteribute types can't perform Intersection of the two tables";
    }

    table::table intersection (rSchema("runion",R1.get_attributes));

    std::set<tuples> set1 = R1.get_rows();
    std::set<tuples> set2 = R2.get_rows();
    
    std::set<tuples> set3; 
    std::set_intersection(set1.begin(),set1.end(),set2.begin(),set2.end(),std::back_inserter(set3));
    for (const std::set<tuples> &i : set3) {
            intersection.add_row(i);
        }



}

table operations::difference(table R1 ,table R2){
    if (tuples::isEqual(R1.get_attributes() , R2.get_attributes()) == false){
        throw "Invalid Table atteribute types can't perform Intersection of the two tables";
    }

    table::table difference (rSchema("runion",R1.get_attributes));

    std::set<tuples> set1 = R1.get_rows();
    std::set<tuples> set2 = R2.get_rows();
    
    std::set<tuples> set3; 
    std::set_difference(set1.begin(),set1.end(),set2.begin(),set2.end(),std::back_inserter(set3));
    for (const std::set<tuples> &i : set3) {
            difference.add_row(i);
        }


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
