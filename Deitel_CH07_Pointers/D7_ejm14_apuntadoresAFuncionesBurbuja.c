/*
    Programa : D7_ejm14_apuntadoresAFuncionesBurbuja.c
    Proposito: Mostrar el uso de los apuntadores a funciones con un version modificada
               del programa de ordenamiento burbuja . Esta nueva version consta de la 
               funcion main y de las funciones burbuja, intercambia, ascendente y 
               descendente. La funcion ordenaBurbuja recibe como argumento un apuntador 
               a una funcion, ya sea la funcion ascendente o la funcion descendente, 
               ademas del arreglo entero y el tamanho de este. El programa indica al 
               usuario que elija con la opcion 1 si el arreglo debe ordenarse de manera 
               ascendente o la opcion 2 de manera descendente.

               Ejm Deitel - Cap 7 - Ejm 7.26 - pg 264
    Fecha    : 24/09/2019
 */

#include <stdio.h>
#define TAM 10

void burbuja(int trabajo[], const int tamanio, int (*compara)(int a, int b));
int ascendente(int a, int b);
int descendente(int a, int b);

int main()
{
    int orden;          // 1 para orden ascendente o 2 para orden descendente
    int contador;       // contador 

    int a[TAM] = {2, 6, 4, 8, 10, 12, 89, 68, 45, 37};  // inicializa el arreglo 

    printf("Introduzca 1 para ordenar de forma ascendente, \n"
           "Introduzca 2 para ordenar de forma descendente: ");
    scanf("%d", &orden);

    printf("Elementos de datos en el orden originañ\n");

    for (contador = 0; contador < TAM; contador++){
        printf("%5d", a[contador]);
    }

    // clasifica el arreglo en orden ascendente; pasa la funcion ascendente como un 
    // argumento para especificar el orden ascendente 
    
    if (orden == 1){
        burbuja(a, TAM, ascendente);
        printf("\nElementos de datos en orden ascendente\n");
    }
    else {
        burbuja(a, TAM, descendente);
        printf("\nElementos de datos en orden descendente\n");
    }

    // Muestra el arreglo ordenado

    for (contador = 0; contador < TAM; contador++){
        printf("%5d", a[contador]);
    }

    printf("\n");

    return 0;
}

/* Ordenamiento burbuja multiproposito; el  parametro compara es un apuntador a la 
   funcion de comparacion que determina el tipo de ordenamiento */

void burbuja(int trabajo[], const int tamanio, int (*compara)(int a, int b))
{
    int pasada;         // contador de pasadas 
    int cuenta;         // contador de comparaciones 

    void intercambia(int *ptrElemento1, int *ptrElemento2);

    // ciclo para controlar las pasadas 
    for (pasada = 1; pasada < tamanio; pasada++){

        // ciclo para controlar el numero de comparaciones por pasada 
        for (cuenta = 0; cuenta < tamanio - 1; cuenta++){

            // si los elementos adyacentes no se encuentran en orden los intercambia 
            if ((*compara)(trabajo[cuenta], trabajo[cuenta + 1])){
                intercambia(&trabajo[cuenta], &trabajo[cuenta + 1]);
            }
        }
    }
}

/* Intercambia los valores en las ubicaciones de memoria a las que apunta  
   ptrElemento1 y ptrElemento2*/

void intercambia(int *ptrElemento1, int *ptrElemento2)
{
    int almacena;

    almacena = *ptrElemento1;
    *ptrElemento1 = *ptrElemento2;
    *ptrElemento2 = almacena;
}

/* Determina si los elementos estan en desorden para un ordenamiento ascendente */

int ascendente(int a, int b)
{
    return b < a;
}

/* Determina si los elementos estan en desorden para un ordenamiento descendente */

int descendente(int a, int b)
{
    return b > a; 
}