#include "cell.hpp"
#include "operations.hpp"
#include "rSchema.hpp"
#include "table.hpp"
#include "tuples.hpp"
#include <algorithm>
#include <iostream>
#include <set>
#include<string>

table operations::runion(table R1 ,table R2)
{
    table t1;
     for (auto tableRow : R1.get_rows()) {
         for(auto tableRow1:R2.get_rows())
         {
             if (tableRow.toString()!=tableRow1.toString())
             t1.add_row(tableRow);
         }
                     }
                     for (auto tableRow2 : R2.get_rows()) {
         for(auto tableRow3:R1.get_rows())
         {
             if (tableRow2.toString()!=tableRow3.toString())
             t1.add_row(tableRow2);
         }
                     }
                     return t1;
}
table operations::intersection(table R1 ,table R2){
    table t1;
    for (auto tableRow : R1.get_rows()) {
         for(auto tableRow1:R2.get_rows())
         {
             if (tableRow.toString()==tableRow1.toString())
             t1.add_row(tableRow);
         }
                     }
                     for (auto tableRow2 : R2.get_rows()) {
         for(auto tableRow3:R1.get_rows())
         {
             if (tableRow2.toString()==tableRow3.toString())
             t1.add_row(tableRow2);
         }
                     }
                     return t1;
}
table operations::difference(table R1 ,table R2)
{
table t1;
for (auto tableRow : R1.get_rows()) 
{
         for(auto tableRow1:R2.get_rows())
         {
             if (tableRow.toString()!=tableRow1.toString())
             t1.add_row(tableRow);
         }
}
         return t1;
}
table operations::projection(table R1,string P)
{
    int g;
     table t1;
     int i=R1.get_tableRSchema().get_attributes().get_num_of_elements()-1;
        while(i>=0)
            {
                   if(R1.get_tableRSchema().get_attributes().get(i)==P)
                   g=0;
              else if(R1.get_tableRSchema().get_attributes().get(i)==P)
              g=1;
              i--;
              }
          for(auto tableRow1:R1.get_rows())
         {
               t1.add_row(tuples(tableRow1.get(g),""));
         }
return t1;
}
table operations::selection(table R1, string S)
{
    table t1;
       for(auto tableRow1:R1.get_rows())
         {
              int itr=0;
           while (itr<2)
           {
               if(tableRow1.get(itr)==S)
               t1.add_row(tableRow1);
               itr++;
           }
         }
return t1;
}
table operations::natural_join(table table1 ,table table2)
{
   throw "not implemented yet\n";
}
