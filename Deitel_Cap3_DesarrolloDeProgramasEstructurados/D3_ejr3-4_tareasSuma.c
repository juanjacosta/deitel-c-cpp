/*  Programa : D3_ejr03_tareasSuma.c
    Proposito: Escribir una instruccion en C para llevar a cabo cada una de las
               siguientes tareas: 
               a) Defina las variables suma y x de tipo int
               b) inicialice la variable x en 1
               c) inicialice la variable suma en 0
               d) Sume la variable x a la variable suma y asigne el resultado a 
                  la variable suma 
               e) Imprima "La suma es: " seguida del valor de la variable suma
               Ejercicio 3.4 - Deitel - pg. 76
    Fecha    : 20/08/2019
 */

#include <stdio.h>

int main()
{
    int suma = 0, x = 1;
    printf("=========================================\n");
    printf("\tTareas suma\n");
    printf("=========================================\n");

    suma += x;

    printf("La suma es: %d\n", suma);
    printf("=========================================\n");

    return 0;
}