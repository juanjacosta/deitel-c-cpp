#include <stdio.h>
#include <stdlib.h>

int main()
{
  const char *cadena[10];
  char *ptrCadena;
  double d;
  
  printf("Cadena : ");
  scanf("%s", cadena);
  
  d = strtod(cadena, &ptrCadena);
  
  printf("cadena : %s\n", cadena);
  printf("Numero : %.2f\n",d);
  printf("restoC : %s\n", ptrCadena);
  
  return 0;
}