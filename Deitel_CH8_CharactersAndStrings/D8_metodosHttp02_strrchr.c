/*
    La funcion strrchr busca la ultima ocurrencia del caracter
    especificado en una cadena. Si se localiza al caracter, 
    strrchr devuelve un apuntador al caracter en la cadena, 
    de otro modo, strrchr devuelve NULL
*/
#include <stdio.h>
#include <string.h>

int main()
{
    const char *url = "http://example.com?product=1234&utm_source=google";
    
    int c1 = '?', c2 = '&';

    printf("metodo 1: %s\n", strrchr(url, c1));
    printf("metodo 2: %s\n", strrchr(url, c2));


    return 0;
}