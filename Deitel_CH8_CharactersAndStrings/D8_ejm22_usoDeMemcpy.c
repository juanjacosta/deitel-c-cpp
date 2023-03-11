/*
    Esta función pertenece a las FUNCIONES DE MEMORIA de la 
    biblioteca de manipulación de cadenas 
  
    void *memcpy(void *s1, const void *s2, size_t n);

    memcpy copia n caracteres desde el objeto al que apunta s2, dentro del 
    objeto al que apunta s1. Devuelve un apuntador al objeto resultante.

    void * memcpy ( void * destination, const void * source, size_t num );
*/

#include <stdio.h>
#include <string.h>

int main()
{
  char s1[17];
  char s2[] = "Copia esta cadena";
  
  memcpy(s1, s2, 17);
  
  // printf("Despues de la copia de s2 en s1 con memcpy, s1 contiene: \"%s\"\n", s1);
  printf("Despues de la copia de s2 en s1 con memcpy, s1 contiene: %s\n", s1);
  
  return 0;
}