/**
 * @file D6_ejm19_sumaElements2Darray.c
 * @brief definir tamanho array 2D e contar o numero de elementos
 */

#include <stdio.h>
#include <stdlib.h>

int colunas = 1;

void printArray(int a[][colunas], int f, int c);

int main(void)
{
    int filas;
    int total = 0;

    puts("Ingrese numero de filas y columnas del array: ");
    scanf("%d %d", &filas, &colunas);

    int array[filas][colunas];

    for (size_t i = 0; i < filas; i++)
    {
        for (size_t j = 0; j < colunas; j++)
        {
            array[i][j] = 1 + rand() % 6;
            total += array[i][j];
        }
    }

    puts("");
    printArray(array, filas, colunas);
    printf("# de elementos %d\n", filas * colunas);
    printf("suma: %d\n", total);
}

void printArray(int a[][colunas], int f, int c)
{
    for (size_t i = 0; i < f; i++)
    {
        for (size_t j = 0; j < c; j++)
        {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
}