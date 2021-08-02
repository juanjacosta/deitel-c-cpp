/*
    Programa : D5_ejr5-11_redondearDecimasCentesimasMilesimas.c
    Propósito: La función floor puede utilizarse para redondear un número  
               a una posición decimal determinada. La isntrucción:

               y = floor(x * 10 + .5) / 10;

               redondea x a la posición de las décimas (la primera posición 
               a la derecha del punto decimal). La instrucción:

               y = floor(x * 10 + .5) / 100;

               redondea x a la posición de las centésimas (la segunda posición 
               a la derecha del punto decimal). Escriba un programa que defina
               cuatro funciones para redondear al número x de distintas maneras:

               a) redondeaAentero( numero )
               b) redondeaAdecimas( numero )
               c) redondeaAcentesimas( numero )
               d) redondeaAmilesimas( numero )

               Por cada valor leído, su programa debe imprimir el valor original,
               el número redondeado al entero más cercano, el número redondeado a 
               la décima más cercana, el número redondeado a la centésima más 
               cercana y el número redondeado a la milésima más cercana. 

               NOTA: Para solucionar error de "referência não definida para "floor":
              Append -lm to the end of your gcc command 

              gcc -Wall arquivo.c -o arquivo -lm
*/

#include <stdio.h>
#include <math.h>

void redondeaAentero( float numero );
void redondeaAdecimas( float numero );
void redondeaAcentesimas( float numero );
void redondeaAmilesimas( float numero );

int main()
{
    float num;

    printf("==========================================\n");
    printf("\tRedondeo de valores\n");
    printf("==========================================\n");
    printf("Ingrese numero decimal: ");scanf("%f", &num);
    
    printf("\nValor ingresado: %f\n\n", num);
    redondeaAentero(num);
    redondeaAdecimas(num);
    redondeaAcentesimas(num);
    redondeaAmilesimas(num);

    printf("==========================================\n");

    return 0;
}

void redondeaAentero( float numero )
{
    printf("Redondea a entero    : %.0f\n", floor(numero + .5));
}

void redondeaAdecimas( float numero )
{
    printf("Redondea a decimas   : %.2f\n", (floor(numero * 10 + .5) / 10));
}

void redondeaAcentesimas( float numero )
{
    printf("Redondea a centesimas: %.2f\n", (floor(numero * 10 + .5) / 100));
}

void redondeaAmilesimas( float numero )
{
    printf("Redondea a milesimas : %.2f\n", (floor(numero * 10 + .5) / 1000));
}