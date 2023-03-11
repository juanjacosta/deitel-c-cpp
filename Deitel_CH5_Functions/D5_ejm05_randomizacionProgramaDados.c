/*
 Programa : D5_ejm05_randomizacionProgramaDados.c
 Proposito: Escribir un programa que utilice la función srand para 
            randomizar la generación de números aleatorios
 */
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i;
    unsigned semilla;   // Un tipo de dato unsigned int de 2 bytes solo puede contener 
                        // valores positivos en el rango de 0 a 65535
    printf("=======================================\n");
    printf("\tRandomizacion\n");
    printf("========================================\n");

    printf("Introduzca la semilla: ");
    scanf("%u", &semilla);              // especificador %u para datos tipo unsigned

    srand(semilla);

    for (i = 1; i <= 10; i++){
        printf("%7d", 1 + (rand () % 6));

        if (i % 5 == 0)
            printf("\n");
    }
    printf("========================================\n");
    
    return 0;
}