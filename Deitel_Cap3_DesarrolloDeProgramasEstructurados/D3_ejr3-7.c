/*  Programa : D3_ejr07c
    Proposito: Escribir instrucciones sencillas para
               a) Introducir la variable entera x mediante scanf
               b) Introducir la variable entera y mediante scanf
               c) Inicializar la variable entera i en 1
               d) Inicializar la variable entera potencia en 1
               e) Multiplicar la variable potencia por x e asignar 
                  el resultado a potencia
               f) Incrementar la variable i en 1
               g) Verificar i para ver si es menor o igual que y en
                  la condición de una instrucción while
               h) Mostrar la variable entera potencia mediante printf

                Ejercicio 3.7 Deitel - pg. 77
    Fecha    : 30/05/2021
 */

#include <stdio.h>

int main()
{
    int x, y, potencia, i;
    i = potencia = 1;

    printf("Introduzca varaibles\n");
    printf("x = ");scanf("%d", &x);
    printf("y = ");scanf("%d", &y);

    potencia *= x;
    i++;
    printf("\nx = %d\ny = %d\ni = %d\n", x, y, i);

    while(i <= y){
        printf("i menor o igual que y\n");
        i = y + 1;
    }

    printf("potencia = %d\n", potencia);


    return 0;
}