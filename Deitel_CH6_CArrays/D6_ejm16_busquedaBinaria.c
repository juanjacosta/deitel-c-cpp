/*
    Programa : D6_ejm15_busquedaBinaria.c
    Proposito: Mostrar el metodo de busqueda binaria, la cual es una tecnica de alta velocidad
               que como requisito solo necesita que el arreglo este ordenado, ya que su modo
               de operacion se basa en localizar el elemento central del arreglo y compararlo
               con la clave de busqueda. Si son iguales, entonces se localizo la clave de
               busqueda, y se devuelve el subindice del elemento del arreglo. De lo contrario,
               el problema se reduce a buscar en una mitad del arreglo. Si la clave de busqueda
               es menor que el elemento central del arreglo, la busqueda se realiza en la 1ra
               mitad de este; de lo contrario, la busqueda se realiza en la segunda mitad. Si
               la clave de busqueda no se encuentra en el subarreglo especificado (parte del
               arreglo original), el algoritmo se repite en un cuarto del arreglo original. La
               busqueda continua hasta que la clave de busqueda es igual al elemento central de
               un subarreglo, o hasta que el subarreglo consista en un elemento que no sea igual
               a la clave de busqueda (es decir, no se encontro la clave de busqueda).
    Fecha    : 10/09/2019
*/
#include <stdio.h>
#define TAM 15

/*  Prototipos de las funciones */

size_t busquedaBinaria(const int b[], int claveDeBusqueda, size_t bajo, size_t alto);
void despliegaEncabezado(void);
void despliegaLinea(const int b[], size_t bajo, size_t medio, size_t alto);
void imprimeArreglo(const int a[]);

int main()
{
    int a[TAM];       // crea el arreglo
    int llave;        // valor a localizar en el arreglo
    size_t resultado; // variable para almacenar la ubicacion de la llave o -1

    // crea los datos
    for (size_t i = 0; i < TAM; i++)
    {
        a[i] = 2 * i;
    }
    // printf("Arreglo Generado:\n");
    // imprimeArreglo(a);          // imprime el arreglo generado

    puts("\nIntroduzca un numero entre 0 y 28: ");
    scanf("%d", &llave);

    despliegaEncabezado();

    // Busca la llave en el arreglo a[]
    resultado = busquedaBinaria(a, llave, 0, TAM - 1);

    // Despliega los resultados
    if (resultado != -1)
    {
        printf("\n%d se encuentra en el elemento %d del arreglo\n", llave, resultado);
    }
    else
    {
        printf("\n%d no se encuentra\n", llave);
    }

    return 0;
}

/*  Definicion de las funciones */

void despliegaEncabezado(void) // Funcion que imprime un encabezado para la salida
{
    printf("\nSubindices:\n");

    // Muestra el encabezado de la columna
    for (size_t i = 0; i < TAM; i++)
    {
        printf("%3d ", i);
    }

    puts("");

    for (unsigned int i = 1; i <= 4 * TAM; i++)
    {
        printf("-");
    }

    printf("\n");
}

size_t busquedaBinaria(const int b[], int claveDeBusqueda, size_t bajo, size_t alto)
{
    // realiza el ciclo hasta que el subindice bajo es mayor que el subindice alto
    while (bajo <= alto)
    {
        size_t central = (bajo + alto) / 2; // determina el elemento central del subarrelgo en el que se busca

        despliegaLinea(b, bajo, central, alto);

        if (claveDeBusqueda == b[central])
        {                   // si claveDeBusqueda coincide con el elemento
            return central; // central, devuelve central
        }
        else if (claveDeBusqueda < b[central])
        {                       // si claveDeBusqueda es menor que el elemento central, establece el nuevo valor de alto
            alto = central - 1; // busca en la mitad inferior del arreglo
        }
        else
        { // si claveDeBusqueda es mayor que el elemento central, establece el nuevo valor para bajo
            bajo = central + 1;
        }
    }
    return -1;
}

void despliegaLinea(const int b[], size_t bajo, size_t medio, size_t alto)
{
    for (size_t i = 0; i < TAM; i++)
    { // ciclo a traves del arreglo completo

        if (i < bajo || i > alto)
        {                   // despliega espacios si se encuentra fuera del rango
            printf("    "); // actual del subarreglo
        }
        else if (i == medio)
        {                         // despliega el elemento central
            printf("%3d*", b[i]); // marca el valor central
        }
        else
        { // despliega otros elementos en el subarreglo
            printf("%3d ", b[i]);
        }
    }
    printf("\n"); // Inicia la nueva linea de salida
}

void imprimeArreglo(const int a[])
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