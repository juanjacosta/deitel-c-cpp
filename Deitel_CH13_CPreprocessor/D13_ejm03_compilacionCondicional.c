/*
    Programa : D13_ejm03_compilacionCondicional.c
    Propósito: Mostrar como la compilación condicional permite
               controlar la ejecución de las directivas del 
               procesador
*/

#include <stdio.h>

// #define DEBUG
#define AREA_RECTANGULO(x, y)   ((x) * (y))

int main()
{
    double areaRect;
    float a;
    float l;

    printf("======================================\n");
    printf("\tCompilacion Condicional\n");
    printf("======================================\n");

    printf("Ingrese dimensiones\n");;
    printf("Alto : "); scanf("%f", &a);
    printf("largo: "); scanf("%f", &l);

    areaRect = AREA_RECTANGULO(a, l);

    #ifdef DEBUG                                        // si la constante simbólica (#define DEBUG) 
        printf("Area Rectangulo: %.2f\n\n", areaRect);  // no fue definida no se imprime esta línea
    #endif   

    printf("======================================\n");



    return  0;
}