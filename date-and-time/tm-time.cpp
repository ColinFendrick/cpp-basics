/*
  The tm structure is very important while working with date and time in either C or C++. 
  This structure holds the date and time in the form of a C structure.
  Most of the time related functions makes use of tm structure. 
*/

#include <iostream>
#include <ctime>

using namespace std;

int main() 
{
  // current date/time based on current system
  time_t now = time(0);

  cout << "Number of sec since January 1,1970 is:: " << now << endl;

  tm *ltm = localtime(&now);

  // print various components of tm structure.
  cout << "Year:" << 1900 + ltm->tm_year<<endl;
  cout << "Month: "<< 1 + ltm->tm_mon<< endl;
  cout << "Day: "<< ltm->tm_mday << endl;
  cout << "Time: "<< 5+ltm->tm_hour << ":";
  cout << 30+ltm->tm_min << ":";
  cout << ltm->tm_sec << endl;
}