#include <iostream>
#include <cmath>
using namespace std;

int main()
{
  short s = 10;
  int i = -1000;
  long l = 100000;
  float f = 230.47;
  double d = 200.374;

  cout << "sin(200.374) :" << sin(d) << endl;
  cout << "cos(200.374) :" << cos(d) << endl;
  cout << "sin(0) :" << sin(0) << endl;
  cout << "abs(-1000)  :" << abs(i) << endl;
  cout << "floor(200.374) :" << floor(d) << endl;
  cout << "sqrt(230.47) :" << sqrt(f) << endl;
  cout << "pow(200.374, 2) :" << pow(d, 2) << endl;

  return 0;
}