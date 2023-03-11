/*
    Una Estructura es una colección de uno a más tipos de elementos denominados campos,
    cada uno de los cuales puede ser un tipo de dato diferente.
*/

#include <stdio.h>
#include <string.h>

typedef struct{
    char *titulo;
    char artista[16];
    int numCanciones;
    float precio;
    char fechaCompra[16];
}ColeccionCD;

int main()
{
    ColeccionCD CD1;

    CD1.titulo = "Segun nosotros";
    strcpy(CD1.artista, "Nampa Basico");
    CD1.numCanciones = 12;
    CD1.precio = 5.2;
    strcpy(CD1.fechaCompra, "07/12/2019");

    printf("=====================================\n");
    printf("\tCD 1\n");
    printf("=====================================\n");
    printf("Titulo      : %s\n", CD1.titulo);
    printf("Artista     : %s\n", CD1.artista);
    printf("# Canciones : %d\n", CD1.numCanciones);
    printf("Precio      : USD$%.2f\n", CD1.precio);
    printf("Fecha Compra: %s\n", CD1.fechaCompra);
    printf("=====================================\n");
    printf("Tamano struct ColeccionCD : %lu bytes\n", sizeof(ColeccionCD));
    printf("Tamano variable struct CD1: %lu bytes\n", sizeof(CD1));


    return 0;
}