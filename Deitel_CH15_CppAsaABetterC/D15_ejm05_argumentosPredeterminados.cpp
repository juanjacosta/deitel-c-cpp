/*
 Programa : D15_ejm05_argumentosPredeterminados.cpp
 Proposito: Mostrar el uso de argumentos predeterminados en funciones
*/

#include <iostream>

using std::cout;
using std::endl;

int boxVolume(int length = 1, int width = 1, int height = 1);

int main() {
   cout << "==========================================================="
        << endl;
   cout << "El Volumen predeterminado de la caja es : " << boxVolume() << endl;
   cout << "==========================================================="
        << endl;
   cout << "El volumen de una caja de longitud 10,\n"
           "ancho 1 y altura 1 es: "
        << boxVolume(10) << endl;
   cout << "==========================================================="
        << endl;
   cout << "El volumen de una caja de longitud 10,\n"
           "ancho 5 y altura 1 es: "
        << boxVolume(10, 5) << endl;
   cout << "==========================================================="
        << endl;
   cout << "El volumen de una caja de longitud 10,\n"
           "ancho 5 y altura 2 es: "
        << boxVolume(10, 5, 2) << endl;
   cout << "==========================================================="
        << endl;

   return 0;
}

int boxVolume(int length, int width, int height) {
   return length * width * height;
}
