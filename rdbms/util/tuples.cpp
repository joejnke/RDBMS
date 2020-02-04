#include "tuples.hpp"
#include <boost/variant.hpp>
#include <iostream>
#include <set>
#include <string>

using namespace std;

// class T is assumed to be a typedef for boost::variant<double,std::string,int which we call it cell
template<class T>
tuples::tuples() {}

template<class T>
tuples::tuples(T elem1, T... elems) { // check if variadic function syntax is correct
  if (elems.length == 0) {
    this->elements.insert(set<T> (elem1));
  }

  else if (elems.length == 1) {
    this->elements.insert(set<T> (elem1));
    this->elements.insert(set<T> (elem1, elems[0]));
  }

  else {
    this->elements.insert(set<T> (elem1));
    this->elements.insert(set<T> (set<T> (elem1), tuples<T> (elems[0], elems[1:]))); //needs to check if it violet set theory
  }
}