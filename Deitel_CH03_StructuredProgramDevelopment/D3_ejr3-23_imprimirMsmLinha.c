/*
    Programa : D3_ejr3-23_imprimirMsmLinha.c
    Propósito: Escriba un programa que utilice un ciclo para imprimir  
               los números 1 a 10 dentro de la misma línea, separados 
               cada uno por espacios en blanco 
*/

#include <stdio.h>

int main()
{
    int i = 1;

    while (i <= 10)     
    {
        printf("%d   ", i);
        i++;
    }
    printf("\n");

    return 0;
}