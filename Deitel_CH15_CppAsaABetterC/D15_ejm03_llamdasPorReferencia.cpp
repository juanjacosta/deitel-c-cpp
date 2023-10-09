/*
 Programa : D15_ejm03_llamdasPorReferencia.cpp
 Proposito: Comparar llamadas por valor y llamadas por referencia de funciones mediante referencias.
 */

#include <iostream>

using namespace std;

int squareByValue(int);
void squareByReference(int &);

int main()
{
  int x = 2, y = 4;

  cout << "============================================" << endl;
  cout << "Llamadas por Valor y por Referencia" << endl;
  cout << "\tx = " << x << "; y = " << y << endl;

  cout << "Before squareByValue" << endl;
  cout << "x = " << x << endl;

  cout << "Value returned by squareByValue" << endl;
  cout << "x = " << squareByValue(x) << endl;

  cout << "After squareByValue" << endl;
  cout << "x = " << x << endl;
  cout << "============================================" << endl;

  cout << "Before squareByReference" << endl;
  cout << "y = " << y << endl;

  cout << "After squareByReference" << endl;
  squareByReference(y);
  cout << "y = " << y << endl;
  cout << "============================================" << endl;

  return 0;
}

int squareByValue(int number)
{
  return number *= number;
}

void squareByReference(int &numberRef)
{
  numberRef *= numberRef;
}
