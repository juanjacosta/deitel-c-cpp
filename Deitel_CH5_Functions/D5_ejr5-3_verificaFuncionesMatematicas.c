/*
  Programa : D5_ejr_02_verificaFuncionesMatematicas.c
  Proposito: Escriba un programa que compruebe si los ejemplos
             sobre las llamadas a las funciones matematicas de 
             la biblioteca que se muestran en la fig 5.2 pg. 130 
             producen realmente los resultados indicados
    
        NOTA: Para solucionar error de "referência não definida para "sqrt":
              Append -lm to the end of your gcc command 

              gcc -Wall arquivo.c -o arquivo -lm
 */
#include <stdio.h>
#include <math.h>

int main()
{
    double r1 = 900.0, r2 = 9.0;
    double e1 = 1.0, e2 = 2.0;

    printf("\nRaiz Cuadrada\n");
    printf("sqrt(%.1f) = %.1f\n", r1, sqrt(r1));
    printf("sqrt(%.1f) = %.1f\n\n", r2, sqrt(r2));

    printf("\nFuncion Exponencial e^x\n");
    printf("e^(%.1f) = %.6f\n", e1, exp(e1));
    printf("e^(%.1f) = %.6f\n", e2, exp(e2));

    printf("\nLogaritmo natural (base e)\n");
    printf("log(2.718282) = %.1f\n", log(2.718282));
    printf("log(7.389056) = %.1f\n\n", log(7.389056));

    printf("\nLogaritmo base 10\n");
    printf("log10(1.0) = %.1f\n", log10(1.0));
    printf("log10(10.0) = %.1f\n", log10(10.0));
    printf("log10(100.0) = %.1f\n\n", log10(100.0));

    printf("\nValor absoluto\n");
    printf("fabs(5.0) = %.1f\n", fabs(5.0));
    printf("fabs(0.0) = %.1f\n", fabs(0.0));
    printf("fabs(-5.0) = %.1f\n\n", fabs(-5.0));

    printf("\nRedondeo al entero mas grande\n");
    printf("ceil(9.2) = %.1f\n", ceil(9.2));
    printf("ceil(-9.8) = %.1f\n\n", ceil(-9.8));

    printf("\nRedondeo al entero mas pequenho no menor que el numero dado\n");
    printf("floor(9.2) = %.1f\n", floor(9.2));
    printf("floor(-9.8) = %.1f\n\n", floor(-9.8));

    printf("\nx elevada a la potencia y (x^y)\n");
    printf("pow(2^7) = %.1f\n", pow(2, 7));
    printf("pow(9^5) = %.1f\n\n", pow(9.0, 5.0));

    printf("\nResiduo de x/y como un numero de punto flotante\n");
    printf("fmod(13.657/2.333) = %.1f\n\n", fmod(13.657, 2.333));
 
    printf("\nSeno trigonometrico de x (x en radianes)\n");
    printf("sin(0.0) = %.1f\n\n", sin(0.0));

    printf("\nCoseno trigonometrico de x (x en radianes)\n");
    printf("cos(0.0) = %.1f\n\n", cos(0.0));

    printf("\nTangente trigonometrica de x (x en radianes)\n");
    printf("tan(0.0) = %.1f\n\n", tan(0.0));

    return 0;
}
