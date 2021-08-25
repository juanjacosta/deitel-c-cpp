/*
    Programa : D13_ejr13-6_macroMINIMO2.c
    Propósito: Escriba un programa que defina y utilice la macro MINIMO2 
               para determinar el más pequeño de dos valores numéricos.
               Introduzca los valores desde el teclado.
*/

#include <stdio.h>

#define MINIMO2(x, y) if (x == y) printf("Iguais\n"); else x < y ? printf("MINIMO: %d\n", x) : \
                                                                   printf("MINIMO: %d\n", y)

int main()
{
    int n1, n2;
    printf("Introduzca valores: ");
    scanf("%d%d", &n1, &n2);

    MINIMO2(n1,n2);

    return 0;
}