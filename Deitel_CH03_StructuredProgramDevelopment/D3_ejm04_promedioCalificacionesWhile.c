/*
    Programa : D3_ejm04_promedioCalificacionesWhile.c
    Propósito: Escribir un programa para obtener el promedio de calificaciones de un 
               grupo de 10 estudiantes mediante una repetición controlada por contador
    Fecha    : 31/07/2019
 */

#include <stdio.h>

int main()
{
    int  total = 0, cont = 1;
    int calificacion, prom;

    printf("==================================\n");
    printf("\tPromedio calificaciones\n");
    printf("==================================\n");

    while (cont <= 10)
    {
        printf("Introduce calificacion: ");
        scanf("%d", &calificacion);

        total += calificacion;
        cont += 1;
    }
    prom = total / 10;
    printf("promedio: %d\n", prom);
    printf("==================================\n");

    return 0;
}