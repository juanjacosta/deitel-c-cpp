/*
    Programa : D2_ejr2-16_obtenerNumeroseOperaciones.c
    Proposito: Escriba un programa que pida al usuario escribir
               dos números, que obtenga los dos números por 
               parte del usuario, y que imprima la suma, el 
               producto, la diferencia, el cociente y el residuo
               de los dos números 
    Fecha     : 01/07/2020
*/
#include <stdio.h>

int main()
{
    int n1, n2, suma, producto, diferencia;
    float cociente, residuo;

    n1 = n2 = suma = producto = diferencia = cociente = residuo = 0;

    printf("==========================================\n");
    printf("\tEjercicio 2.16\n");
    printf("==========================================\n");
    printf("Ingrese Dos numeros\n");
    printf("Numero 1: ");scanf("%d", &n1);
    printf("Numero 2: ");scanf("%d", &n2);

    suma = n1 + n2;
    producto = n1 * n2;
    diferencia = n1 - n2;
    cociente = (float)n1 / n2;
    residuo = n1 % n2;

    printf("\nNumeros ingresados (en orden) : %d e %d\n", n1, n2);
    printf("\nSuma      : %d\n", suma);
    printf("Producto  : %d\n", producto);
    printf("Diferencia: %d\n", diferencia);
    printf("Cociente  : %.2f\n", cociente);
    printf("Residuo   : %.2f\n", residuo);
    printf("==========================================\n");

    return 0;
}