/*
    Programa : D6_ejm07_encuestaComidaCafeteriaEscolar
    Propósito: Escribir un programa que lea los números de un arreglo y grafique
               la información en forma de histograma.
 */
#include <stdio.h>
#define TAM 10

int main()
{
    int n[TAM] = {19, 3, 15, 7, 11, 9, 13, 5, 17, 1};
    int i; // contador for externo para los elementos del arreglo
    int j; // contador for interno, cuenta *s en cada barra del histograma

    printf("=====================================================\n");
    printf("\tImpresion de resultados con Histograma\n");
    printf("=====================================================\n");

    printf("%s%13s%17s\n", "Elemento", "Valor", "Histograma");

    for (size_t i = 0; i < TAM; i++)
    {
        printf("%7u%13d      ", i, n[i]); // %u para imprimir unsigned int

        for (j = 1; j <= n[i]; j++)
        {
            printf("%c", '*');
        }

        printf("\n");
    }
    printf("=====================================================\n");
    return 0;
}