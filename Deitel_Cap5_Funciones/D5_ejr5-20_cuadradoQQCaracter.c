/*
    Programa : D5_ejr5-20_cuadradoQQCaracter.c
    Propósito: Modifique la función creada en el ejercicio 5.19 para formar
               el cuadrado de cualquier carácter que especifiquemos en el 
               parámetro caracterLlenado. De este modo, si lado es igual a 
               5 y caracterLlenado es "#", entonces esta función debe imprimir:
*/
#include <stdio.h>

void printSquare(int s, char c);

int main()
{
    int side;
    char character;

    printf("Side: ");

    while ((scanf("%d", &side)) != EOF)
    {
        printf("Caracter: ");
        scanf(" %c", &character);       // Adicionar espacio antes de %c https://stackoverflow.com/questions/20306659/the-program-doesnt-stop-on-scanfc-ch-line-why
        // character = getchar();

        printSquare(side, character);

        printf("Side: ");
    }
     
    return 0;
}

void printSquare(int s, char c)
{
    for (int i = 1; i <= s; i++)
    {
        for (int j = 1; j <= s; j++)
        {
            printf("%c", c);
        }
        printf("\n");
    }
}