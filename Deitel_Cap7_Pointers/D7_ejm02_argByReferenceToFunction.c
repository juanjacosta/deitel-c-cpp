/*
    Programa : D7_ejm02_argByReferenceToFunction.c
    Propósito: Escribir un programa que muestre la diferencia de pasar argumentos a una
               función por valor y por referencia con el uso de apuntadores
    Fecha    : 15/08/2019
 */

#include <stdio.h>

int cuboPorValor(int n);
void cuboPorReferencia(int *ptrN);

int main()
{
    int num1 = 5, num2 = 7;

    printf("===================================================\n");
    printf("\tLlamadas por valor y por referencia\n");
    printf("===================================================\n");

    printf("El valor original de numero 1 es: %d\n", num1);
    printf("El valor original de numero 2 es: %d\n", num2);

    num1 = cuboPorValor(num1); // Pasa num1 por valor a la funcion cuboPorValor()
    cuboPorReferencia(&num2);  // Pasa la dirección de num2 a cuboPorReferencia()

    printf("El nuevo valor de numero 1 es: %d\n", num1);
    printf("El nuevo valor de numero 2 es: %d\n", num2);
    printf("===================================================\n");

    return 0;
}

int cuboPorValor(int n)
{
    return n * n * n;
}

void cuboPorReferencia(int *ptrN) // El pasar un argumento como apuntador
{                                 // modifica la variable en main
    *ptrN = *ptrN * *ptrN * *ptrN;
}