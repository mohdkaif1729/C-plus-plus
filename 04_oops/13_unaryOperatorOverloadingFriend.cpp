#include<iostream>
using namespace std;


class Complex {
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
    friend Complex operator-(Complex);
};

Complex operator-(Complex c) {
  Complex temp;
  temp.a = -c.a;
  temp.b = -c.b;
  return temp;
}

int main() {
  Complex c1;
  c1.setData(3, 4);

  // Complex c2 = -c1; // operator-(c1);
  Complex c2 = -c1;
  c2.showData();

  return 0;
}