/*
	Programa : D6_ejm03_tamArregloPorDefineyElementosCalculados.c
	Propósito: Especificar el tamanho de un arreglo por una constante
			   simbólica e inicializar sus elementos mediante cálculos.
*/

#include <stdio.h>
#define TAM 10

int main()
{
	int s[TAM];
	int i; // contador

	printf("=====================================================\n");
	printf("\tEjemplo Arreglos - Tamanho con Define\n");
	printf("=====================================================\n");

	for (size_t i = 0; i < TAM; i++) // size_t representa un tipo unigned int
	{
		s[i] = 2 + 2 * i;
	}

	printf("%s%13s\n", "Elemento", "Valor");

	for (size_t i = 0; i < TAM; i++)
	{
		printf("%7u%13d\n", i, s[i]); // %u para imprimir unsigned int
	}
	printf("=====================================================\n");

	return 0;
}