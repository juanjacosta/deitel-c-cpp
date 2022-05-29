/*
 Programa : D6_Ejm_07_SimulacionTiroDeDados.c
 Proposito: Escribir un programa que simule 6000 tiros de un dado de 6 lados. 
            Despliegue en una tabla la frecuencia de ocurrencia de cada lado.
 Fecha    : 15/08/2019
 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define TAM 7       // se define um tamanho de 7 porque no se cuenta la opción 0 (subíndice 0), 
                    // o sea el arreglo va de 1 a 6 (7 elementos con el 1er elemento de subíndice 0)
int main()
{
    int cara;               // valor aleatorio del dado entre 1 a 6 
    int tiro;               // contador de tiros de 1 a 6000
    int freq[TAM] = {0};    // incializa en cero la cuenta

    printf("=======================================\n");
    printf("\tSimulacion tiro de dados\n");
    printf("========================================\n");

    srand(time(NULL));

    // Tira el dado 6000 veces

    for (tiro = 1; tiro <= 6000; tiro++)
    {
        cara = 1 + rand() % 6;
        ++freq[cara];
    }

    printf("%5s%15s\n", "Cara", "Frecuencia");
    printf("========================================\n");

    // Muestra los elementos 1-6 de frecuencia en forma tabular

    for (cara = 1; cara < TAM; cara++)      
    {
        printf("%4d%17d\n", cara, freq[cara]);
    }
    
    printf("========================================\n");

    return 0;
}