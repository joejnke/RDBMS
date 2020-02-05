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
tuples<T>::tuples(T elem1, ...) { // check if variadic function syntax is correct
  va_lsit elems;
  if (elems.length == 0) {
    this->elements.insert(set<T> (elem1));
  }

  else if (elems.length == 1) {
    this->elements.insert(set<T> (elem1));
    this->elements.insert(set<T> (elem1, va_arg(elems, T)));
  }

  else {
    this->elements.insert(set<T> (elem1));
    this->elements.insert(set<T> (set<T> (elem1), tuples<T> (va_arg(elems, T), va_arg(elems, T)))); //needs to check if it violet set theory
  }
}