#include <stdio.h>
#include <stdlib.h>

int main()
{
  const char *cadena[10];
  char *ptrCadena;
  long num;
  
  printf("Cadena: ");
  scanf("%s", cadena);
  
  printf("Cadena: %s\n", cadena);
  
  num = strtol(cadena, &ptrCadena, 0);
  
  printf("Numero: %ld\n", num);
  printf("Resto : %s\n", ptrCadena);
  
  return 0;
}