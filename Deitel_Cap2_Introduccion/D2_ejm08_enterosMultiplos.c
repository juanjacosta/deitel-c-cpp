/*
    Programa : D2_ejm08_enterosMultiplos.c
    Propósito: Escribir un programa que lea dos enteros y que determine e imprima si el 
               primero es múltiplo del segundo [Pista: Utilice el operador módulo]
    Fecha    : 28/07/2019
*/
#include <stdio.h>
//#define _CRT_SECURE_NO_WARNINGS

int main()
{
    int num1, num2;

    printf("==================================\n");
    printf("\tEnteros Multiplos\n");
    printf("==================================\n");

    printf("Ingrese 1er entero: ");
    scanf("%d", &num1);

    printf("Ingrese 2do entero: ");
    scanf("%d", &num2);
    
    if (num1 % num2 == 0){
        printf("%d es multiplo de %d\n", num1, num2);
    }
    else{
        printf("%d NO es multiplo de %d\n", num1, num2);
    }
/* 
    if (num1 % num2 == 0 || num2 % num1 == 0){
        printf("Los enteros %d y %d SON Multiplos\n", num1, num2);
    }
    else{
        printf("Los enteros %d y %d NO SON Multiplos\n", num1, num2);
    }
*/
    printf("==================================\n");

    return 0;
}