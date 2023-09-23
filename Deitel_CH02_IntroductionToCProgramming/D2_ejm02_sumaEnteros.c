/*
 Programa : D2_ejm_02_sumaEnteros.c
 Proposito: Escribir un programa que imprima la suma de dos valores enteros 
            ingresados por el usuario.
 */
#include <stdio.h>
// #define _CRT_SECURE_NO_WARNINGS

int main(void)
{
    int num1, num2, suma;

    printf("=================================================\n");
    printf("\tSuma de Enteros\n");
    printf("=================================================\n");

    printf("Introduzca el primer entero: ");
    scanf("%d", &num1);

    printf("Introduzca el segundo entero: ");
    scanf("%d", &num2);

    suma = num1 + num2;

    printf("=================================================\n");
    printf("La suma es: %d\n", suma);
    printf("=================================================\n");

    return 0;
}