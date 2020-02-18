#include "../util/cell.hpp"
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
     for (auto tableRow_T1 : R1.get_rows()) {
         for(auto tableRow_T2:R2.get_rows())
         {
             if (tableRow_T1.toString()!=tableRow_T2.toString())
             t1.add_row(tableRow_T1);
         }
                     }
                     for (auto tableRow_T2 : R2.get_rows()) {
         for(auto tableRow_T1:R1.get_rows())
         {
             if (tableRow_T2.toString()!=tableRow_T1.toString())
             t1.add_row(tableRow_T2);
         }
                     }
                     return t1;
}
table operations::intersection(table R1 ,table R2){
    table t1;
    for (auto tableRow_T1 : R1.get_rows()) {
         for(auto tableRow_T2:R2.get_rows())
         {
             if (tableRow_T1.toString()==tableRow_T2.toString())
             t1.add_row(tableRow_T1);
         }
                     }
                     for (auto tableRow_T2 : R2.get_rows()) {
         for(auto tableRow_T1:R1.get_rows())
         {
             if (tableRow_T2.toString()==tableRow_T1.toString())
             t1.add_row(tableRow_T2);
         }
                     }
                     return t1;
}
table operations::difference(table R1 ,table R2)
{
table t1;
for (auto tableRow_T1 : R1.get_rows()) 
{
         for(auto tableRow_T2:R2.get_rows())
         {
             if (tableRow_T1.toString()!=tableRow_T2.toString())
             t1.add_row(tableRow_T1);
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
          for(auto tableRow_T1:R1.get_rows())
         {
               t1.add_row(tuples(tableRow_T1.get(g),""));
         }
return t1;
}
table operations::selection(table R1, string S)
{
    table t1;
       for(auto tableRow_T1:R1.get_rows())
         {
              int itr=0;
           while (itr<2)
           {
               if(tableRow_T1.get(itr)==S)
               t1.add_row(tableRow_T1);
               itr++;
           }
         }
return t1;
}
table operations::natural_join(table table1 ,table table2)
{
   throw "not implemented yet\n";
}
