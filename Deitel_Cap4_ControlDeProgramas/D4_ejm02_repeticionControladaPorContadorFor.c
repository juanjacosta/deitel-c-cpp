/*
    Programa: D4_ejm02_repeticionControladaPorContadorFor.c
    Propósito: Escribir un programa que utilice un ciclo for en una instrucción
               de repetición controlada por contador para imprimir los números de 
               1 a 10
    Fecha    : 05/08/2019
 */

#include <stdio.h>

int main()
{
    int cont = 0;

    printf("============================================\n");
    printf("\tRepetición controlada por contador\n");
    printf("=============================================\n");

    for (cont = 1; cont <= 10; cont++)       
    {
        printf("\t\t%d\n", cont);
    }
    
    printf("=============================================\n");
    
    return 0;
}