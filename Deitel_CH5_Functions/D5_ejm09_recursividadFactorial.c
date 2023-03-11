/*
  Programa : D5_ejm09_recursividadFactorial.c
  Proposito: Mostrar el uso de la recursividad para calcular e imprimir los factoriales
             de los enteros 0 a 10. 
 */
#include <stdio.h>

long factorial(long numero);    // prototipo de la funcion

int main()
{
    int i;                      // contador 

    printf("=================================================\n");
    printf("\tCalculo Factorial por Recursividad\n");
    printf("==================================================\n");

    for (i = 0; i <= 10; i++){
        printf("%2d! = %ld\n", i, factorial(i));
    }

    return 0;
}

long factorial(long numero)
{
    if (numero <= 1){               // caso base 
        return 1;
    } else {                        // paso recursivo 
        return (numero * factorial(numero - 1));
    }
}