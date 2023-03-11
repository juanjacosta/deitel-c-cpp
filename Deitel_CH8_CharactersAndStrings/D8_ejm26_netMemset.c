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
    char str[] = "almost every programmer should know memset";
    memset(str, '-', 23);
    puts(str);
    // printf("%s\n", str);

    return 0;
}