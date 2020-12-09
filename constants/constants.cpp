#include <iostream>
using namespace std;

// Can either define with define preprocessor
#define LENGTH 10
#define NEWLINE '\n'

int main()
{
  // .. or inside a fn like injs
  const int WIDTH = 5;
  int area;

  area = LENGTH * WIDTH;
  cout << area;
  cout << NEWLINE;
  return 0;
}
