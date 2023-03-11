/*
    La función strchr busca la primera ocurrencia de un caracter
    en la cadena.

    Su prototipo es:

    char *strchr(const char *s, int c);

    Y localiza la primera ocurrencia del caracter c en la 
    cadena s. Si se localiza a c, se devuelve un apuntador 
    a c en s, de lo contrario se devuelve un apuntador NULL.  


*/

#include <stdio.h>
#include <string.h>

int main()
{
    char str[] = "This is a sample string";
    char *pch;

    printf("Looking for the 's' character in \"%s\"...\n", str);
    pch = strchr(str, 's');

    while (pch != NULL){
        printf("found at %d\n", pch - str+1);
        pch = strchr(pch+1, 's');
    }

    return 0;
}