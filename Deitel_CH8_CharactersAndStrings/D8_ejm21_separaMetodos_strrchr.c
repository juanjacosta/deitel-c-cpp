/*
    La función strrchr, utiliza este prototipo: 

    char *strrchr(const char *s1, int c);

    Y localiza la ultima ocurrencia de c en la cadena s. 
    Si se localiza c, se devuelve un apuntador a c en la 
    cadena s. De lo contrario se devuelve un apuntador NULL.
*/

#include <stdio.h>
#include <string.h>

int main()
{
    const char *url = "https://www.example.com/page?background=blue&foo=bar";

    int c1 = '?', c2 = '&';
    char m1[30];

    printf("metodo 1: %s\n", strrchr(url, c1));
    printf("metodo 2: %s\n", strrchr(url, c2));

    return 0;
}