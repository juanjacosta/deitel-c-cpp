#include <stdio.h>

void copia1(char *s1, const char *s2);
void copia2(char *s1, const char *s2);

int main()
{
    char cadena1[10];
    char cadena2[10];

    char *str1 = "Hola";
    char str2[] = "Adios"; 

    copia1(cadena1, str1);
    printf("cadena1 = %s\n", cadena1);

    copia1(cadena2, str2);
    printf("cadena2 = %s\n", cadena2);

    return 0;
}

void copia1(char *s1, const char *s2)
{
    int i;

    // realiza el ciclo a través de la cadena 
    for (i = 0; (s1[i] = s2[i]) != '\0'; i++)
    {
        ;
    }

}

void copia2(char *s1, const char *s2)
{
    // realiza el ciclo a través de las cadenas 
    for ( ; (*s1 = *s2) != '\0'; s1++, s2++)
    {
        ;
    }

}