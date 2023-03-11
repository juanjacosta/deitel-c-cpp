/*

    Propósito: 
*/

#include <stdio.h>

#define TAM 7

void ordenaArreglo(int *const p, const int t);
void imprimeArreglo(int *const p, const int t);

int main()
{
    int buffer[TAM] = {50, 30, 20, 60, 10, 40, 70};
    int *ptrBuffer = buffer;
    int i;

    printf("=================================================\n");
    printf("\tNotaciones de Apuntadores\n");
    printf("=================================================\n");

    printf("\nNotación de subindices de arreglos\n");

    for (i = 0; i < TAM; i++)
    {
        printf("buffer[ %d ] = %d\n", i, buffer[i]);
    }

    printf("\nNotación apuntador/desplazamiento\n(El apuntador es el nombre del arreglo)\n");

    for (i = 0; i < TAM; i++)
    {
        printf("*(buffer + %d ) = %d\n", i, *(buffer + i));
    }

    printf("\nNotación de subindices de arreglos\n");

    for (i = 0; i < TAM; i++)
    {
        printf("ptrBuffer[ %d ] = %d\n", i,  ptrBuffer[i]);
    }

    printf("\nNotación de apuntador/desplazamiento\n");

    for (i = 0; i < TAM; i++)
    {
        printf("*(ptrBuffer + %d) = %d\n", i,  *(ptrBuffer + i));
    }

    printf("=================================================\n");
    printf("\tArreglo utilizado\n");
    imprimeArreglo(buffer, TAM);
    printf("\tArreglo Ordenado\n");
    ordenaArreglo(buffer, TAM);
    imprimeArreglo(buffer, TAM);
    printf("=================================================\n");

    return 0;
}

void ordenaArreglo(int *const p, const int t)
{
    void intercambia(int *ptrElemento1, int *ptrElemento2);
    int i, j;

    for (i = 0; i < t; i++)
    {
        for (j = 0;  j < t - 1; j++)
        {
            if (p[j] > p[j+1])
            {
                intercambia(&p[j], &p[j+1]);
            }
        }
    }
}

void imprimeArreglo(int *const p, const int t)
{
    for (int i = 0; i < t; i++)
    {
        printf("%d ", p[i]);
    }
    printf("\n");
}
void intercambia(int *ptrElemento1, int *ptrElemento2)
{
    int aux;
    aux = *ptrElemento1;
    *ptrElemento1 = *ptrElemento2;
    *ptrElemento2 = aux;

}