/*
    Programa : D6_ejm03_sumaElemArregloMuGoL.c
    Propósito: Inicializar elementos del arreglo con lista de inicialización
               y sumar cada elemento
*/

#include <stdio.h>

#define TAM 10

int main()
{
    int a[TAM] = {1, 3, 5, 4, 7, 16, 45, 67, 89, 45};
    int i, suma = 0;

    for (size_t i = 0; i < TAM; i++) // size_t representa un tipo unigned int
    {
        suma += a[i];
    }

    printf("%s%13s\n", "Elemento", "Valor");

    for (i = 0; i < TAM; i++)
    {
        printf("%7u%13d\n", i, a[i]); // %u para imprimir unsigned int
    }
    printf("=====================================================\n");
    printf("Suma: %15d\n", suma);
    printf("=====================================================\n");

    return 0;
}