/*
  Programa : D15_ejm01_sumaDeDosEnteros.cpp
  Proposito: Mostrar las diferencias de la sintaxis C++ respecto a C con un programa sencillo que sume dos numeros enteros.
 */

#include <iostream>

int main()
{
  std::cout << "==========================================" << std::endl;
  std::cout << "\tSuma de enteros " << std::endl;
  std::cout << "==========================================" << std::endl;
  std::cout << "Enter first integer: ";
  int number1;
  std::cin >> number1;

  int number2, sum;

  std::cout << "Enter second integer: ";
  std::cin >> number2;

  sum = number1 + number2;

  std::cout << "La suma es: " << sum << std::endl;

  std::cout << "==========================================" << std::endl;
}
