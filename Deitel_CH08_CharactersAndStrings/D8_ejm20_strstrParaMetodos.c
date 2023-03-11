/*
    La función strstr busca la primera ocurrencia de su 
    segundo argumento de cadena en su primer argumento 
    de cadena. Si se localiza a la segunda cadena en la 
    1ra cadena, se devuelve un apuntador a la ubicación
    de la cadena en el primer argumento. 
*/

#include <stdio.h>
#include <string.h>

int main()
{
    const char *url = "http://example.com?product=1234&utm_source=google";
    const char *m1 = "product=1234";
    const char *m2 = "utm_source=google";
    const char *metodo1;
    const char *metodo2;

    metodo1 = strstr(url, m1);
    metodo2 = strstr(url, m2);

    printf("Metodo 1: %s\n", metodo1);
    printf("Metodo 2: %s\n", metodo2);

    return 0;
}