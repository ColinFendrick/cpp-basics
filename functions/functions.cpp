#include <iostream>

int max(int, int);
int defaultMinCheck = 20;

// You don't have to declare functions, can simply create them which declares as well.
// However, this must occur before they are used since fns must be declared before being used.
int min(int a, int b = defaultMinCheck)
{
  int res = a < b ? a : b;

  return res;
}

int main() {
  int a = 10; int b = 4;
  int c = max(a, b);
  int d = min(a, b);
  int e = min(a);
  std::cout << "The max of " << a << " and " << b << " is " << c << std::endl;
  std::cout << "The min of " << a << " and " << b << " is " << d << std::endl;
  std::cout << "The min of " << a << " and "
            << "the default second value in min(), " << defaultMinCheck << ", is " << e;

      return 0;
}

int max(int a, int b) {
  int res = a > b ? a : b;

  return res;
}

