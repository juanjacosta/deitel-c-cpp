/*
  @file D15_ejr15-8.cpp
  @brief  Write a program that uses a function template called product to
  determine the product of two arguments. Test the program using integer and
  floating-point number arguments.
*/

#include <iostream>

using namespace std;

template <class P>
P product(P num1, P num2) {
   return num1 * num2;
}

int main() {
   int numInt1, numInt2;

   cout << "Product Function Template" << endl;
   cout << "Enter first integer: ";
   cin >> numInt1;

   cout << "Enter second integer: ";
   cin >> numInt2;

   cout << "Product: " << product(numInt1, numInt2) << endl;

   double numFloat1, numFloat2;

   cout << "Enter first float: ";
   cin >> numFloat1;

   cout << "Enter second float: ";
   cin >> numFloat2;

   cout << "Product: " << product(numFloat1, numFloat2) << endl;
   return 0;
}