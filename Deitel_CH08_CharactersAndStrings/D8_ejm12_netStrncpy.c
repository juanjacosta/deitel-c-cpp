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
    char str1[] = "To be or not to be";
    char str2[40];
    char str3[40];

    /* copy to sized buffer (overflow safe) */
    strncpy(str2, str1, sizeof(str2));

    /* partial copy (only 5 chars) */
    strncpy(str3, str2, 5);
    str3[5] = '\0';             // null characrer manually added

    puts(str1);
    puts(str2);
    puts(str3);

    return 0;
}