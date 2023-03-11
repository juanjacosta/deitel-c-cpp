#include <stdio.h>
#include <stdlib.h>

int main()
{
  double d;
  float f;
  int i;
  long l;
  char c[10];
  
  printf("Cadena: ");
  scanf("%s", c);
  printf("Tam char: %d byte\n", sizeof(char));
  printf("Tam double: %d bytes\n", sizeof(double));
 printf("Tam float: %d bytes\n", sizeof(float));
  printf("Tam int : %d bytes\n", sizeof(int));
  printf("Tam long: %d bytes\n\n", sizeof(long));
  
  
  d = atof(c);
  f = atof(c);
  i = atoi(c);
  l = atol(c);
  
  
  printf("Cadena ingresada: %s\n", c);
  printf("TAM: %d\n", sizeof c);
  printf("Cadena a double: %.2f\n", d);
  printf("TAM: %d\n", sizeof d);
  printf("Cadena a float: %.2f\n", f);
  printf("TAM: %d\n", sizeof f);
  printf("Cadena a int: %d\n", i);
  printf("TAM: %d\n", sizeof i);
  printf("Cadena a long: %ld\n", l);
  printf("TAM: %d\n", sizeof l);
  
  return 0;
}