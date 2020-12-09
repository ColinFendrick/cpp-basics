#include <iostream>

void func(void); // Declare func

static int count = 10; // Global static var

int main()
{
  while (count--)
  {
    func();
  }
  
  return 0;
}

// Define func
void func(void) {
  static int i = 5; // local static
  i++;
  std::cout << "i is " << i;
  std::cout << " and the count is " << count << std::endl;
}