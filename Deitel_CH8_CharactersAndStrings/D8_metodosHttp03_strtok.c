/*
    strtok se utiliza para separar una cadena en una serie 
    de tokens. Un token es una secuencia de caracteres 
    separados por delimitadores (espacios o marcas de 
    puntuacion).
*/

#include <stdio.h>
#include <string.h>

int main()
{
    char cadena[] = "http://example.com?product=1234&utm_source=google";
    char metodo1[50];
    char *ptrToken1;

    printf("Metodos:\n");

    ptrToken1 = strtok(cadena, "?");

        while(ptrToken1 != NULL) {
        sprintf(metodo1, "%s\n", ptrToken1);
        ptrToken1 = strtok(NULL, " ");
    }
    printf("%s\n", metodo1);

    return 0;
}