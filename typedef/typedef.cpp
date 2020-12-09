#include <iostream>
using namespace std;

int main()
{
  typedef int colin;
  colin foo;
  foo = 1000000;
  cout << foo << endl;

  // Can create an enum for types which will go from the next value
  enum myenums { hundred = 100, thousand = 1000, thousandandone } num;
  num = thousandandone;
  cout << num;

  return 0;
}
