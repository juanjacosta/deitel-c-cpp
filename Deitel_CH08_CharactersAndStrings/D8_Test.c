/*
    char *strtok(char *s1, const char *s2);

    Una secuencia de llamadas a strtok separa la cadena s1 en
    "tokens" (piezas lógicas como palabras de una línea de texto)
    separados por caracteres contenidos en la cadena s2. 
    La primera llamada contiene s1  como el primer argumento, y
    las llamadas subsiguientes contienen a NULL como el primer 
    argumento para continuar separando la misma cadena. Un 
    apuntador al token actual es devuelto por cada llamada. Si 
    no hay más tokens cuando se llama a la función, se devuelve
    NULL. 
*/

#include <stdio.h>
#include <string.h>

int main()
{
    // const char *url = "https://www.example.com/page?background=blue&foo=bar";
    char url[] = "https://www.example.com/page?background=blue&foo=bar";
    char *ptrTok1;

    printf("Metodo 1: ");
    ptrTok1 = strtok(url, "?");

    while (ptrTok1 != NULL){
        printf("%s\n", ptrTok1);
        ptrTok1 = strtok(NULL, "?");  
    }

    return 0;
}