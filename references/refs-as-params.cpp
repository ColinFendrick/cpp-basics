#include <iostream>
using namespace std;

// function declaration
void swap(int&, int&);

int main()
{
  int a = 100, b = 200;

  cout << "Before swap, value of a :" << a << endl;
  cout << "Before swap, value of b :" << b << endl;

  swap(a, b);

  cout << "After swap, value of a :" << a << endl;
  cout << "After swap, value of b :" << b << endl;

  return 0;
}

// function to swap the values
void swap(int& x, int& y)
{
  int temp = x; // save x into temp
  x = y; // put y into
  y = temp; // put temp (old x) into y

  return;
}