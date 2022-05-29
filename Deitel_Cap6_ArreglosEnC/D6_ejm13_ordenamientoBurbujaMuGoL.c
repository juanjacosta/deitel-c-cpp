#include <stdio.h>

void imprimeArreglo(int m[], int t);
void ordenaArreglo(int m[], int t);

int main()
{
    int a[] = {20,36,12,5,7,9,10,45,14,1,7};
    int tam;

    tam = sizeof(a)/sizeof(a[0]);
    printf("tam: %d\n", tam);

    imprimeArreglo(a,tam);
    ordenaArreglo(a, tam);
    imprimeArreglo(a,tam);
    
    return 0;
}

void imprimeArreglo(int m[], int t)
{
    int i;

    for (i = 0; i < t; i++)
    {
        printf("%d ", m[i]);
    }
    printf("\n");
}

void ordenaArreglo(int m[], int t)
{
    int i, j, temp;
    
    for (i = 0; i < t; i++)
    {
        for (j = 0; j < t-1; j++)
        {
            if (m[j] > m[j+1])
            {
                temp = m[j];
                m[j] = m[j+1];
                m[j+1] = temp;
            }
        }
    }
}