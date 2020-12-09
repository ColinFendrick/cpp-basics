#include <iostream>
using namespace std;

#include <iomanip>
using std::setw;


int* createArray(int (*cb)(int))
{
  static int n[10];

  for (int i = 0; i < 10; i++)
  {
    n[i] = cb(i);
  }
  
  return n;
}

int addHundred (int x)
{
  return x + 100;
}

int main()
{
  int *arr;
  arr = createArray(addHundred);

  cout << "Element" << setw(13) << "Value" << endl;

  // output each array element's value                      
  for (int i = 0; i < 10; i++) {
    cout << setw(7)<< i << setw(13) << arr[i] << endl;
  }

  return 0;
}

