/*
 Programa : ejm_07_sobrecargaDeFunciones.cpp
 Proposito: Mostrar el uso de funciones sobrecargadas
 Fecha    : 19/08/2019
 */

#include <iostream>

using std::cout;
using std::endl;

int cuadrado(int x) {return x * x;}
double cuadrado(double y) {return y * y;}

int main()
{
  cout << "============================================" << endl;
  cout << "\tSobrecarga de Funciones" << endl;
  cout << "============================================" << endl;
  cout << "El cuadrado del entero 7 es  : " << cuadrado(7) 
       << "\nEl cuadrado del double 7.5 es: " << cuadrado(7.5) << endl;
  cout << "============================================" << endl;

  return 0;
}
