/*
    Programa : D5_ejm01_creacionFuncionCuadrado.c
    Propósito: Mostar la forma de crear y utilizar una función
               definida por el usuario
    Fecha    : 02/08/2019 
 */

#include <stdio.h>

int cuadrado(int y);        // Prototipo de la función. Indica que recibe 1 parámetro

int main()
{
    int x;

    printf("===============================\n");
    printf("\tFuncion Cuadrado\n");
    printf("===============================\n");

    for (x = 1; x <= 10; x++){

        printf("%d ", cuadrado(x));     // Llamada a la función con su argumento de entrada
    }

    printf("\n===============================\n");
    return 0;
}

int cuadrado(int y)         // Definición de la función. Indica que recibe 1 parámetro
{                           // Los parámetros son variables locales de la función
    return y * y;
}