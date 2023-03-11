/*
    Programa : D6_ejm15_busquedaLineal.c
    Proposito: Mostrar el metodo de busqueda lineal para encontrar un elemento
               en particular en el arreglo. Este metodo compara cada elemento
               del arreglo con la clave de busqueda. Debido a que el arreglo
               no se encuentra en un orden particular, la probabilidad de que
               el valor se encuentre en el 1er elemento o en el ultimo, es la
               misma. Por lo tanto, en promedio, el programa tendra que comparar
               la clave de busqueda con la mitad de los elementos del arreglo.
*/

#include <stdio.h>
#define TAM 100

size_t busquedaLineal(const int arreglo[], int key, size_t size);
// void imprimeArreglo(const int a[]);

int main()
{
    int a[TAM];        // crea el arreglo
    int llaveBusqueda; // valor para localizar en el arreglo

    // crea los datos
    for (size_t x = 0; x < TAM; x++)
    {
        a[x] = 2 * x;
    }
    // imprimeArreglo(a);

    puts("\nIntroduzca la llave de busqueda entera: ");
    scanf("%d", &llaveBusqueda);

    // intenta localizar llaveBusqueda en el arreglo a[]
    size_t elemento = busquedaLineal(a, llaveBusqueda, TAM);

    // despliega los resultados
    if (elemento != -1)
    {
        printf("Encontre el valor en el elemento %d\n", elemento);
    }
    else
    {
        printf("Valor no encontrado\n");
    }

    return 0;
}

// Compara llave con cada elemento del arreglo hasta que localiza el elemento
size_t busquedaLineal(const int arreglo[], int key, size_t size)
{
    for (size_t n = 0; n < size; n++)
    {
        if (arreglo[n] == key)
            return n;
    }
    return -1; // llave no encontrada
}

// void imprimeArreglo(const int a[])
// {
//     int j;

//     for (j = 0; j < TAM; j++){
//         if (j % 20 == 0){
//             printf("\n");
//         }
//         else {
//             printf("\t");
//         }
//         printf("%d", a[j]);
//     }
// }