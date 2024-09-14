#include<iostream>
using namespace std;

struct book {
  int bookid;
  char title[20];
  float price;
};

book input() {
  book b;
  cout<<"Enter bookid, title and price: ";
  cin>>b.bookid>>b.title>>b.price;
  return b;
}

void display(book b) {
  cout<<"bookid: "<<b.bookid<<endl;
  cout<<"book title: "<<b.title<<endl;
  cout<<"book price: "<<b.price<<endl;
  return;
}

int main() {
  book b1;
  b1 = input();
  display(b1);

  return 0;
}