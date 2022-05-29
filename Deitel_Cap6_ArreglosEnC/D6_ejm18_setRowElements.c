/**
 * @file D6_ejm18_setRowElements.c
 * @brief inicializar un arreglo con números aleatorios e después
 *        zerar todas las filas de una columna específica *
 */

#include <stdio.h>
#include <stdlib.h>

void printArray(int a[][4]);
void zerarFila(int a[][4], int f);

int main()
{
    int datos[3][4] = {};

    for (size_t i = 0; i < 3; i++)
    {
        for (size_t j = 0; j < 4; j++)
        {
            datos[i][j] = 1 + rand() % 6;
        }
    }

    printArray(datos);
    puts("");

    puts("Ingrese fila a zerar (0-2): ");
    int fila;
    scanf("%d", &fila);
    zerarFila(datos, fila);

    printArray(datos);
}

void printArray(int a[][4])
{
    for (size_t i = 0; i < 3; i++)
    {
        for (size_t j = 0; j < 4; j++)
        {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
}

void zerarFila(int a[][4], int f)
{
    for (size_t columna = 0; columna < 4; columna++)
    {
        a[f][columna] = 0;
    }
}