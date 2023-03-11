/*
 Programa : D15_ejm03_llamdasPorReferencia.cpp
 Proposito: Comparar llamadas por valor y llamadas por referencia de funciones 
            mediante referencias.
 Fecha    : 18/08/2019
 */

#include <iostream>

using std::cout;
using std::endl;

int cuadradoPorValor(int);
int cuadradoPorReferencia(int &);

int main()
{
  int x = 2, y = 4;

  cout << "============================================" << endl;
  cout << "\tLlamadas por Valor y por Referencia" << endl;
  cout << "\tx = " << x << "; y = " << y << endl;
  cout << "============================================" << endl;
  cout << "Antes de cuadradoPorValor" << endl;
  cout << "x = " << x << endl;
  cout << "============================================" << endl;
  cout << "Valor devuelto por cuadradoPorValor" << endl;
  cout << "x = " << cuadradoPorValor(x) << endl;
  cout << "============================================" << endl;
  cout << "Despues de cuadradoPorValor" << endl;
  cout << "x = " << x << endl;
  cout << "============================================" << endl;
 
  cout << "Antes de cuadradoPorReferencia" << endl; 
  cout << "y = " << y << endl;
  cout << "============================================" << endl;
  cout << "Valor devuelto por cuadradoPorReferencia" << endl;
  cout << "y = " << cuadradoPorReferencia(y) << endl;
  cout << "============================================" << endl;
  cout << "Despues de cuadradoPorReferencia " << endl;
  cout << "y = " << y << endl;
  cout << "============================================" << endl; 


  return 0;
}

int cuadradoPorValor(int a)
{
  return a *= a; 
}

int cuadradoPorReferencia(int &aRef)
{
  return aRef *= aRef;
}
