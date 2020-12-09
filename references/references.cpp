#include <iostream>
using namespace std;

int main()
{
  // Initialize variables
  int i;
  double d;
  
  // Create references
  int& r = i;
  double& s = d;

  i = 5, d = 11.7;
  cout << "Value of i : " << i << endl;
  cout << "Value of i reference : " << r << endl;
  cout << "Value of d : " << d << endl;
  cout << "Value of d reference : " << s  << endl;

  i = 20, d = 46.8;
  cout << "Value of i after set: " << i << endl;
  cout << "Value of i reference : " << r << endl;
  cout << "Value of d : " << d << endl;
  cout << "Value of d reference : " << s  << endl;

  return 0;
}