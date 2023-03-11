/*
    Programa : D5_ejr5-8_fabsFloorCeil.c
    Propósito: Muestre el valor de x después de que se realice 
               cada una de las siguientes instrucciones.

               x = fabs(7.5);
               x = floor(7.5); 
               x = fabs(0.0); 
               x = ceil(0.0); 
               x = fabs(-6.4);
               x = ceil(-6.4);
               x = ceil(-fabs(-8 + floor(-5.5)));
*/

#include <stdio.h>
#include <math.h>

int main()
{
    double v1, v2, v3, v4;

    printf("fabs(7.5): %f\n", fabs(7.5));       // valor absoluto
    printf("floor(7.5): %f\n", floor(7.5));     // redondea x al entero mas grande NO MAYOR QUE X
    printf("fabs(0.0): %f\n", fabs(0.0));       // valor absoluto 
    printf("ceil(0.0): %f\n", ceil(0.0));       // redondea x al entero mas pequeno NO MENOR QUE X 
    printf("fabs(-6.4): %f\n", fabs(-6.4));     // valor absoluto
    printf("ceil(-6.4): %f\n", ceil(-6.4));     // redondea x al entero mas pequeno NO MENOR QUE X
    printf("ceil(-fabs(-8 + floor(-5.5))): %f\n", ceil(-fabs(-8 + floor(-5.5))));

    v1 = floor(-5.5);
    v2 = -8 + v1;
    v3 = -fabs(v2);
    v4 = ceil(v3);

    printf("\nfloor(-5.5): %.2f\n", v1);
    printf("-fabs(-8 + floor(-5.5): %.2f\n", v2);
    printf("ceil(-fabs(-8 + floor(-5.5))): %.2f\n", v4);

    return 0;
}