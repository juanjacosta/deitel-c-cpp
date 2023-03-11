/*
    strcpy y strncpy son FUNCIONES DE MANIPULACIÓN DE CADENAS
    de la biblioteca de manipulación de cadenas.

      char *strcpy(char *s1, const char *s2);

    Copia la cadena s2 dentro del arreglo s1. Devuelve el 
    valor de s1

      char *strncpy(char *s1, const char *s2, size_t n);

    Copia al menos n caracteres de la cadena s2 dentro del 
    arreglo s1. Devuelve el valor de s1.

*/

#include <stdio.h>
#include <string.h>

int main()
{
  char x[] = "Feliz cumpleanos a ti";
  char y[25];
  char z[17];
  
  printf("La cadena en el arrego x es: %s\n", x);
  
  printf("La cadena en el arrego y es: %s\n", strcpy(y, x));  
  
  strncpy(z, x, 17);
  z[17] = '\0';
  printf("La cadena en el arreglo z es %s\n", z);
  
  // printf("La cadena en el arrego z es: %s\n", strncpy(z, x, 17));  
  
  
  return 0;
}