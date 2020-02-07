#include "cell.hpp"
#include "rSchema.hpp"
#include "table.hpp"
#include "tuples.hpp"
#include <iostream>
#include <set>

class operations{
        static std::set<table> relUnion(std::set<table>R1 ,std::set<table> R2);
      
        static std::set<table> intersection(std::set<table> R1 ,std::set<table> R2);
      
        static std::set<table> difference(std::set<table> R1 ,std::set<table> R2);
      
        static std::set<table> projection(std::set<table> R1);
      
        static std::set<table> selection(std::set<table> R1);
      
        static std::set<table> natural_join(std::set<table> R1 ,std::set<table> R2);        

};
