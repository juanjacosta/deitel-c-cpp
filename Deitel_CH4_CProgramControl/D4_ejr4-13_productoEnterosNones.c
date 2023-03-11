/*
    Programa : D4_ejr4-13_productoEnterosNones.c
    Proposito: Escriba un programa que calcule e imprima el 
               producto de los enteros nones del 1 al 15
*/
#include <stdio.h>

#define TAM 15

int main()
{
    int i, producto = 1;

    for (i = 1; i <= TAM; i+=2){
        producto *= i;
    }
    printf("producto = %d\n", producto);
    return 0;
}