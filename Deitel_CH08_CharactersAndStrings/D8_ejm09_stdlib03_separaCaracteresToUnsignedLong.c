#include <stdio.h>
#include <stdlib.h>

int main()
{
  const char *cadena[20];
  //const char *cadena2[20];
  char *ptrCadena;
  //char *ptrCadena2;
  unsigned long num;
  //unsigned long num2;
  
  printf("Cadena: ");
  scanf("%s", cadena);
  
  printf("Cadena: %s\n", cadena);
  
  num = strtoul(cadena, &ptrCadena, 0);
 
  //cadena2[20] = ptrCadena;
  
  //num2 = strtoul(cadena2, &ptrCadena2, 0);
  
  printf("Numero: %lu\n", num);
  printf("Resto : %s\n", ptrCadena);
  
  //printf("Cadena: %s\n", cadena2);
  //printf("Numero2: %lu\n", num2);
  //printf("Resto2 : %s\n", ptrCadena2);
  
  return 0;
}