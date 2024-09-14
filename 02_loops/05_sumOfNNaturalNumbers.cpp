#include <iostream>
using namespace std;

int main()
{
  int num;
  int sum = 0;

  cout << "Enter a number: ";
  cin >> num;

  for (int i = 1; i <= num; i++)
  {
    sum += i;
  }

  cout << "sum of " << num << "natural number is: " << sum;
  return 0;
}