/*
    Programa : D2_ejm05_calculoSobreCirculo.c
    Propósito: Escribir un programa que lea el radio de un circulo y que imprima 
               el diámetro, la circunferencia y el área de ese círculo. Utilice el 
               valor constante de 3.14159 para pi. Realice cada uno de estos 
               cálculos dentro de instrucciones printf, y utilice el especificador
               de conversion %f
    Fecha    : 26/07/2019

               Fórmulas :
 
               diametro = 2 * radio;
               area = pi * (radio^2);
               circunferencia = diametro * pi;
*/

#include <stdio.h>
//#include <math.h>
#define _CRT_SECURE_NO_WARNINGS

int main()
{
    float radio, area, diametro, circunferencia;
    float pi = 3.14159;

    printf("=============================================================\n");
    printf("\tDiametro, Area y Circunferencia Circulo\r");
    printf("=============================================================\n");

    printf("Ingrese radio del circulo: ");
    scanf("%f", &radio);

    diametro = 2 * radio;
    //area = pi * (double)pow((double)radio,2);
    area = pi * (radio * radio);
    circunferencia = diametro * pi;

    printf("Radio: %.2f\n", radio);
    printf("Area :  %.2f\n", area);
    printf("Circunferencia: %.2f\n", circunferencia);
    printf("=============================================================\n");
    
    return 0;
}