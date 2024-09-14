#include<iostream>
using namespace std;

class Complex{
private:
  int a, b;

public:
  void setData(int x, int y) {
    a = x;
    b = y;
  }
  void showData() {
    cout<<"a: "<<a<<" b: "<<b<<endl;
  }
  Complex operator-()  {
    Complex temp;
    temp.a = -a;
    temp.b = -b;
    return temp;
  }
};

int main() {
  Complex c1;
  c1.setData(3, 4);
  // Complex c2 = c1.operator-();
  Complex c2 = -c1;
  c2.showData();
  return 0;
}