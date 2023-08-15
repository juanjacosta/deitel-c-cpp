/*
  @file   15_ejr15-6.cpp
  @brief  Write a complete C++ program with the two alternate functions specified below, each of which multiplies the variable count by itself, defined in main. Then compare and contrast the two approaches. These two functions are

  a) function multipleByValue that passes a copy of count by value, multiplies the copy by itself and returns the new value and
  b) function multipleByReference that passes count by reference via a reference parameter and multiplies the original value of count by itself through its alias (i.e., the reference parameter)
*/

#include <iostream>

using namespace std;

int multipleByValue(int);
void multipleByReference(int &);

int main()
{
  int count = 2;

  cout << endl;
  cout << "Initial value of count: " << count << endl;
  cout << "Value returned by multipleByValue: " << multipleByValue(count) << endl;
  cout << "Value after multipleByValue: " << count << endl;
  cout << endl;
  cout << "Initial value of count: " << count << endl;
  cout << "Value before multipleByReference: " << count << endl;
  multipleByReference(count);
  cout << "Value after multipleByReference: " << count << endl;
  cout << endl;

  return 0;
}

int multipleByValue(int _count)
{
  return _count * _count;
}

void multipleByReference(int &_countByRef)
{
  _countByRef *= _countByRef;
}
