#include "cell.hpp"
#include "operations.hpp"
#include "rSchema.hpp"
#include "schema.hpp"
#include "table.hpp"
#include "tuples.hpp"
#include <boost/variant.hpp>
#include <iostream>
#include <set>
#include <string>


using namespace std;

int main() {
    cout<<"\n<<<<<<<<<<<<<<< Test tuples class >>>>>>>>>>>>>>>>\n";
    cout<< test_default_constructor() <<"\n";
    cout<< test_parametrized_constructor() <<"\n";
    cout<< test_isEqual() <<"\n";
    cout<< test_get_elements() <<"\n";
    cout<< test_get() <<"\n";
    cout<< test_toString();
    cout<<"\n\nPassed " << passedTestCount << "/" << testCount<<" tests";
    cout<<"\n<<<<<<<<<<< end of tuples class test >>>>>>>>>>>>>\n";

    cout<<"\n<<<<<<<<<<<<<<< Test rSchema class >>>>>>>>>>>>>>>>\n";
    cout<< test_default_constructor() <<"\n";
    cout<< test_parametrized_constructor() <<"\n";
    cout<< test_get_name() <<"\n";
    cout<< test_get_attributes() <<"\n";
    cout<< test_toString();
    cout<<"\n\nPassed " << passedTestCount << "/" << testCount<<" tests";
    cout<<"\n<<<<<<<<<<< end of rSchema class test >>>>>>>>>>>>>\n";

    cout<<"\n<<<<<<<<<<<<<<< Test table class >>>>>>>>>>>>>>>>\n";
    cout<< test_default_constructor() <<"\n";
    cout<< test_parametrized_constructor() <<"\n";
    cout<< test_get_table_name() <<"\n";
    cout<< test_get_attributes() <<"\n";
    cout<< test_get_tableRSchema() <<"\n";
    // cout<< test_get_column() <<"\n";
    // cout<< test_add_row() <<"\n";
    // cout<< test_remove_row() <<"\n";
    // cout<< test_get_rows() <<"\n";
    // cout<< test_set_rows() <<"\n";
    cout<< test_toString();
    cout<<"\n\nPassed " << passedTestCount << "/" << testCount<<" tests";
    cout<<"\n<<<<<<<<<<< end of table class test >>>>>>>>>>>>>\n";

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