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
cell cellOfIntSet = set<int> {12, 19, 21, 27};
cell cellOfDoubleSet = set<double> {1.2, 1.9, 2.1, 2.7};
cell cellOfStringSet = set<std::string> {"Abyssinia", "Ethiopia"};

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

    if (std::to_string(2721.1912) == boost::apply_visitor(toString(), cellOfDouble)) {
        testResult += "\nPass for \"cell of type double\"";        
        passedTestCount++;
        testCount++;
    }

    else {
        testResult += "\nFail for \"cell of type double\"";
        testResult += "\n" + boost::apply_visitor(toString(), cellOfDouble) + "\n";
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
            
    if ("( 12 19 21 27 )" == boost::apply_visitor(toString(), cellOfIntSet)) {
        testResult += "\nPass for \"cell of type set<int>\"";        
        passedTestCount++;
        testCount++;
    }

    else {
        testResult += "\nFail for \"cell of type set<int>\"";
        testCount++;
    }
            
    if ("( 1.200000 1.900000 2.100000 2.700000 )" == boost::apply_visitor(toString(), cellOfDoubleSet)) {
        testResult += "\nPass for \"cell of type set<double>\"";        
        passedTestCount++;
        testCount++;
    }

    else {
        testResult += "\nFail for \"cell of type set<double>\"";
        testResult += "\n" + boost::apply_visitor(toString(), cellOfDoubleSet) + "\n";
        testCount++;
    }
            
    if ("( Abyssinia Ethiopia )" == boost::apply_visitor(toString(), cellOfStringSet)) {
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
    cout<<"\n<<<<<<<<<<<<<<< Test cell header >>>>>>>>>>>>>>>>\n";
    cout<< test_toString();
    cout<<"\n\nPassed " << passedTestCount << "/" << testCount<<" tests";
    cout<<"\n<<<<<<<<<<< end of cell header test >>>>>>>>>>>>>\n";
}