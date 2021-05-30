/*  Programa : D3_ejr3-10.c
    Proposito: Suponga que z tiene un valor 100, se debe calcular la suma
               en orden descendente de los enteros 100 a 1
                Ejercicio 3.10 Deitel - pg. 77
    Fecha    : 30/05/2021
 */

#include <stdio.h>

#define TAM 5

int main()
{
    int suma = 0, z = TAM;

    while (z >= 0){
        suma += z--;    // sin el decremento de z, su valor nunca cambia, creando un ciclo infinito
    }

    printf("Suma: %d\n", suma);

    return 0;
}