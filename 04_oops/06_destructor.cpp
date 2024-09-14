#include <iostream>
using namespace std;

class Complex {
private: 
  int a; 
  int b;

public:
  ~Complex() {
    cout<<"Hello Destructor"<<endl;
  }
  
};

int main() {
  Complex c1;
  
  

  return 0;
}