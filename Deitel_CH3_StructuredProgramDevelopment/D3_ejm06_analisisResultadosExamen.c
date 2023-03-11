/*
    Programa : D3_ejm06_analisisResultadosExamen.c
    Propósito: Escribir un programa para analizar los resultados de un examen de 
               certificación de 10 estudiantes, (1 significa aprobado, 2 significa
               reprobado)
    Fecha    : 02/08/2019
 */
#include <stdio.h>

int main()
{
    int resultado, aprobados = 0, reprobados = 0, con = 1;

    printf("=================================================\n");
    printf("\tResultados Examen Certificacion\n");
    printf("=================================================\n");

    while (con <= 10)
    {
        printf("Introduce resultado (1 = aprobado, 2 = reprobado): ");
        scanf("%d", &resultado);

        if (resultado == 1)
        {
            aprobados += 1;
        }else{
            reprobados += 1;
        }
        con += 1;
    }
    
    printf("Estudiantes aprobados : %d\n", aprobados);
    printf("Estudiantes reprobados: %d\n", reprobados);

    if (aprobados > 8)
    {
        printf("Objetivo Alcanzado\n");
    }
    printf("=================================================\n");

    return 0;
}