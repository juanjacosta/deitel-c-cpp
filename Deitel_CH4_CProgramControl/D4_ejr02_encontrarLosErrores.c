/*
    Programa : D4_ejr01_sumaImpares.c
    Proposito: Encuentre el error en cada instruccion.
                Ejercicio 4.5 - Deitel pg. 120
    Fecha    : 04/09/2019 
 */
#include <stdio.h>

int main()
{
    int x;
    int valor;

    printf("a)\n");
    for (x = 1; x <=100; x++){  // Error: tenia , en lugar de ;
        printf("%d", x);        // en el encabezado de for
        if (x % 10 == 0)        // condicion de continuacion
            printf("\n");       // (instruccion 2 de for)
        else                    // nunca se hacia falsa
            printf("\t");
    }
    printf("\n");
    printf("b) ParImpar switch...case\n");
    valor = 7;
    printf("Valor: %d\n", valor);   // Error: faltaba el break 
    switch(valor % 2){              // al final del 1er case,
        case 0:                     // por esto aunque el valor 
            printf("Entero par\n"); // fuera par (caso del 1er case)
            break;                  // siempre ejecutaba la instruccion
        case 1:                     // del 2do case 
            printf("Entero Impar\n");
            break;
    }



    return 0;
}