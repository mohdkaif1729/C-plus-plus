#include<iostream>
using namespace std;

class B;
class A {
private:
  int a;

public:
  A(int x) {
    a = x;                         
  }
  friend void fun(A, B); 
};

class B {
private:
  int b;

public:
  B(int x) {
    b = x;
  }
  friend void fun(A, B); 
};

void fun(A o1, B o2) {
  cout<<"Sum is: "<<o1.a + o2.b<<endl;
}

int main() {
  A obj1(3);
  B obj2(5);
  fun(obj1, obj2);
  return 0;
}