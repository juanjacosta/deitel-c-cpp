/*
	Programa : D6_ejm02_inicializarArregloConListaDeInicializacion.c
	Propósito: Inicializar un arreglo por una lista de inicialización
			   definida
*/

#include <stdio.h>

int main()
{
	// int n[10] = {32, 27, 64, 18, 95, 14, 90, 70, 60, 37};
	int n[10] = {-1}; // en este caso solo el 1er elemento se inicializa en -1,
	/// int n[3] = {-1, -1, -1};	// arreglo de 3 elementos incializados en -1
	// int n[10];					// elementos con valores basura
	int i; // contador

	printf("=====================================================\n");
	printf("\tEjemplo Arreglos - inicializacion con Lista\n");
	printf("=====================================================\n");

	printf("%s%13s\n", "Elemento", "Valor");

	for (size_t i = 0; i < 10; i++) // size_t representa un tipo unigned int
	{
		printf("%7u%13d\n", i, n[i]); // %u para imprimir unsigned int
	}
	printf("=====================================================\n");
	return 0;
}