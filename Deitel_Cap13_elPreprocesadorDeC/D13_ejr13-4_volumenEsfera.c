/*
    Programa : D13_ejr13-4_volumenEsfera.c
    Propósito: Escriba un programa que defina una macro con un argumento
               para calcular el volumen de una esfera. El programa debe
               calcular el volumen para esferas con radios de 1 a 10 e 
               imprimir los resultados en forma tabular. La fórmula para
               el volumen de la esfera es:

                    (4.0 / 3) * pi * r^3 

                NOTA: Para solucionar error de "referência não definida para "pow":
                Append -lm to the end of your gcc command 

                gcc -Wall arquivo.c -o arquivo -lm
*/
#include <stdio.h>
#include <math.h>

#define PI 3.141516
#define VOLUMEN_ESFERA(x) (4.0 /3) * PI * pow(x,3)
#define TAM 10

int main()
{
    printf("%s%15s\n", "Radio", "Volumen Esfera");
    for (int i = 1; i <= TAM; i++)
    {
        printf("%3d%13.2f\n", i, VOLUMEN_ESFERA(i));
    }
    

    return 0;
}