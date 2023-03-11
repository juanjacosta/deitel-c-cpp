#include <stdio.h>
#include <string.h>

int main()
{
    // char cadena[] = "/led1?valor=1";
    char cadena[20];
    char metodo1[20], metodo2[20];
    char *ptrToken1, *ptrToken2;

    printf("Ingrese metodo: ");
    scanf("%s", cadena);
    printf("La cadena a dividir en tokens es : %s\n", cadena);
    printf("Los Tokens son:\n");

    ptrToken1 = strtok(cadena, "?");
    // ptrToken2 = strtok(cadena, "&");

    // while((ptrToken1 != NULL) && ptrToken2 != NULL){
        while(ptrToken1 != NULL) {
        sprintf(metodo1, "%s\n", ptrToken1);
        ptrToken1 = strtok(NULL, " ");

        // sprintf(metodo1, "%s\n", ptrToken1);
        // ptrToken2 = strtok(NULL, "&");
    }
    printf("%s\n", metodo1);
    return 0;
}