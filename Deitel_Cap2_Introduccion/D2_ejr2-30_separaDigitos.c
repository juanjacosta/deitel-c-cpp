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
*/

#include <stdio.h>

int main()
{
    int num;

    printf("Ingrese numero de 5 digitos: ");
    scanf("%d", &num);

    

    printf("%d\n", num);
    return 0;
}