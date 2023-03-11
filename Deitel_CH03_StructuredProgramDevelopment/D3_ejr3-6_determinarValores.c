/*  Programa : D3_ejr05_determinarValores.c
    Proposito: Determinar los valores de la variable producto y x despues de realizar el 
               siguiente calculo. Suponga que producto y x tienen un valor de 5 al comenzar
               la ejecucion del programa.

                producto *= x++;

                Ejercicio 3.6 Deitel - pg. 77
    Fecha    : 23/08/2019
 */

#include <stdio.h>

int main()
{
    int x = 5, productoX = 5, y = 5, productoY = 5;

    printf("Al inicial el programa\n");
    printf("x = %d\n", x);
    printf("y = %d\n", y);
    printf("ProductoX = %d\n", productoX);
    printf("ProductoY = %d\n\n", productoY);


    productoX *= x++;
    printf("Luego de la operacion: productoX *= x++\n");
    printf("x = %d\n", x);
    printf("ProductoX = %d\n", productoX);

    productoY *= ++y;
    printf("Luego de la operacion: productoY *= ++x\n");
    printf("y = %d\n", y);
    printf("ProductoY = %d\n", productoY);
}