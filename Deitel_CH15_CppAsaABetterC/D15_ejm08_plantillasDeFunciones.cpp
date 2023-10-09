/*
 Programa : ejm_08_plantillasDeFunciones.cpp
 Proposito: Mostrar el uso de una plantilla de función
 */

#include <iostream>

using namespace std;

template <class M>  // o template < typename T >
M maximum(M valor1, M valor2, M valor3) {
   M max = valor1;

   if (valor2 > max) max = valor2;

   if (valor3 > max) max = valor3;

   return max;
}

int main() {
   int int1, int2, int3;

   cout << "==============================================" << endl;
   cout << "\tPlantillas de Funciones" << endl;
   cout << "==============================================" << endl;

   cout << "Introduzca tres numeros enteros: ";  // version int
   cin >> int1 >> int2 >> int3;
   cout << "El valor entero maximo es: " << maximum(int1, int2, int3) << endl;
   cout << "==============================================" << endl;

   double doble1, doble2, doble3;

   cout << "Introduzca tres numeros double: ";  // version double
   cin >> doble1 >> doble2 >> doble3;
   cout << "El valor double maximo es: " << maximum(doble1, doble2, doble3)
        << endl;
   cout << "==============================================" << endl;

   char char1, char2, char3;
   cout << "Introduzca tres caracteres: ";  // version char
   cin >> char1 >> char2 >> char3;
   cout << "El valor caracter maximo es: " << maximum(char1, char2, char3)
        << endl;
   cout << "==============================================" << endl;

   return 0;
}
