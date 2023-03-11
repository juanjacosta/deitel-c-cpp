/*
    Programa : D6_ejm14_mediaMedianaModa.c
    Proposito: calcular la media, mediana y moda de un arreglo de 99 elementos,
               que representan 99 respuestas de una encuesta. Cada respuesta es
               un numero del 1 al 9
*/

#include <stdio.h>
#define TAM 99

/*  Prototipos de funciones */

void media(const unsigned int resp[]);
void mediana(unsigned int resp[]);
void moda(unsigned int freq[], unsigned const int resp[]);
void ordenamBurbuja(int a[]);
void imprimeArreglo(unsigned const int a[]);

int main()
{
    int frecuencia[10] = {0}; // inicializa el arreglo frecuencia
    int respuesta[TAM] =
        {6, 7, 8, 9, 8, 7, 8, 9, 8, 9,
         7, 8, 9, 5, 9, 8, 6, 8, 7, 8,
         6, 7, 8, 9, 8, 7, 8, 9, 8, 9,
         7, 8, 9, 5, 9, 8, 4, 8, 7, 8,
         6, 7, 8, 2, 8, 7, 8, 9, 8, 9,
         7, 8, 6, 8, 3, 8, 2, 8, 5, 3,
         5, 6, 8, 2, 8, 7, 8, 9, 8, 9,
         7, 8, 8, 6, 9, 1, 7, 8, 7, 8,
         7, 4, 4, 2, 8, 7, 8, 7, 5, 6,
         4, 5, 9, 1, 6, 5, 7, 8, 7};

    // printf("Arreglo Original\n");
    //  for (int i = 0; i < TAM; i++){
    //      printf("%d", respuesta[i]);
    //      if (i % 9 == 0)
    //         printf ("\n");
    //     else
    //         printf("\t");
    //  }

    /* Procesa las respuestas */
    media(respuesta);
    mediana(respuesta);
    moda(frecuencia, respuesta);

    return 0;
}

/*  Definiciones de funciones */

void media(const unsigned int resp[])
{
    int j;
    int total = 0;

    printf("\n%s\n%s\n%s\n", "********************", "    Media", "********************");

    for (j = 0; j < TAM; j++)
    {
        total += resp[j]; // Total de los valores de las respuestas
    }

    printf("La media es eL valor promedio de los datos\n"
           "La media es igual al total de\n"
           "todos los elementos de datos dividos por\n"
           "el numero de elementos de datos (%d). La media\n"
           "en esta ejecucion es: %d / %d = %.4f\n\n",
           TAM, total, TAM, (double)total / TAM);
}

void mediana(unsigned int resp[])
{
    printf("\n%s\n%s\n%s\n", "********************", "    Mediana", "********************");
    printf("El arreglo de respuestas desordenado es: ");

    imprimeArreglo(resp);

    ordenamBurbuja(resp);

    printf("\n\nEl arreglo ordenado es: ");
    imprimeArreglo(resp);

    printf("\n\nLa mediana es el elemento %d del\n"
           "arreglo ordenado de %d elementos.\n"
           "Para esta ejecucion la mediana es %d\n\n",
           TAM / 2, TAM, resp[TAM / 2]);
}
void moda(unsigned int freq[], unsigned const int resp[]) // determina las respuestas mas frecuentes
{
    int rango; // contador para acceder a los elementos de 1 a 9 del arreglo frec
    int j;     // contador para sumar los elementos de 0 a 98 del arreglo respuesta
    int h;     // contador para desplegar histogramas de los elementos en el arreglo frec
    int masGrande = 0;
    int valorModa = 0;

    printf("\n%s\n%s\n%s\n",
           "********************", "    Moda", "********************");

    for (rango = 1; rango <= 9; rango++)
    {
        freq[rango] = 0;
    }

    for (j = 0; j < TAM; j++)
    {
        ++freq[resp[j]];
    }

    // Muestra los encabezados de las columnas
    printf("%s%11s%19s\n\n%54s\n%54s\n\n",
           "Respuesta", "Frecuencia", "Hostograma",
           "1   1   2   2", "5  0   5   0   5");

    // Muestra los resultados
    for (rango = 1; rango <= 9; rango++)
    {
        printf("%8d%11d     ", rango, freq[rango]);

        if (freq[rango] > masGrande)
        {                            // sigue la pista del valor de la moda
            masGrande = freq[rango]; // y del valor de la frecuencia mas grande
            valorModa = rango;
        }

        for (h = 1; h <= freq[rango]; h++)
        {
            printf("*");
        }
        printf("\n");
    }

    // Desplidga el valor de la moda
    printf("La moda es el valor mas frecuente.\n"
           "Para esta ejecucion la moda es %d el cual ocurrio"
           " %d veces.\n",
           valorModa, masGrande);
}

void ordenamBurbuja(int a[]) // Funcion que ordena el algoritmo  mediante
{                            // el metodo de la burbuja algorithm
    int i, j, aux;

    for (i = 1; i < TAM; i++)
    {

        for (j = 0; j < TAM - 1; j++)
        {

            if (a[j] > a[j + 1])
            {
                aux = a[j];
                a[j] = a[j + 1];
                a[j + 1] = aux;
            }
        }
    }
}

void imprimeArreglo(unsigned const int a[])
{
    int j;

    for (j = 0; j < TAM; j++)
    {
        if (j % 20 == 0)
        {
            printf("\n");
        }
        else
        {
            printf("\t");
        }
        printf("%d", a[j]);
    }
}
