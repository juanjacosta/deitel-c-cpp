/*
    Programa: D4_ejm07_instruccionDoWhile.c
    Propósito: Mostrar el uso de la instruccion de repeticion do...while  
    Fecha    : 29/08/2019
 */
#include <stdio.h>

int main()
{
    int contador = 1;

    printf("============================================\n");
    printf("\tInstruccion do...while\n");
    printf("=============================================\n");

    do{
        printf("%d ", contador);
    } while (++contador <= 10);

    return 0;
}