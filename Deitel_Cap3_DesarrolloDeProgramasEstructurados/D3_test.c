#include <stdio.h>

int main()
{
    int est = 1, resul, apro = 0, repro = 0;

    while(est <= 10){
        printf("Ingrese nota: ");
        scanf("%d", &resul);

        if (resul != 1)
            repro++;
        else
            apro++;
        est++;
    }
    printf("Aprobados : %d\n", apro);
    printf("Reprobados: %d\n", repro);

    if (apro > 8)
        printf("Objetivo alcanzado\n");

}