#include <stdio.h>
#include <string.h>

int main()
{
  const char *cadena1 = "esta es una prueba";
  const char *cadena2 = "precaucion";
  
  printf("De los caracteres en \"%s\", \'%c\', aparece primero en \"%s\"\n", cadena2, *strpbrk(cadena1, cadena2), cadena1);
  
  return 0;
}