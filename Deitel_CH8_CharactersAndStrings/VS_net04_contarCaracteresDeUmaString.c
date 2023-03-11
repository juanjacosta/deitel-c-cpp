
/*
    Programa : VS_net04_contarCaracteresDeUmaStrings.c
    Proposito: Escribir un programa que tenga una funcion que sea capaz de 
               contar el numero de caracteres de un determinado string
    Fecha    : 21/08/2019
*/

#include <stdio.h>

int tamanhoString(char string[]);

int main()
{
    char stringUsuario[20];
    int num;

    printf("Digite una palabra (string): ");
    scanf("%s", stringUsuario);

    num = tamanhoString(stringUsuario);

    printf("A string %s possui %i caracteres\n", stringUsuario, num);

    return 0;
}

int tamanhoString(char string[])
{
    int numCaracteres = 0;

    while (string[numCaracteres] != '\0'){      
        ++numCaracteres;
    }
    ++numCaracteres;        // Esta linea me incluye el caracter nulo en la cuenta
    return numCaracteres;   // si la funcion contara solo letras no seria necesario
}                           