/*
    Programa : D3_ejr3-24_numeroMayor.c
    Propósito: Escriba un programa que introduzca una serie de 10 números
               y determine e imprima el mayor de éstos. [Clave: Su programa
               debe utilizar tres variables de la siguiente manera]:

               Contador: Un contador para contar los números de 1 a 10 (es decir,
                         para llevar la cuenta de cuántos números se han introducido
                         y determinar si ya se procesaron los 10 números).
                numero : El número actual que se introduce al programa.
                mayor  : El número más grande encontrado hasta el momento.
*/

#include <stdio.h>

int main()
{
    int cont = 0;
    int num, max;

    printf("Ingrese numero: ");
    scanf("%d", &num);
    cont += 1;
    max = num;

    while (cont < 5){

        printf("Ingrese numero: ");
        scanf("%d", &num);

        if (num > max)
            max = num;

        cont++;
    }
    
    
    printf("Numero Mayor: %d\n", max);

    return 0;
}