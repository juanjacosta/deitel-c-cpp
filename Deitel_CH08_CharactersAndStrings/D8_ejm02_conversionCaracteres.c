#include <stdio.h>
#include <stdlib.h>

int main()
{
  double d;
  char c[10];
  
  printf("Cadena como flotante: ");
  scanf("%s", c);
  
  d = atof(c);
  
  printf("Cadena ingresada: %s\n", c);
  printf("Cadena a double: %.2f\n", d);
  
  return 0;
}