/*
    Programa : D6_ejm07_encuestaComidaCafeteriaEscolar
    Propósito: Escribir un programa para colocar en un arreglo el
               resumen del número de respuestas de cada tipo, de
               una encuesta realizada a 40 estudiantes sobre la
               calidad de la comida de la cafeteria escolar, donde
               1 significa muy mala y 10 significa excelente.
 */

#include <stdio.h>

#define TAM_RESPUESTA 40  // Define los tamaños
#define TAM_FRECUENCIA 11 // de los arreglos

int main()
{
    int frecuencia[TAM_FRECUENCIA] = {0}; /* Inicializa contador de frecuencia a 0 */
    int respuestas[TAM_RESPUESTA] = {10, 2, 6, 4, 8, 5, 9, 7, 8, 10, 1, 6, 3, 8, 6, 10, 3, 8, 2, 7, 6, 5, 7, 6, 8, 6, 7, 5, 6, 6,
                                     5, 6, 7, 5, 6, 4, 8, 6, 8, 10};

    printf("=====================================================\n");
    printf("\tEncuesta comida cafetería\n");
    printf("=====================================================\n");

    /* Este ciclo toma las respuestas una a la vez del arreglo respuestas e incrementa uno de los 10
       contadores (freq[1] a freq[10]) de dicho arreglo - pg. 185
    */
    for (size_t i = 0; i < TAM_RESPUESTA; i++) //
    {                                          // Esta instrucción incrementa el contador de
        frecuencia[respuestas[i]]++;           //  frecuencia adecuado, de acuerdo con el valor
    }                                          // de respuestas [respuesta]

    /* Despliega los resultados */

    printf("%10s%17s\n", "rango", "Frecuencia");

    for (size_t rango = 1; rango < TAM_FRECUENCIA; rango++) // size_t representa un tipo unigned int
    {
        printf("%6u%17d\n", rango, frecuencia[rango]); // %u para imprimir unsigned int
    }
    printf("=====================================================\n");

    return 0;
}

/*
    Si utilizo un valor de 10 para el arreglo que obtendra el resumen de las respuestas, en el 1er ciclo
    for donde se toman las respuestas la instrucción debe tener un posincremento y la instrucción de la
    variable de control respuesta ser <= TAM_RTAS

    #define TAM_FREQ 10

    for (respuesta = 0; respuesta <= TAM_RTAS; respuesta++)  //
    {                                                       // Esta instrucción incrementa el contador de
        freq[rtas[respuesta]]++;                            //  frecuencia adecuado, de acuerdo con el valor
    }                                                       // de rtas[respuesta]

    printf("%10s%17s\n", "rango", "Frecuencia");     // Despliega los resultados

    for (rango = 1; rango < TAM_FREQ; rango++)
    {
        printf("%6d%17d\n", rango, freq[rango]);
    }
*/