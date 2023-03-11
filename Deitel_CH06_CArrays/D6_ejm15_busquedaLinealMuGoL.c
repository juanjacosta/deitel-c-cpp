#include <stdio.h>
#include <stdlib.h>

#define TAM 100

int busquedaLineal(const int arreglo[], int llave, int t);
void imprimeArreglo(const int arreglo[], const int t);

int main()
{
    int datos[TAM]; // Arreglo de datos
    int i;          // contador para inicializar los elementos de 0 a 99
    int chave;      // valor a localiza en el arreglo
    int elemento;   // variable para almacenar la ubicacion de la chave de busqueda

    for (i = 0; i < TAM; i++)
    {
        datos[i] = 1 + (rand() % TAM);
    }

    imprimeArreglo(datos, TAM);

    printf("Introduzca la llave de busqueda: ");
    scanf("%d", &chave);

    elemento = busquedaLineal(datos, chave, TAM);

    if (elemento != -1)
    {
        printf("Chave encontrada en elemento %d\n", elemento);
    }
    else
    {
        printf("Valor no encontrado\n");
    }

    return 0;
}

int busquedaLineal(const int arreglo[], int llave, int t)
{
    int i;
    for (i = 0; i < t; i++)
    {
        if (arreglo[i] == llave)
        {
            return i + 1;
        }
    }
    return -1;
}

void imprimeArreglo(const int arreglo[], const int t)
{
    int i, j;
    for (i = 0; i < t; i++)
    {
        printf("%d", arreglo[i]);

        if (i % 9 == 0)
            printf("\n");
        else
            printf("\t");
    }
}