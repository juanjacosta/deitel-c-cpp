/*
    Programa : VS_net03_formasDeclararInicializarStrings.c
    Proposito: conocer diferentes formas de declarar, inicializar e imprimir
               strings en c 
    Fecha    : 21/08/2019
*/

#include <stdio.h>

int main()
{
    //char palavra[6] = {'B', 'r', 'a', 's', 'i', 'l'};
    //char palavra[] = {'B', 'r', 'a', 's', 'i', 'l'};
    //char palavra[7] = {"Brasil"};
    //char palavra[] = {"Brasil"};
    char palavra[] = "Brasil";

    printf("%s", palavra);

    return 0;
}