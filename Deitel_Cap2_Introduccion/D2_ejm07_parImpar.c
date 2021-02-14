/*
    Programa : D2_ejm07_parImpar.c
    Propósito:Escriba un programa que lea un entero y que determine e imprima si es par
              impar [Pista : Utilice el operador módulo. Un número par es múltiplo de dos.
              Cualquier múltiplo de 2 arroja un residuo de cero, cuando se divide entre 2]
    Fecha    : 28/07/2019
*/
#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS

int main()
{
    int num;

    printf("=======================================\n");
    printf("\tPar o Impar\n");
    printf("=======================================\n");

    printf("Ingrese numero entero: ");
    scanf("%d", &num);

    if (num % 2 == 0)
    {
        printf("El numero %d es par\n", num);
    }
    else{
        printf("El numero %d es Impar\n", num);
    }

    printf("=======================================\n");

    return 0;
}