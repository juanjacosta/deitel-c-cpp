/*
    Programa : D6_ejm04_sumaElementosDelArreglo.c
    Propósito: Calcular la suma de los elementos de un arreglo. El tamanho
               del arreglo se define por una variable simbólica.
*/

#include <stdio.h>
#define TAM 12

int main()
{
    int a[TAM] = {1, 3, 5, 4, 7, 2, 99, 16, 45, 67, 89, 45};
    int i;         // contador
    int total = 0; // suma del arreglo

    printf("=====================================================\n");
    printf("\tSuma elementos de un Arreglo\n");
    printf("=====================================================\n");

    for (size_t i = 0; i < TAM; i++) // size_t representa un tipo unigned int
    {
        total += a[i];
    }

    printf("%s%13s\n", "Elemento", "Valor");

    for (size_t i = 0; i < TAM; i++)
    {
        printf("%5u%15d\n", i, a[i]); // %u para imprimir unsigned int
    }

    printf("=====================================================\n");
    printf("Suma: %15d\n", total);
    printf("=====================================================\n");
    return 0;
}