#include <stdio.h>
#include <string.h>

int main()
{
  const char *s = "Esta es una cadena";
  
  printf("El resto de \"%s\", despues del caracter 'd' encontrado es: \"%s\" ", s,memchr(s, 'd', 16));
  
  
  return 0;
}