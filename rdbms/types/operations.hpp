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
        static table runion (table R1 ,table R2);
        /**
        *  @brief Do union operation on two tables.
        *  @param the two tables the operation is done on.
        *  @return table of their union.
        */  
        static table intersection(table R1 ,table R2);
        /**
        *  @brief Do intersection operation on two tables.
        *  @param the two tables the operation is done on.
        *  @return table of their intersection.
        */ 
        static table difference(table R1 ,table R2);
        /**
        *  @brief Do difference operation on two tables.
        *  @param the two tables the operation is done on.
        *  @return table of their difference.
        */
        static table projection(table R1,string P);
        /**
        *  @brief Project the data values of the selected attribute.
        *  @param the table the operation is done on, and the attribute name for the projection.
        *  @return table of the projected values.
        */
        static table selection(table R1 , string A , string S);
        /**
        *  @brief project data from the table given the attribute name and the value
        *  @param table the operation is done on, the attribute name and value
        *  @return table of the projected data value
        */
        static table natural_join(table R1 ,table R2, string id1,string id2,string A1 ,string A2);    
        /**
        *  @brief project values from two tables with 
        *  @param the two tables the data values are projected from, the attribute names used to compare the two tables and the attribute names the data is projected from.
        *  @param table of the projected values.
        */

};

#endif  /*OPERATIONS_H_*/
