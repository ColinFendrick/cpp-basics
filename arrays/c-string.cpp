#include <iostream>
#include <cstring>
using namespace std;

char* concatenate(char a[], char b[]);

int main()
{
  char greeting[6] = {'H', 'e', 'l', 'l', 'o', '\0'};

  cout << "Greeting message: ";
  cout << greeting << endl;

  char *conc;
  char str1[10] = "Hello";
  char str2[10] = "World";
  conc = concatenate(str1, str2);

  cout << "Concat the strings ... " << conc;

  return 0;
}

char* concatenate(char str1[], char str2[]) {
  static char str3[10];

  // copy str1 into str3
  strcpy(str3, str1);

  // concatenates str1 and str2
  strcat(str1, str2);

  cout << str3;

  return str3;
}
