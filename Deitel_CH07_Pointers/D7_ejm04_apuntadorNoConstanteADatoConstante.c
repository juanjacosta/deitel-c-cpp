/*
    Programa : D7_ejm03_apuntadorNoConstanteADatoConstante.c
    Propósito: Escribir un programa que muestre como modificar un apuntador no constante a un
               dato constante, con un programa que imprime una cadena, caracter por caracter.
 */

#include <stdio.h>

void printCharacters(const char *ptrS);

int main()
{
    char cadena[] = "imprime caracteres de una cadena";

    printf("La cadena es: \n");
    printCharacters(cadena);
    printf("\n");

    return 0;
}

void printCharacters(const char *ptrS)
{
    for (; *ptrS != '\0'; ptrS++)
    {
        printf("%c", *ptrS);
    }
}