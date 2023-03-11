#include <stdio.h>
#include <string.h>

int main()
{
    char url[50];
    char metodo1[50], metodo2[50];
    char *ptrMetodo1, *ptrMetodo2;

    printf("Ingrese url: ");
    scanf("%s", url);
    printf("URL Ingresada: %s\n", url);

    ptrMetodo1 = strtok(url, "?");

    printf("\nMetodo 1: %s", ptrMetodo1);

    do{
        ptrMetodo1 = strtok('\0', "?");

        if (ptrMetodo1){
            printf("\nMetodo: %s", ptrMetodo1);
        }

    }while(ptrMetodo1);


    return 0;
}

