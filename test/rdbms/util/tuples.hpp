#include<boost/variant.hpp>
#include<iostream>
#include<set>
#include<string>

using namespace std;

class tuples {
    private:
        int num_of_elements;
        set<set<int>> elements;

    public:
        static bool isEqual(tuples tup1, tuples tup2);
        tuples();
        tuples(int elm1, int elm2);
        set<set<int>> get_elements();
        int get(int index);
};
