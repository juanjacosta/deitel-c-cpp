/*
    Programa : D3_ejr3-26_tablaSuma.c
    Propósito: Escribir un programa que utilice ciclos para imprimir
               la siguiente tabla de valores
*/

#include <stdio.h>

int main()
{
    int A;

    printf("====================================\n");
    printf("%s\t%s\t%s\t%s\n\n", "A", "A+2", "A+4", "A+6");

    for (A = 3; A <= 15; A+=3){
        printf("%d\t%d\t%d\t%d\n", A, A+2, A+4, A+6);
    }

    printf("====================================\n");

    return 0;
}