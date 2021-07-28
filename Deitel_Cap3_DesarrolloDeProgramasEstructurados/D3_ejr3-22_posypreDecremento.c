/*
    Programa:  D3_ejr3-22_posypreDecremento.c
    Proposito: Escriba un programa que demuestre la diferencia entre el 
               predecremento y el posdecremento mediate el uso del operador --
*/

#include <stdio.h>

int main()
{
    printf("=================================================\n");
    printf("\tPredecremento e Posdecremento\n");
    printf("=================================================\n");

    int a = 10;

    printf("Valor de a: %d\n", a);
    printf("Predecremento: %d\n", --a); // Decrementa 'a' en 1 y después utiliza el nuevo valor en la expresión 
    printf("Valor de a: %d\n\n", a);

    a = 10;
    printf("Valor de a: %d\n", a);
    printf("Posdecremento: %d\n", a--); // Utiliza el valor actual de 'a' en la expresión y después decrementa
    printf("Valor de a: %d\n", a);
    printf("=============================================**==\n");

    return 0;
}