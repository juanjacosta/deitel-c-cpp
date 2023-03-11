/*
    Un estacionamiento cobra la mínima de $2.00 por las tres primeras horas de estacionamiento.
    El estacionamiento cobra $0.50 adicional por hora o fracción después del tiempo mínimo. El 
    cobro máximo para cualquier periodo de 24 horas es de $10.00. Suponga que ningún automóvil 
    se estaciona por más de 24 horas, al mismo tiempo que otro. Escriba un programa que calcule 
    e imprima los cobros por cada uno de los tres clientes que se estacionaron ayer en el 
    estacionamiento. Debe introducir el numero de horas que cada cliente pasó estacionado allí.
    Su programa debe imprimir los resultados en una forma tabular, y debe calcular e imprimir los 
    recibos de las percepciones de ayer. El programa debe utilizar la función calculaImporte para 
    determinar el importe de cada cliente. Sus salidas deben ser en el formato siguiente:

    automóvil       horas       Importe 
    1                 1.5          2.00
    2                 4.0          2.50
    3                 24.0         10.00

    Total   29.5      14.50

*/

#include <stdio.h>

#define NUM_AUTOS 3

double calculaImporte(float horas);

int main()
{
    double h1 = 1.5, h2 = 4.0, h3 = 24.0;
    double imp1 = 0, imp2 = 0, imp3 = 0;

    printf("================================================\n");
    printf("\tPrograma para Estacionamiento\n");
    printf("================================================\n");

    imp1 = calculaImporte(h1);
    imp2 = calculaImporte(h2);
    imp3 = calculaImporte(h3);

    printf("%s%10s%15s\n", "Automovil", "Horas", "Importe");
    
    // for (int i = 0; i < NUM_AUTOS; i++){
        printf("%d%17.1f%15.2f\n", 1, h1, imp1);
        printf("%d%17.1f%15.2f\n", 2, h2, imp2);
        printf("%d%17.1f%15.2f\n", 3, h3, imp3);
    // }
    printf("\n%s%7.1f%7.2f\n", "Total", h1+h2+h3, imp1+imp2+imp3);

    return 0;
}

double calculaImporte(float horas)
{
    double importe = 0;

    if (horas <= 3){
        importe = 2.0;
    } 
    else if (horas > 3 && horas < 24){
        importe = 2.0 + ((horas - 3) * 0.50);
    } 
    else if (horas == 24){
        importe = 10;
    }
    
    return importe;
}