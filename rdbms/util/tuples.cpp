#include "cell.hpp"
#include "tuples.hpp"
#include <boost/variant.hpp>
#include <iostream>
#include <set>
#include <string>
using namespace std;


tuples::tuples()
{
}
tuples::tuples(cell elm1, cell elm2) 
{
  this->num_of_elements = 2;
  this->elements.insert(set<cell, cellComparator> {elm1});
  this->elements.insert(set<cell, cellComparator> {elm1, elm2});  
}
int tuples::get_num_of_elements(){
 return this->num_of_elements ;
}
set<set<cell, cellComparator>> tuples::get_elements()
{
  return this->elements;
}
cell tuples::get(int index) 
{
  if (index >= this->num_of_elements)
  {
    throw std::out_of_range ("index out of range ...");
  }  
  // if the two elements are identical sets, 
  // std::set will reduce this->elements to 1 and hence the size becomes one
  // so return the first which is true for both index 0 and 1
  else if (this->elements.size() == 1) 
  {
    return *this->elements.begin()->begin();
  }
  // if the two elements of this->elements are not identical sets, 
  // then return the one with size one for index 0 and 
  // the one with size 2, which is >1, for index 1
  else if (index == 0) 
  {
    set<set<cell, cellComparator>>::iterator itr;
    for (itr = this->elements.begin(); itr != this->elements.end(); itr++) 
    {
      if (itr->size() == 1) 
      {
        return *itr->begin();
      }
    }
  }
  else 
  {
    set<set<cell, cellComparator>>::iterator itr;
    std::set<cell, cellComparator>::iterator firstElmItr;  // iterator for the elment of index 0
    for (itr = this->elements.begin(); itr != this->elements.end(); itr++) 
    {
      if (itr->size() > 1) 
      {
        firstElmItr = itr->find(this->get(--index));
        if (itr->begin() == firstElmItr ) 
        {
          return *(++(itr->begin()));
        }
        else 
        {
          return *itr->begin();
        }
      }
    }
  }
}
std::string tuples::toString() 
{
  set<set<cell, cellComparator>>::iterator itr;
  std::string info = "( ";
  for (int i = 0; i < this->elements.size(); i++) 
  {
    info += this->get(i) + " ";
  }
  info += ")";

  return info;
}
bool tuples::isEqual(tuples tup1, tuples tup2) 
{
  return tup1.get_elements() == tup2.get_elements();
}
