#include"../util/tuples.hpp"
#include<boost/variant.hpp>
#include<iostream>
#include<set>
#include<string>

using namespace std;

set<set<int>> sameElm {{1}, {1, 1}};
set<set<int>> distinctElm {{1}, {1, 2}};

std::string test_default_constructor();

std::string test_parametrized_constructor();

std::string test_isEqual() {
    tuples testTup (1, 2);
    tuples testDistinctElm (1, 2);
    std::string result ("\nTest isEqual(): ");
    if (tuples::isEqual(testDistinctElm, testTup))
        result += "Pass ";
    else {
        result += "Failled";
    }
    
    return  result;    
};

std::string test_get_elements() {
    tuples testSameElm (1, 1);
    tuples testDistinctElm (1, 2);
    std::string result ("\nTest get_elements()\n(sameElm, distinctElm): ");
    if (testSameElm.get_elements == sameElm)
        result += "(Pass, ";
    if (testDistinctElm.get_elements == distinctElm)
        result += "Pass)\n";
    
    return  result;
};

std::string test_get();

int main() {

}
