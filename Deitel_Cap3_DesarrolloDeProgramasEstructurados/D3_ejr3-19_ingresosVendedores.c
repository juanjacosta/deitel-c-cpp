/*
    Programa : D3_ejr3-19_ingresosVendedores.c
    Proposito: Una gran empresa de productos químicos le paga a 
               sus vendedores mediante un esquema de comisiones.
               Los vendedores reciben $200 semanales más el 9% 
               de sus ventas durante la semana. Por ejemplo, un 
               vendedor que vende $5000 de productos químicos 
               durante la semana recibe $200 más el 9% de $5000,
               o un total de $650. Desarrolle un programa que 
               introduzca las ventas totales de cada vendedor 
               durante la última semana y que calcule y despliegue 
               los ingresos de ese vendedor. Procese las cantidades 
               de un vendedor a la vez. 

               ALGORITMO DEL PROGRAMA 

               CIMA: Calcular e imprimir los ingresos semanales de 
                     los vendedores de un almacén, uno a la vez, que
                     reciben su salario mediante un esquema de comisiones.

                *****       MEJORAMIENTO    *****

                Definir variables: 
                    Definir variable con valor del salario básico.
                    Definir variable para recibir ventas  
                    Definir variable para el % a sacar (9%)
                    Definir variable para calcular comisión
                    Definir variable para calcular ingresos 
                
                Inicializar variables:
                    inicializar variable con valor del salario básico
                    inicializar variable con el % a sacar (9%)
                    inicializar variable para calcular ingresos 

                Introducir ventas totales durante la última semana de cada 
                vendedor, uno a la vez:
                     Ingresar ventas totales 
                     Mientras no se introduzca el valor centinela
                        calcular el 9% de las ventas totales 
                        sumar este 9% a $200 que es el basico  
                        Imprimir resultados

                        ingresar ventas totales de siguiente vendedor 

*/
#include <stdio.h>

int main()
{
    float ventas, porcentaje, comision, basico, salario;

    basico = 200;
    porcentaje = 0.09;
    salario = 0;

    printf("=======================================================================\n");
    printf("\tSalario vendedores\n");
    printf("=======================================================================\n");
    printf("Introduzca las ventas en pesos (-1 para terminar): ");
    scanf("%f", &ventas);

    while(ventas != -1)
    {
        comision = ventas * porcentaje;
        salario= basico + comision;
        printf("El salario es: %.2f\n", salario);

        printf("\nIntroduzca las ventas en pesos (-1 para terminar): ");
        scanf("%f", &ventas);
    }
    printf("=======================================================================\n");
    
    return 0;
}