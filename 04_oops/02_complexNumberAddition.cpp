#include <iostream>
using namespace std;

class Complex {
private:
  int a, b;

public:
  // default it is inline
  void set_data(int x, int y);
  void show_data() {
    cout << "a: " << a << ", b: " << b << "i";
  } 
  Complex add(Complex c1) {
    Complex ans;
    ans.a = a + c1.a;
    ans.b = b + c1.b;
    return ans;
  }
};

// membership lable
// to make line then use inline keyword
inline void Complex::set_data(int x, int y) {
  a = x;
  b = y;
}

int main() {
  Complex c1;
  c1.set_data(1, 5);
  // c1.show_data();
  Complex c2;
  c2.set_data(4, 7);
  Complex c3 = c1.add(c2);
  c3.show_data();
  cout<<endl<<"Size: "<<sizeof(c1);
  cout<<endl<<"Size: "<<sizeof(c2);
  cout<<endl<<"Size: "<<sizeof(c3);
  return 0;
}