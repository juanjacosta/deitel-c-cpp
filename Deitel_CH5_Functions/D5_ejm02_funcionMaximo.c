/*
    Programa : D5_ejm02_funcionMaximo.c
    Propósito: Escribir un programa que mediante una función maximo encuentre
               el mayor de tres valores enteros
 */

#include <stdio.h>

int maximo(int x, int y, int z);          // Prototipo de la función. Indica que recibe 3 parámetros de tipo entero 

int main()
{
    int n1, n2, n3;

    printf("===============================\n");
    printf("\tFuncion Maximo\n");
    printf("===============================\n");

    printf("Introduzca tres enteros: ");
    scanf("%d%d%d", &n1, &n2, &n3);
    // scanf("%d", &n1);
    // scanf("%d", &n2);
    // scanf("%d", &n3);
    
    printf("El maximo es: %d\n", maximo(n1, n2, n3));   // Llamada a la función con sus 3 argumentos de entrada
    printf("===============================\n");

    return 0;
}

int maximo(int x, int y, int z)           // Definición de la función. Indica que recibe 3 parámetros de tipo entero 
{                                         // Los parámetros son variables locales de la función
    int max = x;

    if (y > max)
        max = y;
    if (z > max)
        max = z;

    return max;
}