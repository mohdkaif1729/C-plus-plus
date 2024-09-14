#include <iostream>
using namespace std;

class Account {
private:
  int balance; // instance member variable
  static float roi; // static member variable/ class variable

public:
  void setBalance(int b) {
    balance = b;
  }
};

// compulsory to write
float Account::roi = 3.5f;

int main() {
  Account a1, a2;
  
  return 0;
}