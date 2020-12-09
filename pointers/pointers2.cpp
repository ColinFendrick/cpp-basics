#include <iostream>
using namespace std;

int main()
{
  int var = 20; // actual variable
  int secondvar = 40;
  int *ip; // pointer variable

  ip = &var; // store var's address in pointer

  // Print the variable value
  cout << "Value of var variable: " << var << endl;

  // print the address stored in ip pointer variable
  cout << "Address stored in ip variable: " << ip << endl;

   // access the value at the address available in pointer
  cout << "Value of *ip variable: " << *ip << endl;

  var = secondvar;
  ip = &secondvar;
  // Print the variable value
  cout << "Value of var variable after increment: " << var << endl;

  // print the address stored in ip pointer variable
  cout << "Address stored in ip variable after increment: " << ip << endl;

   // access the value at the address available in pointer
  cout << "Value of *ip variable after increment: " << *ip << endl;

  return 0;
}