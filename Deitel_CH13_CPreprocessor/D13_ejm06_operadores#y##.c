/*
    Programa : D13_ejm06_operadores#y##.c
    Propósito: - Mostrar com el operador # provoca que el token junto a él
                 se concatene en la cadena 

               - Mostrar como el operador ## concatena dos tokens.
*/
#include <stdio.h>

#define HOLA(x) printf("Hola, " #x" \n");
// #define CONCATTOKEN(x, y)    x ## y

int main()
{
    HOLA(Juan);
    // CONCATTOKEN(O, K);


    return 0;
}