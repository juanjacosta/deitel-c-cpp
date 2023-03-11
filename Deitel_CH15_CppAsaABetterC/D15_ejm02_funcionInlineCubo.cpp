/*
 Programa : D15_ejm02_funcionInlineCubo.cpp
 Proposito: Mostrar el uso de funciones inline para ayudar a reducir la sobrecarga de 
            llamadas a funciones. 
 Fecha    : 18/08/2019
 */

#include <iostream>

using std::cout;
using std::cin;
using std::endl;

inline double cubo(const double s){ return s*s*s;}

int main()
{
  double lado;

  cout << "==================================================" << endl;
  cout << "\tFuncion Inline cubo()" << endl;
  cout << "==================================================" << endl;

  for(int k = 1; k < 4; k++)
  {
    cout << "Introduzca la longitud de un lado del cubo: ";
    cin >> lado;

    cout << "El volumen del cubo con lado " << lado << " es "
      << cubo(lado) << endl;
  }

  cout << "==================================================" << endl;

  return 0;
}
