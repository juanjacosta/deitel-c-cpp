#include <stdio.h>
#include <string.h>

int main()
{
  const char *cadena1 = "Un zoologico tiene muchos animales, incluso zorros";
  
  int c = 'z';
  
  printf("El resto de \"%s\", que comienza con la ultima ocurrencia del caracter \'%c\' es \"%s\" ", cadena1, c, strrchr(cadena1, c));
  
  
  return 0;
}