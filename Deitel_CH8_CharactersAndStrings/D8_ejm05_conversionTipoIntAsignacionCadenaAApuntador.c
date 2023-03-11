# include <stdio.h>
# include <stdlib.h>

int main()
{
  const char *cadena = "-1234567abc";
  char *ptrResto;
  long x;
  
  x = strtol(cadena, &ptrResto, 0);
  
  printf("La cadena original es: %s\nEl valor  convertido es: %ld\nEl resto de la cadena original es %s\n", cadena, x, ptrResto);
  return 0;
}