#include"../util/tuples.hpp"
#include<boost/variant.hpp>
#include<iostream>
#include<set>
#include<string>

using namespace std;

int testCount = 0;
int passedTestCount = 0;
std::string testResult;

set<set<int>> sameElm {{1}, {1, 1}};
set<set<int>> distinctElm {{1}, {1, 2}};

std::string test_default_constructor() {
    testCount++;
    tuples testTup;
    testResult = ("\nTest tuples(): ");
    if (testTup.get_elements.size() == 0) {
        testResult += "\nPass ";
        passedTestCount++;
    }
    else {
        testResult += "\nFail";
    }
    
    return  testResult;      
};

std::string test_parametrized_constructor() {
    testCount++;
    tuples testTup (1, 2);
    testResult = ("\nTest tuples(int elm1, int elm2): ");
    if (testTup.get_elements.size() != 0) {
        testResult += "\nPass ";
        passedTestCount++;
    }
    else {
        testResult += "\nFail";
    }
    
    return  testResult;  
};

std::string test_isEqual() {
    testCount++;
    tuples testTup (1, 2);
    tuples testDistinctElm (1, 2);
    testResult = ("\nTest isEqual(): ");
    if (tuples::isEqual(testDistinctElm, testTup)) {
        testResult += "\nPass ";
        passedTestCount++;
    }
    else {
        testResult += "\nFail";
    }
    
    return  testResult;    
};

std::string test_get_elements() {
    testCount++;
    tuples testSameElm (1, 1);
    tuples testDistinctElm (1, 2);
    testResult = ("\nTest get_elements(): ");
    if (testSameElm.get_elements == sameElm) {
        testResult += "\nPass for \"sameElm\"";        
        passedTestCount++;
    }
    else {
        testResult += "\nFail for \"sameElm\"";
    }
    
    if (testDistinctElm.get_elements == distinctElm) {
        testResult += "\nPass for \"distinctElm\"";
        passedTestCount++;        
    }

    else {
        testResult += "\nFail for \"distinctElm\"";
    }    
    return  testResult;
};

std::string test_get() {
    testCount++;
    tuples testTup (1, 1);
    testResult = ("\nTest get(): ");
    // test for out of bound: use exception handling
    // if (testTup.get(2) == 1) {
    //     testResult += "\nPass for \"index out of bound\", ";        
    //     passedTestCount++;
    // }    
    if (testTup.get(0) == 1) {
        testResult += "\nPass for \"same elements\" of index 0";        
        passedTestCount++;
    }
    else {
        testResult += "\nFail for \"same elements\" of index 0";
    }  

    if (testTup.get(1) == 1) {
        testResult += "\nPass for \"same elements\" of index 1";
        passedTestCount++;        
    }      
    else {
        testResult += "\nFail for \"same elements\" of index 1";
    }  

    tuples testTup (1, 2);
    if (testTup.get(0) == 1) {
        testResult += "\nPass for \"distinct elements\" of index 0";        
        passedTestCount++;
    }
    else {
        testResult += "\nFail for \"distinct elements\" of index 0";
    }  

    if (testTup.get(1) == 2) {
        testResult += "\nPass for \"distinct elements\" of index 1";
        passedTestCount++;        
    }
    else {
        testResult += "\nFail for \"distinct elements\" of index 1";
    }  

    return  testResult;    
    
};

int main() {

}
