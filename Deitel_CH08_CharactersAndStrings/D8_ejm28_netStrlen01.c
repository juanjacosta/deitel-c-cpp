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
    char str[50];
    int len;

    strcpy(str, "This is tutorialspoint.com");

    len = strlen(str);
    // printf("Length of |%s| is |%d|\n", str, len);
    printf("Length of |%s| is |%u|\n", str, (unsigned)len);

    return 0;
}