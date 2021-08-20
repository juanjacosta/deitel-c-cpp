/*
    Programa : D13_ejm04_directivaError.c
    Propósito: Imprimir mensajes de error en la compilación con 
               la directiva #error
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
    printf("\tDirectiva #error\n");
    printf("======================================\n");

    printf("Ingrese dimensiones\n");;
    printf("Alto : "); scanf("%f", &a);
    printf("largo: "); scanf("%f", &l);

    areaRect = AREA_RECTANGULO(a, l);

    #ifdef DEBUG                                        // si la constante simbólica (#define DEBUG) 
        printf("Area Rectangulo: %.2f\n\n", areaRect);  // no fue definida no se imprime esta línea
    
    #else
    // printf("Constante simbolica DEBUG no definida\n");
        #error Constante simbolica DEBUG no definida    // imprime mensage de error defiido. Para la compilación
    #endif   

    printf("======================================\n");



    return  0;
}