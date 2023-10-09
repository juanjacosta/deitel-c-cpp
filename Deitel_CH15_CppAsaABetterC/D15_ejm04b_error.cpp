/*
  @file   D15_ejm04b_error
  @brief  Mostrar que uma variável declarada como referência
  debe ser inicializada.
*/

#include <iostream>

using namespace std;

int main()
{
  int x = 3;
  int &y;

  cout << "x = " << x << endl;
  cout << "y = " << y << endl;
}