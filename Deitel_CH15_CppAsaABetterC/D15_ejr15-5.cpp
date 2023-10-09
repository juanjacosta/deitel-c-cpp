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

  cout << "Enter Dimensions of Rectangle in meters" << endl;
  cout << "Length: ";
  cin >> length;
  cout << "Width: ";
  cin >> width;

  cout << "Area: " << rectArea(length, width) << " m^2" << endl;

  return 0;
}