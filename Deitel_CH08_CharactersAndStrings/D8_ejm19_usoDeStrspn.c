#include <stdio.h>
#include <string.h>

int main()
{
  const char *cadena1 = "El valor es 3.14159";
  
  const char *cadena2 = "aelv lsEro";
  
  printf("Cadena 1 : %s\nCadena 2 : %s\n\n", cadena1, cadena2);
  
  printf("La longitud del segmento inicial de \"cadena1\", que contiene solamente caracteres de \"cadena2\" es %u\n", strspn(cadena1, cadena2));
  
  return 0;
}