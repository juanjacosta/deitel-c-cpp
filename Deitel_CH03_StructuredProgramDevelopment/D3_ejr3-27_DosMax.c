/*
    Programa : D3_ejr3-27_DosMax.c
    Propósito: Mediante un método similar al del ejercicio 3.24, encuentre 
               los dos valores más grandes de los 10 números. [Nota: Debe
               introducir un número a la vez].
*/

#include <stdio.h>

int main()
{
    int cont, num, max1, max2;
    num = max1 = max2 = 0;

    for ( cont = 0; cont < 10; cont++)
    {
        printf("Enter number: ");
        scanf("%d", &num);

        if (num > max1)
        {
            max2 = max1;
            max1 = num;
        }

        if (num > max2 && num < max1){
            max2 = num;
        }
    }

    printf("1st largest number: %d\n", max1);
    printf("2nd largest number: %d\n", max2);

    return 0;
}