/*
    Programa: D4_ejm04_sumarEnterosPares.c
    Propósito: Mostrar el uso de la instruccion de seleccion multiple switch...case 
    Fecha    : 26/08/2019

    NOTA: EOF em linux-> Ctrl d
 */

#include <stdio.h>

int main()
{
    int calificacion;   // una calificacion 
    int cuentaA = 0;    // numero de As
    int cuentaB = 0;    // numero de Bs
    int cuentaC = 0;    // numero de Cs
    int cuentaD = 0;    // numero de Ds
    int cuentaF = 0;    // numero de Ds

    printf("============================================\n");
    printf("\tInstruccion switch...case\n");
    printf("=============================================\n");

    printf("Intdoduzca la letra que corresponde a la calificacion\n");
    printf("Intdoduzca el caracter EOF para finalizar la entrada de datos\n");

    while((calificacion = getchar()) != EOF){       // EOF : Ctrl d  
        switch (calificacion)                       // switch anidado dentro de while
        {
        case 'A':               // La calificacion es A
        case 'a':               // o a 
            ++cuentaA;          // incrementa cuentaA
            break;              // necesario para salir de switch 
        
        case 'B':               // La calificacion es B
        case 'b':               // o b 
            ++cuentaB;          // incrementa cuentaB
            break;              // sale de switch 

        case 'C':               // La calificacion es C
        case 'c':               // o c 
            ++cuentaC;          // incrementa cuentaC
            break;              // sale de switch 
        
        case 'D':               // La calificacion es D
        case 'd':               // o d 
            ++cuentaD;          // incrementa cuentaB
            break;              // sale de switch 
        
        case 'F':               // La calificacion es F
        case 'f':               // o f 
            ++cuentaF;          // incrementa cuentaF
            break;              // sale de switch 
        
        case '\n':              // ignora nuevas lineas
        case '\t':              // ignora tabuladores
        case ' ':               // y espacios en la entrada 
            break;              // fin de switch
        
        default:                // atrapa todos los demas caracteres 
            printf("Introdujo una letra incorrecta\n");
            printf("Intdoduzca una nueva calificacion\n");
            break;              // opcional, de todas maneras saldra del switch 
        }
    }

    printf("Los totales por calificacion son: \n");     // Muestra el resumen de los resultados
    printf("A: %d\n", cuentaA);     // despliega el numero de calificaciones A 
    printf("B: %d\n", cuentaB);     // despliega el numero de calificaciones B 
    printf("C: %d\n", cuentaC);     // despliega el numero de calificaciones C 
    printf("D: %d\n", cuentaD);     // despliega el numero de calificaciones D 
    printf("F: %d\n", cuentaF);     // despliega el numero de calificaciones F 

    return 0;
}