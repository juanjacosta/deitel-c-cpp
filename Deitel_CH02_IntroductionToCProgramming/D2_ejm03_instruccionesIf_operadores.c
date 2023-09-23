/*
 Programa : D2_ejm03_instruccionesIf_operadores.c
 Proposito: Escribir un programa que utilice instrucciones if para comparar dos valores
            ingresados por el usuario y diga todas las relaciones que estos satisfacen.
 Fecha    : 25/07/2019 
 */

#include <stdio.h>

int main(void)
{
    int num1, num2;

    printf("=================================================\n");
    printf("\tRelaciones entre enteros\n");
    printf("=================================================\n");
    printf("Introduzca dos enteros y le dire\nla relacion que satisfacen: \n");
    scanf("%d%d", &num1, &num2);    

    if (num1 == num2){
        printf("%d es igual que %d\n", num1, num2);
    }
    //else
    if (num1 != num2){
        printf("%d es diferente que %d\n", num1, num2);
    }
    
    //else
    if (num1 < num2){
        printf("%d es menor que %d\n", num1, num2);
    }
    
    //else
    if (num1 > num2){
        printf("%d es mayor que %d\n", num1, num2);
    }
    
    //else
      if (num1 <= num2){
        printf("%d es menor o igual que %d\n", num1, num2);
    }
    
    //else 
    if (num1 >= num2){
        printf("%d es mayor o igual que %d\n", num1, num2);
    }
    
    printf("=================================================\n");

    return 0;
}