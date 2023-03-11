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
    char src[40];
    char dest[12];

    memset(dest, '\0', sizeof(dest));
    strcpy(src, "This is tutorialspoint.com");
    strncpy(dest, src, 7);

    printf("src: %s\n", src);
    printf("Final copied string: %s\n", dest);

    return 0;
}