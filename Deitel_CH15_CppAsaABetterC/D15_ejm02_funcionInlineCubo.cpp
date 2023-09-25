/*
 Programa : D15_ejm02_funcionInlineCubo.cpp
 Proposito: Mostrar el uso de funciones inline para ayudar a reducir la sobrecarga de llamadas a funciones.
 */

#include <iostream>

using std::cin;
using std::cout;
using std::endl;

inline double cube(const double side)
{
  return side * side * side;
}

int main()
{
  double sideValue;

  cout << "==================================================" << endl;
  cout << "\tFuncion Inline cube()" << endl;
  cout << "==================================================" << endl;

  for (int i = 1; i <= 3; i++)
  {
    cout << "Enter the side length of the cube: ";
    cin >> sideValue;

    cout << "Volumen of the cube with side " << sideValue << ": "
         << cube(sideValue) << endl;
  }

  cout << "==================================================" << endl;

  return 0;
}
