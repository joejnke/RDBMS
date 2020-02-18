#ifndef TABLE_UTEST_H_
#define TABLE_UTEST_H_

#include <string>

using namespace std;


std::string test_default_constructor();
std::string test_parametrized_constructor();
std::string test_get_table_name();
std::string test_get_attributes();
std::string test_get_tableRSchema();
std::string test_get_column();
std::string test_add_row();
std::string test_remove_row();
std::string test_get_rows();
std::string test_set_rows();
std::string test_toString();
int get_tableTestCount();
int get_tablePassedTestCount();

#endif /*TABLE_UTEST_H_*/