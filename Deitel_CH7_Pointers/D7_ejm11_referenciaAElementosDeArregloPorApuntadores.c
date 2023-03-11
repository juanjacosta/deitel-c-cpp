/*
    Programa : D7_ejm11_referenciaAElementosDeArregloPorApuntadores.c
    Propósito: Utilizar los cuatro metodos para hacer referencia a los
               elementos de un arreglo:
               - subindices de arreglos 
               - apuntador/desplazamiento con el nombre del arreglo como apuntador 
               - subindices de apuntadores 
               - apuntador/desplazamiento con un apuntador 

               Ejm Deitel - Cap 7 - Ejm 7.20 - pg 255
    Fecha    : 24/09/2019
 */
#include <stdio.h>

int main()
{
    int b[] = {10, 20, 30, 40};     // Inicializa el arreglo b 
    int *ptrB = b;                  // Establece ptrB para que apunte al arreglo b 
    int i;                          // contador 
    int desplazamiento;             // contador 

    printf("Arreglo b impreso con Notacion\nde subindices de arreglos\n");

    for (i = 0; i < 4; i++){
        printf("b[%d] = %d\n", i, b[i]);    //Muestra el arreglo b con la notacion de subindices 
    }

    printf("\nNotacion apuntador/desplazamiento donde\n"
           "el apuntador es el nombre del arreglo\n");
    
    for (desplazamiento = 0; desplazamiento < 4; desplazamiento++){         // Muestra el arreglo b mediante el uso
        printf("*(b + %d) = %d\n", desplazamiento, *(b + desplazamiento));  // del nombre del arreglo y notacion 
    }                                                                       // apuntador/desplazamiento 

    printf("\nNotacion de subindices de arreglos\n");

    for (i = 0; i < 4; i++){
        printf("ptrB[%d] = %d\n", i, ptrB[i]);  // Muestra el arreglo b mediante el uso de ptrB 
    }                                           // y notacion de subindices de arreglos 

    printf("\nNotacion apuntador/desplazamiento\n");
    
    for (desplazamiento = 0; desplazamiento < 4; desplazamiento++){                 // Muestra el arreglo b mediante el uso de ptrB 
        printf("*(ptrB + %d) = %d\n", desplazamiento, *(ptrB + desplazamiento));    // y notacion de apuntador/desplazamiento
    }

    return 0;
}