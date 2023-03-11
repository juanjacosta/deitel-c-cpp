/*
    Programa : D3_ejm01_calificacionesEstudiante.c
    Propósito: Escribir un programa que lea la calificación de un estudiante
               e imprima un mensaje de aprobado si la calificación es mayor
               a 60 y de Reprobado si es menor que 60
    Fecha     : 30/07/2019
 */
#include <stdio.h>

int main()
{
    float nota;

    printf("=============================================\n");
    printf("\t\tCalificacion\n");
    printf("=============================================\n");

    printf("Ingrese nota del curso: ");
    scanf("%f", &nota);

/*   if(nota >= 8.0){
        printf("Aprobado\n");
    }
    else{
        printf("Reprobado\n");
    }*/

    //printf();

    //printf("%s\n", nota >= 8 ? "Aprobado" : "Reprobado");

    nota >= 8 ? printf("Aprobado\n") : printf("Reprobado\n");

    printf("=============================================\n");

    return 0;
}