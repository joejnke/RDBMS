// #include "../util/cell.hpp"
// #include "rSchema.hpp"
// #include "table.hpp"
// #include "../util/tuples.hpp"
#include<map>
#include <set>
#include <string>
#include<iostream>
#include <algorithm>
#include <bits/stdc++.h> 
#include <boost/variant.hpp>
#include <boost/algorithm/string.hpp>
using namespace std;


int main(){
    string datainput;
    vector<string> result; 
    // map<std::string,table> tableMap;
    // map<std::string,rSchema> rschemaMap;
    cout<<"enter the comand sepaating it with a comma\n";
    do{
cin>>datainput;
boost::algorithm::to_lower(datainput);
      boost::split(result, datainput, boost::is_any_of(",")); 
  if(result[0]=="create")
  {
  if(result.size()<=1)
  {
  cout<<"error: you have to specify what you want to do\n";
  
  }
  else if(result[1]=="table")
  {
if(result.size()<=2)
{
    cout<<"error: no relational schema name\n";
}
else{
  if(result.size()<=3)
  cout<<"error: no table name inserted\n";
  else
  {
    // tableMap.insert(result[3],table (rschemaMap.get(result[2])));
cout<<result[3]<<" table created\n";
 result.clear();
  }
  }
  }
  else if(result[1]=="rschema")
  {
   if(result.size()<=2)
   {
       cout<<"error: you have to specify the name of the relational schema\n";
  }
       else if(result.size()<=3)
       cout<<"error: yo need to insert the atribute names\n";
       else
       {
        //  rschemaMap.insert(result[2],rSchema (result[2], tuples (result[3],result[4])));
       cout<<result[2]<<" rschema created\n";
       result.clear();
       }
  }
  else{
    cout<<"error: unknown comand\n";
  }
  }
  else if (result[0]=="insert")
  {
   if(result.size()<=1)
       cout<<"error: you have to insert the table name then the row data\n";
    else
    {
        if(result.size()<=2)
        cout<<"error: you have to insert the row data\n";
        else
        {
            cout<<"data inserted to: "<<result[1]<<endl;
        }   
    }
  }
else if (result[0]=="remove")
  {
      if(result.size()<=1)
      cout<<"error: you have to specify what you want to remove\n";
      else if(result[1]=="row")
      {
   if(result.size()<=2)
       cout<<"error: you have to insert the table name then the row to be removed\n";
    else
    {
        if(result.size()<=3)
        cout<<"error: you have to insert the row to be removed\n";
        else
        {
            cout<<"data removed from: "<<result[2]<<endl;
        }   
    }
    }
    else if(result[1]=="table")
    {
         if(result.size()<=2)
    cout<<"error: you have to input the table name\n";
    else
    {
cout<<result[2]<<" removed\n";
    }
    }
  }
else if(result[0]=="display")
{
    if(result.size()<=1)
    cout<<"error: you have to input the table name\n";
    else
    {
cout<<"table displayed\n";
    }
}
else if(result[0]=="union")
{
    if(result.size()<=1)
    cout<<"error: insert the first table name\n";
    else
    {
        if(result.size()<=2)
        cout<<"error: you have to input the secont table name\n";
        else
        {
            cout<<"display the union\n";
        }
    }    
}
else if(result[0]=="intersection")
{
    if(result.size()<=1)
    cout<<"error: insert the first table name\n";
    else
    {
        if(result.size()<=2)
        cout<<"error: you have to input the secont table name\n";
        else
        {
            cout<<"display the intersection\n";
        }
    }    
}
else if(result[0]=="difference")
{
    if(result.size()<=1)
    cout<<"error: insert the first table name\n";
    else
    {
        if(result.size()<=2)
        cout<<"error: you have to input the secont table name\n";
        else
        {
            cout<<"display the difference\n";
        }
    }    
}
else if(result[0]=="project")
{
    if(result.size()<=1)
    cout<<"error: insert the table name\n";
    else
    {
        if(result.size()<=2)
        cout<<"error: you have to input attribute name\n";
        else
        {
            cout<<"display the union\n";
        }
    }    
}
else if(result[0]=="select")
{
    if(result.size()<=1)
    cout<<"error: oyu have to input the table name\n";
    else
    {
        cout<<"display the the selected data\n";
    }
    
}
else if(result[0]=="njoin")
{
    if(result.size()<=1)
    cout<<"error: insert the first table name\n";
    else
    {
        if(result.size()<=2)
        cout<<"error: you have to input the secont table name\n";
        else
        {
            cout<<"display the natural join\n";
        }
    }    
}
   result.clear();
    }while(datainput!="exit");
    return 0;
}
