#ifndef TUPLES_UTEST_H_
#define TUPLES_UTEST_H_

#include <string>

using namespace std;


std::string test_default_constructor();
std::string test_parametrized_constructor();
std::string test_isEqual();
std::string test_get_elements();
std::string test_get();
std::string test_toString();
int get_tuplesTestCount();
int get_tuplesPassedTestCount();

#endif /*TUPLES_UTEST_H_*/