/*  Programa : D6_ejm13_ordenamientoBurbuja.c
    Proposito: Ordenar los elementos de un arreglo de manera ascendente mediante la
               tecnica conocida como ordenamiento de burbuja. En este metodo los
               valores mas pequenos flotan gradualmente hacia arriba, como burbujas,
               mientras que los valores mas grandes se hunden en el fondo del arreglo.
               La tecnica realiza varias pasadas a traves del arreglo. En cada pasada,
               se comparan pares sucesivos de elementos. Si el par esta en orden
               ascendente (o si los valores son identicos), se dejan los valores como
               estan, pero si el par se encuentra en orden decreciente, sus valores se
               intercambian en el arreglo.
*/
#include <stdio.h>
#define TAM 10

int main()
{
    int a[TAM] = {2, 6, 4, 8, 10, 12, 89, 68, 45, 37};
    int almacena; // ubicacion temporal utilizada para el intercambio de elementos

    puts("Elementos de datos en el orden original");

    for (size_t i = 0; i < TAM; i++)
    {
        printf("%4d ", a[i]);
    }

    /* Ordenamiento de burbuja */

    for (unsigned int pasadas = 1; pasadas < TAM; pasadas++)
    { // ciclo para controlar el numero de pasadas

        for (size_t i = 0; i < TAM - 1; i++)
        { // ciclo para controlar el numero
          // de comparaciones por pasada
            if (a[i] > a[i + 1])
            {
                almacena = a[i];     // compara elementos adyacentes
                a[i] = a[i + 1];     // y los intercambia si el 1er
                a[i + 1] = almacena; // elemento es mayor que el 2do
            }
        }
    }

    puts("\nElementos del arreglo en orden ascendente");

    for (size_t i = 0; i < TAM; i++)
    {
        printf("%4d", a[i]); // Muestra el arreglo ordenado
    }

    puts("");

    return 0;
}