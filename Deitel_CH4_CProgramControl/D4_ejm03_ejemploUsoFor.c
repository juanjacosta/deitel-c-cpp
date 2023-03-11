/*
    Programa: D4_ejm03_ejemplosUsoFor.c
    Propósito: Mostrar diferentes ejemplos que muestren los métodos para modificar
               la variable de control en una instrucción for 
    Fecha    : 13/08/2019
 */

#include <stdio.h>

int main()
{
    int i = 0;

    printf("============================================\n");
    printf("\tEjemplos instrucción for \n");
    printf("=============================================\n");

    printf("1. Modifique la variable de control de 1 a 100, en incrementos de 1:\n");

    for (i = 1; i <= 100; i++)
        printf("%d ", i);
    
    printf("\n\n2. Modifique la variable de control de 100 a 1 en decrementos de -1:\n ");

    for (i = 100; i >= 1; i--)
        printf("%d ", i);

    printf("\n\n3. Modifique la variable de control de 7 a 77, en pasos de 7:\n");

    for (i = 7; i <= 77; i += 7)
        printf("%d ", i);
    
    printf("\n\n4. Modifique la variable de control de 20 a 2 en pasos de -2:\n ");

    for (i = 20; i >= 2; i -= 2)
        printf("%d ", i);

    printf("\n\n5. Modifique la variable de control en la siguiente secuencia de "
            "valores: 2, 5, 8, 11, 14, 17, 20:\n");

    for (i = 2; i <= 20; i += 3)
        printf("%d ", i);
    
    printf("\n\n6. Modifique la variable de control en la siguiente secuencia de "
            "valores: 99, 88, 77, 66, 55, 44, 33, 22, 11, 0\n ");

    for (i = 99; i >= 0; i -= 11)
        printf("%d ", i);

    printf("\n=============================================\n");

    return 0;
}