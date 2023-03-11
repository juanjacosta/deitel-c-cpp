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
    char str[] = "This is a simple string";
    char *pch;

    pch = strstr(str, "simple");
    // strncpy(pch, "saMPle", 6);
    // puts(pch);
    
    printf("%s\n", pch);

    return 0;
}