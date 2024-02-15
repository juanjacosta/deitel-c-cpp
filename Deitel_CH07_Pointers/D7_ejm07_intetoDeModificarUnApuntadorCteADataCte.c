#include <ctype.h>
#include <stdio.h>

int main (void)
{
  int x = 5;
  int y;
  const int *const ptrX = &x;

  printf ("%d\n", *ptrX);
  //   *ptrX = 7; // erro ao tratar de asignar um novo valor
  //   ptrX = &y; // erro ao tratar de asignar um novo endereço
}