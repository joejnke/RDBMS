#include "rSchema.hpp"
#include "tuples.hpp"
#include <iostream>
#include <string>

using namespace std;

int testCount = 0;
int passedTestCount = 0;
std::string testResult;

std::string test_default_constructor() {
    testCount++;
    rSchema testRS;
    testResult = ("\nTest rSchema(): ");
    if ((testRS.get_attributes().get_elements().size() == 0) and (testRS.get_name().empty())) {
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
    rSchema testRS;    
    testResult = ("\nTest rSchema(std::string rsName, tuples rsAttribs): ");
    if ((testRS.get_attributes().get_elements().size() != 0) and !(testRS.get_name().empty())) {
        testResult += "\nPass ";
        passedTestCount++;
    }
    else {
        testResult += "\nFail";
    }
    
    return  testResult;
};

std::string test_get_name() {
    testCount++;
    rSchema testRS ("Student", tuples ("Name", "Age"));    
    testResult = ("\nTest get_name(): ");
    if (testRS.get_name() == "Student") {
        testResult += "\nPass ";
        passedTestCount++;
    }
    else {
        testResult += "\nFail";
    }
    
    return  testResult;
};

std::string test_get_attributes() {
    testCount++;
    rSchema testRS ("Student", tuples ("Name", "Age"));    
    testResult = ("\nTest get_attributes(): ");
    if (tuples::isEqual(testRS.get_attributes(), tuples ("Name", "Age"))) {
        testResult += "\nPass ";
        passedTestCount++;
    }
    else {
        testResult += "\nFail";
    }
    
    return  testResult;
};

std::string test_toString() {
    testCount++;
    rSchema testRS ("Student", tuples ("Name", "Age"));    
    testResult = ("\nTest toString(): ");
    if ("Student\n( Name Age )" == testRS.toString()) {
        testResult += "\nPass ";
        passedTestCount++;
    }
    else {
        testResult += "\nFail";
    }
    
    return  testResult;
};

int get_rSchemaTestCount() {
    return testCount;
}

int get_rSchemaPassedTestCount() {
    return passedTestCount;
}
