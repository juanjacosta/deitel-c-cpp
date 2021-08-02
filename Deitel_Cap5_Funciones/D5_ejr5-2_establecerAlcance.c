/*
  Programa : D5_ejr5-2_establecerAlcance.c
  Proposito: Para el siguiente programa establecer el alcance de:
            a) La variable x en main    : Alcance de BLOQUE 
            b) La variable y en cubo    : Alcance de BLOQUE 
            c) La funcion cubo          : Alcance de archivo
            d) La funcion main          : Alcance de archivo
            e) El prototipo de la funcion para cubo : Alcance de ARCHIVO  
            f) El identificador y el prototipo de la funcion cubo   : Alcance de PROTOTIPO DE funcion 
 */
#include <stdio.h>

int cubo(int y);

int main()
{
    int x;

    for (x = 1; x <= 10; x++){
        printf("%d\n", cubo(x));
    }

    return 0;
}

int cubo(int y)
{
    return y * y * y;
}