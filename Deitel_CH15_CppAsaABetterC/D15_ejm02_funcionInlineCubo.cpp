/*
 Programa : D15_ejm02_funcionInlineCubo.cpp
 Proposito: Mostrar el uso de funciones inline para ayudar a reducir la sobrecarga de llamadas a funciones.
 */

#include <iostream>

using std::cin;
using std::cout;
using std::endl;

inline double cubo(const double s)
{
  return s * s * s;
}

int main()
{
  double lado;

  cout << "==================================================" << endl;
  cout << "\tFuncion Inline cubo()" << endl;
  cout << "==================================================" << endl;

  for (int i = 1; i <= 3; i++)
  {
    cout << "Introduzca la longitud de un lado del cubo: ";
    cin >> lado;

    cout << "El volumen del cubo con lado " << lado << " es "
         << cubo(lado) << endl;
  }

  cout << "==================================================" << endl;

  return 0;
}
