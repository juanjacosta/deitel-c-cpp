/*
    Programa : D2_ejr2-30_separaDigitos.c
    Propósito: Escriba un programa que introduzca un 
               número de cinco dígitos, que separe
               el número en sus dígitos individuales
               y que despliegue los dígitos separados
               entre sí mediante tres espacios cada
               uno. [Pista: Utilice combinaciones de
               la división entera y el operador módulo]

               Por ejemplo, si el usuario escribe 
               42139 
               el programa debe imprimir
               4   2   1   3   9

               Ejm:
               https://www.youtube.com/watch?v=8aKFU4GRjHA
*/

#include <stdio.h>

int main(void)
{
    int num;

    printf("Ingrese numero de 5 digitos: ");
    scanf("%d", &num);

    printf("%d   %d   %d   %d   %d\n", (num%100000)/10000, (num%10000)/1000, (num%1000)/100, (num%100)/10, num%10);

    return 0;
}