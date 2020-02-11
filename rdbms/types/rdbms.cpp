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
   result.clear();
    }while(datainput!="exit");
    return 0;
}