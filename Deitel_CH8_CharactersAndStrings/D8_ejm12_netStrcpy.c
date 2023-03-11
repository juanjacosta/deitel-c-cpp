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
    char str1[] = "Sample string";
    char str2[40];
    char str3[40];

    strcpy(str2, str1);
    strcpy(str3, "copy successful");

    printf("str1: %s\nstr2: %s\nstr3: %s\n", str1, str2, str3);

    return 0;
}