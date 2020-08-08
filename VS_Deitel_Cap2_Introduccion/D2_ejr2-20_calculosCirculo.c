/*
    Programa : D2_ejr2-20_calculosCirculo.c
    Proposito: Escriba un programa que lea el radio de un circulo y que 
               imprima el diámetro, la circunferencia y el área de ese 
               círculo. Utilice la constante 3.14159 para PI. Realice 
               cada uno de estos calculos dentro de instrucciones printf, 
               y utilice el especificador de conversion %f.
*/
#include <stdio.h>
#define PI 3.14159

int main()
{
    float radio, diametro, circunferencia, area;
    printf("==========================================\n");
    printf("\tCalculos sobre circulo\n");
    printf("==========================================\n");
    printf("Ingrese radio en metros: ");
    scanf("%f", &radio);

    diametro = 2 * radio;
    circunferencia = 2 * PI * radio;
    area = PI * (radio * radio);

    printf("\nDiametro      : %.2f m\n", diametro);
    printf("Circunferencia: %.2f m\n", circunferencia);
    printf("Area          : %.2f mˆ2\n", area);
    printf("==========================================\n");
    return 0;
}