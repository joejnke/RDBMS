#include "../../../rdbms/util/cell.hpp"
#include "../../../rdbms/util/tuples.hpp"
#include <boost/variant.hpp>
#include "../../../rdbms/types/rSchema.hpp"
#include "../../../rdbms/types/table.hpp"
#include "../../../rdbms/types/operations.hpp"
#include <string>


#include <iostream>
#include <set>


bool test_return_union()
{
    rSchema schema1 = rSchema("students", tuples("Name","Age"));
     rSchema schema2 = rSchema("employees", tuples("Name","Age"));
     // create tables 
    table R1 = table(schema1);
    table R2 = table(schema2);
    table union_R1_R2;


    // create tuples to be inserted to the tables
    cell elmOne = 30;
    cell elmTwo = 20;
    cell elmThree = 30;
    cell elmFour = 26;
    tuples R1_row1 (elmOne, elmTwo);
    tuples R2_row1 = tuples(elmThree, elmFour);
    // add rows to the table
    R1.add_row(R1_row1);
    R2.add_row(R2_row1);
   
    ///////////////////////////////
    // union this tables 
    operations operation_union;
    union_R1_R2 = operation_union.runion(R1, R2);
    set<tuples> union_values;
    union_values.insert(R1_row1);
    union_values.insert(R2_row1);

    if(union_values == union_R1_R2.get_rows()){
        return true;
    }
      
    return false;  
}
  
bool test_return_intersect()
{
    rSchema schema1 = rSchema("students", tuples("Name","Age"));
     rSchema schema2 = rSchema("employees", tuples("Name","Age"));
     // create tables 
    table R1 = table(schema1);
    table R2 = table(schema2);
    table intersect_R1_R2;


    // create tuples to be inserted to the tables
    cell elmOne = 30;
    cell elmTwo = 20;
    cell elmThree = 30;
    cell elmFour = 20;
    tuples R1_row1 (elmOne, elmTwo);
    tuples R2_row1 = tuples(elmThree, elmFour);
    // add rows to the table
    R1.add_row(R1_row1);
    R2.add_row(R2_row1);
   
    ///////////////////////////////
    // union this tables 
    operations operation_intersect;
    intersect_R1_R2 = operation_intersect.intersection(R1, R2);
    set<tuples> intersect_values;
    intersect_values.insert(R1_row1);

    if(intersect_values == intersect_R1_R2.get_rows()){
        return true;
    }
    return false;  
}

bool test_return_difference()
{
    rSchema schema1 = rSchema("students", tuples("Name","Age"));
     rSchema schema2 = rSchema("employees", tuples("Name","Age"));
     // create tables 
    table R1 = table(schema1);
    table R2 = table(schema2);
    table difference_R1_R2;


    // create tuples to be inserted to the tables
    cell elmOne = 30;
    cell elmTwo = 20;
    cell elmThree = 30;
    cell elmFour = 20;
    cell elmFive = 40;
    cell elmSix = 50;
    tuples R1_row1 (elmOne, elmTwo);
    tuples R2_row1 = tuples(elmThree, elmFour);
    tuples R1_row2 = tuples(elmFive, elmSix);
    // add rows to the table
    R1.add_row(R1_row1);
    R1.add_row(R1_row2);
    R2.add_row(R2_row1);
   
    ///////////////////////////////
    // union this tables 
    operations operation_difference;
    difference_R1_R2 = operation_difference.difference(R1, R2);
    set<tuples> difference_values;
    difference_values.insert(R1_row2);
    
    if(difference_values == difference_R1_R2.get_rows()){
        return true;
    }
    return false;  
}



int main(){
    
    //run test_return_valid check, if return value is true 
    if(test_return_union()){
        cout<<"result from the union table is correct";
        
    }
    else
    {
        cout<<"the result from the union table is incorrect";
       
    }
    if(test_return_intersect()){
        cout<<"result from the intersection table is correct";
    }
    else
    {
        cout<<"the result from the intersection table is incorrect";
        
    }
    if(test_return_difference()){
        cout<<"result from the difference table is correct";
       
    }
    else
    {
        cout<<"the result from the difference table is incorrect";
        
    }
    

    


}
