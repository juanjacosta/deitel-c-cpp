/*
 Programa : ejm_08_plantillasDeFunciones.cpp
 Proposito: Mostrar el uso de una plantilla de función
 Fecha    : 19/10/2018
 */

#include <iostream>

using std::cout;
using std::cin;
using std::endl;

template < class T >                    // o template < typename T >
T maximo(T valor1, T valor2, T valor3)
{
  T max = valor1;

  if(valor2 > max)
    max = valor2;

  if(valor3 > max)
    max = valor3;

  return max;
}

int main()
{
  int int1, int2, int3;

  cout << "==============================================" << endl;
  cout << "\tPlantillas de Funciones" << endl;
  cout << "==============================================" << endl;

  cout << "Introduzca tres numeros enteros: ";                // version int
  cin >> int1 >> int2 >> int3;
  cout << "El valor entero maximo es: " << maximo(int1, int2, int3) << endl;
  cout << "==============================================" << endl;

  double doble1, doble2, doble3;

  cout << "Introduzca tres numeros double: ";                // version double
  cin >> doble1 >> doble2 >> doble3;
  cout << "El valor double maximo es: " << maximo(doble1, doble2, doble3) << endl; 
  cout << "==============================================" << endl; 

  char char1, char2, char3;
  cout << "Introduzca tres caracteres: ";                // version char
  cin >> char1 >> char2 >> char3;
  cout << "El valor caracter maximo es: " << maximo(char1, char2, char3) << endl;
  cout << "==============================================" << endl; 

  return 0;
}
