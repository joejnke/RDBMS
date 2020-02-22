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
    
        static table intersection(table R1 ,table R2);
    
        static table difference(table R1 ,table R2);
    
        static table projection(table R1,string P);
    
        static table selection(table R1 , string A , string S);
    
        static table natural_join(table R1 ,table R2, string id1,string id2,string A1 ,string A2);       

};

#endif  /*OPERATIONS_H_*/
