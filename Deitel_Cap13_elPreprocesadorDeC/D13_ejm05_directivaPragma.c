/*
    Programa : D13_ejm05_directivaPragma.c
    Propósito: Definir una acción a través de compilación condicional
               y la directiva #pragma
*/

#include <stdio.h>

#define VOLUMEN(a,h) ((a) * (h))

#define DO_PRAGMA(x) _Pragma (#x)
#define TODO(x) DO_PRAGMA(message ("TODO - " #x))

// #define DEBUG

int main()
{
    float area, altura, volumen;

    printf("======================================\n");
    printf("\tDirectiva #pragma\n");
    printf("======================================\n");

    printf("Area: ");
    scanf("%f", &area);

    printf("Altura: ");
    scanf("%f", &altura);

    #ifdef DEBUG
       volumen = VOLUMEN(area, altura); 
    #else
    //    volumen = VOLUMEN(area + 10, altura + 10); 
        TODO(Remember to fix this)
    #endif

    printf("Volumen: %.2f\n", volumen);
    printf("======================================\n");

    return 0;
}

