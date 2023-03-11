/**
 * @file D6_ejm21_variable-length-arrays.c
 * @brief calcular la longitued en un array en bits
 *        y en número de elementos
 *  */

#include <stdio.h>

void imprimeArray1D(int a[], int t);
void imprimeArray2D(int f, int c, int a[f][c]);

int main(void)
{

    /**
     * @brief Arreglo 1D
     *        sizeof retorna el tamanho del arreglo multiplicando el
     *        el número de elementos por el tamanho en bytes del tipo
     *        de variable del arreglo
     */

    int tam_array1D;

    printf("%s", "Ingrese tamanho de array 1D: ");
    scanf("%d", &tam_array1D);

    int array1D[tam_array1D];

    imprimeArray1D(array1D, tam_array1D);

    printf("Tamanho en bytes array 1D: %d bytes\n", sizeof(array1D));
    printf("# de elementos de array  : %d elementos\n", sizeof(array1D) / sizeof(array1D[0]));

    /**
     * @brief Arreglos 2D
     *
     */

    int filas1, colunas1, filas2, colunas2;

    printf("%s", "\nIngrese # Filas y columnas de aaray 2D 1: ");
    scanf("%d %d", &filas1, &colunas1);

    int array2D_1[filas1][colunas1];
    imprimeArray2D(filas1, colunas1, array2D_1);

    printf("Tamanho en bytes array 2D-1: %d bytes\n", sizeof(array2D_1));
    printf("# de elementos de array  : %d elementos\n", sizeof(array2D_1) / sizeof(array2D_1[0][0]));

    printf("%s", "\nIngrese # Filas y columnas de aaray 2D 2: ");
    scanf("%d %d", &filas2, &colunas2);

    int array2D_2[filas2][colunas2];
    imprimeArray2D(filas2, colunas2, array2D_2);

    printf("Tamanho en bytes array 2D-2: %d bytes\n", sizeof(array2D_2));
    printf("# de elementos de array  : %d elementos\n", sizeof(array2D_2) / sizeof(array2D_2[0][0]));
}

void imprimeArray1D(int a[], int t)
{
    for (size_t i = 0; i < t; i++)
    {
        a[i] = i * i;
        printf("array[%d] = %d\n", i, a[i]);
    }
    puts("");
}

void imprimeArray2D(int f, int c, int a[f][c])
{
    for (size_t i = 0; i < f; i++)
    {
        for (size_t j = 0; j < c; j++)
        {
            a[i][j] = i * j;
            printf("%5d ", a[i][j]);
        }
        puts("");
    }
}