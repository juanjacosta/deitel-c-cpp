#include <ctype.h>
#include <stdio.h>

int main (void)
{
  int x;
  int y;
  int *const ptrX = &x;

  *ptrX = 7;
  printf ("%d\n", *ptrX);
  printf ("%d\n", x);
  //   ptrX = &y; // erro ao tratar de asignar um novo endereço
}
