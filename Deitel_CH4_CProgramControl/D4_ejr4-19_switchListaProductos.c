/*
    Programa : D4_ejr4-19_switchListaProductos.c
    Propósito: Una empresa de ventas por correo vende cinco productos diferentes 
               cuyos precios de lista mostramos en la siguiente tabla:

                =========================================================
                Numero de Producto     Precio de lista
                =========================================================
                        1                   $2.98
                        2                   $4.50
                        3                   $9.98
                        4                   $4.49
                        5                   $6.87
                =========================================================

               Escriba un programa que lea una serie de pares de números de la 
               siguiente manera:
               a) Número de producto
               b) Cantidad vendida durante el día.

               Su programa debe utilizar una instrucción switch para ayudar a 
               determinar el precio de lista de cada producto.
               Su programa debe calcular y desplegar el valor total de venta 
               de todos los productos vendidos la semana pasada.

               NOTA: EOF em linux-> Ctrl d
*/

#include <stdio.h>

int main()
{
    int nProduct, cVendida;
    float pr1 = 2.98, pr2 = 4.50, pr3 = 9.98, pr4 = 4.49, pr5 = 6.87;
    float precio1 = 0.0, precio2 = 0.0, precio3 = 0.0, precio4 = 0.0, precio5 = 0.0;
    int cVendida1 = 0, cVendida2 = 0, cVendida3 = 0, cVendida4 = 0, cVendida5 = 0;

    printf("Numero de producto: ");

    while ((scanf("%d", &nProduct)) != EOF){        

        printf("Cantidad vendida: ");
        scanf("%d", &cVendida);

        switch (nProduct)
        {
        case 1:
            cVendida1 += cVendida;
            precio1 = pr1 * cVendida1;
            break;

        case 2:
            cVendida2 += cVendida;
            precio2 = pr2 * cVendida2;
            break;
        
        case 3:
            cVendida3 += cVendida;
            precio3 = pr3 * cVendida3;
            break;

        case 4:
            cVendida4 += cVendida;
            precio4 = pr4 * cVendida4;
            break;

        case 5:
            cVendida5 += cVendida;
            precio5 = pr5 * cVendida5;
            break;
        
        default:
            printf("Id invalido\n");
            break;
        }

        printf("Numero de producto: ");
    }

    printf("\n=============================================================================\n");
    printf("%s%20s%20s%15s\n","Numero de Producto", "Precio de lista", "Cantidad Vendida", "Venta Total");
    printf("==============================================================================\n");
    printf("%10d%20s%.2f%17d%18.2f\n", 1, "$", pr1, cVendida1, precio1);
    printf("%10d%20s%.2f%17d%18.2f\n", 2, "$", pr2, cVendida2, precio2);
    printf("%10d%20s%.2f%17d%18.2f\n", 3, "$", pr3, cVendida3, precio3);
    printf("%10d%20s%.2f%17d%18.2f\n", 4, "$", pr4, cVendida4, precio4);
    printf("%10d%20s%.2f%17d%18.2f\n", 5, "$", pr5, cVendida5, precio5);
    printf("==============================================================================\n");

    return 0;
}