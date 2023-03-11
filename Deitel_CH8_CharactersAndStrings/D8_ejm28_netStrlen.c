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
    char szInput[256];
    printf("Enter a sentence: ");
    gets(szInput);
    printf("The sentence entered is %u characters long\n", (unsigned)strlen(szInput));

    return 0;
}