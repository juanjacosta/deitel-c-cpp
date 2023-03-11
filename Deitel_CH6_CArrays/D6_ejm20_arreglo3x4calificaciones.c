/*
    Programa : D6_ejm18_arreglo3x4calificaciones.c
    Proposito: Realizar diferentes manipulaciones sobre un arreglo de 3 x 4 con los datos
              de las calificaciones de un estudiante
*/
#include <stdio.h>
#define ESTUDIANTES 3
#define EXAMENES 4

/*  Prototipos de las funciones */
int minimo(const int calificaciones[][EXAMENES], size_t alumnos, size_t examenes);
int maximo(const int calificaciones[][EXAMENES], size_t alumnos, size_t examenes);
double promedio(const int estableceCalif[], size_t examenes);
void despliegaArreglo(const int calificaciones[][EXAMENES], size_t alumnos, size_t examenes);

int main()
{
    // inicializa las calificaciones para tres estudiantes (filas)
    const int calificacionesEstudiantes[ESTUDIANTES][EXAMENES] =
        {{77, 68, 86, 73},
         {96, 87, 89, 78},
         {70, 90, 86, 81}};

    // muestra el arreglo calificaciones
    puts("El arreglo es:");
    despliegaArreglo(calificacionesEstudiantes, ESTUDIANTES, EXAMENES);

    // determina el valor mas pequeno y el valor mas grande de las calificaciones
    printf("\n\nCalificacion mas baja: %d\nCalificacion mas alta: %d\n",
           minimo(calificacionesEstudiantes, ESTUDIANTES, EXAMENES),
           maximo(calificacionesEstudiantes, ESTUDIANTES, EXAMENES));

    // calcula el promedio de calificaciones de cada estudiante
    for (size_t estudiante = 0; estudiante < ESTUDIANTES; estudiante++)
    {
        printf("El promedio de calificacion del estudiante %d es %.2f\n",
               estudiante, promedio(calificacionesEstudiantes[estudiante], EXAMENES));
    }

    return 0;
}

/*  Definiciones de las funciones */

int minimo(const int calificaciones[][EXAMENES], size_t alumnos, size_t examenes) // encuentra la calificacion mas baja
{
    int califBaja = 100; // inicializa a la calificacion mas alta posible

    for (size_t i = 0; i < alumnos; i++)
    { // ciclo a traves de las filas de calificaciones

        for (size_t j = 0; j < examenes; j++)
        { // ciclo a traves de las columnas de calificaciones

            if (calificaciones[i][j] < califBaja)
            {
                califBaja = calificaciones[i][j];
            }
        }
    }
    return califBaja;
}

int maximo(const int calificaciones[][EXAMENES], size_t alumnos, size_t examenes) // encuentra la calificacion mas alta
{
    int califAlta = 0; // inicializa a la calificacion mas baja posible

    for (size_t i = 0; i < alumnos; i++)
    { // ciclo a traves de las filas de calificaciones

        for (size_t j = 0; j < examenes; j++)
        { // ciclo a traves de las columnas de calificaciones

            if (calificaciones[i][j] > califAlta)
            {
                califAlta = calificaciones[i][j];
            }
        }
    }
    return califAlta;
}

double promedio(const int conjuntoDeCalificaciones[], size_t examenes)
{
    int total = 0; // suma de las calificaciones del examen

    for (size_t i = 0; i < examenes; i++)
    {
        total += conjuntoDeCalificaciones[i];
    }
    return (double)total / examenes;
}

void despliegaArreglo(const int calificaciones[][EXAMENES], size_t alumnos, size_t examenes)
{

    printf("                             [0]  [1]  [2]  [3]"); // muestra el encabezado de las columnas

    for (size_t i = 0; i < alumnos; i++)
    { // muestra las calificaciones en forma tabular
        printf("\ncalificacionesEstudiantes[%u] ", i);

        for (size_t j = 0; j < examenes; j++)
        {
            printf("%-5d", calificaciones[i][j]);
        }
    }
}