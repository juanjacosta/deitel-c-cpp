/*
    Programa : D2_ejr2-23_mayorMenor.c
    Proposito: Escriba un programa que lea cinco enteros y que 
               después imprima el número más grande y el más 
               pequeno del grupo. Utilice sólo técnicas de 
               programación que haya aprendido en este capítulo.
*/

#include <stdio.h>

int main()
{
    int n1, n2, n3, n4, n5, max, min;

    n1 = n2 = n3 = n4 = n5 = max = min = 0;

    printf("======================================\n");
    printf("\tMayor e menor de 5 enteros\n");
    printf("======================================\n");

    printf("Ingrese entero 1: ");scanf("%d", &n1);
    printf("Ingrese entero 2: ");scanf("%d", &n2);
    printf("Ingrese entero 3: ");scanf("%d", &n3);
    printf("Ingrese entero 4: ");scanf("%d", &n4);
    printf("Ingrese entero 5: ");scanf("%d", &n5);

    max = n1;

    if (n2 > max)
        max = n2;
    if (n3 > max)
        max = n3;
    if (n4 > max)
        max = n4;
    if (n5 > max)
        max = n5;
    
    min = n1;

    if (n2 < min)
        min = n2;
    if (n3 < min)
        min = n3;
    if (n4 < min)
        min = n4;
    if (n5 < min)
        min = n5;

    printf("Mayor: %d\n", max);
    printf("Menor: %d\n", min);
    
    return 0;
}