#include "cell.hpp"
#include "tuples.hpp"
#include <boost/variant.hpp>
#include <iostream>
#include <set>
#include <string>

using namespace std;

int testCount = 0;
int passedTestCount = 0;
std::string testResult;
cell elmOne = 1;
cell elmTwo = "Ethiopia";


std::string test_default_constructor() {
    testCount++;
    tuples testTup;
    testResult = ("\nTest tuples(): ");
    if (testTup.get_elements().size() == 0) {
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
    tuples testTup (1, "Ethiopia");
    testResult = ("\nTest tuples(cell elm1, cell elm2): ");
    if (testTup.get_elements().size() != 0) {
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
    tuples testTup (1, "Ethiopia");
    tuples testDistinctElm (1, "Ethiopia");
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
    testCount +=2;  // for the two tests
    set<set<cell>> sameElm {{1}, {1, 1}};
    set<set<cell>> distinctElm {{1}, {1, "Ethiopia"}};    
    tuples testSameElm (1, 1);
    tuples testDistinctElm (1, "Ethiopia");

    testResult = ("\nTest get_elements(): ");
    if (testSameElm.get_elements() == sameElm) {
        testResult += "\nPass for \"sameElm\"";        
        passedTestCount++;
    }
    else {
        testResult += "\nFail for \"sameElm\"";
    }
    
    if (testDistinctElm.get_elements() == distinctElm) {
        testResult += "\nPass for \"distinctElm\"";
        passedTestCount++;        
    }

    else {
        testResult += "\nFail for \"distinctElm\"";
    }    
    return  testResult;
};

std::string test_get() {
    testCount +=4;  // for the four tests
    tuples testSameElm (1, 1);
    testResult = ("\nTest get(): ");
    // test for out of bound: use exception handling
    // if (testTup.get(2) == 1) {
    //     testResult += "\nPass for \"index out of bound\", ";        
    //     passedTestCount++;
    // }    
    if (testSameElm.get(0) == elmOne) {
        testResult += "\nPass for \"same elements\" of index 0";        
        passedTestCount++;
    }
    else {
        testResult += "\nFail for \"same elements\" of index 0";
    }  

    if (testSameElm.get(1) == elmOne) {
        testResult += "\nPass for \"same elements\" of index 1";
        passedTestCount++;        
    }      
    else {
        testResult += "\nFail for \"same elements\" of index 1";
    }  

    tuples testDistinctElmp (1, "Ethiopia");
    if (testDistinctElmp.get(0) == elmOne) {
        testResult += "\nPass for \"distinct elements\" of index 0";        
        passedTestCount++;
    }
    else {
        testResult += "\nFail for \"distinct elements\" of index 0";
    }  

    if (testDistinctElmp.get(1) == elmTwo) {
        testResult += "\nPass for \"distinct elements\" of index 1";
        passedTestCount++;        
    }
    else {
        testResult += "\nFail for \"distinct elements\" of index 1";
    }  

    return  testResult;    
    
};

std::string test_toString() {
    testCount++;
    tuples testTup (1, "Ethiopia");
    testResult = ("\nTest toString(): ");
    if ( "( 1 Ethiopia )" == testTup.toString()) {
        testResult += "\nPass ";
        passedTestCount++;
    }
    else {
        testResult += "\nFail";
    }
    
    return  testResult;    
};

int main() {
    cout<<"\n<<<<<<<<<<<<<<< Test tuples class >>>>>>>>>>>>>>>>\n";
    cout<< test_default_constructor();
    cout<< test_parametrized_constructor();
    cout<< test_isEqual();
    cout<< test_get_elements();
    cout<< test_get();
    cout<< test_toString();
    cout<<"\n\nPassed " << passedTestCount << "/" << testCount<<" tests";
    cout<<"\n<<<<<<<<<<< end of tuples class test >>>>>>>>>>>>>\n";
}
