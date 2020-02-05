#include "tuples.hpp"
#include <boost/variant.hpp>
#include <iostream>
#include <set>
#include <string>

using namespace std;

template<class T>
set<T> tuples::tuple1(T a){
  set<T> total_set;

  total_set.insert(a);

  return total_set;
}

template<class T>
set<set<T>> tuples::tuple2(T a,T b){
  set<T> total_set;
  set<set<T>>first_orderd;

  total_set.insert(a);
  total_set.insert(b);

  first_orderd.insert(total_set);

  return first_orderd;
}

template<class T>
set<set<set<T>>> tuples::tuple3(T a,T b,T c){
  set<T> total_set;
  set<set<T>>first_orderd;
  set<set<set<T>>>second_orderd;

  total_set.insert(a);
  total_set.insert(b);
  total_set.insert(c);

  first_orderd.insert(total_set);
  second_orderd.insert(first_orderd);
  return second_orderd;
}

template<class T>
set<set<set<set<T>>>> tuples::tuple4(T a,T b,T c,T d){
  set<T> total_set;
  set<set<T>>first_orderd;
  set<set<set<T>>>second_orderd;
  set<set<set<set<T>>>> third_orderd;
  total_set.insert(a);
  total_set.insert(b);
  total_set.insert(c);
  total_set.insert(d);
  first_orderd.insert(total_set);
  second_orderd.insert(first_orderd);
  third_orderd.insert(second_orderd);

  return third_orderd;
}

template<class T>
set<set<set<set<set<T>>>>> tuples::tuple5(T a,T b,T c,T d,T e){
  set<T> total_set;
  set<set<T>>first_orderd;
  set<set<set<T>>>second_orderd;
  set<set<set<set<T>>>> third_orderd;
  set<set<set<set<set<T>>>>> fourth_orderd;

  total_set.insert(a);
  total_set.insert(b);
  total_set.insert(c);
  total_set.insert(d);
  total_set.insert(e);

  first_orderd.insert(total_set);
  second_orderd.insert(first_orderd);
  third_orderd.insert(second_orderd);
  fourth_orderd.insert(third_orderd);

  return fourth_orderd;
}

template<class T>
set<set<set<set<set<set<T>>>>>> tuples::tuple6(T a,T b,T c,T d,T e,T f){
  set<T> total_set;
  set<set<T>>first_orderd;
  set<set<set<T>>>second_orderd;
  set<set<set<set<T>>>> third_orderd;
  set<set<set<set<set<T>>>>> fourth_orderd;
  set<set<set<set<set<set<T>>>>>> fifth_orderd;

  total_set.insert(a);
  total_set.insert(b);
  total_set.insert(c);
  total_set.insert(d);
  total_set.insert(e);
  total_set.insert(f);

  first_orderd.insert(total_set);
  second_orderd.insert(first_orderd);
  third_orderd.insert(second_orderd);
  fourth_orderd.insert(third_orderd);
  fifth_orderd.insert(fourth_orderd);

  return fifth_orderd;
}

template<class T>
set<set<set<set<set<set<set<T>>>>>>> tuples::tuple7(T a,T b,T c,T d,T e,T f,T g){
  set<T> total_set;
  set<set<T>>first_orderd;
  set<set<set<T>>>second_orderd;
  set<set<set<set<T>>>> third_orderd;
  set<set<set<set<set<T>>>>> fourth_orderd;
  set<set<set<set<set<set<T>>>>>> fifth_orderd;
  set<set<set<set<set<set<set<T>>>>>>> six_orderd ;
  total_set.insert(a);
  total_set.insert(b);
  total_set.insert(c);
  total_set.insert(d);
  total_set.insert(e);
  total_set.insert(f);
  total_set.insert(g);
  first_orderd.insert(total_set);
  second_orderd.insert(first_orderd);
  third_orderd.insert(second_orderd);
  fourth_orderd.insert(third_orderd);
  fifth_orderd.insert(fourth_orderd);
  six_orderd.insert(fifth_orderd);

  return six_orderd;
}

int main(){
  int count;
  set<boost::variant<double,std::string,int>> result1;
  set<set<boost::variant<double,std::string,int>>> result2;
  set<set<set<boost::variant<double,std::string,int>>>> result3;
  set<set<set<set<boost::variant<double,std::string,int>>>>> result4;
  set<set<set<set<set<boost::variant<double,std::string,int>>>>>> result5;
  set<set<set<set<set<set<boost::variant<double,std::string,int>>>>>>> result6;
  set<set<set<set<set<set<set<boost::variant<double,std::string,int>>>>>>>> result7;
  boost::variant<double,std::string,int> cell;
  std::vector<boost::variant<double,std::string,int>> h;
  tuples<boost::variant<double,std::string,int>>  Tu ;

  std::cout << "how many: " << '\n';
  std::cin >> count;
  // while (cin >> v)
  // {
  // h.push_back(a);
  // b--;
  // if(b==0)
  // break;
  // }
  // for (auto ir = h.rbegin(); ir != h.rend(); ++ir)
  //         cout << *ir << " ";
  if(count==1){
    string a;

    std::cin >> a ;
    result1 = Tu.tuple1(a);
    std::cout << "(" ;
    for (set<boost::variant<double,std::string,int>>::iterator it_in=result1.begin();it_in!=result1.end();++it_in)
    cout<<" "  << *it_in<<" ";
    cout<<")"<<endl;
  }

  else if(count==2){
    string a,b;

    std::cin >> a >> b;

    result2 = Tu.tuple2(a,b);
    std::cout << "(" ;
    for (set<set<boost::variant<double,std::string,int>>>::iterator it_ex=result2.begin();it_ex!=result2.end();++it_ex){
      for (set<boost::variant<double,std::string,int>>::iterator it_in=it_ex->begin();it_in!=it_ex->end();++it_in)
      cout<<" "  << *it_in<<" ";
      cout<<")"<<endl;
    }
  }

  else if(count==3){
    string a,b,c;

    std::cin >> a >> b >> c;

    result3 = Tu.tuple3(a,b,c);
    std::cout << "(" ;
    for (set<set<set<boost::variant<double,std::string,int>>>>::iterator it_ex=result3.begin();it_ex!=result3.end();++it_ex){
      for (set<set<boost::variant<double,std::string,int>>>::iterator it_in=it_ex->begin();it_in!=it_ex->end();++it_in){
        for (set<boost::variant<double,std::string,int>>::iterator it_in1=it_in->begin();it_in1!=it_in->end();++it_in1)
        cout<<" "  << *it_in1<<" ";
        cout<<")"<<endl;
      }
    }
  }

  else if(count==4){
    string a,b,c,d;

    std::cin >> a >> b >> c>>d;

    result4 = Tu.tuple4(a,b,c,d);
    std::cout << "(" ;
    for (set<set<set<set<boost::variant<double,std::string,int>>>>>::iterator it_ex=result4.begin();it_ex!=result4.end();++it_ex){
      for (set<set<set<boost::variant<double,std::string,int>>>>::iterator it_in=it_ex->begin();it_in!=it_ex->end();++it_in){
        for (set<set<boost::variant<double,std::string,int>>>::iterator it_in1=it_in->begin();it_in1!=it_in->end();++it_in1){
          for (set<boost::variant<double,std::string,int>>::iterator it_in2=it_in1->begin();it_in2!=it_in1->end();++it_in2)
          cout<<" "  << *it_in2<<" ";
          cout<<")"<<endl;
        }
      }
    }
  }

  else if(count==5){
    string a,b,c,d,e;

    std::cin >> a >> b >> c>>d>>e;

    result5 = Tu.tuple5(a,b,c,d,e);
    std::cout << "(" ;
    for (set<set<set<set<set<boost::variant<double,std::string,int>>>>>>::iterator it_ex=result5.begin();it_ex!=result5.end();++it_ex){
      for (set<set<set<set<boost::variant<double,std::string,int>>>>>::iterator it_in=it_ex->begin();it_in!=it_ex->end();++it_in){
        for (set<set<set<boost::variant<double,std::string,int>>>>::iterator it_in1=it_in->begin();it_in1!=it_in->end();++it_in1){
          for (set<set<boost::variant<double,std::string,int>>>::iterator it_in2=it_in1->begin();it_in2!=it_in1->end();++it_in2){
            for (set<boost::variant<double,std::string,int>>::iterator it_in3=it_in2->begin();it_in3!=it_in2->end();++it_in3)
            cout<<" "  << *it_in3<<" ";
            cout<<")"<<endl;
          }
        }
      }
    }
  }

  else if(count==6){
    string a,b,c,d,e,f;

    std::cin >> a >> b >> c>>d>>e>>f;

    result6 = Tu.tuple6(a,b,c,d,e,f);
    std::cout << "(" ;
    for (set<set<set<set<set<set<boost::variant<double,std::string,int>>>>>>>::iterator it_ex=result6.begin();it_ex!=result6.end();++it_ex){
      for (set<set<set<set<set<boost::variant<double,std::string,int>>>>>>::iterator it_in=it_ex->begin();it_in!=it_ex->end();++it_in){
        for (set<set<set<set<boost::variant<double,std::string,int>>>>>::iterator it_in1=it_in->begin();it_in1!=it_in->end();++it_in1){
          for (set<set<set<boost::variant<double,std::string,int>>>>::iterator it_in2=it_in1->begin();it_in2!=it_in1->end();++it_in2){
            for (set<set<boost::variant<double,std::string,int>>>::iterator it_in3=it_in2->begin();it_in3!=it_in2->end();++it_in3){
              for (set<boost::variant<double,std::string,int>>::iterator it_in4=it_in3->begin();it_in4!=it_in3->end();++it_in4)
              cout<<" "  << *it_in4<<" ";
              cout<<")"<<endl;
            }
          }
        }
      }
    }
  }

  else if(count==7){
    string a,b,c,d,e,f,g;

    std::cin >> a >> b >> c>>d>>e>>f>>g;

    result7 = Tu.tuple7(a,b,c,d,e,f,g);
    std::cout << "(" ;
    for (set<set<set<set<set<set<set<boost::variant<double,std::string,int>>>>>>>>::iterator it_ex=result7.begin();it_ex!=result7.end();++it_ex){
      for (set<set<set<set<set<set<boost::variant<double,std::string,int>>>>>>>::iterator it_in=it_ex->begin();it_in!=it_ex->end();++it_in){
        for (set<set<set<set<set<boost::variant<double,std::string,int>>>>>>::iterator it_in1=it_in->begin();it_in1!=it_in->end();++it_in1){
          for (set<set<set<set<boost::variant<double,std::string,int>>>>>::iterator it_in2=it_in1->begin();it_in2!=it_in1->end();++it_in2){
            for (set<set<set<boost::variant<double,std::string,int>>>>::iterator it_in3=it_in2->begin();it_in3!=it_in2->end();++it_in3){
              for (set<set<boost::variant<double,std::string,int>>>::iterator it_in4=it_in3->begin();it_in4!=it_in3->end();++it_in4){
                for (set<boost::variant<double,std::string,int>>::iterator it_in5=it_in4->begin();it_in5!=it_in4->end();++it_in5)
                cout<<" "  << *it_in5<<" ";
                cout<<")"<<endl;
              }
            }
          }
        }
      }
    }
  }
  return 0;
}
