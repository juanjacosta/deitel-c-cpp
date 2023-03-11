/*
    Programa: D4_ejm04_sumarEnterosPares.c
    Propósito: Sumar todos los enteros pares del 2 al 100 
    Fecha    : 26/08/2019
 */
#include <stdio.h>

int main()
{
    int i, suma = 0;

    printf("============================================\n");
    printf("\tSuma enteros pares del 2 al 100\n");
    printf("=============================================\n");

    for (i = 2; i <= 100; i += 2){
        suma += i;

        if (i < 100){
            printf("%d + ", i);

            if (i % 10 == 0)
                printf("\n");
        }
        else
            printf ("%d = %d\n", i, suma);
    }

    printf("Suma : %d\n", suma);
    printf("=============================================\n");

    return 0;
}