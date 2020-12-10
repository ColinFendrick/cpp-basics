#include <iostream>
#include <ctime>
using namespace std;

double vals[] = {10.1, 12.6, 33.1, 24.1, 50.0};

double& getValOf(double *arr, int i, double newVal = 0) {
  if (newVal != 0) {
    arr[i] = newVal;
  }
  return arr[i];
}

int main()
{
  cout << "Value before change" << endl;
  for (int i = 0; i < 5; i++) {
    cout << "vals[" << i << "] = ";
    cout << vals[i] << endl;
  }

  getValOf(vals, 1) = 20.23; // change 2nd element by reassigned after return value
  getValOf(vals, 3, 70.8);  // change 4th element by reassigning in function

  cout << "Value after change" << endl;
  for (int i = 0; i < 5; i++) {
    cout << "vals[" << i << "] = ";
    cout << vals[i] << endl;
  }

  return 0;
}