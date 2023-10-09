/*
 Programa : ejm_06_operadorUnarioDeResolucionDeAlcance.cpp
 Proposito: Mostrar el uso del operador unario de resolución de alcance (::)
 */

#include <iostream>
using namespace std;

int number = 7;

int main() {
   double number = 10.5;

   cout << "Local value of number: " << number << endl;
   cout << "Global value of number: " << ::number << endl;
}