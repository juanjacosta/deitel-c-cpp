/*
 Programa : D2_ejm04_operacionesAritmeticas.c
 Proposito: Escribir un programa que introduzca tres diferentes enteros desde  
            el teclado, después que imprima la suma, el promedio, el producto, 
            el número más pequeño y el más grande de éstos.
 Fecha    : 25/07/2019 
 */
#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS

int main()
{
    int num1, num2, num3, suma, prod, max, min;
    float prom;

    printf("=======================================\n");
    printf("\tSuma, Resta, Promedio y Producto\n");
    printf("=======================================\n");

    printf("Ingrese tres numeros enteros: ");
    scanf("%d%d%d", &num1, &num2, &num3);

    suma = num1 + num2 + num3;
    prod = num1 * num2 * num3;
    prom = suma / 3;

    // Evalua numero mayor
    max = num1;
    if (num2 > max)
        max = num2;
    if (num3 > max)
        max = num3;
    
    // Evalua numero menor
    min = num1;
    if (num2 < min)
        min = num2;
    if (num3 < min)
        min = num3;

    printf("Suma    : %d\n", suma);
    printf("Producto: %d\n", prod);
    printf("Promedio: %.2f\n", prom);
    printf("mayor   : %d\n", max);
    printf("menor   : %d\n", min);
    printf("=======================================\n");
    
    return 0;
}