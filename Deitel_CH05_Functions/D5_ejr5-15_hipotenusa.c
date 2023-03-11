/*
    Programa : D5_ejr5-15_hipotenusa.c
    Propósito: Defina una función llamada hipotenusa que calcule la longitud
              de la hipotenusa de un triángulo recto, cuando se introducen 
              los otros dos lados. Utilice esta función en un prograna que 
              determine la longitud de la hipotenusa para cada uno de los 
              siguientes triángulos:

              Triángulo     Lado1       Lado2
                  1          3.0         4.0
                  2          5.0        12.0
                  3          8.0        15.0
            
             NOTA: Para solucionar error de "referência não definida para "pow":
              Append -lm to the end of your gcc command 

              gcc -Wall arquivo.c -o arquivo -lm
*/

#include <stdio.h>
#include <math.h>

double hipotenusa(double ld1, double ld2);
int main()
{
    double l1, l2;

    printf("=========================================\n");
    printf("\tCalculo Hipotenusa\n");
    printf("=========================================\n");

    printf("Lado1: ");
    scanf("%lf", &l1);

    printf("Lado2: ");
    scanf("%lf", &l2);

    printf("Hipotenusa: %.2f\n", hipotenusa(l1, l2));

    return 0;
}

double hipotenusa(double ld1, double ld2)
{
    double h;

    h = pow(ld1, 2) + pow(ld2, 2);

    return h;
}