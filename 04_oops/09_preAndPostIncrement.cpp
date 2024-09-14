#include<iostream>
using namespace std;

class Integer {
private:
  int x;

public:
  void setData(int a) {
    x = a;
  }
  void showData() {
    cout<<"x: "<<x<<endl;
  }
  // pre increment
  Integer operator++() {
    Integer i;
    i.x = ++x;
    return i;
  }
  // post increment
  Integer operator++(int) {
    Integer i;
    i.x = x++;
    return i;
  }
};

int main() {
  Integer i1;
  i1.setData(3);
  i1.showData();
  Integer i2 = ++i1; // i1.operator++()
  i2.showData();
  Integer i3 = i1++;
  i3.showData();
  return 0;
}