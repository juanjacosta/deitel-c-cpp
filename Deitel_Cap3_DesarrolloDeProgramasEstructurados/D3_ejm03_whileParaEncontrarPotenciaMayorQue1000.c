/*
    Programa : D3_ejm03_whileParaEncontrarPotenciaMayorQue1000.c
    Proposito: Escribir un programa para encontrar la primera potencia de 2 que
               sea mayor que 1000
    Fecha    : 31/07/2019
*/
#include <stdio.h>

int main()
{
    int producto = 2;

    printf("=============================\n");
    printf("Potencias de 2\n");
    printf("=============================\n");

    while (producto <= 1000)
    {
        producto = 2 * producto;
        printf("%d\n", producto);
    }
    printf("=============================\n");
    return 0;
}