/*
  Programa : D15_ejm04_llamadasPorReferenciaDeAliasDeVariable.cpp
  Proposito: Mostrar la forma utilizar referencias como alias de variables.
 */

#include <iostream>

using std::cout;
using std::endl;

int main()
{
  int x = 3;
  int &y = x; // y es un alias para x

  cout << "=========================================" << endl;
  cout << "Referencias como Alias de Variables" << endl;
  cout << "=========================================" << endl;
  cout << "x = " << x << endl
       << "y = " << y << endl;
  cout << "=========================================" << endl;
  y = 7;
  cout << "x = " << x << endl
       << "y = " << y << endl;
  cout << "=========================================" << endl;

  return 0;
}

