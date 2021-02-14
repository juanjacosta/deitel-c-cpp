/*
    Programa : D2_ejr2-18_numeroMayorIfSimple.c
    Proposito: Escriba un programa que pida al usuario que introduzca 
               dos enteros, que obtenga los números por parte del 
               usuario, después que imprima las palabras "es más grande".
               Si los números son iguales, que imprima el mensaje "Estos 
               números son iguales". Solamente utilice la forma de selección 
               simple de la instrucción if, que aprendió en este capítulo.
*/
#include <stdio.h>

int main()
{
    int n1 = 0, n2 = 0;

    printf("Introduzca dos números enteros: ");
    scanf("%d%d", &n1, &n2);

    if (n1 > n2)
    {
        printf("%d es más grande\n", n1);
    }

    if (n1 < n2)
    {
        printf("%d es más grande\n", n2);
    }

    if (n1 == n2)
    {
        printf("Estos números son iguales\n");
    }

    return 0;
}