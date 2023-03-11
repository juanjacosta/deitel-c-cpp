/*
    strlen pertenece a la biblioteca de manipulación de cadenas 

    size_t strlen(const char *s);

    Determina la longitud de la cadena s. Devuelve el numero de 
    caracteres que preceden al caracter de terminación nulo.

    La longitud se imprime como un tipo de dato unsigned 
    o unsigned long dependiendo de la cadena 
*/

#include <stdio.h>
#include <string.h>

int main()
{
  const char *cadena1 = "abcdefghijklmnopqrstuvwxyz";
  const char *cadena2 = "cuatro";
  const char *cadena3 = "Mexico";
  
  printf("Longitud de \"%s\": %lu\n", cadena1, (unsigned long)strlen(cadena1));
  
  printf("Longitud de \"%s\": %lu\n", cadena2, (unsigned long)strlen(cadena2));
  
  printf("Longitud de \"%s\": %lu\n", cadena3, (unsigned long)strlen(cadena3));
  
  return 0;
} 