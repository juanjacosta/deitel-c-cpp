#include <stdio.h>

int calculoTamanoString(char st[]);
void concatenaStrings(char st1[], int t1, char st2[], int t2, char stConcat[]);

int main()
{
    char palabra1[20];
    char palabra2[20];
    char frase[40] = {};
    int tam1 = 0, tam2 = 0;

    printf("Ingresa palabra 1: ");
    scanf("%s", palabra1);

    printf("Ingresa palabra 2: ");
    scanf("%s", palabra2);

    tam1 = calculoTamanoString(palabra1);
    printf("Tamano String 1: %d\n", tam1);

    tam2 = calculoTamanoString(palabra2);
    printf("Tamano String 2: %d\n", tam2);

    concatenaStrings(palabra1, tam1, palabra2, tam2, frase);

    return 0;
}

int calculoTamanoString(char st[])
{
    int i, cont = 0;
    for (i = 0; st[i] != '\0'; i++){
        cont += 1;
    }
    return cont;
}

void concatenaStrings(char st1[], int t1, char st2[], int t2, char stConcat[])
{
    int i, j;
    for (i = 0; i < t1; i++){
        stConcat[i] = st1[i];
    }
    for (j = 0; j < t2; j++){
        stConcat[j + i] = st2[j];
    }

    printf("Strings concatenados: %s\n", stConcat);
}