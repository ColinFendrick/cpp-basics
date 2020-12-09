#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

int main() {
  int i, r;

  // Set random seed using system time
  srand((unsigned)time(NULL));
  
  for (i = 0; i < 10; i++)
  {
    // Generate a random number
    r = rand();

    cout << "Random number: " << r << endl;
  }
  
  return 0;
}