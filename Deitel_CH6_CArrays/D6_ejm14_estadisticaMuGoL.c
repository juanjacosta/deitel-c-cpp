#include <stdio.h>
#include <math.h>

void imprimeArreglo(const int v[], int t);
void ordenaArreglo(int v[], int t);
int sumatoria(int v[], int t);
double media(int v[], int t);
int mediana(int v[], int t);
void moda(int v[], int t);
int maximo(int v[], int t);

int main()
{
    int tam;
    //    int respuesta[] = {6, 7, 8, 7, 1};
    int respuesta[] = 
    {6, 7, 8, 9, 8, 7, 8, 9, 8, 9,
     7, 8, 9, 5, 9, 8, 7, 8, 7, 8,
     6, 7, 8, 9, 3, 9, 8, 7, 8, 7,
     7, 8, 9, 8, 9, 8, 9, 7, 8, 9,
     6, 7, 8, 7, 8, 7, 9, 8, 9, 2,
     7, 8, 9, 8, 9, 8, 9, 7, 5, 3,
     5, 6, 7, 2, 5, 3, 9, 4, 6, 4,
     7, 8, 9, 6, 8, 7, 8, 9, 7, 8,
     7, 4, 4, 2, 5, 3, 8, 7, 5, 6,
     4, 5, 6, 1, 6, 5, 7, 8, 7};

    tam = sizeof(respuesta)/sizeof(respuesta[0]);

    printf("********\n");
    printf(" Media\n");
    printf("********\n");
    printf("La media es el valor promedio de los datos.\n"
            "La media es igual al total de todos los\n"
            "elementos de datos divididos por el numero\n"
            "de elementos de datos (%d). La media en \n"
            "esta ejecucion es: %d / %d = %.4f\n", tam, sumatoria(respuesta, tam), tam, media(respuesta,tam));

    printf("\n********\n");
    printf(" Mediana\n");
    printf("********\n");
    printf("El arreglo de respuestas desordenado es\n");
    imprimeArreglo(respuesta, tam);

    printf("\nEl arreglo ordenado es\n");
    ordenaArreglo(respuesta, tam);
    imprimeArreglo(respuesta, tam);

    printf("La mediana es el elemento %d del\n"
            "arreglo ordenado de %d elementos.\n"
            "Para esta ejecucion la mediana es %d\n", mediana(respuesta, tam), tam, respuesta[mediana(respuesta, tam)]);

    printf("\n********\n");
    printf(" Moda\n");
    printf("********\n");
    moda(respuesta, tam);

    return 0;
}

void imprimeArreglo(const int v[], int t)
{
    int i;
    for (i = 0; i < t; i++){
        printf("%d ", v[i]);

        if (i % 20 == 0){
            printf("\n");
        }
    }
    printf("\n");
}

double media(int v[], int t)
{
    float media;

    media = (double)sumatoria(v, t)/t;

    return media;
}
int sumatoria(int v[], int t)
{
    int i, total = 0;

    for (i = 0; i < t; i++)
    {
        total += v[i];
    }
    return total;
}

void ordenaArreglo(int v[], int t)
{
    int j, i, temp;
    for ( j = 0; j < t; j++)
    {
        for (i = 0; i < t-1; i++)
        {
            if (v[i] > v[i+1])
            {
                temp = v[i];
                v[i] = v[i+1];
                v[i+1] = temp;
            }   
        }
    }   
}

int mediana(int v[], int t)
{
    int i;
    double mediana;

    mediana = floor(t/2);
    
    return (int)mediana;
}

void moda(int v[], int t)
{
    int i, j, freq[10] = {0}, tamFq, moda = 0, max = 0;

    tamFq = sizeof(freq) / sizeof(freq[0]);

    for (i = 0; i < t; i++)
    {
        ++freq[v[i]];
    }
    
    printf("%5s\t%10s\t%10s\n", "Respuesta", "Frecuencia", "Histograma");

    for ( i = 1; i < tamFq; i++)
    {
        printf("%5d%15d\t\t", i, freq[i]);

        for (j = 0; j < freq[i] ; j++)
        {
            printf("*");
        }
        printf("\n");           
    }

    printf("\n");

    for (i = 0; i < tamFq; i++)
    {
        if (freq[i] > max){
            max = freq[i];
            moda = i;
        }
    }

    printf("La moda es el valor mas frecuente.\n"
            "Para esta ejecucion la moda es %d el cual ocurrio %d veces.\n\n", moda, max);
            // "Para esta ejecucion la moda es %d el cual ocurrio %d veces.\n", freq[maximo(freq, tamFq)], maximo(freq, tamFq));
}

// int maximo(int v[], int t)
// {
//     int i, max;
//     i = max = 0;

//     max = v[i];

//     for (i; i < t; i++)
//     {
//         if (v[i] > max){
//             max = v[i];
//         }
//     }
    
//     return max;
// }