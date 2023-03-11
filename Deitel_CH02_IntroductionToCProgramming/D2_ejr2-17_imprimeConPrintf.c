/*
    Programa : D2_ejr2-17_imprimeConPrintf.c 
    Proposito: Escriba un programa que imprima los números de 
               1 al 4 en la misma línea. Escriba el programa 
               utilizando los siguientes métodos:
               a) Mediante una instrucción printf sin especificadores 
                  de conversión
               b) Mediante una instrucción printf con cuatro especificadores
                  de conversión 
               c) Mediante cuatro instrucciones printf  
*/

#include <stdio.h>

int main()
{
    int n1 = 1, n2 = 2, n3 = 3, n4 = 4;

    printf("1, 2, 3, 4\n");
    printf("%d, %d, %d, %d\n", n1, n2, n3, n4);
    printf("1, ");
    printf("2, ");
    printf("3, ");
    printf("4\n");

    return 0;
}