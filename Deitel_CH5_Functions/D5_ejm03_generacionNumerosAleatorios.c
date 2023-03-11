/*
    Programa : D5_ejm03_generacionNumerosAleatorios.c
    Propósito: Escribir un programa que simule 20 tiros de un dado y que 
               despliegue el valor de cada tiro. Imprima el resultado en 
               filas de 5 columnas.
 */

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i;

    printf("================================================\n");
    printf("\tGeneracion de Numeros aleatorios\n");
    printf("================================================\n");

    for (i = 1; i <= 20; i++){

        printf("%7d ", 1 + (rand() % 6));

        if (i % 5 == 0)
            printf("\n");
    }

    return 0;
}