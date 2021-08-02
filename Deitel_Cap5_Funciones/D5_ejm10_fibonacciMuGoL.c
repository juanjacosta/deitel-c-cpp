/*
    Programa : D5_ejm10_fibonacciMuGoL.c
    Propósito: Hacer llamadas recursiva a una función recursiva
               que calcula la serie de fibonacci
 */

#include <stdio.h>
#define TAM 10

long fibonacci(long n);

int main()
{
    printf("====================================\n");
    printf("\tFinoacci\n");
    printf("====================================\n");

    int i;

    for (i = 0; i <= TAM; i++){
        printf("Fibonacci %d = %ld\n", i, fibonacci(i));
    }
    
    return 0;
}

long fibonacci(long n)
{
    // if (n == 0 ){
    //     return 0;
    // }
    // else if (n == 1){
    //     return 1;
    if (n == 0 || n == 1){
        return n;
    }
    else {
        return fibonacci(n - 1) + fibonacci(n - 2);
    }
}