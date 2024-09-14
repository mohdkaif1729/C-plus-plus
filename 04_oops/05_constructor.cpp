#include <iostream>
using namespace std;

class Complex {
private: 
  int a; 
  int b;

public:
  Complex() {
    cout<<"Hello Constructor"<<endl;
  }
  Complex(int z) {
    a = z;
  }
  Complex(int x, int y) {
    a = x;
    b = y;
  }
  // copy constructor
  Complex(Complex &c) {
    a = c.a;
    b = c.b;
  }
  void display() {
    cout<<"a: "<<a<<"b: "<<b<<endl;
  }
};

int main() {
  Complex c1;
  // Complex c2(3, 4), c3(5);
  // Complex c2 = Complex(3, 4), c3 = Complex(5);
  Complex c2 = Complex(3, 4), c3 = 5;
  Complex c4 = c2;

  return 0;
}