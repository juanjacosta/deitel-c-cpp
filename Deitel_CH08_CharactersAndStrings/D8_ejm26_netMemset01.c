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
    char str[50];

    strcpy(str, "This is string.h library function");
    puts(str);

    memset(str, '$', 7);
    puts(str);

    return 0;
}