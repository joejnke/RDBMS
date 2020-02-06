#include<boost/variant.hpp>
#include<iostream>
#include<set>
#include<string>

using namespace std;

class tuples {
    static bool isEqual(tuples tup1, tuples tup2);

    private:
        int num_of_elements;
        set<set<int>> elements;

    public:
        tuples();
        tuples(int elm1, int elm2);
        set<set<int>> get_elements();
        int get(int index);
};
