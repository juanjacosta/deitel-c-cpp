/*
    Programa : D4_ejm01_repeticionControladaPorContador.c
    Propósito: Escribir un programa que utilice un ciclo while en una instrucción
               de repetición controlada por contador para imprimir los números de 
               1 a 10
    Fecha    : 05/08/2019 
 */

#include <stdio.h>

int main()
{
    // int cont = 1;
    int cont = 0;

    printf("============================================\n");
    printf("\tRepetición controlada por contador\n");
    printf("=============================================\n");

    //  while (cont <= 10)
    // {
    //     printf("\t\t%d\n", cont);
    //     ++cont;
    // }
    
    while (++cont <= 10)
    {
        printf("%d ", cont);
    }
    printf("\n");
    

    printf("=============================================\n");
    return 0;
}