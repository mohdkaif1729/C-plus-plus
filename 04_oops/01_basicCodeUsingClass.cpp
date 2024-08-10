#include <iostream>
using namespace std;

class Complex {
private:
  int a, b;

public:
  // default it is inline
  void set_data(int x, int y);
  void show_data() {
    cout << "a: " << a << ", b: " << b;
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
  c1.set_data(3, 5);
  c1.show_data();
  return 0;
}