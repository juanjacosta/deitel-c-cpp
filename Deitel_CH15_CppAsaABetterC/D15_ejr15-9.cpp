/*
  @file D15_ejr15-8.cpp
  @brief  Write a program that uses a function template called swap to swap the
  contents of two arguments. Test the program using integer, character and
  floating-point arguments..
*/

#include <iostream>
using namespace std;

template <class S>
void
swapFunction (S &param1, S &param2)
{
  S tmp = param1;
  param1 = param2;
  param2 = tmp;
}

int
main ()
{
  int num1 = 7, num2 = 4;
  char c1 = 'a', c2 = 'u';
  float val1 = 0.75, val2 = 1.98;

  cout << "Swap Function Template" << endl;
  cout << "## Integers\n" << endl;
  cout << "num1: " << num1 << "\nnum2: " << num2 << endl;
  swapFunction (num1, num2);
  cout << "\nnum1: " << num1 << "\nnum2: " << num2 << endl;

  cout << "\n## Characters\n" << endl;
  cout << "char1: " << c1 << "\nchar2: " << c2 << endl;
  swapFunction (c1, c2);
  cout << "\nchar1: " << c1 << "\nchar2: " << c2 << endl;

  cout << "\n## Float\n" << endl;
  cout << "float1: " << val1 << "\nfloat2: " << val2 << endl;
  swapFunction (val1, val2);
  cout << "\nfloat1: " << val1 << "\nfloat2: " << val2 << endl;
}