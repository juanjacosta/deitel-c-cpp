/*
    Programa : D3_ejm07_preincrementoyPosincremento.c
    Propósito: Escribir un programa para mostrar el uso de operadores de 
               preincremento y posincremento.
    Fecha    : 02/08/2019
 */

#include <stdio.h>

int main()
{
    int c;

    printf("=================================================\n");
    printf("\tOperadores de Preincremento y Posincremento\n");
    printf("=================================================\n");
    
    c = 5;
    // Posincremento
    printf("%d\n", c);
    printf("%d\n", c++);
    printf("%d\n\n", c);

    c = 5;
    // Preincremento
    printf("%d\n", c);
    printf("%d\n", ++c);
    printf("%d\n", c);

    return 0;
}