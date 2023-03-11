/*
 Programa : D6_Ejm_08_arreglosDeCaracteres.c
 Proposito: Escribir un programa que muestre:
            - la inicialización de un arreglo de caracteres mediante una literal de cadena,
            - la lectura de una cadena que se encuentra en un arreglo de caracteres,
            - la impresión de un arreglo de caracteres como cadena, y
            - el acceso a los caracteres individuales de la cadena

 */

#include <stdio.h>

int main()
{
    printf("=======================================\n");
    printf("\tArreglos de caracteres\n");
    printf("========================================\n");

    char cadena1[20];                     // reserva 20 caracteres
    char cadena2[] = "literal de cadena"; // reserva 18 caracteres                                 // contador

    // Lee la cadena del usuario y la introduce en el arreglo cadena1

    printf("Introduce una cadena: ");
    scanf("%s", cadena1); // entrada q finaliza con un espacio en blanco

    // Muestra las cadenas

    printf("La cadena1 es: %s\nLa cadena2 es: %s\n", cadena1, cadena2);

    printf("La cadena1 con espacios entre caracteres es: ");

    for (size_t i = 0; cadena1[i] != '\0'; i++) // size_t representa un tipo unigned int
    {
        printf("%c ", cadena1[i]);
    }

    printf("\n");
    printf("========================================\n");

    return 0;
}