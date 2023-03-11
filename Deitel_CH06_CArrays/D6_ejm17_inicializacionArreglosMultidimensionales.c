/*
    Programa : D6_ejm16_inicializacionArreglosMultidimensionales.c
    Proposito: Mostrar la manera de declarar e inicializar arreglos con dos subindices.
               Un arreglo con dos subindices puede inicializarse en su declaracion de
               manera similar a un arreglo de un solo subindice. Por convencion, el 1er
               subindice identifica la fila del elemento, y el segundo la columna del
               elemento.
*/

#include <stdio.h>

void despliegaArreglo(const int a[][3]);

int main(void)
{
    int arreglo1[2][3] = {{1, 2, 3}, {4, 5, 6}};
    int arreglo2[2][3] = {1, 2, 3, 4, 5};
    int arreglo3[2][3] = {{1, 2}, {4}};

    puts("Los valores en el arreglo 1 por linea son:");
    despliegaArreglo(arreglo1);

    puts("Los valores en el arreglo 2 por linea son:");
    despliegaArreglo(arreglo2);

    puts("Los valores en el arreglo 3 por linea son:");
    despliegaArreglo(arreglo3);

    return 0;
}

void despliegaArreglo(const int a[][3])
{
    // contador de filas
    for (size_t i = 0; i <= 1; i++)
    {
        // contador de columnas
        for (size_t j = 0; j <= 2; j++)
        {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
}