#include <stdio.h>
#include <stdlib.h>

int main()
{
  const char *cadena = "1234567abc";
  unsigned long x;
  char *ptrResto;
  
  x = strtoul(cadena, &ptrResto, 0);
  
  printf("La cadena original es: %s\nEl valor convertido es: %lu\nEl resto de la cadena original es: %s", cadena, x, ptrResto);
  
  return 0;
}