/*
 Programa : D2_ejm06_imprimeFiguras.c
 Proposito: Escribir un programa que imprima una caja, un óvalo, una flecha y un diamante.
 Fecha    : 27/07/2019 
 */

#include <stdio.h>

int main()
{
    printf("==============================================\n");
    printf("\tPrograma que imprime figuras\n");
    printf("==============================================\n");

    printf("%1s%10s%10s%10s\n", "*********", "***", "*", "*");
    printf("%1s%12s%9s%10s\n", "*       *", "*     *", "***", "* *");
    printf("%1s%13s%9s%10s\n", "*       *", "*       *", "*****", "*   *");
    printf("%1s%13s%7s%13s\n", "*       *", "*       *", "*", "*     *");
    printf("%1s%13s%7s%14s\n", "*       *", "*       *", "*", "*       *");
    printf("%1s%13s%7s%13s\n", "*       *", "*       *", "*", "*     *");
    printf("%1s%13s%7s%12s\n", "*       *", "*       *", "*", "*   *");
    printf("%1s%12s%8s%11s\n", "*       *", "*     *", "*", "* *");
    printf("%1s%10s%10s%10s\n", "*********", "***", "*", "*");
    
    return 0;
}