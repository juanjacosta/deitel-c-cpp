/*
    Programa : D2_ejm_10_tablaCuadradosyCubosDeEnteros.c
    Propósito: Escribir un programa que calcule los cuadrados y los cubos de los nùmeros 
               de 0 a 10 y que utilice tabuladores para desplegar una tabla de valores.
    Fecha     : 28/07/2019
 */

#include <stdio.h>

int main()
{
    int n1 = 1, n2 = 2, n3 = 3, n4 = 4, n5 = 5, n6 = 6, n7 = 7, n8 = 8, n9 = 9, n10 = 10;

    printf("===================================\n");
    printf("\tTabla de Potencias\n");
    printf("===================================\n");

    printf("%s%10s%6s\n", "Numero", "Cuadrado", "Cubo");
    printf("%3d%10d%8d\n", n1, n1 * n1, n1 * n1 * n1);
    printf("%3d%10d%8d\n", n2, n2 * n2, n2 * n2 * n2);
    printf("%3d%10d%9d\n", n3, n3 * n3, n3 * n3 * n3);
    printf("%3d%11d%8d\n", n4, n4 * n4, n4 * n4 * n4);
    printf("%3d%11d%9d\n", n5, n5 * n5, n5 * n5 * n5);
    printf("%3d%11d%9d\n", n6, n6 * n6, n6 * n6 * n6);
    printf("%3d%11d%9d\n", n7, n7 * n7, n7 * n7 * n7);
    printf("%3d%11d%9d\n", n8, n8 * n8, n8 * n8 * n8);
    printf("%3d%11d%9d\n", n9, n9 * n9, n9 * n9 * n9);
    printf("%3d%12d%9d\n", n10, n10 * n10, n10 * n10 * n10);

    return 0;
}