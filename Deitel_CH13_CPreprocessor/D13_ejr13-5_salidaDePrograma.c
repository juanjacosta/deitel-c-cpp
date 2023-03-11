/*
    Programa : D13_ejr13-5_salidaDePrograma.c
    Propósito: Escriba un programa que produzca la siguiente salida:
               
               La suma de x y y es 13

               El programa debe definir la macro SUMA con dos argumentos
               x y y, y utilizar SUMA para producir la salida
 */

#include <stdio.h>

#define SUMA(x, y) printf("%d\n", x + y)

int main()
{
    SUMA(11,3);

    return 0;
}