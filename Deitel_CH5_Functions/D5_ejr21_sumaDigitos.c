/**
 * @file D5_ejr21_sumaDigitos.c
 * @brief Escribir un programa que pida al usuario ingresar un número entero
 *        y sume cada uno de los dígitos del número ingresado
 *
 */

#include <stdio.h>

int main(void)
{
    int num, suma;

    suma = 0;

    puts("Ingresa Numero: ");
    scanf("%d", &num);

    while (num)
    {
        suma += num % 10;
        num /= 10;
    }

    printf("Suma: %d\n", suma);
}