/*
    Programa : D13_ejr13-3_tareas.c
    Propósito: Escriba una directiva de preprocesador para llevar 
               a cabo  cada una de las siguientes tareas:

               a) Defina la constante simbólica SI que tenga un valor igual a 1.
               b) Defina la constante simbólica NO que tenga un valor igual a 0.
               c) Incluya el encabezado comun.h. El encabezado se encuentra en el 
                  mismo directorio en donde se encuentra el archivo que va a compilarse
               d) Renumere las líneas restantes del archivo a partir de 3000.
               e) Si la constante simbólica VERDADERO está definida, indefínala y 
                  redefínala como 1. No utilice #ifdef.
               f) Si la constante simbólica VERDADERO está definida, indefínala y 
                  redefínala como 1. Utilice #ifdef.
               g) Si la constante simbólica VERDADERO no es igual que 0, defina la 
                  constante simbolica FALSO como 0. De lo contrario defina FALSO 
                  igual a 1.
               h) Defina la macro VOLUMEN_CUADRADO que calcuel el volumen de un 
                  cuadrado. La macro toma un argumento.
*/

#include <stdio.h>
#include "comun.h"

#define SI 1
#define NO 0
#define VERDADERO 0
// #define FALSO 

#define VOLUMEN_CUADRADO(x) (x)*(x)*(x)

int main()
{
    printf("%d\n", __LINE__);
    PR(7);
    #line 3001
    printf("%d\n", __LINE__);

// // e)
//     #if defined(VERDADERO)
//         #undef VERDADERO
//         #define VERDADERO 1
//     #endif

// f)
    // #ifdef VERDADERO
    //     #undef VERDADERO
    //     #define VERDADERO 1
    // #endif

// g)
    #if VERDADERO
        #define FALSO 0
    #else
        #define FALSO 1
    #endif  

    printf("Verdadero: %d\n", VERDADERO);
    printf("Falso: %d\n", FALSO);

    printf("Volumen: %d\n", VOLUMEN_CUADRADO(2));

    return 0;
}

