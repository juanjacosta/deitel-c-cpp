/*
 Programa : D15_ejm05_argumentosPredeterminados.cpp
 Proposito: Mostrar el uso de argumentos predeterminados en funciones
 Fecha    : 19/08/2019
*/

#include <iostream>

using std::cout;
using std::endl;

int volumenCaja(int longitud = 1, int ancho = 1, int alto = 1);

int main()
{
  cout << "===========================================================" << endl;
  cout << "El Volumen predeterminado de la caja es : " << volumenCaja() << endl;
  cout << "===========================================================" << endl;
  cout << "El volumen de una caja de longitud 10,\n"
          "ancho 1 y altura 1 es: " << volumenCaja(10) << endl;
  cout << "===========================================================" << endl;
  cout << "El volumen de una caja de longitud 10,\n"
          "ancho 5 y altura 1 es: " << volumenCaja(10,5) << endl;
  cout << "===========================================================" << endl;
  cout << "El volumen de una caja de longitud 10,\n"
          "ancho 5 y altura 2 es: " << volumenCaja(10,5,2) << endl;
  cout << "===========================================================" << endl;

  return 0;
}

int volumenCaja(int longitud, int ancho, int altura)
{
  return longitud * ancho * altura;
}
