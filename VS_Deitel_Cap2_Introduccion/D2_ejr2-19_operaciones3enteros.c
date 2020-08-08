/*
    Programa : D2_ejr2-19_operaciones3enteros.c
    Proposito: Escriba un programa que introduzca tres diferentes
               enteros desde el teclado, después que imprima la suma,
               el promedio, el producto, el número más pequeno y el 
               más grande de éstos. Solamente utilice la forma de selección 
               simple de la instrucción if, que aprendió en este capítulo.
               El diálogo en la pantalla debe aparecer de la siguiente forma: 

                Escriba tres enteros diferentes: 13 27 14
                La Suma es 54
                El promedio es 18.00
                El producto es 4914
                El numero mas pequeno es 13
                El numero mas grande es 27
*/
#include <stdio.h>

int main()
{
    int n1, n2, n3, suma, producto, max, min;
    float promedio = 0.0;
    n1 = n2 = n3 = suma = producto = max = min =0;

    printf("Escriba tres enteros diferentes: ");
    scanf("%d %d %d", &n1, &n2, &n3);

    suma = n1 + n2 + n3;
    promedio = suma / 3;
    producto = n1 * n2 * n3;

    max = n1;
    if (n2 > max)
    {
        max = n2;
    }

    if (n3 > max)
    {
        max = n3;
    }
    
    min = n1;
    if (n2 < min)
    {
        min = n2;
    }

    if (n3 < min)
    {
        min = n3;
    }

    if (n1 == n2 == n3)
    {
        printf("Estos números son iguales\n");
    }

    printf("La Suma es %d\n", suma);
    printf("El promedio es %.2f\n", promedio);
    printf("El producto es %d\n", producto);
    printf("El numero mas pequeno es %d\n", min);
    printf("El numero mas grande es %d\n", max);

    return 0;
}