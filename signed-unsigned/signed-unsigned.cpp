#include <iostream>
using namespace std;

/*
  This program shows the difference between
  signed and unsigned integers.
*/
int main()
{
  short unsigned int base;
  short signed int i;
  short int j;

  base = 50000;

  i = base, j = base;

  cout << i << " " << j << " " << base;

  return 0;
}
