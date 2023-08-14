/*
  Programa : D15_ejm01_sumaDeDosEnteros.cpp
  Proposito: Mostrar las diferencias de la sintaxis C++ respecto a C con un programa 
             sencillo que sume dos numeros enteros.
 */

#include <iostream>

int main()
{
  int entero1;

  std::cout << "==========================================" << std::endl;
  std::cout << "\tSuma de enteros " << std::endl;
  std::cout << "==========================================" << std::endl;
  std::cout << "Introduzca el primer entero: ";
  std::cin >> entero1;

  int entero2, suma;

  std::cout << "Introduzca el segundo entero: ";
  std::cin >> entero2;

  suma = entero1 + entero2;

  std::cout << "La suma es: " << suma << std::endl;

  std::cout << "==========================================" << std::endl;

  return 0;
}
