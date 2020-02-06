#include "tuples.hpp"
#include <boost/variant.hpp>
#include <cstdarg>
#include <iostream>
#include <set>
#include <string>

using namespace std;

// class T is assumed to be a typedef for boost::variant<double,std::string,int which we call it cell
template<class T>
tuples<T>::tuples() {}

template<class T>
tuples<T>::tuples(T argSize, ...) { // check if variadic function syntax is correct
  va_list elems;
  va_start (elems, argSize); // elems hold all arguments after elem1
  
  if (argSize == 1) {
    this->elements.insert(set<T> (va_arg(elems, T)));
  }

  else if (argSize == 2) {
    T firstItem = va_arg(elems, T);
    this->elements.insert(set<T> (firstItem));
    this->elements.insert(set<T> (firstItem, va_arg(elems, T)));
  }

  else {
    T firstItem = va_arg(elems, T);
    this->elements.insert(set<T> (firstItem));
    this->elements.insert(set<T> (set<T> (firstItem), tuples<T> (argSize - 1, elems... ).elements))); //needs to check if it violet set theory
  }
}