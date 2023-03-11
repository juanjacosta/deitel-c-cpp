/*
    Programa : D3_ejm02_calificacionesConIFanidados.c 
    Propósito: Mostrar la evaluación de múltiples casos al colocar instrucciones if anidadas 
               en un programa que lee varias calificacionse e imprime su nota
    Fecha     : 30/07/2019
*/
#include <stdio.h>

int main()
{
    int nota;

    printf("=======================================\n");
    printf("\tNotas Mestrado\n");
    printf("=======================================\n");

    printf("Ingresa calificación: ");
    scanf("%d", &nota);

    if (nota >= 90)
        printf("Nota: A\n");
    
    else if (nota >= 80)
        printf("Nota: B\n");

    else if (nota >= 70)
        printf("Nota: C\n");

    else if (nota >= 60)
        printf("Nota: D\n");
                                                            // Si hay más de una instrucción 
    else{                                                   // dentro del condicional, estas se 
        printf("Nota: F\n");                                // deben encerrar entre llaves o todas
        printf("=======================================\n");//las instrucciones luego de la 1ra 
    }                                                       // línea se ejecutarán sin importar  
                                                            //se cumpla o no la condición
    printf("=======================================\n");
    return 0;
}