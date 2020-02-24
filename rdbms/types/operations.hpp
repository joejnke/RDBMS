// Relational database managment system operations implementation -*- C++ -*-

#ifndef OPERATIONS_H_
#define OPERATIONS_H_

#include "cell.hpp"
#include "rSchema.hpp"
#include "table.hpp"
#include "tuples.hpp"
#include <iostream>
#include <set>
#include <algorithm>


/**
* Set of operations suported.
*
* Container for operations which are supported by the 
* relational database managment system. Every operation
* works based on the concepts of mathimatical, set and
* propositional theories. All the operations are static
* to the class.
*/
class operations{
    public:
        /**
        *  @brief Do union operation on two tables.
        *  @param R1,R2 the two tables the operation is done on.
        *  @return table of their union.
        *  the method does the union of the two tables by adding
        *  the data values of both tables to the new table.
        */  
        static table runion (table R1 ,table R2);
        /**
        *  @brief Do intersection operation on two tables.
        *  @param R1,R2 the two tables the operation is done on.
        *  @return table of their intersection.
        *  the method does the intersection of the two tables by
        *  adding the data values to the new table if only they
        *  exist on both tables.
        */ 
        static table intersection(table R1 ,table R2);
        /**
        *  @brief Do difference operation on two tables.
        *  @param R1,R2 the two tables the operation is done on.
        *  @return table of their difference.
        *  the method does the difference of the two tables by
        *  adding the data value of the first table if it doesn't 
        *  exist on the second table.
        */ 
        static table difference(table R1 ,table R2);
        /**
        *  @brief Project the data values of the selected attribute.
        *  @param R1 the table the operation is done on
        *  @param P attribute name for the projection.
        *  @return table of the projected values.
        *  the method does projection operation on the table by
        *  checking if the given attribute name matches any 
        *  attribute names of the table and adding the values under
        *  the attribute to the new table, if it does match.
        */        
        static table projection(table R1,string P);
        /**
        *  @brief project data from the table given the attribute name 
        *  and the value.
        *  @param R1 table the operation is done on.
        *  @param A the attribute name the selection operation is done on.
        *  @param S the criteria for the selection
        *  @return table of the projected data value
        *  the method does selection operation on the table by
        *  adding the value to the new table after checking if the given 
        *  attribute name matches any attribute names of the table and
        *  also if the given value matches the values under that attribute.         
        */
        static table selection(table R1 , string A , string S);
        /**
        *  @brief project values from two tables with.
        *  @param R1,R2 the two tables the data values are projected from.
        *  @param id1 attribute name used to compare the first table with
        *  the second.
        *  @param id2 attribute name used to compare the second table with
        *  the first.
        *  @param A1,A2 joining attributes from each tables respectively
        *  the method does natural join operation on the table by taking the
        *  values that are the same under id1 and id2 from their respective
        *  tables, then projecting the values under the attribute A1 from table 
        *  1 and under the attribute A2 from the table 2 which are in the same
        *  row.
        */
        static table natural_join(table R1 ,table R2, string id1,string id2,string A1 ,string A2);    


};

#endif  /*OPERATIONS_H_*/
