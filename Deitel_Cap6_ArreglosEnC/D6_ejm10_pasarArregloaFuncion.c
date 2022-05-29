/*  Programa : D6_ejm10_pasarArregloaFuncion.c
    Proposito: Mostrar como pasar un arreglo como argumento de una funcion, y el hecho de que
               este se pasa automaticamente pro referencia, es decir, el nombre del arreglo es
               en realidad la direccion de memoria del primer elemento del arreglo.
*/

#include <stdio.h>

int main()
{
    char arreglo[5];

    // printf("%11s = %p\n%10s = %p\n%11s = %p\n",
    //       "arreglo", arreglo, "&arreglo[0]", &arreglo[0], "&arreglo", &arreglo);

    printf("arreglo = %p\n", arreglo);
    printf("&arreglo[0] = %p\n", &arreglo[0]);
    printf("&arreglo = %p\n", &arreglo);

    return 0;
}