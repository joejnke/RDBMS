#include<iostream>
#include<set>
#include<string>
#include<boost/variant.hpp>
using namespace std;
template<class T>
class Tuples {


    public:
        set<T> tuple1(T a);

        set<set<T>> tuple2(T a,T b);

        set<set<set<T>>> tuple3(T a,T b,T c);

        set<set<set<set<T>>>> tuple4(T a,T b,T c,T d);

        set<set<set<set<set<T>>>>> tuple5(T a,T b,T c,T d,T e);

        set<set<set<set<set<set<T>>>>>> tuple6(T a,T b,T c,T d,T e,T f);

        set<set<set<set<set<set<set<T>>>>>>> tuple7(T a,T b,T c,T d,T e,T f,T g);
};
