#include<boost/variant.hpp>
#include<iostream>
#include<set>
#include<string>

using namespace std;

template<class T>
class tuples {
    private:
        set<set<T>> elements;
    public:
        tuples();
        tuples(T elem1, T... elems);
        // get type of every element
        // toString the tuple
};
