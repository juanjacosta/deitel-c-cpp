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
    char delim[] = "?, &";
    char metodo1[50], metodo2[50];
    char *ptrToken1, *ptrToken2;

    printf("Metodos:\n");

    for (ptrToken1 = strtok(cadena, delim); ptrToken1; ptrToken1 = strtok(NULL, delim)){
        sprintf(metodo1, "%s\n", ptrToken1);
    }

    // ptrToken1 = strtok(cadena, "?");
    // while(ptrToken1 != NULL) {
    //     sprintf(metodo1, "%s\n", ptrToken1);
    //     ptrToken1 = strtok(NULL, " ");
    // }
    printf("%s\n", metodo1);

    // ptrToken2 = strtok(metodo1, "&");
    // while(ptrToken2 != NULL) {
    //     sprintf(metodo2, "%s\n", ptrToken2);
    //     ptrToken2 = strtok(NULL, " ");
    // }
    // printf("%s\n", metodo2);

    return 0;
}