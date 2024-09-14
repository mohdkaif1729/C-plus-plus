#include<iostream>
using namespace std;

struct book {
private:
  int bookid;
  char title[20];
  float price;

public:
  void input() {
    cout<<"Enter bookid, title and price: ";
    cin>>bookid>>title>>price;
    return;
  }

  void display() {
    cout<<"bookid: "<<bookid<<endl;
    cout<<"book title: "<<title<<endl;
    cout<<"book price: "<<price<<endl;
    return;
  }
};


int main() {
  book b1;
  b1.input();
  b1.display();

  return 0;
}