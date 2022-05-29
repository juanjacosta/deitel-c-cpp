/*  Programa : D6_ejm09_arregloEstaticoyAutomatico.c
    Proposito: Mostrar la diferencia entre la declaracion de arreglos con especificador de
               clase static y automaticos de almacenamiento
*/

#include <stdio.h>

void iniciaArregloEstatico(void);   // prototipos
void iniciaArregloAutomatico(void); // de función

int main()
{
    puts("\nPrimera llamada a cada funcion:");
    iniciaArregloEstatico();
    iniciaArregloAutomatico();

    puts("\n\nSegunda llamada a cada funcion:");
    iniciaArregloEstatico();
    iniciaArregloAutomatico();

    printf("\n\n");

    return 0;
}

void iniciaArregloEstatico(void)
{
    static int arreglo[3];

    puts("\nValores al entrar a iniciaArregloEstatico():");

    for (size_t i = 0; i <= 2; i++) // size_t representa un tipo unigned int
    {
        printf("arreglo[%u] = %d ", i, arreglo[i]); // %u para imprimir unsigned int
    }

    puts("\n\nValores al salir de iniciaArregloEstatico():");

    for (size_t i = 0; i <= 2; i++)
    {
        printf("arreglo[%u] = %d ", i, arreglo[i] += 5);
    }
}

void iniciaArregloAutomatico(void)
{
    int arreglo2[3] = {1, 2, 3};

    puts("\n\nValores al entrar a iniciaArregloAutomatico():");

    for (size_t i = 0; i <= 2; i++)
    {
        printf("arreglo[%u] = %d ", i, arreglo2[i]);
    }

    puts("\n\nValores al salir de iniciaArregloAutomatico():");

    for (size_t i = 0; i <= 2; i++)
    {
        printf("arreglo[%u] = %d ", i, arreglo2[i] += 5);
    }
}