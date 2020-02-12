#include "cell.hpp"
#include "rSchema.hpp"
#include "table.hpp"
#include "tuples.hpp"
#include <iostream>
#include <set>
#include <string>

using namespace std;

int testCount = 0;
int passedTestCount = 0;
std::string testResult;

// test_default_constructor has to be re-impelemented as it depends
// on the impementation of another class, rSchema
std::string test_default_constructor() {
    testCount++;
    table testTable;
    testResult = ("\nTest table(): ");
    if ((testTable.get_tableRSchema().get_attributes().get_elements().size() == 0) and
        (testTable.get_tableRSchema().get_name().empty())) {
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
    table testTable (testRS);
    std::string stringToCompare = "Student\n( Name Age )";

    testResult = ("\nTest table(rSchema spec): ");
    if (stringToCompare == testTable.get_tableRSchema().toString()) {
        testResult += "\nPass ";
        passedTestCount++;
    }
    else {
        testResult += "\nFail";
    }
    
    return  testResult;
};

std::string test_get_table_name() {
    testCount++;
    rSchema testRS ("Student", tuples ("Name", "Age"));    
    table testTable (testRS);

    testResult = ("\nTest get_table_name(): ");
    if ("Student" == testTable.get_table_name()) {
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
    table testTable (testRS);

    testResult = ("\nTest get_attributes(): ");
    if (tuples::isEqual(tuples ("Name", "Age"), testTable.get_attributes())) {
        testResult += "\nPass ";
        passedTestCount++;
    }
    else {
        testResult += "\nFail";
    }
    
    return  testResult;
};

std::string test_get_tableRSchema() {
    testCount++;
    rSchema testRS ("Student", tuples ("Name", "Age"));    
    table testTable (testRS);
    std::string stringToCompare = "Student\n( Name Age )";

    testResult = ("\nTest get_tableRSchema(): ");
    if (stringToCompare == testTable.get_tableRSchema().toString()) {
        testResult += "\nPass ";
        passedTestCount++;
    }
    else {
        testResult += "\nFail";
    }
    
    return  testResult;
};

std::string test_get_column() {
    // TODO
};

std::string test_get_rows() {
    // TODO: requires a comparator for tuples. So there has to be comparaor for 
    // cell, tuples, rSchema, tables and schema. The comparator is one that can be use with set
};

std::string test_set_rows() {
    // TODO
};

std::string test_add_row() {
    // TODO
};

std::string test_remove_row() {
    // TODO
};

std::string test_toString() {
    testCount++;
    rSchema testRS ("Student", tuples ("Name", "Age"));    
    table testTable (testRS);
    testTable.add_row(tuples ("Dibora", 20));
    testTable.add_row(tuples ("Elias", 24));

    std::string stringToCompare = "Student\n( Name Age )\n( Dibora 20 )\n( Elias 24 )\n";

    testResult = ("\nTest toString(): ");
    if (stringToCompare == testTable.toString()) {
        testResult += "\nPass ";
        passedTestCount++;
    }
    else {
        testResult += "\nFail";
    }
    
    return  testResult;    
};

int main() {
    cout<<"\n<<<<<<<<<<<<<<< Test table class >>>>>>>>>>>>>>>>\n";
    cout<< test_default_constructor() <<"\n";
    cout<< test_parametrized_constructor() <<"\n";
    cout<< test_get_table_name() <<"\n";
    cout<< test_get_attributes() <<"\n";
    cout<< test_get_tableRSchema() <<"\n";
    // cout<< test_get_column() <<"\n";
    // cout<< test_get_rows() <<"\n";
    // cout<< test_set_rows() <<"\n";
    // cout<< test_add_row() <<"\n";
    // cout<< test_remove_row() <<"\n";
    cout<< test_toString();
    cout<<"\n\nPassed " << passedTestCount << "/" << testCount<<" tests";
    cout<<"\n<<<<<<<<<<< end of table class test >>>>>>>>>>>>>\n";
}
