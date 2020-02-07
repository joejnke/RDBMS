#include "cell.hpp"
#include "rSchema.hpp"
#include "table.hpp"
#include "tuples.hpp"
#include <iostream>
#include <set>

class operations{
    private:
        std::set<tuples> relation;
    public:
        std::set<tuples> union(std::set<tuples>R1 ,std::set<tuples> R2);

        std::set<tuples> intersection(std::set<tuples> R1 ,std::set<tuples> R2);

        std::set<tuples> difference(std::set<tuples> R1 ,std::set<tuples> R2);

        std::set<tuples> projection(std::set<tuples> R1);

        std::set<tuples> selection(std::set<tuples> R1);

        std::set<tuples> natural_join(std::set<tuples> R1 ,std::set<tuples> R2);        

};
