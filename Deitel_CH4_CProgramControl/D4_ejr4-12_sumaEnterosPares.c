/*
    Programa : D4_ejr4-12_sumaEnterosPares.c
    Proposito: Escriba un programa que calcule e imprima la 
               suma de los enteros pares del 2 al 30
*/
#include <stdio.h>

#define LIM 30

int main()
{
    int n, sum = 0;

    for (n = 2; n <= LIM; n +=2)
    {
        sum += n;
    }
    printf("Suma: %d\n", sum);

}