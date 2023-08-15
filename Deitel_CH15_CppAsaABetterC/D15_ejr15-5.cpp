/*
  @file   D15_ejr15-5.cpp
  @brief  Write a C++ program that prompts the user for the length and width of a rectangle, then calls inline function rectArea to calculate the area of that rectangle.
*/

#include <iostream>

using namespace std;

inline double rectArea(const double _length, const double _width)
{
  return _length * _width;
}

int main()
{
  double length, width;

  cout << "Enter Dimensions of Rectangle" << endl;
  cout << "Length: ";
  cin >> length;
  cout << "Width: ";
  cin >> width;

  cout << "Area: " << rectArea(length, width) << endl;

  return 0;
}