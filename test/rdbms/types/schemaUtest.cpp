#include "schema.hpp"
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
    schema testSchema;
    testResult = ("\nTest schema(): ");
    if (testSchema.get_rSchemaSet().size() == 0) {
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
    rSchema testRS ("Student", tuples ("Name", "Age"));    
    schema testSchema (std::set<rSchema, rSchemaComparator> {testRS});    
    testResult = ("\nTest schema(std::set<rSchema, rSchemaComparator> rsSet): ");
    if (testSchema.get_rSchemaSet().size() != 0 ) {
        testResult += "\nPass ";
        passedTestCount++;
    }
    else {
        testResult += "\nFail";
    }
    
    return  testResult;
};

std::string test_add_rSchema() {
    testCount++;
    rSchema testRS ("Student", tuples ("Name", "Age"));
    schema testSchema (std::set<rSchema, rSchemaComparator> {testRS}); 

    rSchema rsToAdd ("Teacher", tuples ("Name", "Course"));
    testSchema.add_rSchema(rsToAdd);

    testResult = ("\nTest add_rSchema(rSchema rs): ");
    if (testSchema.get_rSchemaSet().find(rsToAdd) != testSchema.get_rSchemaSet().end()) {
        testResult += "\nPass ";
        passedTestCount++;
    }
    else {
        testResult += "\nFail";
    }
    
    return  testResult;
};

std::string test_remove_rSchema() {
    testCount++;
    rSchema testRS ("Student", tuples ("Name", "Age"));
    schema testSchema (std::set<rSchema, rSchemaComparator> {testRS}); 

    rSchema rsToRemove ("Teacher", tuples ("Name", "Course"));
    testSchema.add_rSchema(rsToRemove);
    testSchema.remove_rSchema("Teacher");

    testResult = ("\nTest remove_rSchema(std::string name): ");
    if (testSchema.get_rSchemaSet().find(rsToRemove) == testSchema.get_rSchemaSet().end()) {
        testResult += "\nPass ";
        passedTestCount++;
    }
    else {
        testResult += "\nFail";
    }
    
    return  testResult;
};

std::string test_get_rSchemaSet() {
    testCount++;
    rSchema testRS1 ("Student", tuples ("Name", "Age"));
    rSchema testRS2 ("Teacher", tuples ("Name", "Course"));
    schema testSchema (std::set<rSchema, rSchemaComparator> {testRS1}); 
    testSchema.add_rSchema(testRS2);
    
    std::set<rSchema, rSchemaComparator> rSchemaSetToCompare {testRS1, testRS2};
    
    testResult = ("\nTest get_rSchemaSet(): ");
    if (rSchemaSetToCompare == testSchema.get_rSchemaSet()) {
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
    rSchema testRS1 ("Student", tuples ("Name", "Age"));
    rSchema testRS2 ("Teacher", tuples ("Name", "Course"));
    schema testSchema (std::set<rSchema, rSchemaComparator> {testRS1}); 
    testSchema.add_rSchema(testRS2);
    std::string stringToCompare = "Student\n( Name Age )\nTeacher\n( Name Course )\n";
    testResult = ("\nTest toString(): ");
    if (stringToCompare == testSchema.toString()) {
        testResult += "\nPass ";
        passedTestCount++;
    }
    else {
        testResult += "\nFail";
    }
    
    return  testResult;
};

int main() {
    cout<<"\n<<<<<<<<<<<<<<< Test schema class >>>>>>>>>>>>>>>>\n";
    cout<< test_default_constructor() <<"\n";
    cout<< test_parametrized_constructor() <<"\n";
    cout<< test_add_rSchema() <<"\n";
    cout<< test_remove_rSchema() <<"\n";
    cout<< test_get_rSchemaSet() <<"\n";
    cout<< test_toString();
    cout<<"\n\nPassed " << passedTestCount << "/" << testCount<<" tests";
    cout<<"\n<<<<<<<<<<< end of schema class test >>>>>>>>>>>>>\n";
}
