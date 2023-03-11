/*
  Programa : D5_ejm10_recursividadFibonacci.c
  Proposito: Calcular recursivamente el enesimo numero de Fibonacci, utilizando
             una funcion llamada fibonacci()
  Fecha    : 02/09/2019
 */
#include <stdio.h>

long fibonacci(long n);

int main()
{
    long resultado;
    long numero;

    printf("=============================================\n");
    printf("\tFibonacci\n");
    printf("=============================================\n");

    printf("Introduzca un entero: ");
    scanf("%ld", &numero);

    resultado = fibonacci(numero);                          // calcula el valor fibonacci 
                                                            // del numero introducido 
    printf("Fibonacci (%ld) = %ld\n", numero, resultado);   // despliega el resultado 
    return 0;
}

long fibonacci(long n)
{
    if (n == 0 || n == 1){                              // caso base
        return n;
    } else {                                            // paso recursivo 
        return fibonacci(n - 1) + fibonacci(n - 2);
    }
}