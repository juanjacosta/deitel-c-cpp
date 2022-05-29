/*  Programa : D6_ejm11_funcionModificaArreglo.c
    Proposito: Mostrar la diferencia entre pasar un arreglo completo y pasar un elemento
               del arreglo
*/
#include <stdio.h>
#define TAM 5

void modificaArreglo(int b[], size_t tamanio);
void modificaElemento(int e);

int main()
{
    int a[TAM] = {0, 1, 2, 3, 4};

    printf("Efectos de pasar arreglos completos por referencia:\n"
           "Los valores del arreglo original son: \n");

    // Imprime el arreglo original
    for (size_t i = 0; i < TAM; ++i)
    {
        printf("%3d", a[i]);
    }
    puts("");

    modificaArreglo(a, TAM); // Pasa el arreglo por referencia a modificaArreglo()

    puts("Los valores del arreglo modificado son:");

    for (size_t i = 0; i < TAM; ++i)
    {
        printf("%3d", a[i]);
    }

    printf("\n\nEfectos de pasar un elemento del arreglo " // Muestra el valor de a[3]
           "por valor:\n\nEl valor de a[3] es %d\n",
           a[3]);

    modificaElemento(a[3]); // pasa el elemento a[3] del arreglo por valor

    printf("El valor de a[3] es %d\n", a[3]); // muestra el valor de a[3]

    return 0;
}

void modificaArreglo(int b[], size_t tamanio) // En esta funcion "b" apunta al arreglo original
{                                             // en memoria que es a[TAM]

    for (size_t j = 0; j < tamanio; ++j)
    {
        b[j] *= 2;
    }
}

void modificaElemento(int e) // en esta funcion "e" es una copia local del
{                            // elemento a[3] de arreglo que se paso desde main
    printf("El valor en modificaElemento es %d\n", e *= 2);
}
