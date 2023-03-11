/*
  Esta función pertenece a las FUNCIONES DE BUSQUEDA de la 
  biblioteca de manipulación de cadenas 
  
  const char *strstr(const char *s1, const char *s2);

        char *strstr(const char *s1, const char *s2);

        char *strstr(      char *s1, const char *s2);

  Localiza la primera ocurrencia en la cadena s1 de la cadena s2.
  Si se localiza la cadena, se devuelve un apuntador a la cadena 
  en s1. De lo contrario se devuelve un apuntador NULL.

  Los terminadores '\0' no son comparados
*/

#include <stdio.h>
#include <string.h>

int main()
{
  const char *cadena1 = "abcdefabcdef";
  const char *cadena2 = "def";
  
  printf("Cadena 1: %s\nCadena 2: %s\n", cadena1, cadena2);
  
  printf("El resto de cadena1 que comienza con la 1ra ocurrencia de cadena2 es: %s\n", strstr(cadena1, cadena2));
  
  return 0;
}