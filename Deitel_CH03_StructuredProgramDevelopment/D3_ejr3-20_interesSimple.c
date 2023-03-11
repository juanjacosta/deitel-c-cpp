/*
    Programa : D3_ejr3-20_interesSimple.c
    Proposito: El interés simple para un préstamo se calcula mediante la fórmula:

               interes = prestamo * tasa * dias / 365;

               La fórmula anterior asume que tasa es la tasa de interés anual, y por 
               lo tanto incluye la división entre 365 (dias). Desarrolle un programa 
               que introduzca préstamo,  tasa y días para varios préstamos, y que 
               calcule y despliegue el interés simple para cada preśtamo, utilizando
               la fórmula anterior.
*/

#include <stdio.h>

int main()
{
    int dias;
    float interes, prestamo, tasa;
    interes = prestamo = 0;

    printf("======================================\n");
    printf("\tPrestamo Bancario\n");
    printf("======================================\n");

    printf("Introduzca el monto del préstamo (-1 para terminar): ");
    scanf("%f", &prestamo);

    while (prestamo != -1){
        printf("Introduzca la tasa de interes: ");
        scanf("%f", &tasa);
        printf("Introduzca el periodo del prestamo en dias: ");
        scanf("%d", &dias);

        interes = prestamo * tasa * dias / 365;

        printf("El monto del interes es $%.2f\n\n", interes);

        printf("Introduzca el monto del préstamo (-1 para terminar): ");
        scanf("%f", &prestamo);
    }

    return 0;
}