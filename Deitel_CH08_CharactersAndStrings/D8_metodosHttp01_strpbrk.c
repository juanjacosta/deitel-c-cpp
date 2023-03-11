/*
    La funcion strpbrk busca en su primer argumento la primera ocurrencia 
    de cualquiera de los caracteres de su segundo argumento. Si un caracter 
    del segundo argumento es localizado, strpbrk devuelve un apuntador al 
    caracter en el primer argumento; de lo contrario, strpbrk devuelve NULL
*/
#include <stdio.h>
#include <string.h>

int main()
{
    const char *url = "http://example.com?product=1234&utm_source=google";

    const char *token1 = "?";
    const char *token2 = "&";

    printf("Primer delimitador de metodo : %c\n", *strpbrk(url, token1));
    printf("Segundo delimitador de metodo: %c\n", *strpbrk(url, token2));

    

    return 0;
}