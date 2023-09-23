/*
    Programa : D2_ejm08_enterosMultiplos.c
    Propósito: Escribir un programa que lea dos enteros y que determine e imprima si el 
               primero es múltiplo del segundo [Pista: Utilice el operador módulo]
    Fecha    : 14/02/2021
*/
#include <stdio.h>
//#define _CRT_SECURE_NO_WARNINGS

int main(void)
{
    int num1, num2, multiplo;
    num1 = num2 = multiplo = 0;

    printf("==================================\n");
    printf("\tEnteros Multiplos\n");
    printf("==================================\n");

    printf("Ingrese 1er entero: ");
    scanf("%d", &num1);

    printf("Ingrese 2do entero: ");
    scanf("%d", &num2);

    for (int i = 1; i < 10; i++)
    {

        if (num1 == num2)
        {
            multiplo = 1;
        }

        if (num1 == (num2 * i))
        {
            multiplo = 1;
        }
    }

    if (multiplo)
        printf("%d es multiplo de %d\n", num1, num2);
    else
        printf("%d NO es multiplo de %d\n", num1, num2);

    printf("==================================\n");

    return 0;
}