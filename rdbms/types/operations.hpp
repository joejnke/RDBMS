#include "cell.hpp"
#include "rSchema.hpp"
#include "table.hpp"
#include "../util/tuples.hpp"
#include <iostream>
#include <set>
#include <algorithm>
class operations{
/*    private:
        table runion;
        table intersection;
        table difference;
        table projection;
        table selection;
        table natural_join;*/
    public:
        table runion (table R1 ,table R2);

        table intersection(table R1 ,table R2);

        table difference(table R1 ,table R2);

        table projection(table R1);

        table selection(table R1);

        table natural_join(table R1 ,table R2);        

};
