#include<iostream>
using namespace std;

class A { 
  public:
    void fun() {
    
    }
    void foo() {
    
    }
};


class B {
  friend class A;
  friend void A::fun();
  friend void A::foo();
};
