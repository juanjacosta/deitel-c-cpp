/*
    Programa : D4_ejr4-9_secuenciaEnteros.c
    Proposito: Escriba un programa que sume una secuencia de 
               enteros. Asuma que el primer entero leido mediante
               scanf especifica el numero de valores restantes 
               que se introducirán. Su programa debe leer únicamente
               un valor de cada vez que se ejecuta scanf. Una secuencia
               de entrada típica podria ser 
               5    100     200     300     400     500
               donde el 5 indica que se sumarán los 5 números 
               subsiguientes. 
*/
#include <stdio.h>

int main()
{
    int nValores;    // recibirá el 1er valor que es el número de valores que se introducirán 
    int n;
    int suma = 0;   // recibe cada valor ingresado y acumula la suma de la secuencia ingresada
    int i;          // contador 

    scanf("%d", &nValores);

    for (i = 1; i <= nValores; i++)
    {
        scanf("%d", &n);
        suma += n;   
        // printf("\nfSuma: %d\n", suma);
    }

    printf("\nSuma: %d\n", suma);

    return 0;
}