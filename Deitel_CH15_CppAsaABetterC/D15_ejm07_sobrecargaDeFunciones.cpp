/*
 Programa : ejm_07_sobrecargaDeFunciones.cpp
 Proposito: Mostrar el uso de funciones sobrecargadas
 */

#include <iostream>
using namespace std;

int square(int x) { return x * x; }
double square(double y) { return y * y; }

int main() {
   cout << "============================================" << endl;
   cout << "\tSobrecarga de Funciones" << endl;
   cout << "============================================" << endl;
   cout << "El cuadrado del entero 7 es  : " << square(7)
        << "\nEl square del double 7.5 es  : " << square(7.5) << endl;
   cout << "============================================" << endl;

   return 0;
}
