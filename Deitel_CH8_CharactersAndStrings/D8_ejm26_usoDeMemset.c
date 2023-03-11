/*
    Esta función pertenece a las FUNCIONES DE MEMORIA de la 
    biblioteca de manipulación de cadenas 

    void *memset(void *s, int c, size_t n);

    Copia c (convertido a unsigned char) dentro de los 
    primeros n caracteres del objeto al que apunta s. 
    Devuelve un apuntador al resultado.

*/

#include <stdio.h>
#include <string.h>

int main()
{
  char cadena1[15] = "BBBBBBBBBBBBBB";
  
  printf("Cadena 1: \"%s\"\n", cadena1);
  printf("Cadena 1 despues de memset = %s\n", memset(cadena1, 'b', 7));
  
  return 0;
}