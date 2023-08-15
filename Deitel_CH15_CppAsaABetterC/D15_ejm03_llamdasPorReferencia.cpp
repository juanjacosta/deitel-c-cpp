/*
 Programa : D15_ejm03_llamdasPorReferencia.cpp
 Proposito: Comparar llamadas por valor y llamadas por referencia de funciones mediante referencias.
 */

#include <iostream>

using namespace std;

int cuadradoPorValor(int);
int cuadradoPorReferencia(int &);

int main()
{
  int x = 2, y = 4;

  cout << "============================================" << endl;
  cout << "Llamadas por Valor y por Referencia" << endl;
  cout << "\tx = " << x << "; y = " << y << endl;

  cout << "Antes de cuadradoPorValor" << endl;
  cout << "x = " << x << endl;

  cout << "Valor devuelto por cuadradoPorValor" << endl;
  cout << "x = " << cuadradoPorValor(x) << endl;

  cout << "Despues de cuadradoPorValor" << endl;
  cout << "x = " << x << endl;
  cout << "============================================" << endl;

  cout << "Antes de cuadradoPorReferencia" << endl;
  cout << "y = " << y << endl;

  cout << "Valor devuelto por cuadradoPorReferencia" << endl;
  cout << "y = " << cuadradoPorReferencia(y) << endl;

  cout << "Despues de cuadradoPorReferencia " << endl;
  cout << "y = " << y << endl;
  cout << "============================================" << endl;

  return 0;
}

int cuadradoPorValor(int number)
{
  return number *= number;
}

int cuadradoPorReferencia(int &numberRef)
{
  return numberRef *= numberRef;
  
}
