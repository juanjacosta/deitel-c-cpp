/*
	Programa : D6_ejm01_inicializarUnArreglo.c
	Propósito: Mostrar la manera de declarar e inicializar un arreglo
*/

#include <stdio.h>

int main()
{
	int n[10], i; /* n es un arreglo de 10 enteros */

	printf("=====================================================\n");
	printf("\tEjemplo Arreglos - inicializacion\n");
	printf("=====================================================\n");

	for (size_t i = 0; i < 10; i++) /* Inicializa en 0 los elementos del arreglo n */
	{								// size_t representa un tipo unigned int
		n[i] = 0;
	}

	printf("%s%13s\n", "Elemento", "Valor");

	for (size_t i = 0; i < 10; i++) /* Imprime los elementos del arreglo con su valor incial de 0 */
	{
		printf("%7u%13d\n", i, n[i]); // %u para imprimir unsigned int
	}
	printf("=====================================================\n");
	return 0;
}
