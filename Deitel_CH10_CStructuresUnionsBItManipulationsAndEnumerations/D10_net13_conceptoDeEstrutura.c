/*
    Programa : D10_net13_conceptoDeEstrutura.c
    Propósito: Definir el concepto de estructura y mostrar su uso.

    Estructura: Es una colección de uno a más tipos de elementos denominados campos,
                cada uno de los cuales puede ser un tipo de dato diferente.
*/
#include <stdio.h>
#include <string.h>

struct ColeccionCD{
    char *titulo;
    // char titulo[16];
    char artista[16];
    int numCanciones;
    float precio;
    char fechaCompra[16];
};

int main()
{
    struct ColeccionCD CD1, CD2;

    // strcpy(CD1.titulo, "Segun nosotros");
    CD1.titulo = "Segun nosotros";
    strcpy(CD1.artista, "Nampa Basico");
    CD1.numCanciones = 12;
    CD1.precio = 5.2;
    strcpy(CD1.fechaCompra, "07/12/2019");

    // strcpy(CD2.titulo, "Rap Conciencia");
    CD2.titulo = "Rap Conciencia";
    strcpy(CD2.artista, "ALI A.K.A MIND");
    CD2.numCanciones = 19;
    CD2.precio = 7.0;
    strcpy(CD2.fechaCompra, "18/09/2012");

    printf("==============================\n");
    printf("\tCD 1\n");
    printf("==============================\n");
    printf("Titulo      : %s\n", CD1.titulo);
    printf("Artista     : %s\n", CD1.artista);
    printf("# Canciones : %d\n", CD1.numCanciones);
    printf("Precio      : USD$%.2f\n", CD1.precio);
    printf("Fecha Compra: %s\n", CD1.fechaCompra);
    printf("==============================\n");
    printf("\tCD 2\n");
    printf("==============================\n");
    printf("Titulo      : %s\n", CD2.titulo);
    printf("Artista     : %s\n", CD2.artista);
    printf("# Canciones : %d\n", CD2.numCanciones);
    printf("Precio      : USD$%.2f\n", CD2.precio);
    printf("Fecha Compra: %s\n", CD2.fechaCompra);
    printf("==============================\n");
    printf("Tamano struct ColeccionCD: %lu bytes\n", sizeof(struct ColeccionCD));
    
    return 0;
}