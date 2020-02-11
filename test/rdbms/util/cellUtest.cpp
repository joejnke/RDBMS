#include "cell.hpp"
#include <boost/variant.hpp>
#include <iostream>
#include <set>
#include <string>

using namespace std;

int testCount = 0;
int passedTestCount = 0;
std::string testResult;

cell cellOfInt = 27211912;
cell cellOfDouble = 2721.1912;
cell cellOfString = "Ethiopia";
cell cellOfIntSet = set<int> {27, 21, 19, 12};
cell cellOfDoubleSet = set<double> {2.7, 2.1, 1.9, 1.2};
cell cellOfStringSet = set<int> {"Ethiopia", "Abyssinia"};

std::string test_toString() {
    testResult = "\nTest toString(): ";
    if ("27211912" == boost::apply_visitor(toString(), cellOfInt)) {
        testResult += "\nPass for \"cell of type int\"";        
        passedTestCount++;
        testCount++;
    }

    else {
        testResult += "\nFail for \"cell of type int\"";
        testCount++;
    }

    if ("2721.1912" == boost::apply_visitor(toString(), cellOfDouble)) {
        testResult += "\nPass for \"cell of type double\"";        
        passedTestCount++;
        testCount++;
    }

    else {
        testResult += "\nFail for \"cell of type double\"";
        testCount++;
    }

    if ("Ethiopia" == boost::apply_visitor(toString(), cellOfString)) {
        testResult += "\nPass for \"cell of type string\"";        
        passedTestCount++;
        testCount++;
    }

    else {
        testResult += "\nFail for \"cell of type string\"";
        testCount++;
    }
            
    if ("(27 21 19 12)" == boost::apply_visitor(toString(), cellOfIntSet)) {
        testResult += "\nPass for \"cell of type set<int>\"";        
        passedTestCount++;
        testCount++;
    }

    else {
        testResult += "\nFail for \"cell of type set<int>\"";
        testCount++;
    }
            
    if ("(2.7 2.1 1.9 1.2)" == boost::apply_visitor(toString(), cellOfDoubleSet)) {
        testResult += "\nPass for \"cell of type set<double>\"";        
        passedTestCount++;
        testCount++;
    }

    else {
        testResult += "\nFail for \"cell of type set<double>\"";
        testCount++;
    }
            
    if ("(Ethiopia Abyssinia)" == boost::apply_visitor(toString(), cellOfStringSet)) {
        testResult += "\nPass for \"cell of type set<std::string>\"";        
        passedTestCount++;
        testCount++;
    }

    else {
        testResult += "\nFail for \"cell of type set<std::string>\"";
        testCount++;
    }
                    
    return testResult;
};

int main() {
    cout<<"\n<<<<<<<<<<<<<<< Test tuples class >>>>>>>>>>>>>>>>\n";
    cout<< test_toString();
    cout<<"\n\nPassed " << passedTestCount << "/" << testCount<<" tests";
    cout<<"\n<<<<<<<<<<< end of tuples class test >>>>>>>>>>>>>\n";
}