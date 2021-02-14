/*
    Programa : D2_ejm09_enterosEquivalentesaCaracteres.c
    Propósito: Escribir un programa que imprima los enteros equivalentes a algunas letras 
               mayúsculas, minúsculas, dígitos y símbolos especiales. Como mínimo determine
               los enteros equivalentes de las siguientes: A B C a b c 0 1 2 $ * + / y el 
               carácter espacio en blanco.
    Fecha     : 28/07/2019
 */
#include <stdio.h>

int main()
{
    printf("========================================================\n");
    printf("\t\tEnteros Equivalentes a caracteres\r");
    printf("========================================================\n");

    printf("%s %3s %3s %3s %3s %3s %3s %3s %3s %3s %3s %3s %3s %3s\n", 
    "A", "B", "C", "a", "b", "c", "0", "1", "2", "$", "*", "+", "/", " ");

    printf("%d %3d %3d %3d %3d %3d %3d %3d %3d %3d %3d %3d %3d %3d\n", 
    'A', 'B', 'C', 'a', 'b', 'c', '0', '1', '2', '$', '*', '+', '/', ' ');

    printf("========================================================\n");
    
    return 0;
}