/*
    Programa : D3_ejm05_promedioCalificacionesWhile.c
    Propósito: Escribir un programa para obtener el promedio de calificaciones de un 
               grupo de x estudiantes mediante una repetición controlada por centinela
    Fecha    : 01/08/2019
 */
#include <stdio.h>

int main()
{
    int cont = 0, total = 0, nota;
    float prom;

    printf("==================================\n");
    printf("\tPromedio calificaciones\n");
    printf("==================================\n");

    printf("Introduzca la calificacion -1 para terminar: ");
    scanf("%d", &nota);

    while (nota != -1)      // -1 es el valor centinela
    {
        total += nota;
        cont += 1;

        printf("Introduzca la calificacion -1 para terminar: ");
        scanf("%d", &nota);
    }
 
    if (cont != 0){
        prom = (float) total / cont;
        printf("Promedio: %.2f\n", prom);
    }
    else{
        printf("No se introdujeron calificaciones\n");
    }
    printf("==================================\n");

    return 0;
}